﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParallaxController : MonoBehaviour {

	private Transform camera;

	public float smoothing = 1f;

	public Transform[] backgrounds;

	private float[] parallaxScales;

	private Vector3 previousCameraPosition;

	void Awake() {
		camera = Camera.main.transform;
	}

	void Start () {
		previousCameraPosition = camera.position;
		parallaxScales = new float[backgrounds.Length];

		for (int i = 0; i < backgrounds.Length; i++) {
			parallaxScales [i] = backgrounds [i].position.z * -1;
		}
	}
	
	void Update () {
		for (int i = 0; i < backgrounds.Length; i++) {
			float parallax = (previousCameraPosition.x - camera.position.x) * parallaxScales [i];
			float backgroundTargetPositionX = backgrounds [i].position.x + parallax;
			Vector3 backgroundTargetPosition = new Vector3 (backgroundTargetPositionX, backgrounds[i].position.y, backgrounds[i].position.z);
			backgrounds [i].position = Vector3.Lerp (backgrounds [i].position, backgroundTargetPosition, smoothing * Time.deltaTime);
		}
		previousCameraPosition = camera.position;
	}
}
