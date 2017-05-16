using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowCamera : MonoBehaviour {
	// Distance between player and camera in horizontal direction
	public float xOffset = 0f;
	// Distance between player and camera in vertical direction
	public float yOffset = 0f;
	// Reference to the player's transform.
	public Transform player;

	void Awake(){
		// check the player reference.
		player = GameObject.Find("Player").transform;
		if (player == null) {
			Debug.LogError ("Player object not found");
		}
	}

	void LateUpdate() {
		this.transform.position = new Vector3 (player.transform.position.x + xOffset, player.transform.position.y + yOffset, -10);
	}
}
