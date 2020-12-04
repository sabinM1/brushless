 #include <Servo.h> //Foloseste libraria pentru ESC
Servo esc;

void setup()
{
	esc.attach(9); //Portul trebuie sa fie PWM, vezi mai multe informatii in readme
	esc.writeMicroseconds(1000); //Initializeaza ESC-ul - nu ar trebui sa modifici
	delay(5000); //Asteapta 5 secunde, optional
}

void loop()
{
	int val; //val = valoarea potentiometrului
	val = analogRead(A0); //Citeste de pe portul potentiometrului (Analog 0)
	val = map(val, 0, 1023, 1000, 2000); //Creeaza un map pentru val, de la 0 la 1023 - statusul potentiometrului
	esc.writeMicroseconds(val); //Transmite valoarea catre ESC, pentru a regla viteza motorului
}
