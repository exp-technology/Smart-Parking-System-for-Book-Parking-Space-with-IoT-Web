int a,b,c,d,e,f,g,h,i,j,k,l,m;
void setup() {
  // put your setup code here, to run once:

  pinMode(1, INPUT);
  pinMode(13, INPUT);
  pinMode(15, INPUT);
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pinMode(14, INPUT);
  pinMode(2, INPUT);
  pinMode(0, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  // pinMode(9, INPUT); pin reset
  pinMode(10, INPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
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
l = digitalRead(9);
m = digitalRead(10);

Serial.print("p1 : ");
Serial.print(a);
Serial.print("\t");
Serial.print("p2 : ");
Serial.print(b);
Serial.print("\t");
Serial.print("p3 : ");
Serial.print(c);
Serial.print("\t");
Serial.print("p4 : ");
Serial.print(d);
Serial.print("\t");
Serial.print("p5 : ");

Serial.println(e);
Serial.print("\t");
Serial.print("p6 : ");
Serial.print(f);
Serial.print("\t");
Serial.print("p7 : ");
Serial.print(g);
Serial.print("\t");
Serial.print("p8 : ");
Serial.print(h);
Serial.print("\t");
Serial.print("p9 : ");
Serial.print(i);
Serial.print("\t");
Serial.print("p10 : ");
Serial.print(j);
Serial.println(" ");
Serial.print("p11 : ");
Serial.print(k);
Serial.print("\t");
//Serial.print("p12 : ");
//Serial.print(l);
//Serial.print("\t");
Serial.print("p13 : ");
Serial.print(m);
Serial.println(" ");
delay(50);
}
