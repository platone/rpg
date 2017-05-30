using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

	/*private DeadZone deadZone;

	private GameObject target;

	public string targetName;
	public Vector2 deadZoneSize;

	public float verticalOffset;

	private Collider2D collider;

	public float lookAheadDstX;
	public float lookSmoothTimeX;
	public float verticalSmoothTime;

	float currentLooAheadX;
	float targetLooAheadX;
	float lookAheadDirX;
	float smoothLookVelocityX;
	float smoothVelocityY;

	bool lookAheadStopped;

	void Awake(){
	}

	void Start() {
		initTarget ();
		initDeadZone ();
	}

	void LateUpdate() {
		UpdateDeadZone ();
		UpdateCamera ();
	}

	void OnDrawGizmos() {
		Gizmos.color = new Color (1, 0, 0, .5f);
		Gizmos.DrawCube (deadZone.center, deadZoneSize);
	}

	void initTarget() {
		target = GameObject.Find(targetName);
		if (null == target) {
			Debug.LogError ("Target object not found");
		} else {
			collider = target.GetComponent<BoxCollider2D> ();
		}
	}

	void initDeadZone() {
		if (null != target) {
			deadZone = new DeadZone (GetBounds(), deadZoneSize);
		}
	}

	void UpdateDeadZone() {
		deadZone.Update (GetBounds());
	}

	void UpdateCamera() {

		float inputHorizontal = Input.GetAxis("Horizontal");

		Vector2 focusPosition = deadZone.center + Vector2.up * verticalOffset;

		if (deadZone.velocity.x != 0) {
			lookAheadDirX = Mathf.Sign (deadZone.velocity.x);
			if (Mathf.Sign (inputHorizontal) == Mathf.Sign (deadZone.velocity.x) && inputHorizontal != 0) {
				lookAheadStopped = false;
				targetLooAheadX = lookAheadDirX * lookAheadDstX;
			} else {
				if (!lookAheadStopped) {
					lookAheadStopped = true;
					targetLooAheadX = currentLooAheadX + (lookAheadDirX * lookAheadDstX - currentLooAheadX) / 4f;
				}
			}
		}

		currentLooAheadX = Mathf.SmoothDamp (currentLooAheadX, targetLooAheadX, ref smoothLookVelocityX, lookSmoothTimeX);

		focusPosition.y = Mathf.SmoothDamp (transform.position.y, focusPosition.y, ref smoothVelocityY, verticalSmoothTime);
		focusPosition += Vector2.right * currentLooAheadX;

		transform.position = (Vector3) focusPosition + Vector3.forward * -10;
	}

	Bounds GetBounds() {
		return collider.bounds;
	}

	public struct DeadZone {
		
		private float top;
		private float left;
		private float right;
		private float bottom;

		public Vector2 center;
		public Vector2 velocity;

		public DeadZone(Bounds bounds, Vector2 size){
			left = bounds.center.x - size.x / 2 ;
			right = bounds.center.x + size.x / 2 ;
			bottom = bounds.min.y - size.x / 2 ;
			top = bounds.min.y + size.y ;
			center = Vector2.zero;
			velocity = Vector2.zero;
			UpdateCenter();
		}

		public void UpdateCenter() {
			center = new Vector2((left + right) / 2 ,(top + bottom) / 2);
		}

		public void Update(Bounds bounds) {
			float shiftX = 0;
			if (bounds.min.x < left) {
				shiftX = bounds.min.x - left;
			} else if (bounds.max.x > right) {
				shiftX = bounds.max.x - right;
			}
			left += shiftX;
			right += shiftX;

			float shiftY = 0;
			if (bounds.min.y < bottom) {
				shiftY = bounds.min.y - bottom;
			} else if (bounds.max.y > top) {
				shiftY = bounds.max.y - top;
			}
			top += shiftY;
			bottom += shiftY;
			velocity = new Vector2 (shiftX, shiftY);
			UpdateCenter();
		}
	}*/

	public float verticalOffset;
	public float lookAheadDstX;
	public float lookSmoothTimeX;
	public float verticalSmoothTime;
	public Vector2 focusAreaSize;

	FocusArea focusArea;

	float currentLookAheadX;
	float targetLookAheadX;
	float lookAheadDirX;
	float smoothLookVelocityX;
	float smoothVelocityY;

	bool lookAheadStopped;

	private GameObject target;

	private Collider2D collider;

	public string targetName;

	void Start() {
		initTarget ();

		focusArea = new FocusArea (collider.bounds, focusAreaSize);
	}

	void initTarget() {
		target = GameObject.Find(targetName);
		if (null == target) {
			Debug.LogError ("Target object not found");
		} else {
			collider = target.GetComponent<BoxCollider2D> ();
		}
	}

	void LateUpdate() {
		focusArea.Update (collider.bounds);

		Vector2 playerInput = new Vector2 (Input.GetAxisRaw ("Horizontal"), Input.GetAxisRaw ("Vertical"));

		Vector2 focusPosition = focusArea.centre + Vector2.up * verticalOffset;

		if (focusArea.velocity.x != 0) {
			lookAheadDirX = Mathf.Sign (focusArea.velocity.x);
			if (Mathf.Sign(playerInput.x) == Mathf.Sign(focusArea.velocity.x) && playerInput.x != 0) {
				lookAheadStopped = false;
				targetLookAheadX = lookAheadDirX * lookAheadDstX;
			}
			else {
				if (!lookAheadStopped) {
					lookAheadStopped = true;
					targetLookAheadX = currentLookAheadX + (lookAheadDirX * lookAheadDstX - currentLookAheadX)/4f;
				}
			}
		}


		currentLookAheadX = Mathf.SmoothDamp (currentLookAheadX, targetLookAheadX, ref smoothLookVelocityX, lookSmoothTimeX);

		focusPosition.y = Mathf.SmoothDamp (transform.position.y, focusPosition.y, ref smoothVelocityY, verticalSmoothTime);
		focusPosition += Vector2.right * currentLookAheadX;
		transform.position = (Vector3)focusPosition + Vector3.forward * -10;
	}

	void OnDrawGizmos() {
		Gizmos.color = new Color (1, 0, 0, .5f);
		Gizmos.DrawCube (focusArea.centre, focusAreaSize);
	}

	struct FocusArea {
		public Vector2 centre;
		public Vector2 velocity;
		float left,right;
		float top,bottom;


		public FocusArea(Bounds targetBounds, Vector2 size) {
			left = targetBounds.center.x - size.x/2;
			right = targetBounds.center.x + size.x/2;
			bottom = targetBounds.min.y;
			top = targetBounds.min.y + size.y;

			velocity = Vector2.zero;
			centre = new Vector2((left+right)/2,(top +bottom)/2);
		}

		public void Update(Bounds targetBounds) {
			float shiftX = 0;
			if (targetBounds.min.x < left) {
				shiftX = targetBounds.min.x - left;
			} else if (targetBounds.max.x > right) {
				shiftX = targetBounds.max.x - right;
			}
			left += shiftX;
			right += shiftX;

			float shiftY = 0;
			if (targetBounds.min.y < bottom) {
				shiftY = targetBounds.min.y - bottom;
			} else if (targetBounds.max.y > top) {
				shiftY = targetBounds.max.y - top;
			}
			top += shiftY;
			bottom += shiftY;
			centre = new Vector2((left+right)/2,(top +bottom)/2);
			velocity = new Vector2 (shiftX, shiftY);
		}
	}
}
