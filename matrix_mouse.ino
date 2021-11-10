#define ROW1 15
#define ROW2 2
#define ROW3 16
#define ROW4 34
#define ROW5 17

#define COL1 23
#define COL2 26
#define COL3 21
#define COL4 12
#define COL5 4

const int row[]={ROW1,ROW2,ROW3,ROW4,ROW5};
const int col[]={COL1,COL2,COL3,COL4,COL5};

byte scan[8][8]={
  {1,0,0,0,0,0,0,0},
  {0,1,0,0,0,0,0,0},
  {0,0,1,0,0,0,0,0},
  {0,0,0,1,0,0,0,0},
  {0,0,0,0,1,0,0,0},
  {0,0,0,0,0,1,0,0},
  {0,0,0,0,0,0,1,0},
  {0,0,0,0,0,0,0,1}
  };
byte mouse[8][8]={
  {1,1,1,1,1,0,0,0},
  {1,1,1,1,1,0,0,0},
  {1,0,1,1,1,0,0,0},
  {1,1,1,1,1,0,0,0},
  {1,1,1,1,1,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0}
  };


void randommouse(){
  
}
 
void showmouse(){
  for(byte i = 0; i < 8; i++){
      for(byte j = 0; j < 8; j++){
      digitalWrite(row[j],1-scan[i][j]);
      digitalWrite(col[j],1-mouse[i][j]);
       }
      for(byte j = 0; j < 8; j++){
      digitalWrite(row[j],HIGH);
      digitalWrite(col[j],LOW);
      }
  }
}
  
void scanhit(){
  
}

void hitmouse(){
  
}

void setup(){
    for(byte i = 0; i<=sizeof(row);i++){
    pinMode(row[i],OUTPUT);
    }
    for(byte i = 0; i<=sizeof(col);i++){
    pinMode(col[i],OUTPUT);
    }
}

void loop(){
  randommouse();
  showmouse();
  scanhit();
  hitmouse();  
}
