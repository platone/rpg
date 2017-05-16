using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NavigationPrompt : MonoBehaviour {
	void OnCollisionEnter2D(Collision2D col){
		Debug.Log("OnCollisionEnter2D(" + tag + ") ");
		if(NavigationManager.CanNavigate(this.tag)){
			NavigationManager.NavigateTo(this.tag);
		}
	}
}
