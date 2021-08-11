// Workshop 6 : 7-Segment Module
// Example 5 : Count Up
byte Counter = 0;       
int DP_R = 1;
int D3_R = 2;
int D2_R = 3;
int D1_R = 4;
int D0_R = 5;

int DP_L = 6;
int D3_L = 7;
int D2_L = 8;
int D1_L = 9;
int D0_L = 10;

const boolean BCD_Table[10][4] = {  
  {LOW, LOW, LOW, LOW},               //0
  {LOW, LOW, LOW, HIGH},              //1
  {LOW, LOW, HIGH, LOW},              //2
  {LOW, LOW, HIGH, HIGH},             //3
  {LOW, HIGH, LOW, LOW},              //4
  {LOW, HIGH, LOW, HIGH},             //5
  {LOW, HIGH, HIGH, LOW},             //6
  {LOW, HIGH, HIGH, HIGH},            //7
  {HIGH, LOW, LOW, LOW},              //8
  {HIGH, LOW, LOW, HIGH}              //9
}; 
   
void setup() {
    pinMode(DP_L, OUTPUT);
    pinMode(D3_L, OUTPUT);
    pinMode(D2_L, OUTPUT);
    pinMode(D1_L, OUTPUT);
    pinMode(D0_L, OUTPUT);
    pinMode(DP_R, OUTPUT);
    pinMode(D3_R, OUTPUT);
    pinMode(D2_R, OUTPUT);
    pinMode(D1_R, OUTPUT);
    pinMode(D0_R, OUTPUT);

    digitalWrite(DP_L, LOW);
    digitalWrite(D3_L, LOW);
    digitalWrite(D2_L, LOW);
    digitalWrite(D1_L, LOW);
    digitalWrite(D0_L, LOW);
    digitalWrite(DP_R, LOW);
    digitalWrite(D3_R, LOW);
    digitalWrite(D2_R, LOW);
    digitalWrite(D1_R, LOW);
    digitalWrite(D0_R, LOW);
}

void loop() {
  int L,R;
  L = Counter / 10;
  R = Counter % 10;

  digitalWrite(D3_L, BCD_Table[L][0]);
  digitalWrite(D2_L, BCD_Table[L][1]);
  digitalWrite(D1_L, BCD_Table[L][2]);
  digitalWrite(D0_L, BCD_Table[L][3]);

  digitalWrite(D3_R, BCD_Table[R][0]);
  digitalWrite(D2_R, BCD_Table[R][1]);
  digitalWrite(D1_R, BCD_Table[R][2]);
  digitalWrite(D0_R, BCD_Table[R][3]);

  delay(300); 
  Counter++;
  if(Counter >= 20)Counter=0;
}

