

long number1; 
long number2; 
char operation; 
long result; 

void setup() {
  Serial.begin(9600); 
  Serial.println("For men: BMR = 10 x weight (kg) + 6.25 x height (cm) – 5 x age (years) + 5 For women: BMR = 10 x weight (kg) + 6.25 x height (cm) – 5 x age (years) – 161");
  Serial.println();
}

void loop() {
  while(Serial.available() > 0) {        
    number1 = Serial.parseInt();    
    operation = Serial.read();    
    number2 = Serial.parseInt(); 
    calculate(); 
    Serial.print("Result = ");
    Serial.println(result); 
    Serial.println("Done..."); 
    Serial.println(); 
  }
}

void calculate() { 
  if (operation == '+') {
    result = number1 + number2;
  }
  else if (operation == '-')  {
    result = number1 - number2; 
  }
  else if (operation == '*')  {
    result = number1 * number2; 
  }
  else if (operation == '/')  {
    result = number1 / number2; 
  }
  else  {
    Serial.println("Error, Wrong input!!"); 
    Serial.println();
    result = 0;
  }
}
