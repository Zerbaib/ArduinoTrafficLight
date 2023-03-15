const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;
const int led6 = 7;
const int led7 = 8;
const int led8 = 9;
const int led9 = 10;
const int led10 = 11;
const int led11 = 12;
const int led12 = 13;

void setup() {
    pinMode(led1, output);
    pinMode(led2, output);
    pinMode(led3, output);
    pinMode(led4, output);
    pinMode(led5, output);
    pinMode(led6, output);
    pinMode(led7, output);
    pinMode(led8, output);
    pinMode(led9, output);
    pinMode(led10, output);
    pinMode(led11, output);
    pinMode(led12, output);
}

void loop() {
    digitalWrite(led1, HIGH);
    digitalWrite(led4, HIGH);

    digitalWrite(led9, HIGH);
    digitalWrite(led12, HIGH);
    delay(4000);
    digitalWrite(led1, LOW);
    digitalWrite(led4, LOW);

    digitalWrite(led2, HIGH);
    digitalWrite(led5, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    digitalWrite(led5, LOW);

    digitalWrite(led7, HIGH);
    digitalWrite(led10, HIGH);
    digitalWrite(led9, LOW);
    digitalWrite(led12, LOW);

    digitalWrite(led3, HIGH);
    digitalWrite(led6, HIGH);
    delay(4000);
    digitalWrite(led8, HIGH);
    digitalWrite(led11, HIGH);
    digitalWrite(led7, LOW);
    digitalWrite(led10, LOW);
    delay(1000);
    digitalWrite(led3, LOW);
    digitalWrite(led6, LOW);
}