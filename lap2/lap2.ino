const int MAX_SCORE = 100;
const float PI_VALUE = 3.14159;
int counter = 0;
int age = 15;
float temperature = 28.5;
char grade = 'A';
bool ledStatus = true;

void setup() {
    Serial.begin(115200);

    Serial.println("=== Variable Example ===");

    Serial.print("Age = ");
    Serial.println(age);

    Serial.print("Temperature = ");
    Serial.println(temperature);

    Serial.print("Grade = ");
    Serial.println(grade);

    Serial.print("LED Status = ");
    Serial.println(ledStatus);
    

    Serial.print("Maximum Score = ");
    Serial.println(MAX_SCORE);

    Serial.print("PI = ");
    Serial.println(PI_VALUE, 5);
}

void loop() {
     counter = counter + 2;

    Serial.print("Counter = ");
    Serial.println(counter);

    delay(1000);
}
