// assign pins and ints / bool
const int sensorPin = A0 ; 
const int AlarmPin = 10 ; 

int lightAmount = 0 ;

bool AlarmActive = false ;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600) ; 

  pinMode(AlarmPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
lightAmount = analogRead(sensorPin) ; 

Serial.print("Light Intensity:   ") ;
Serial.println(lightAmount) ;

delay(100) ;

// alarm state changes as person enters
if (lightAmount < 100) {

AlarmActive = true ;

} 
// if alarm state changes, alarm sounds and lights 
if (AlarmActive == true) ; 

for (int i = 0; i < 5; i++)
digitalWrite(AlarmPin, HIGH);
delay(1000);
digitalWrite(AlarmPin, LOW);
delay(1000);
bool (AlarmActive = false) ;



}
