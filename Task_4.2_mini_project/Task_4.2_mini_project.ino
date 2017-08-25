/*  
  # 0  ~300     dry soil

  # 300~700     humid soil

 */

#define limit1 300

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // open serial port, set the baud rate as 9600 bps
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int val;
  val = analogRead(0); 

    if(analogRead(0)<limit1)    //If soil moisture is under 300 then turn on led 
      {
        digitalWrite(LED_BUILTIN, HIGH);
      }
    else if(analogRead(0)>limit1)     //If soil moisture is higher than 300 then turn of led
      {
        digitalWrite(LED_BUILTIN, LOW);
      }
}
