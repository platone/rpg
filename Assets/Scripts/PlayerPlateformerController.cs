using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerPlateformerController : PhysicsObject {

	public float maxSpeed = 7;
	public float jumpTakeOffSpeed = 7;

	private SpriteRenderer spriteRenderer;

	private Animator animator;

	//Variable to track how much movement is needed from input
	private float MovePlayerHorizontal;
	private float MovePlayerVertical;
	private Vector2 Movement;

	private Rigidbody2D PlayerRigidBody2D;

	void Awake () {
		spriteRenderer = GetComponent<SpriteRenderer> ();
		animator = GetComponent<Animator> ();
		PlayerRigidBody2D = (Rigidbody2D)GetComponent(typeof(Rigidbody2D));
	}

	protected override void ComputeVelocity() {
		Vector2 move = Vector2.zero;

		move.x = Input.GetAxis("Horizontal");

		if (Input.GetButtonDown ("Jump") && grounded) {
			velocity.y = jumpTakeOffSpeed;
		} else if (Input.GetButtonUp("Jump")){
			if(velocity.y > 0) {
				velocity.y = velocity.y * 0.5f;
			}
		}

		bool flipSprite = (spriteRenderer.flipX ? (move.x > 0.01f) : (move.x < 0.01f));
		if (flipSprite) {
			spriteRenderer.flipX = !spriteRenderer.flipX;
		}

		animator.SetBool ("grounded", grounded);
		animator.SetFloat ("velocityX", Mathf.Abs (velocity.x) / maxSpeed);

		targetVelocity = move * maxSpeed;

		MovePlayerHorizontal = Input.GetAxis("Horizontal");
		MovePlayerVertical = Input.GetAxis("Vertical");

		if (MovePlayerVertical == 0 && MovePlayerHorizontal == 0) {
			animator.SetBool ("Moving", false);
		} else {
			animator.SetBool ("Moving", true);
		}

		if(MovePlayerVertical!=0){
			animator.SetBool("xMove",false);
			spriteRenderer.flipX=false;
			if(MovePlayerVertical>0){
				animator.SetInteger("yMove",1);
			}else if(MovePlayerVertical<0){
				animator.SetInteger("yMove",-1);
		} }else {
			animator.SetInteger("yMove",0);
			if(MovePlayerHorizontal>0){
				animator.SetBool("xMove",true);
				spriteRenderer.flipX=false;
			}else if(MovePlayerHorizontal<0){
				animator.SetBool("xMove",true);
				spriteRenderer.flipX=true;
			}else{
				animator.SetBool("xMove",false);
			} 
		}
	}
}
