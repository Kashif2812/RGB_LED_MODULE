#define red_led   5   // define arduino pin no 5 as red led
#define green_led 6   // define arduino pin no 6 as green led
#define blue_led  7   // define arduino pin no 7 as blue led
#define Delay   1000   // define delay of 1 second

int leds[3]={red_led, green_led , blue_led};   

void setup() {
  pinMode(red_led,OUTPUT);     // set pin mode of all leds on OUTPUT
  pinMode(green_led,OUTPUT);  
  pinMode(blue_led,OUTPUT);   
}

void loop() {


for (int i=0; i<3; i++)      // run a loop to turn on and off all leds by turn
{
digitalWrite(leds[i],HIGH);  
delay(Delay);                 
digitalWrite(leds[i],LOW);
}

}
