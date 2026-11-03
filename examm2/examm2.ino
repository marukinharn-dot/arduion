int number = 5;
void setup() {
  Serial.begin(115200);
  if (number &gt; 0) {
    Serial.println("Positive");
   } else if (number &lt; 0) {   
  Serial.println("Negative");
  } else {
    Serial.println("Zero"); 
    }
}
void loop() { 
  
}