# brushless
Controleaza un motor fara perii cu un Arduino si un ESC

## Componente
Necesare:
 - un motor fara perii;
 - un ESC[¹];
 - un Arduino[²] (am folosit Nano);
 - un potentiometru;
 - niste baterii LiPo (am folosit de tip 18650);

Optionale, dar recomandate:
 - un breadboard;
 - o rama/suport pentru baterii si motor;
 - un multimetru;

Potentiometrul, motorul, ESC-ul si bateriile luate de la [TME](https://www.tme.eu):

|Simbol           |Denumire producator|Producator |
|-----------------|-------------------|-----------|
|DF-DFR0054       |DFR0054            |DFROBOT    |
|RS1408-3600KV    |EMX-2309 3600KV    |EMAX       |
|ESC-BLHELI-12A   |EMX-SC-0098        |EMAX       |
|ACCU-INR18650-25R|INR 18650-25R      |SAMSUNG SDI|


## Porturi PWM
Pentru potentiometru este necesar un port PWM. Un port PWM este localizat diferit de la Arduino la Arduino. Ele sunt insemnate cu o linie in forma de unda sau pur si simplu scrie PWM. Exemple: [Arduino Nano](https://i.stack.imgur.com/4tzSR.png), [Arduino Uno](https://components101.com/sites/default/files/component_pin/Arduino-Uno-Pin-Diagram.png), [Arduino Pro Micro](https://i.pinimg.com/originals/a2/7f/9f/a27f9fbac4b4f17b5b1aa55b0550a41f.jpg), [Teensy 3.6](https://components101.com/sites/default/files/component_pin/TEENSY-3.6-Development-Board-Pinout.jpg).

## ESC
Aveti grija ca numarul maxim de amperi suportati al ESC-ului sa fie mai mult decat cat dau bateriile, iar voltajul sa se potriveasca cu motorul si cu bateriile (puteti folosi un [modul step-up/step-down](https://components101.com/modules/ltc3780-dc-dc-step-up-module) pentru a regla voltajul). [ESC-ul trebuie calibrat](https://howtomechatronics.com/tutorials/arduino/arduino-brushless-motor-control-tutorial-esc-bldc/) dupa ce se monteaza toate partile componente.

## Cum rulezi programul?
Pe un calculator, in Arduino IDE, se deschide fisierul *brushless.ino*. Cu toate componentele atasate se incarca pe un Arduino. Dupa calibrarea ESC-ului este totul gata. Mai multe informatii despre ce face programul se afla, comentat, in cod.

## Licenta MIT
Vezi fisierul [aici](https://github.com/sabinM1/brushless/blob/main/LICENSE).

[¹]: <https://github.com/sabinM1/brushless#ESC>
[²]: <https://github.com/sabinM1/brushless#Porturi-PWM>
