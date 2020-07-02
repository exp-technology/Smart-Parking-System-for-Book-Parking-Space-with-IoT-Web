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


unsigned long Ut1 = 0,Ut2 = 0,Ut3 = 0,Ut4 = 0,Ut5 = 0,Ut6 =0,Ut7 = 0,Ut8 = 0,Ut9 = 0,Ut10= 0,Ut11 = 0,Ut12= 0;
void setup() {
//  Serial.begin(115200); 
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
  
  if (u1.Ranging(CM)< 10){
    Ut1++;
  }
  else{
    Ut1 = 0;
  }

  if (u2.Ranging(CM)< 10){
    Ut2++;
  }
  else{
    Ut2 = 0;
  }

  if (u3.Ranging(CM) < 10){
    Ut3++;
    
  }
  else{
    Ut3 = 0;
    
  }

  if (u4.Ranging(CM)< 10){
    Ut4++;
//    digitalWrite(53,HIGH);
  }
  else{
    Ut4 = 0;
//    digitalWrite(53,LOW);
  }

  if (u5.Ranging(CM)< 10){
    Ut5++;
  }
  else{
    Ut5 = 0;
  }

  if (u6.Ranging(CM)< 10){
    Ut6++;
  }
  else{
    Ut6 = 0;
  }

  if (u7.Ranging(CM)< 10){
    Ut7++;
  }
  else{
    Ut7 = 0;
  }

  if (u88.Ranging(CM)< 10){
    Ut8++;
  }
  else{
    Ut8 = 0;
  }

  if (u9.Ranging(CM)< 10){
    Ut9++;
  }
  else{
    Ut9 = 0;
  }

  if (u10.Ranging(CM)< 10){
    Ut10++;
  }
  else{
    Ut10 = 0;
  }

  if (u11.Ranging(CM)< 10){
    Ut11++;
  }
  else{
    Ut11 = 0;
  }

  if (u12.Ranging(CM)< 10){
    Ut12++;
  }
  else{
    Ut12 = 0;
  }
  
  if(Ut1 == 100){
//    float k1 = 1;
//    Serial3.print(k1);
//    Serial3.println("\n");
  digitalWrite(47, HIGH);
  Ut1 = 99;
  }

  else{
//    float k1 = 0;
//    Serial3.print(k1);
//    Serial3.println("\n");
    digitalWrite(47,LOW);
//    Ut1 = 0;
  }

  if(Ut2 == 100){
//    float k2 = 1;
//    Serial3.print(k2);
//    Serial3.println("\n");
      digitalWrite(49, HIGH);
      Ut2 = 99;
  }

  else{ 
//    float k2 = 0;
//    Serial3.print(k2);
//    Serial3.println("\n");
//    Ut2 = 0;
    digitalWrite(49,LOW);
  }

  if(Ut3 == 100){
    digitalWrite(51,HIGH);
    Ut3 = 99;
  }

  else{ 
    digitalWrite(51,LOW);
  }


/// berhasilllllllll
  if(Ut4 == 100){
    digitalWrite(53,HIGH);
    Ut4 = 99;
  }

  else{ 
    digitalWrite(53,LOW);

//    Ut4 = 0;
  }

  
  if(Ut5 == 100){
    digitalWrite(62,HIGH);
    Ut5 = 99;
  }

  else{ 
    digitalWrite(62,LOW);
  }

  if(Ut6 == 100){
    digitalWrite(63,HIGH);
    Ut6 = 99;
  }

  else{ 
    digitalWrite(63,LOW);
  }

    if(Ut7 == 100){
    digitalWrite(64,HIGH);
    Ut7 = 99;
  }

  else{ 
    digitalWrite(64,LOW);
  }

    if(Ut8 == 100){
    digitalWrite(65,HIGH);
    Ut8 = 99;
  }

  else{ 
    digitalWrite(65,LOW);
  }

    if(Ut9 == 100){
    digitalWrite(66,HIGH);
    Ut9 = 99;
  }

  else{ 
    digitalWrite(66,LOW);
  }

    if(Ut10 == 100){
    digitalWrite(67,HIGH);
    Ut10 = 99;
  }

  else{ 
    digitalWrite(67,LOW);
  }

  if(Ut11 == 100){
    digitalWrite(68,HIGH);
    Ut11 = 99;
  }

  else{ 
    digitalWrite(68,LOW);
  }

    if(Ut12 == 100){
    digitalWrite(69,HIGH);
    Ut12 = 99;
  }

  else{ 
    digitalWrite(69,LOW);
  }


  
  delay(30);

//    delay(3000);
//
//  Serial.print("u1: ");
//  Serial.print(U1); // CM or INC
//  Serial.print(" cm     " );
//  
////  delay(50);
//
//  
//  Serial.print("u2: ");
//  Serial.print(u2.Ranging(CM)); // CM or INC
//  Serial.println(" cm" );
////  delay(50);
//
//  Serial.print("u3: ");
//  Serial.print(u3.Ranging(CM)); // CM or INC
//  Serial.print(" cm     " );
////  delay(50);
//
//  
//  Serial.print("u4: ");
//  Serial.print(u4.Ranging(CM)); // CM or INC
//  Serial.println(" cm" );
////  delay(50);
//  
//
//  Serial.print("u5: ");
//  Serial.print(u5.Ranging(CM)); // CM or INC
//  Serial.print(" cm     " );
////  delay(50);
//
//  
//  Serial.print("u6: ");
//  Serial.print(u6.Ranging(CM)); // CM or INC
//  Serial.println(" cm" );
////  delay(50);
//
//  Serial.print("u7: ");
//  Serial.print(u7.Ranging(CM)); // CM or INC
//  Serial.print(" cm     " );
////  delay(50);
//
//  
//  Serial.print("u8: ");
//  Serial.print(u88.Ranging(CM)); // CM or INC
//  Serial.println(" cm" );
////  delay(50);
//
//  Serial.print("u9: ");
//  Serial.print(u9.Ranging(CM)); // CM or INC
//  Serial.print(" cm     " );
////  delay(50);
//
//  
//  Serial.print("u10: ");
//  Serial.print(u10.Ranging(CM)); // CM or INC
//  Serial.println(" cm" );
//  delay(1000);

//  Serial.print("u11: ");
//  Serial.print(u11.Ranging(CM)); // CM or INC
//  Serial.print(" cm     " );
//  delay(50);
//
//  
//  Serial.print("u12: ");
//  Serial.print(u12.Ranging(CM)); // CM or INC
//  Serial.println(" cm" );
//  delay(50);





  


  
  
}
