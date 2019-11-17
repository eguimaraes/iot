int EstadoBotao1 = 0;

void setup() {


 
  for(int x=2;x<=5; x++){   
    
  pinSetupOut(x);            
    
    }
  
  
}

void loop() {

  



  
  for(int x=2;x<=5; x++){
    
    
    piscaLed(x,400);
            
  

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
  
