const int ledCount = 10;
int ledPins[] = {2,3,4,5,6,7,8,9};
#define fsr_pin A0
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  for(int thisLed = 0;thisLed < ledCount;thisLed++){
    pinMode(ledPins[thisLed],OUTPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  int fsr_value = analogRead(fsr_pin);
  int led_value = map(fsr_value,0,1023,0,255);
  for(int thisLed = 0; thisLed < ledCount; thisLed++){
    if(thisLed < led_value){
      digitalWrite(ledPins[thisLed],HIGH);
      }
    else{
      digitalWrite(ledPins[thisLed],LOW);
      }
    }
}
