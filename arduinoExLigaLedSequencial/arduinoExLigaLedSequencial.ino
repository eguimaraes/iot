int EstadoBotao1 = 0;
int inPin=7;
int val=1 ;
float seno;
int frequencia;


void setup() {


 pinSetupIn(inPin);
  for(int x=2;x<=6; x++){   
    
  pinSetupOut(x);            
    
    }
  pinSetupOut(9);           
val=digitalRead(inPin);
}

void loop() {


  //gera uma frequência a partir do valor do seno
  
  for(int x=2;x<=6; x++){

val=digitalRead(inPin);
    
    if (val==HIGH){
    
    piscaLed(x,400);
seno=(sin(x*3.1416/180));
frequencia = 2000+(int(seno*x*500));
  tone(9,frequencia,200);
  
  

    
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
  
