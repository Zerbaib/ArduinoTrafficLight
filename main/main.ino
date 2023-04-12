// set the var
const int v1 = 2;
const int o1 = 3;
const int r1 = 4;
const int v2 = 5;
const int o2 = 6;
const int r2 = 7;
const int v3 = 8;
const int o3 = 9;
const int r3 = 10;
const int v4 = 11;
const int o4 = 12;
const int r4 = 13;

const int pV = 4000;
const int pO = 1000;

void setup() {
    pinMode(v1, OUTPUT);
    pinMode(o1, OUTPUT);
    pinMode(r1, OUTPUT);
    pinMode(v2, OUTPUT);
    pinMode(o2, OUTPUT);
    pinMode(r2, OUTPUT);
    pinMode(v3, OUTPUT);
    pinMode(o3, OUTPUT);
    pinMode(r3, OUTPUT);
    pinMode(v4, OUTPUT);
    pinMode(o4, OUTPUT);
    pinMode(r4, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    digitalWrite(r1, LOW); // red 1 off
    digitalWrite(r2, LOW); // red 2 off
    Serial.print("Red fire 1/2 off");
    digitalWrite(r3, HIGH); // red 3 on
    digitalWrite(r4, HIGH); // red 4 on
    Serial.print("Red fire 3/4 on");
    digitalWrite(o3, LOW); // orange 3 off
    digitalWrite(o4, LOW); // orange 4 off
    Serial.print("Orange fire 3/4 off");
    digitalWrite(v1, HIGH); // green 1 on
    digitalWrite(v2, HIGH); // green 2 on
    Serial.print("Green fire 1/2 on");
    delay(pV);

    digitalWrite(o1, HIGH); // orange 1 on
    digitalWrite(o2, HIGH); // orange 2 on
    Serial.print("Orange fire 1/2 on");
    digitalWrite(v1, LOW); // green 1 off
    digitalWrite(v2, LOW); // green 2 off
    Serial.print("Green fire 1/2 off");
    delay(pO);
    
    digitalWrite(r1, HIGH); // red 1 on
    digitalWrite(r2, HIGH); // red 2 on
    Serial.print("Red fire 1/2 on");
    digitalWrite(r3, LOW); // red 3 off
    digitalWrite(r4, LOW); // red 4 off
    Serial.print("Red fire 3/4 off"); 
    digitalWrite(o1, LOW); // orange 1 off
    digitalWrite(o2, LOW); // orange 2 off
    Serial.print("Orange fire 1/2 off");
    digitalWrite(v3, HIGH); // green 3 on
    digitalWrite(v4, HIGH); // green 4 on
    Serial.print("Green fire 3/4 on");
    delay(pV);
    
    digitalWrite(o3, HIGH); // orange 3 on
    digitalWrite(o4, HIGH); // orange 4 on
    Serial.print("Orange fire 3/4 on");
    digitalWrite(v3, LOW); // green 3 off
    digitalWrite(v4, LOW); // green 4 off
    Serial.print("Green fire 3/4 off");
    delay(pO);

}