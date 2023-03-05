//Code Made By Karl, Only For School Purposes
int LED1 = 13; //Kita muda dang "13" sa arduino, dalum ka ground pins
int LED2 = 12; //Amo maja hay 12 located pwede gidman 13-2 bawal ya tx kag rx pins

void setup() {
pinMode(LED1, OUTPUT); //Mu daya ya output pins (sa breadboard dampi)
pinMode(LED2, OUTPUT); //Amo maja led2 sa gwa ka breadboard
}

void loop() {
digitalWrite(LED1, HIGH); // LED1 turn on                                   //Basta.. pagusto ka lang kung ano ubrahon mo sa led lights pwede man i modify mo nga LED1, LOW
delay(400);                // Waiting 30 milisecond 
digitalWrite(LED2, HIGH); // LED2 turn on
delay(400);                // Waiting 30 milisecond       
digitalWrite(LED1, LOW);  // Turning off LED1 to repeat the integer
delay(400);                // Waiting 30 miliseconds again to turn off
digitalWrite(LED2, LOW);  // Turning off LED2 to repeat the integer
delay(400);                // Waiting 30 miliseconds again to turn off
}
//sheesh lovescars <333
