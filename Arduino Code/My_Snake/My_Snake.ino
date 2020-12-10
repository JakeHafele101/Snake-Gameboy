
//Pin constants
//Joystick Pins
#define VRX A0
#define VRY A1
#define SW 2

//Active buzzer pins
#define BUZZER 3

//LED Matrix Pins
#define DIN 4
#define CS 5
#define CLK 6

//LED Pins
#define RED_LED 7
#define GREEN_LED 8

//Threshhold constants
//Joystick threshhold for how far over stick needs to be for input (0-1023 in x and y degrees)
#define JOYSTICK_THRESH 200

//Direction of joystick
int direction = 0;
//Joystick direction constants
int joyX;
int joyY;
int SWState;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 

  //Pin setup for joystick pins
  pinMode(VRX, INPUT);
  pinMode(VRY, INPUT);
  pinMode(SW, INPUT_PULLUP); 

  //Sets joystick constants as -1 since not scanned yet
  joyX = -1;
  joyY = -1;
  SWState = -1;
}

void loop() {
  // put your main code here, to run repeatedly:

}


void getJoystickInput(){
  joyX = analogRead(VRX);
  joyY = analogRead(VRY);
  SWState = digitalRead(SW);
  
  Serial.print("X: ");
  Serial.print(joyX);
  Serial.print(" | Y: ");
  Serial.print(joyY);
  Serial.print(" | Button: ");
  Serial.println(SWState);
}

void getDirection(){
  
}
