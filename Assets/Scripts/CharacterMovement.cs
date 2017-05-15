using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterMovement : MonoBehaviour {
	// RigidBody component instance for the player
	private Rigidbody2D PlayerRigidBody2D;

	//Variable to track how much movement is needed from input
	private float MovePlayerHorizontal;
	private float MovePlayerVertical;
	private Vector2 Movement;

	// Animator component for the player
	private Animator PlayerAnim;

	//Sprite renderer for the player
	private SpriteRenderer PlayerSpriteImage;


	// Speed modifier for player movement
	public float Speed = 4.0f;

	//Initialize any component references
	void Awake(){
		PlayerRigidBody2D = (Rigidbody2D)GetComponent(typeof(Rigidbody2D));
		PlayerAnim = (Animator)GetComponent(typeof(Animator));
		PlayerSpriteImage =(SpriteRenderer)GetComponent(typeof(SpriteRenderer));
	}

	static void test(){
	}
		
	// Update is called once per frame
	void Update () {
		MovePlayerHorizontal = Input.GetAxis("Horizontal");
		MovePlayerVertical = Input.GetAxis("Vertical");

		Movement = new Vector2(MovePlayerHorizontal,MovePlayerVertical);

		PlayerRigidBody2D.velocity = Movement * Speed;

		if (MovePlayerVertical == 0 && MovePlayerHorizontal == 0) {
			PlayerAnim.SetBool ("Moving", false);
		} else {
			PlayerAnim.SetBool ("Moving", true);
		}

		if(MovePlayerVertical!=0){
			PlayerAnim.SetBool("xMove",false);
			PlayerSpriteImage.flipX=false;
			if(MovePlayerVertical>0){
				PlayerAnim.SetInteger("yMove",1);
			}else if(MovePlayerVertical<0){
				PlayerAnim.SetInteger("yMove",-1);
		} }else {
			PlayerAnim.SetInteger("yMove",0);
			if(MovePlayerHorizontal>0){
				PlayerAnim.SetBool("xMove",true);
				PlayerSpriteImage.flipX=false;
			}else if(MovePlayerHorizontal<0){
				PlayerAnim.SetBool("xMove",true);
				PlayerSpriteImage.flipX=true;
			}else{
				PlayerAnim.SetBool("xMove",false);
			} }
	}
}