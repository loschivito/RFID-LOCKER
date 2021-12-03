#include <SPI.h>                              // biblioteca SPI 
#include <MFRC522.h>                          // biblioteca do modulo RC522
#include <LiquidCrystal_I2C.h>                // biblioteca do display LCD com I2C 
#include <Servo.h>
//--------------------------------------------------------------------------------------------------------------------------------------

Servo servo1; 
 
#define SDA_PIN 10                            // pino SDA RC522 = D10 Arduino
#define RST_PIN 9                             // pino RST RC522 = D9  Arduino


#define TAGBrunna " 4C CA 35 C9"   
#define TAGGabriel " 2C A1 43 C9" 
#define TAGIngryd " 9C A8 43 C9"   
#define TAGHayson " 3C 91 36 C9"   
#define TAGLuan " 3C A1 36 C9"   
#define TAGRuth " CC 0E 37 C9"        
#define TAGVinicius " 8C 98 36 C9"    
#define TAGJulia " CC C2 35 C9"   
 
#define TAGBruno " D7 BA 06 3B"     
#define TAGPedro " 8A 5F 8C 08"  
#define TAGVictor " F7 64 35 3B" 
#define TAGRaiane " 77 53 3A 3B"  
#define TAGCaua " C7 C4 80 35" 
#define TAGEduarda " 6B 0D 6B 21"  
#define TAGMarina " 17 F5 38 3B"  
#define TAGMaria " 4B B7 16 CB" 
#define TAGJoao " 0B 9F 73 21"  

//--------------------------------------------------------------------------------------------------------------------------------------

#define AcionaBuzzer 6                        // buzzer = D7 Arduino 

//--------------------------------------------------------------------------------------------------------------------------------------
MFRC522 mfrc522(SDA_PIN, RST_PIN);    // cria uma instância MFRC522
LiquidCrystal_I2C lcd(0x27,16,2);   // configuração do display LCD 16x2 I2C - mude para  0x27 se não funcionar
 
char st[20];                          // string com 20 caracteres
String UID = "";                      // string da identificação UID


int condi = 1;
int block = 0;

//--------------------------------------------------------------------------------------------------------------------------------------

 
void setup()
{
  
  pinMode(AcionaBuzzer, OUTPUT);
  Serial.begin(9600);                // monitor serial a 9600 Bps
  SPI.begin();                       // inicializa comunicação SPI
  mfrc522.PCD_Init();                // inicializa modulo RC522
 
  servo1.attach(3); //Servo
  

  lcd.init();                        // inicializa display LCD
  lcd.backlight();                   // acende o led backlight do LCD
  StandardMessage();                 // imprime mensagem no LCD


  servo1.write(85);
  delay(500); 
}

//--------------------------------------------------------------------------------------------------------------------------------------

 
void StandardMessage(){
  lcd.clear();                       // limpa tela do LCD
  lcd.setCursor(0,0);               // cursor na coluna 3 linha 0
  lcd.print("Aproxime a chave");           // print no LCD
  lcd.setCursor(2,1);               // cursor na coluna 2 linha 1
  lcd.print("Black Sharks");         // print no LCD
  delay(100);
}

//--------------------------------------------------------------------------------------------------------------------------------------
 





void loop(){

  
  if ( ! mfrc522.PICC_IsNewCardPresent())   // verifica a presença de etiqueta
  {
    return;
  }
  if ( ! mfrc522.PICC_ReadCardSerial())     // leitura da etiqueta NFC
  {
    return;
  }
  UID = "";                            // limpa o registro de identificação UID
  getUID();                            // lê e formata a identificação UID
  


  
// Funções de acesso: -----------------------------------------------------------------------------------------------------


// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX    2019   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX


       
 if (UID == TAGBrunna){//-------------------------------------------------------------------------------------------------------------- TAG
   
    BeepsLiberado();

    openclose();

    //-------LCD----------------------
      lcd.clear();   
      delay(50);
      lcd.setCursor(0, 0);      
      lcd.print("Acesso liberado!"); 
      lcd.setCursor(0, 1);              
      lcd.print("Ola, Brunna");         
      delay(1000);
    //-------LCD----------------------   
    
  //-------BLOCK---------------------- 
  if( condi == 0 && block == 1){
    condi = 1; 
    block = 0; 
  }

  
  if( condi == 1 && block == 1){
    condi = 0; 
    block = 0;
  }
  //-------BLOCK---------------------- 

  
    delay(1000);
    StandardMessage(); //RETORNO                
    
}

//-------END TAG----------------------------------------------------------------------------------------------------------


       
 if (UID == TAGGabriel){//-------------------------------------------------------------------------------------------------------------- TAG
   
    BeepsLiberado();

    openclose();

    //-------LCD----------------------
      lcd.clear();   
      delay(50);
      lcd.setCursor(0, 0);      
      lcd.print("Acesso liberado!"); 
      lcd.setCursor(0, 1);              
      lcd.print("Ola, Gabriel");         
      delay(1000);
    //-------LCD----------------------   
    
  //-------BLOCK---------------------- 
  if( condi == 0 && block == 1){
    condi = 1; 
    block = 0; 
  }

  
  if( condi == 1 && block == 1){
    condi = 0; 
    block = 0;
  }
  //-------BLOCK---------------------- 

  
    delay(1000);
    StandardMessage(); //RETORNO                
    
}

//-------END TAG----------------------------------------------------------------------------------------------------------


       
 if (UID == TAGIngryd){//-------------------------------------------------------------------------------------------------------------- TAG
   
    BeepsLiberado();

    openclose();

    //-------LCD----------------------
      lcd.clear();   
      delay(50);
      lcd.setCursor(0, 0);      
      lcd.print("Acesso liberado!"); 
      lcd.setCursor(0, 1);              
      lcd.print("Ola, Ingrid");         
      delay(1000);
    //-------LCD----------------------   
    
  //-------BLOCK---------------------- 
  if( condi == 0 && block == 1){
    condi = 1; 
    block = 0; 
  }

  
  if( condi == 1 && block == 1){
    condi = 0; 
    block = 0;
  }
  //-------BLOCK---------------------- 

  
    delay(1000);
    StandardMessage(); //RETORNO                
    
}

//-------END TAG----------------------------------------------------------------------------------------------------------


       
 if (UID == TAGHayson){//-------------------------------------------------------------------------------------------------------------- TAG
   
    BeepsLiberado();

    openclose();

    //-------LCD----------------------
      lcd.clear();   
      delay(50);
      lcd.setCursor(0, 0);      
      lcd.print("Acesso liberado!"); 
      lcd.setCursor(0, 1);              
      lcd.print("Ola, Hayson");         
      delay(1000);
    //-------LCD----------------------   
    
  //-------BLOCK---------------------- 
  if( condi == 0 && block == 1){
    condi = 1; 
    block = 0; 
  }

  
  if( condi == 1 && block == 1){
    condi = 0; 
    block = 0;
  }
  //-------BLOCK---------------------- 

  
    delay(1000);
    StandardMessage(); //RETORNO                
    
}

//-------END TAG----------------------------------------------------------------------------------------------------------


       
 if (UID == TAGLuan){//-------------------------------------------------------------------------------------------------------------- TAG
   
    BeepsLiberado();

    openclose();

    //-------LCD----------------------
      lcd.clear();   
      delay(50);
      lcd.setCursor(0, 0);      
      lcd.print("Acesso liberado!"); 
      lcd.setCursor(0, 1);              
      lcd.print("Ola, Luan M.");         
      delay(1000);
    //-------LCD----------------------   
    
  //-------BLOCK---------------------- 
  if( condi == 0 && block == 1){
    condi = 1; 
    block = 0; 
  }

  
  if( condi == 1 && block == 1){
    condi = 0; 
    block = 0;
  }
  //-------BLOCK---------------------- 

  
    delay(1000);
    StandardMessage(); //RETORNO                
    
}

//-------END TAG----------------------------------------------------------------------------------------------------------


       
 if (UID == TAGRuth){//-------------------------------------------------------------------------------------------------------------- TAG
   
    BeepsLiberado();

    openclose();

    //-------LCD----------------------
      lcd.clear();   
      delay(50);
      lcd.setCursor(0, 0);      
      lcd.print("Acesso liberado!"); 
      lcd.setCursor(0, 1);              
      lcd.print("Ola, Ruth C.");         
      delay(1000);
    //-------LCD----------------------   
    
  //-------BLOCK---------------------- 
  if( condi == 0 && block == 1){
    condi = 1; 
    block = 0; 
  }

  
  if( condi == 1 && block == 1){
    condi = 0; 
    block = 0;
  }
  //-------BLOCK---------------------- 

  
    delay(1000);
    StandardMessage(); //RETORNO                
    
}

//-------END TAG----------------------------------------------------------------------------------------------------------


       
 if (UID == TAGVinicius){//-------------------------------------------------------------------------------------------------------------- TAG
   
    BeepsLiberado();

    openclose();

    //-------LCD----------------------
      lcd.clear();   
      delay(50);
      lcd.setCursor(0, 0);      
      lcd.print("Acesso liberado!"); 
      lcd.setCursor(0, 1);              
      lcd.print("Ola, Vinicius");         
      delay(1000);
    //-------LCD----------------------   
    
  //-------BLOCK---------------------- 
  if( condi == 0 && block == 1){
    condi = 1; 
    block = 0; 
  }

  
  if( condi == 1 && block == 1){
    condi = 0; 
    block = 0;
  }
  //-------BLOCK---------------------- 

  
    delay(1000);
    StandardMessage(); //RETORNO                
    
}

//-------END TAG----------------------------------------------------------------------------------------------------------


       
 if (UID == TAGJulia){//-------------------------------------------------------------------------------------------------------------- TAG
   
    BeepsLiberado();

    openclose();

    //-------LCD----------------------
      lcd.clear();   
      delay(50);
      lcd.setCursor(0, 0);      
      lcd.print("Acesso liberado!"); 
      lcd.setCursor(0, 1);              
      lcd.print("Ola, Loschi");         
      delay(1000);
    //-------LCD----------------------   
    
  //-------BLOCK---------------------- 
  if( condi == 0 && block == 1){
    condi = 1; 
    block = 0; 
  }

  
  if( condi == 1 && block == 1){
    condi = 0; 
    block = 0;
  }
  //-------BLOCK---------------------- 

  
    delay(1000);
    StandardMessage(); //RETORNO                
    
}

//-------END TAG----------------------------------------------------------------------------------------------------------




// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX    2021   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX


       
 if (UID == TAGRaiane){//-------------------------------------------------------------------------------------------------------------- TAG
   
    BeepsLiberado();

    openclose();

    //-------LCD----------------------
      lcd.clear();   
      delay(50);
      lcd.setCursor(0, 0);      
      lcd.print("Acesso liberado!"); 
      lcd.setCursor(0, 1);              
      lcd.print("Ola, Rai T.");         
      delay(1000);
    //-------LCD----------------------   
    
  //-------BLOCK---------------------- 
  if( condi == 0 && block == 1){
    condi = 1; 
    block = 0; 
  }

  
  if( condi == 1 && block == 1){
    condi = 0; 
    block = 0;
  }
  //-------BLOCK---------------------- 

  
    delay(1000);
    StandardMessage(); //RETORNO                
    
}

//-------END TAG----------------------------------------------------------------------------------------------------------





if (UID == TAGBruno){//-------------------------------------------------------------------------------------------------------------- TAG
   
    BeepsLiberado();

    openclose();

    //-------LCD----------------------
      lcd.clear();   
      delay(50);
      lcd.setCursor(0, 0);      
      lcd.print("Acesso liberado!"); 
      lcd.setCursor(0, 1);              
      lcd.print("Ola, Bruno");         
      delay(1000);
    //-------LCD----------------------   
    
  //-------BLOCK---------------------- 
  if( condi == 0 && block == 1){
    condi = 1; 
    block = 0; 
  }

  
  if( condi == 1 && block == 1){
    condi = 0; 
    block = 0;
  }
  //-------BLOCK---------------------- 

  
    delay(1000);
    StandardMessage(); //RETORNO                
    
}

//-------END TAG----------------------------------------------------------------------------------------------------------





if (UID == TAGPedro){//-------------------------------------------------------------------------------------------------------------- TAG
   
    BeepsLiberado();

    openclose();

    //-------LCD----------------------
      lcd.clear();   
      delay(50);
      lcd.setCursor(0, 0);      
      lcd.print("Acesso liberado!"); 
      lcd.setCursor(0, 1);              
      lcd.print("Ola, Pedro");         
      delay(1000);
    //-------LCD----------------------   
    
  //-------BLOCK---------------------- 
  if( condi == 0 && block == 1){
    condi = 1; 
    block = 0; 
  }

  
  if( condi == 1 && block == 1){
    condi = 0; 
    block = 0;
  }
  //-------BLOCK---------------------- 

  
    delay(1000);
    StandardMessage(); //RETORNO                
    
}

//-------END TAG----------------------------------------------------------------------------------------------------------







if (UID == TAGVictor){//-------------------------------------------------------------------------------------------------------------- TAG
   
    BeepsLiberado();

    openclose();

    //-------LCD----------------------
      lcd.clear();   
      delay(50);
      lcd.setCursor(0, 0);      
      lcd.print("Acesso liberado!"); 
      lcd.setCursor(0, 1);              
      lcd.print("Ola, Marshall");         
      delay(1000);
    //-------LCD----------------------   
    
  //-------BLOCK---------------------- 
  if( condi == 0 && block == 1){
    condi = 1; 
    block = 0; 
  }

  
  if( condi == 1 && block == 1){
    condi = 0; 
    block = 0;
  }
  //-------BLOCK---------------------- 

  
    delay(1000);
    StandardMessage(); //RETORNO                
    
}

//-------END TAG---------------------------------------------------------------------------------------------------------







if (UID == TAGCaua){//-------------------------------------------------------------------------------------------------------------- TAG
   
    BeepsLiberado();

    openclose();

    //-------LCD----------------------
      lcd.clear();   
      delay(50);
      lcd.setCursor(0, 0);      
      lcd.print("Acesso liberado!"); 
      lcd.setCursor(0, 1);              
      lcd.print("Ola, Caua U.");         
      delay(1000);
    //-------LCD----------------------   
    
  //-------BLOCK---------------------- 
  if( condi == 0 && block == 1){
    condi = 1; 
    block = 0; 
  }

  
  if( condi == 1 && block == 1){
    condi = 0; 
    block = 0;
  }
  //-------BLOCK---------------------- 

  
    delay(1000);
    StandardMessage(); //RETORNO                
    
}

//-------END TAG---------------------------------------------------------------------------------------------------------







if (UID == TAGEduarda){//-------------------------------------------------------------------------------------------------------------- TAG
   
    BeepsLiberado();

    openclose();

    //-------LCD----------------------
      lcd.clear();   
      delay(50);
      lcd.setCursor(0, 0);      
      lcd.print("Acesso liberado!"); 
      lcd.setCursor(0, 1);              
      lcd.print("Ola, Moana");         
      delay(1000);
    //-------LCD----------------------   
    
  //-------BLOCK---------------------- 
  if( condi == 0 && block == 1){
    condi = 1; 
    block = 0; 
  }

  
  if( condi == 1 && block == 1){
    condi = 0; 
    block = 0;
  }
  //-------BLOCK---------------------- 

  
    delay(1000);
    StandardMessage(); //RETORNO                
    
}

//-------END TAG---------------------------------------------------------------------------------------------------------







if (UID == TAGMarina){//-------------------------------------------------------------------------------------------------------------- TAG
   
    BeepsLiberado();

    openclose();

    //-------LCD----------------------
      lcd.clear();   
      delay(50);
      lcd.setCursor(0, 0);      
      lcd.print("Acesso liberado!"); 
      lcd.setCursor(0, 1);              
      lcd.print("Ola, Marina");         
      delay(1000);
    //-------LCD----------------------   
    
  //-------BLOCK---------------------- 
  if( condi == 0 && block == 1){
    condi = 1; 
    block = 0; 
  }

  
  if( condi == 1 && block == 1){
    condi = 0; 
    block = 0;
  }
  //-------BLOCK---------------------- 

  
    delay(1000);
    StandardMessage(); //RETORNO                
    
}

//-------END TAG---------------------------------------------------------------------------------------------------------







if (UID == TAGMaria){//-------------------------------------------------------------------------------------------------------------- TAG
   
    BeepsLiberado();

    openclose();

    //-------LCD----------------------
      lcd.clear();   
      delay(50);
      lcd.setCursor(0, 0);      
      lcd.print("Acesso liberado!"); 
      lcd.setCursor(0, 1);              
      lcd.print("Ola, Maria");         
      delay(1000);
    //-------LCD----------------------   
    
  //-------BLOCK---------------------- 
  if( condi == 0 && block == 1){
    condi = 1; 
    block = 0; 
  }

  
  if( condi == 1 && block == 1){
    condi = 0; 
    block = 0;
  }
  //-------BLOCK---------------------- 

  
    delay(1000);
    StandardMessage(); //RETORNO                
    
}

//-------END TAG---------------------------------------------------------------------------------------------------------







if (UID == TAGJoao){//-------------------------------------------------------------------------------------------------------------- TAG
   
    BeepsLiberado();

    openclose();

    //-------LCD----------------------
      lcd.clear();   
      delay(50);
      lcd.setCursor(0, 0);      
      lcd.print("Acesso liberado!"); 
      lcd.setCursor(0, 1);              
      lcd.print("Ola, JJ!");         
      delay(1000);
    //-------LCD----------------------   
    
  //-------BLOCK---------------------- 
  if( condi == 0 && block == 1){
    condi = 1; 
    block = 0; 
  }

  
  if( condi == 1 && block == 1){
    condi = 0; 
    block = 0;
  }
  //-------BLOCK---------------------- 

  
    delay(1000);
    StandardMessage(); //RETORNO                
    
}

//-------END TAG---------------------------------------------------------------------------------------------------------







 // Funcção de erro: -----------------------------------------------------------------------------------------------------
 
  if(UID != TAGGabriel && UID != TAGIngryd && UID != TAGHayson && UID != TAGLuan && UID != TAGRuth && UID != TAGVinicius && UID != TAGJulia && UID != TAGBrunna && UID != TAGBruno && UID != TAGRaiane && UID != TAGPedro && UID != TAGVictor && UID != TAGRaiane && UID != TAGCaua && UID != TAGEduarda && UID != TAGMarina && UID != TAGMaria && UID != TAGJoao ){
    BeepsNegado();
  }
  delay(500);                          // atraso de 0,5 segundos


}
// END ------------------------------------------------------------------------------------------------------------------
