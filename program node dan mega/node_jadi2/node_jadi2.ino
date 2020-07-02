#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

#define firebaseURl "smartmonitoringparking.firebaseio.com"
#define authCode "w0VyzPIlB7v9MyKtkhm2Ax3TRuDVXv9wnvCQx2Yz"

const char* ssid = "tttttt";
const char* password = "amarfadillah";
//String chipId = "123";

int a,b,c,d,e,f,g,h,i,j,k,m,tersedia;
bool sekali_set1 =  false, sekali_set2 =  false;
float masuk_keluar;

void setup() {
  // put your setup code here, to run once:

  pinMode(1, INPUT);
  pinMode(3, INPUT);
  pinMode(13, INPUT);
  pinMode(15, INPUT);
  pinMode(16, INPUT); //Masuk
  pinMode(12, INPUT);
  pinMode(14, INPUT);
  pinMode(2, INPUT);
  pinMode(0, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  // pinMode(9, INPUT); pin reset
  pinMode(10, INPUT); //Keluar
 
  Pengaturan_wifi();
  Pengaturan_data();

//   Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
pembacaan_pin();
ambil_data();


}

void Pengaturan_wifi(){
//  Serial.println();
//  Serial.print("Wifi connecting");
//  Serial.print(ssid);

  WiFi.begin(ssid,password);

//  Serial.println();
//  Serial.print("Connecting");

  while (WiFi.status() != WL_CONNECTED){
    delay(500);
//    Serial.print(".");
  }
  delay(2000);
//  Serial.println(WiFi.localIP());
//  Serial.println("wif.iconnect");
}


void Pengaturan_data(){
  Firebase.begin(firebaseURl,authCode);
  delay(1000);
  float checking = Firebase.getFloat("check");
  while(checking != 1){
    Firebase.begin(firebaseURl,authCode);
    float checking = Firebase.getFloat("check");
    delay(1000);
  }
}

void ambil_data(){
//  String path = chipId + "/states";
  // yang jalan tanpa pakai FirebaseObject
//  float led1 = Firebase.getFloat("led1");

   
  //FirebaseObject cek = Firebase.get(path);
  //bool object = cek.getBool("001");
  //bool b  = object.getBool("001");
  //String a = object.getString("001");

//  
//  String led8 = Firebase.getString("Text");
//  float led9 = Firebase.getFloat("cek");
  //mendeteksi input dan menyeting firebase
  if(a == 1){
    Firebase.set("A01",1);
  }
  else{
    Firebase.set("A01", 0);
  }

  if(b == 1){
    Firebase.set("A02",1);
  }
  else{
    Firebase.set("A02", 0);
  }

  if(c == 1){
    Firebase.set("A03",1);
  }
  else{
    Firebase.set("A03", 0);
  }

  if(d == 1){
    Firebase.set("A04",1);
  }
  else{
    Firebase.set("A04", 0);
  }

  if(e == 1){
    Firebase.set("A05",1);
  }
  else{
    Firebase.set("A05", 0);
  }

  if(f == 1){
    Firebase.set("B01",1);
  }
  else{
    Firebase.set("B01", 0);
  }

  if(g == 1){
    Firebase.set("B02",1);
  }
  else{
    Firebase.set("B02", 0);
  }

  if(h == 1){
    Firebase.set("B03",1);
  }
  else{
    Firebase.set("B03", 0);
  }

  if(i == 1){
    Firebase.set("B04",1);
  }
  else{
    Firebase.set("B04", 0);
  }

  if(j == 1){
    Firebase.set("B05",1);
  }
  else{
    Firebase.set("B05", 0);
  }
///******************** untuk perhitungan keluar dan masuk ******///
  if(k == 1){

    if (sekali_set1 == true){
      masuk_keluar = Firebase.getFloat("kondisi_di_dalam");
      masuk_keluar++;
      Firebase.set("kondisi_di_dalam",masuk_keluar);
      sekali_set1 = false;
    }
  }
  else{
    
    sekali_set1 = true;
    
  }

  if(m == 1){
    if (sekali_set2 == true){
      masuk_keluar = Firebase.getFloat("kondisi_di_dalam");
      masuk_keluar--;
      Firebase.set("kondisi_di_dalam",masuk_keluar);
      sekali_set2 = false;
    }
  }
  else{
     sekali_set2 = true;
  }

  tersedia = 10 - (a + b + c + d + e + f + g + h + i + j) ;
  Firebase.set("tersedia", tersedia);  

  //jumlah parkir terisi

  
  
//  if(led9 == 1){
//  Firebase.set("parkir1",1);
//  }
//  else{
//  Firebase.set("parkir1",0);
//  }
  
}

void pembacaan_pin(){
  a = digitalRead(1);
  b = digitalRead(3);
  c = digitalRead(15);
  d = digitalRead(13);
  e = digitalRead(12);
  f = digitalRead(14);
  g = digitalRead(2);
  h = digitalRead(0);
  i = digitalRead(4);
  j = digitalRead(5);
  k = digitalRead(16);
//  l = digitalRead(9);
  m = digitalRead(10);


  ////////////////
//    Serial.print("p1 : ");
//    Serial.print(a);
//    Serial.print("\t");
//    Serial.print("p2 : ");
//    Serial.print(b);
//    Serial.print("\t");
//    Serial.print("p3 : ");
//    Serial.print(c);
//    Serial.print("\t");
//    Serial.print("p4 : ");
//    Serial.print(d);
//    Serial.print("\t");
//    Serial.print("p5 : ");
//    
//    Serial.println(e);
//    Serial.print("\t");
//    Serial.print("p6 : ");
//    Serial.print(f);
//    Serial.print("\t");
//    Serial.print("p7 : ");
//    Serial.print(g);
//    Serial.print("\t");
//    Serial.print("p8 : ");
//    Serial.print(h);
//    Serial.print("\t");
//    Serial.print("p9 : ");
//    Serial.print(i);
//    Serial.print("\t");
//    Serial.print("p10 : ");
//    Serial.print(j);
//    Serial.println(" ");
//    Serial.print("p11 : ");
//    Serial.print(k);
//    Serial.print("\t");
//    //Serial.print("p12 : ");
//    //Serial.print(l);
//    //Serial.print("\t");
//    Serial.print("p13 : ");
//    Serial.print(m);
//    Serial.println(" ");
//    //delay(50);
}


