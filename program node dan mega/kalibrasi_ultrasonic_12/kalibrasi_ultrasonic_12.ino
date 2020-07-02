// Ultrasonic - Library for HR-SC04 Ultrasonic Ranging Module.
// Rev.4 (06/2012)
// J.Rodrigo ( www.jrodrigo.net )
// more info at www.ardublog.com

#include <Ultrasonic.h>

Ultrasonic u1(22,24);   // (Trig PIN,Echo PIN)
Ultrasonic u2(26,28);  // (Trig PIN,Echo PIN)
Ultrasonic u3(30,32);   // (Trig PIN,Echo PIN)
Ultrasonic u4(34,36);  // (Trig PIN,Echo PIN)
Ultrasonic u5(38,40);   // (Trig PIN,Echo PIN)
Ultrasonic u6(42,44);  // (Trig PIN,Echo PIN)
Ultrasonic u7(46,48);   // (Trig PIN,Echo PIN)
Ultrasonic u88(50,52);  // (Trig PIN,Echo PIN)
Ultrasonic u9(31,33);   // (Trig PIN,Echo PIN)
Ultrasonic u10(35,37);  // (Trig PIN,Echo PIN)
Ultrasonic u11(39,41);   // (Trig PIN,Echo PIN)
Ultrasonic u12(43,45);  // (Trig PIN,Echo PIN)

int U1,U2,U3,U4,U5,U6,U7,U8,U9,U10,U11,U12;
unsigned long Ut1,Ut2,Ut3,Ut4,Ut5,Ut6,Ut7,Ut8,Ut9,Ut10;
void setup() {
  Serial.begin(115200); 
//  Serial3.begin(9600);
//ditambah pin untuk ke nodemcu
pinMode(47,OUTPUT);
pinMode(49,OUTPUT);
pinMode(51,OUTPUT);
pinMode(53,OUTPUT);
for(int x = 62; x <= 69; x++){
  pinMode(x,OUTPUT);
  digitalWrite(x,LOW);
  
}
digitalWrite(47,LOW);
  digitalWrite(49,LOW);
  digitalWrite(51,LOW);
  digitalWrite(53,LOW);
  
}

void loop()
{
//  Serial.print("u1: ");
  U1 = u1.Ranging(CM);
  U2 = u2.Ranging(CM);
  U4 = u3.Ranging(CM);
  U5 = u5.Ranging(CM);
  U6 = u6.Ranging(CM);
  U7 = u7.Ranging(CM);
  U8 = u88.Ranging(CM);
  U9 = u9.Ranging(CM);
  U10 = u10.Ranging(CM);
  U11 = u11.Ranging(CM);
  U12 = u12.Ranging(CM);
//  if (U1< 10){
//    Ut1++;
//  }
//  else{
//    Ut1 = 0;
//  }
//
//  if (U2< 10){
//    Ut2++;
//  }
//  else{
//    Ut2 = 0;
//  }
//
//  if (U3< 10){
//    Ut3++;
//  }
//  else{
//    Ut3 = 0;
//  }
//
//  if (U4< 10){
//    Ut4++;
//  }
//  else{
//    Ut5 = 0;
//  }
//
//  if (U6< 10){
//    Ut6++;
//  }
//  else{
//    Ut6 = 0;
//  }
//
//  if (U7< 10){
//    Ut7++;
//  }
//  else{
//    Ut7 = 0;
//  }
//
//  if (U8< 10){
//    Ut8++;
//  }
//  else{
//    Ut8 = 0;
//  }
//
//  if (U9< 10){
//    Ut9++;
//  }
//  else{
//    Ut9 = 0;
//  }
//
//  if (U10< 10){
//    Ut10++;
//  }
//  else{
//    Ut10 = 0;
//  }
//
//  if(Ut1 == 300000){
//    float k1 = 1;
//    Serial3.print(k1);
//    Serial3.println("\n");
//  }
//
//  else{
//    float k1 = 0;
//    Serial3.print(k1);
//    Serial3.println("\n");
//    Ut1 = 0;
//  }
//
//  if(Ut2 == 300000){
//    float k2 = 1;
//    Serial3.print(k2);
//    Serial3.println("\n");
//  }
//
//  else{ 
//    float k2 = 0;
//    Serial3.print(k2);
//    Serial3.println("\n");
//    Ut2 = 0;
//  }
//
//    delay(3000);

  Serial.print("u1: ");
  Serial.print(U1); // CM or INC
  Serial.print(" cm     " );
  
//  delay(50);

  
  Serial.print("u2: ");
  Serial.print(u2.Ranging(CM)); // CM or INC
  Serial.println(" cm" );
//  delay(50);

  Serial.print("u3: ");
  Serial.print(u3.Ranging(CM)); // CM or INC
  Serial.print(" cm     " );
//  delay(50);

  
  Serial.print("u4: ");
  Serial.print(u4.Ranging(CM)); // CM or INC
  Serial.println(" cm" );
//  delay(50);
  

  Serial.print("u5: ");
  Serial.print(u5.Ranging(CM)); // CM or INC
  Serial.print(" cm     " );
//  delay(50);

  
  Serial.print("u6: ");
  Serial.print(u6.Ranging(CM)); // CM or INC
  Serial.println(" cm" );
//  delay(50);

  Serial.print("u7: ");
  Serial.print(u7.Ranging(CM)); // CM or INC
  Serial.print(" cm     " );
//  delay(50);

  
  Serial.print("u8: ");
  Serial.print(u88.Ranging(CM)); // CM or INC
  Serial.println(" cm" );
//  delay(50);

  Serial.print("u9: ");
  Serial.print(u9.Ranging(CM)); // CM or INC
  Serial.print(" cm     " );
//  delay(50);

  
  Serial.print("u10: ");
  Serial.print(u10.Ranging(CM)); // CM or INC
  Serial.println(" cm" );
  

  if(u3.Ranging(CM) < 10 ){
    digitalWrite(51,HIGH);
  }
  else{
    digitalWrite(51,LOW);
  }

  Serial.print("u11: ");
  Serial.print(u11.Ranging(CM)); // CM or INC
  Serial.print(" cm     " );
  

  
  Serial.print("u12: ");
  Serial.print(u12.Ranging(CM)); // CM or INC
  Serial.println(" cm" );
  
  delay(1000);


  // 1 detik adalah unsigned long 300 ribu
  //untuk program ini digunakan 1 juta perhitungan

  


  
  
}
