#include <Servo.h>

Servo servo1;  // Первый сервопривод
Servo servo2;  // Второй сервопривод

void setup() {
  servo1.attach(9);   // Указваем объекту класса Servo, что серво присоединен к пину 9
  servo2.attach(10);  // А этот servo присоединен к 10 пину
  
}

void loop() {
  // Выставялем положения
  servo1.write(0); 
  servo2.write(180);
  delay(20);        
  // Меняем положения
  servo2.write(0); 
  servo1.write(180);
}