
int pinoLDR = 10;
int pinoLED = 8;
int estadoLDR;

void setup()
{
  Serial.begin(9600);
  pinMode(pinoLDR, INPUT);
  pinMode(pinoLED, OUTPUT);
}

void loop()
{
  estadoLDR = digitalRead(pinoLDR);
  Serial.println(estadoLDR);
  if (!estadoLDR) {
   digitalWrite(pinoLED, HIGH); 
  }
  delay(100);
  digitalWrite(pinoLED, LOW);
}