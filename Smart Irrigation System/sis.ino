// C++ code
//
int Temperaturevalue = 0;

void setup()
{
  pinMode(A1, INPUT);
  Serial.begin(9600);

  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  Temperaturevalue = -40 + 0.488155 * (analogRead(A1) - 20);
  Serial.println(Temperaturevalue);
  if (Temperaturevalue < 30) {
    digitalWrite(10, HIGH);
    digitalWrite(13, LOW);
    digitalWrite(5, HIGH);
  }
  if (Temperaturevalue > 45) {
    digitalWrite(10, LOW);
    digitalWrite(13, HIGH);
    digitalWrite(5, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}