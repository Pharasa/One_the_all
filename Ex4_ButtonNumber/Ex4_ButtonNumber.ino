// Workshop 6 : 7-Segment Module
// Example 4 : Button Number
int SW1 = 14;
int SW2 = 15;
int SW3 = 16;
int SW4 = 17;
int SW5 = 18;
int SW6 = 19;
int SW7 = 20;
int SW8 = 21; 

int A = 1;
int B = 2;
int C = 3;
int D = 4;
int E = 5;
int F = 6;
int G = 7;
int DP = 8;
int SC1 = 9;
int SC2 = 10;

void digitalWrite_8bit(int digit){            
  digitalWrite(A, (digit & 0x01));  // set Bit 0
  digitalWrite(B, (digit & 0x02));  // set Bit 1
  digitalWrite(C, (digit & 0x04));  // set Bit 2
  digitalWrite(D, (digit & 0x08));  // set Bit 3
  digitalWrite(E, (digit & 0x10));  // set Bit 4
  digitalWrite(F, (digit & 0x20));  // set Bit 5
  digitalWrite(G, (digit & 0x40));  // set Bit 6
  digitalWrite(DP, (digit & 0x80)); // set Bit 7                          
} 

void setup (){
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);  
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);    
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);  
  pinMode(G,OUTPUT);
  pinMode(DP,OUTPUT); 
  pinMode(SC1,OUTPUT);
  pinMode(SC2,OUTPUT);
 
  pinMode(SW1,INPUT);
  pinMode(SW2,INPUT);  
  pinMode(SW3,INPUT);
  pinMode(SW4,INPUT); 
  pinMode(SW5,INPUT);
  pinMode(SW6,INPUT);  
  pinMode(SW7,INPUT);
  pinMode(SW8,INPUT);  
} 

void loop(){
   digitalWrite(SC1,LOW);    // off digit 1    
   digitalWrite(SC2,HIGH);   // on  digit 2
   
   if (digitalRead(SW1) == 0) 
       digitalWrite_8bit(0x06); else
   if (digitalRead(SW2) == 0)
       digitalWrite_8bit(0x5B); else
   if (digitalRead(SW3) == 0)
       digitalWrite_8bit(0x4F); else
   if (digitalRead(SW4) == 0)
       digitalWrite_8bit(0x66); else
   if (digitalRead(SW5) == 0)
       digitalWrite_8bit(0x6D); else      
   if (digitalRead(SW6) == 0)
       digitalWrite_8bit(0x7D); else
   if (digitalRead(SW7) == 0)
       digitalWrite_8bit(0x07); else 
   if (digitalRead(SW8) == 0)
       digitalWrite_8bit(0x7F); else
       digitalWrite_8bit(0x3F);    // show 0
}   
