using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Xml;
using System.Xml.Serialization;
using System.Text; 
public class testDebug : MonoBehaviour {
	
	// Use this for initialization
	IEnumerator Start () {
		WWW www = new WWW("http://huntermusicthailand.com/setting.xml");
			yield return www;
			Debug.Log(www.text + www.error);
		XmlSerializer serializer = new XmlSerializer(typeof(Setting));
				//memberinfos
				StringReader reader = new StringReader(www.text);
		var ttt = serializer.Deserialize(reader) as Setting;

		//test ttt = new test ();
		//ttt.isOn = false;
		//Debug.Log( SerializeObject (ttt));
		Debug.Log(ttt.isOnEditID);
	}
	// Here we serialize our UserData object of myData 
	string SerializeObject(object pObject)
	{ 
		string XmlizedString = null; 
		MemoryStream memoryStream = new MemoryStream(); 
		XmlSerializer xs = new XmlSerializer(typeof(Setting));
		XmlTextWriter xmlTextWriter = new XmlTextWriter(memoryStream, Encoding.UTF8); 
		xs.Serialize(xmlTextWriter, pObject);
		memoryStream = (MemoryStream)xmlTextWriter.BaseStream;
		XmlizedString = UTF8ByteArrayToString(memoryStream.ToArray()); 
		return XmlizedString; 
	} 

	/* The following metods came from the referenced URL */ 
	string UTF8ByteArrayToString(byte[] characters) 
	{      
		UTF8Encoding encoding = new UTF8Encoding(); 
		string constructedString = encoding.GetString(characters); 
		return (constructedString); 
	} 

	byte[] StringToUTF8ByteArray(string pXmlString) 
	{ 
		UTF8Encoding encoding = new UTF8Encoding(); 
		byte[] byteArray = encoding.GetBytes(pXmlString); 
		return byteArray; 
	} 
}
