/*
 * Programm um über den Wert von Pin 13 die interne LED am
 * Arduino Uno zum Blinken zu bringen
 * 
 * ursprünglich aus den Beispielen der IDE
 */


void setup() {               
  pinMode(13, OUTPUT);   //Pin 13 soll Ausgang sein 
}


void loop() {
  digitalWrite(13, HIGH);  //LED an
  delay(2000);             // warte 2000ms
  digitalWrite(13, LOW);   //LED aus
  delay(200);              // warte 200ms
}
