int tiltsensor = 2;
const int PIEZO_PIN = A0;
//Used A0 instead of 1-9 because this sensor writes in Analog
  void setup()
  {
    pinMode(tiltsensor, INPUT);
    Serial.begin(9600);
  }

  void loop()
  {
    Serial.println(digitalRead(tiltsensor));
    delay(100);

    //VIBRATION
    int piezoADC = analogRead(PIEZO_PIN);
    float piezoV = piezoADC / 1023.0 * 5.0;
    Serial.println(piezoV);
  }