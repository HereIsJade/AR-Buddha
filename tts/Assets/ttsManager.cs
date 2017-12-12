using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.UI;
public class ttsManager : MonoBehaviour {

	private string stringToEdit = "Type your wish here";
	public InputField wishField;

	// Use this for initialization
	void Start () {
		wishField.text = stringToEdit;
	}

	// Update is called once per frame
	void Update () {
		wishField.text = stringToEdit;
	}

	public void Speak() {
		EasyTTSUtil.SpeechAdd (stringToEdit);
	}

	public void RandomizeColor() {

	}

}
