int led = 13;           // the PWM pin the LED is attached to
int pResistor = A0;    // the Photo Resistor Pin
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

void setup(void)
{
    //Serial.begin(9600);
    pinMode(pResistor, INPUT);
    pinMode(led, OUTPUT);
}

void loop(void)
{
    brightness = analogRead(pResistor);
    //Serial.println(brightness, DEC);
    // set the brightness of pin 9:
    //analogWrite(led, brightness);

    // change the brightness for next time through the loop:
    //brightness = brightness + fadeAmount;

    // reverse the direction of the fading at the ends of the fade:
    if (brightness == 0){
        digitalWrite(led, HIGH);
        delay(10);
        digitalWrite(led, LOW);
        delay(10);
    }
    else{
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
    }
    // wait for 30 milliseconds to see the dimming effect
    
}
