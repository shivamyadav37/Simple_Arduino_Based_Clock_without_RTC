
#include <LiquidCrystal.h>

int count1 ;
int count2 ;
int count3 ;

int press1;
int press2;
int press3;

int button1 = 6;
int button2 = 7;
int button3 = 8;

int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;

int lastButtonState = 1; 

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  
  Serial.begin(9600);
  
  
  lcd.begin(16, 2);  
  //lcd.print("hello, world!");
  //lcd.clear();
  	lcd.setCursor(0, 0);
  
  
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  
}


  
void loop() {  
  
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  buttonState3 = digitalRead(button3);
  
  
  
  
  if (buttonState1 == LOW && lastButtonState == HIGH )
   {
    
    
   press1 = count1++;
   lastButtonState == LOW;
   //lcd.clear();
   lcd.setCursor(2, 1);
   lcd.print(press1);
    lcd.print(":");
   delay(400);
    if(count1 == 24){
      count1 = 0;
   }
    
  }
  
 // else{
    //lcd.clear();    
  //}
  
  if (buttonState2 == LOW && lastButtonState == HIGH )
  { 
    press2 = count2++;
   lastButtonState == LOW;
   //lcd.clear();
   lcd.setCursor(6, 1);
   lcd.print(press2);
    lcd.print(":");
   delay(200);
    
    if(count2 == 60){
      count2 = 00;      
   }
    
    
   }
  press1 = press1+1;
  //else{
    //lcd.clear();    
  //}
  
  if (buttonState3 == LOW && lastButtonState == HIGH )
  {     
    press3 = count3++;
   lastButtonState == LOW; 
   //lcd.clear();
   lcd.setCursor(10,1);
   lcd.print(press3);
    lcd.print(" ");
   delay(200);
    
    if(count3 == 60){
      count3 = 000;
      //lcd.clear();      
   }
    
    //lcd.print(":");
   }
  press2 = press2+1;
 // else{
 //   lcd.clear();    
  //}
  
  
  
}
 
