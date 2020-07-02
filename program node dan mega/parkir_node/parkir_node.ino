#include <SoftwareSerial.h>
#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
SoftwareSerial node(D0, D1); // RX ,TX
int a,b,c,d,e,f,g,h;
float val;
#define firebaseURl "cobaandroid1-598b3.firebaseio.com"
#define authCode "IZUKnRxq6CWVyWodBT5ruiL2x9JaCv8mX7VU3meC"



const char* ssid = "tttttt";
const char* password = "amarfadillah";

void setup(){
  
  Serial.begin(115200);
  node.begin(9600);
 
  Pengaturan_wifi();
  Pengaturan_data();
  

}

void loop(){
  
  while(node.available()>0){
    
  val = node.parseFloat(); // mengkonversi komunikasi menjadi tipe data Float
  a = val;
  
  if(node.read()== '\n'){
  val = node.parseFloat();
  b = val;
  }
   Firebase.set("tara",b);
  delay(30);
  
  Serial.println(a);
  Serial.println(b);
  
//  Serial.println(c);
//  Serial.println(d);
//  Serial.println(e);
//  Serial.println(f);
//  Serial.println(g);
//  Serial.println(h); 
  
  
/////////////////////////////////////////

  ///////////////////////////////////////////
}

}

void Pengaturan_wifi(){
  Serial.println();
  Serial.print("Wifi connecting");
  Serial.print(ssid);

  WiFi.begin(ssid,password);

  Serial.println();
  Serial.print("Connecting");

  while (WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  delay(2000);
  Serial.println(WiFi.localIP());
  Serial.println("wif.iconnect");
}


void Pengaturan_data(){
  Firebase.begin(firebaseURl,authCode);
}
