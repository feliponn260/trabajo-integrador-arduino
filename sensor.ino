const int pinPIR = 2;
const int pinRele = 3;

void setup() {
  pinMode(pinPIR, INPUT);
  pinMode(pinRele, OUTPUT);

  digitalWrite(pinRele, HIGH); 
  
  Serial.begin(9600);
  Serial.println("--- buscando movimiento ---");
}

void loop() {

  int presencia = digitalRead(pinPIR);

  if (presencia == HIGH) {
    Serial.println("movimiento detectado...");
    digitalWrite(pinRele, LOW);
  } else {
    digitalWrite(pinRele, HIGH);
  }
  
  delay(200);
}