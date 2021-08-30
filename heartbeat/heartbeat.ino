int time = 0;

const int LED_PORT = 13;


void setup(){

  pinMode(LED_PORT, OUTPUT);
  Serial.begin(9600);
  
  
}

void loop(){
  digitalWrite(LED_PORT, LOW);
  time++;
  Serial.print(time);
  Serial.println(" seconds have passed");
  
  delay(700);

  digitalWrite(LED_PORT, HIGH);
  delay(300);

  Serial.print("Program time: ");
  Serial.println(millis());
  
  
//  //delay(800)
//  //
//  time++;
//  Serial.print(time);
//  Serial.println(" seconds have passed");
//  digitalWrite(LED_PORT, LOW);
//  delay(1000);
  
  
  
}
