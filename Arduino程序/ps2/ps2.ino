#define PIN_X 0    
#define PIN_Y 1    
#define PIN_Z 2    
  
void setup() {    
  pinMode(PIN_X, INPUT);  
  pinMode(PIN_Y, INPUT);  
  pinMode(PIN_Z, INPUT);  
  Serial.begin(9600);  
}    
  
void loop() {    
  int x,y,z;    
  
  x=analogRead(PIN_X);    
  y=analogRead(PIN_Y);    
  //z=analogRead(PIN_Z);    
  
  Serial.print("X=");    
  Serial.print(x);     
  Serial.print("\tY=");       
  Serial.print(y);   
   if(analogRead(PIN_Z)==0){  
    Serial.println("\tButton=On");  
      
  }else{  
    Serial.println("\tButton=Off");  
  }  
 // Serial.print("\tZ=");       
 // Serial.println(z);    
  
  delay(100);    
} 
