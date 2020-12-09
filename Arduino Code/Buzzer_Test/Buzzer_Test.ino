#define BUZZER 3

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(BUZZER, 500, 500);
  delay(1000);
  tone(BUZZER, 1000, 500);
  delay(1000);
}
