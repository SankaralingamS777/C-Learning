#include <Servo.h>

Servo servo;

void setup()
{
    servo.attach(PA8);
    servo.write(90);
    delay(2000);
}

void loop()
{
    servo.write(0);
    delay(800);

    servo.write(45);
        delay(800);

    
    servo.write(90);
    delay(1000);

    servo.write(135);
    delay(1000);

    servo.write(180);
        delay(800);


    servo.write(135);
        delay(800);


     servo.write(90);
        delay(800);


    servo.write(45);
        delay(800);

    servo.write(0);
       delay(800);

}
