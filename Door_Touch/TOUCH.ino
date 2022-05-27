int readSig;
const int buzzer = 9;
int i;
void setup() {
  Serial.begin(9600);

} 
 
void loop() {
  readSig = analogRead(A0);
  Serial.println(readSig);

  if( readSig > 0 ){
    for(i=0; i < 5; i++){
      tone(buzzer, 5000); // Send 1KHz sound signal...
      delay(125);        // ...for 1 sec
      noTone(buzzer);     // Stop sound...
      delay(125);        // ...for 1sec
  
      tone(buzzer, 5000); // Send 1KHz sound signal...
      delay(125);        // ...for 1 sec
      noTone(buzzer);     // Stop sound...
      delay(600);        // ...for 1sec
      }
    }

}
