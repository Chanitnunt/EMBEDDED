const int LED_1 = 13;     //LED row 1
const int LED_2 = 12;     //LED row 2    
const int LED_3 = 11;     //LED row 3

void setup() 
{
}

void loop()
{
  //turn on LED L1
  pinMode(LED_1, OUTPUT);     
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);     
  digitalWrite(LED_2, HIGH);  
  pinMode(LED_3, INPUT);      
  digitalWrite(LED_3, LOW);
  
  delay(1000);
  
  //turn on LED L2
  pinMode(LED_1, OUTPUT);     
  digitalWrite(LED_1, HIGH);
  pinMode(LED_2, OUTPUT);     
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, INPUT);      
  digitalWrite(LED_3, LOW);
  
  delay(1000);
  
  //turn on LED L3
  pinMode(LED_1, INPUT);      
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);     
  digitalWrite(LED_2, LOW);  
  pinMode(LED_3, OUTPUT);     
  digitalWrite(LED_3, HIGH);
  
  delay(1000);
  
  //turn on LED L4
  pinMode(LED_1, INPUT);     
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);    
  digitalWrite(LED_2, HIGH);  
  pinMode(LED_3, OUTPUT);    
  digitalWrite(LED_3, LOW);
  
  delay(1000);

  //turn on LED L5
  pinMode(LED_1, OUTPUT);    
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, INPUT);     
  digitalWrite(LED_2, LOW);
  pinMode(LED_3, OUTPUT);    
  digitalWrite(LED_3, HIGH);
  
  delay(1000);
  
  //turn on LED L6
  pinMode(LED_1, OUTPUT);
  digitalWrite(LED_1, HIGH);
  pinMode(LED_2, INPUT);
  digitalWrite(LED_2, LOW);
  pinMode(LED_3, OUTPUT);
  digitalWrite(LED_3, LOW);
  
  delay(1000);
}
