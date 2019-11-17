int EstadoBotao1 = 0;
int inPin=7;
int val=1 ;


void setup() {


 pinSetupIn(inPin);
  for(int x=2;x<=6; x++){   
    
  pinSetupOut(x);            
    
    }
 
val=digitalRead(inPin);
}

void loop() {


  
  for(int x=2;x<=5; x++){

val=digitalRead(inPin);
    
    if (val==HIGH){
    
    piscaLed(x,400);
    }       
  

}

}

void piscaLed(int pin, int tempo){
  
   digitalWrite(pin,HIGH);
    delay(tempo);
    digitalWrite(pin,LOW);
    delay(tempo);
    
  }


void pinSetupOut(int pin){
  
  pinMode(pin, OUTPUT); 
  
  }

void pinSetupIn(int pin){
  
  pinMode(pin, INPUT);

  
  }
  
