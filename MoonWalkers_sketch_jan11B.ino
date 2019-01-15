
int moisture_sensor_pin = A0;
int moisture_value ;

int water_pump_control_pin = 13;

void setup() {
  // put your setup code here, to run once:

 // initialize digital pin water_pump_control_pin as an output.
  pinMode(water_pump_control_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

   moisture_value= analogRead(moisture_sensor_pin);

  if(moisture_value>500)  // if the soil is too dry 
  {
     digitalWrite(water_pump_control_pin, HIGH);    // turn on the water pump by making the voltage High
     delay(1000);                       // wait for a second
  }else
  {
    digitalWrite(water_pump_control_pin, LOW);   // turn off the water pump (LOW is the voltage level)
    delay(1000);                       // wait for a second    
  }
   
}
