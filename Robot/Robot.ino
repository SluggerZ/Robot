int speedirection1=5;
int speedirection2=6;
int direction1=4;
int direction2=7;
int f1=HIGH;
int f2=HIGH;
int b1=!f1;
int b2=!f2;
int go;
int back; 

int pin1 = 10;
int pin2 = 11;



// the setup routine runs once when you press reset:
void setup() {
    // put your setup code here, to run once:
pinMode (direction1, OUTPUT);
pinMode (speedirection1, OUTPUT);
pinMode (speedirection2, OUTPUT);
pinMode (direction2, OUTPUT);
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pin1, INPUT);
  pinMode(pin2, INPUT);
  


   // turn the LED on (HIGH is the voltage level) digitalWrite(led, HIGH);  // turn the LED on (HIGH is the voltage level)
}


// the loop routine runs over and over again forever:
void loop() {
  // put your main code here, to run repeatedly: 
  
  // Forwards

  analogWrite (speedirection1, 255);
  analogWrite(speedirection2, 255);
  
  for(int i=0; i<10; i++){
    digitalWrite (direction1, f1);
   digitalWrite(direction2, f2);
   Stop();
   delay(1000);
  }

  for(int i=0; i<10; i++){
    digitalWrite (direction1, b1);
   digitalWrite(direction2, b2);
   Stop();
   delay(1000);
}
 for(int i=0; i<10; i++){
    digitalWrite (direction1, f1);
   digitalWrite(direction2, b2);
   Stop();
   delay(1000);
}
 for(int i=0; i<10; i++){
    digitalWrite (direction1, b1);
   digitalWrite(direction2, f2);
   Stop();
   delay(1000);
}
}

// sensors
void Instr() {
  Serial.println("in ins");
go = digitalRead(pin1);
back = digitalRead(pin2);
  if(go == LOW) {
     Serial.println("low front");
    digitalWrite(direction1, b1);
    digitalWrite(direction2, b2);
    delay(1000);
    digitalWrite(direction2, f2);
  delay(500);
  }                
  
  if(back == LOW) {
         Serial.println("low back");
    digitalWrite(direction1, f1);
    digitalWrite(direction2, f2);
    delay(1000);
    digitalWrite(direction2, b2);
     delay(500);
  }
}
