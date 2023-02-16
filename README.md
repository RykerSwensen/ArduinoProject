# ArduinoProject
This is my Arduino Project I made for my ECEN 106 class Winter 2022

Final Project
	Hello, and welcome to my final project. I am Ryker Swensen and I am a Programming major. While I do enjoy hardware history, especially when it comes to gaming, I am most interested in software. Especially the software behind the Arduino. My project is a calculator program that I have been working on for the past few weeks. I wanted to be able to create a BMR calculator. I am passionate about technology and fitness; this combines two things I care a lot about. 
	As I was warned, creating a calculator was no easy task. Luckily, I was able to use many resources to help guide me along the way to help inspire me. I looked back on the week 11 lab. I at first wanted to use the lcd display and keypad. However, trying to display the equation and the limited inputs made it impossible. Luckily, I just wanted to create a program using the Arduino language, which could later be used for more simplified equations.
	I had many many growing pains trying to find what functions I could use that would calculate and execute when I told the program to. I found a Youtuber Paul McWhorter. While he doesn’t have any videos on creating a calculator, he is very knowledgeable about Arduino hardware and software. I was able to learn a lot about the Arduino software and what its functions did!
	It was not easy, and it took many tries and attempts. So many errors had to be cleared. Lots of frustration and even more times of wanting to give up and start something new. However, if you watch my video or look at my images, you will see that I finally got a functioning calculator! It is by no means perfect, however, I am so proud to overcome my challenges and create something that I care about.

Here is my Process below! Any text in all caps describes the code function I created and what purpose I gave it. I labeled everything except the self-explanatory or code that shows up multiple times. 

long number1;  //THIS IS THE FIRST VARIABLE IN THE CALCULATION
long number2; // THIS IS THE 2ND VARIABLE IN THE CALCULATION
char operation; //THIS IS THE OPERATION (multiplication, division, addition, or subtraction)
long result; // THIS IS THE ANSWER OF THE EQUATION

void setup() { // THIS CALLS FOR THE PROGRAM TO START
  Serial.begin(9600); 
  Serial.println("For men: BMR = 10 x weight (kg) + 6.25 x height (cm) – 5 x age (years) + 5 For women: BMR = 10 x weight (kg) + 6.25 x height (cm) – 5 x age (years) – 161");
  Serial.println();
}

void loop() { // THIS IS A WHILE LOOP THAT MEANS WHILE THE DATA IS BEING SENT TO THE ARDUINO
  while(Serial.available() > 0) {        
    number1 = Serial.parseInt();    
    operation = Serial.read();    OPERATION IS THE LABEL OF THE FUNCTION FOR (mulptiplication, division, addition, or subtraction)
    number2 = Serial.parseInt(); 
    calculate(); 
    Serial.print("Result = ");
    Serial.println(result); 
    Serial.println("Done..."); 
    Serial.println(); 
  }
}

void calculate() { // IF ELSE STATEMENTS FOR FUNCTIONS
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

	It doesn’t appear to be a complicated system, however, the Arduino is not forgiving in its language. This simple program to compute a simple equation was very difficult. I feel that I learned a lot and have become a more patient individual after teaching myself this process. It was good language learning practice!
