const int LED= 13;//Digital pin that the LED is connected
int initial=0;

void setup(){
Serial.begin(9600);
pinMode(LED,OUTPUT);
initial= (analogRead(A0)/100); 
}

void loop() {
int sensorReading= (analogRead(A0)/100); //reads the sensor value
delay(100);

if (sensorReading<(initial-3)){
  Serial.write("F");
 }else{
  pinMode(LED,HIGH);
  Serial.write("E");
}

}

