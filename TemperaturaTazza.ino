void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(SPEAKER_PIN, OUTPUT);
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
}

void loop() {
  float temperature = analogRead(A0);
  temperature = (temperature*resolution);
  temperature = temperature*100;
  Serial.println(temperature);
  
  if (temperature > 45.0) {
    RGB_color(255, 0, 0); //led rosso
  }
  else if (temperature > 30.0) {
    RGB_color(255, 255, 0); //led giallo
  }
  else {
    RGB_color(0, 255, 255); // led azzurro
  }

  if (temperature > 39.0 && temperature <41.0) {
     tone(SPEAKER_PIN, frequency);
     delay(2000);
     noTone(SPEAKER_PIN);
  }
  delay(30000);
}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value) {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
