#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {2, 3, 4, 5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {6, 7, 8, 9}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

String alphabet[] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};   //ประกาศอาเรย์ตัวหนังสืออยู่ตรงนี้



int time = 1;
String Position1 , Position2 ,Number ;

void setup(){
  Serial.begin(9600);
}



void loop(){
  char customKey = customKeypad.getKey();
  
  if (customKey && time == 1){
    Position1 = customKey;
    Serial.println(Position1);
    time = 2; //กำหนดตัวเลขลำดับที่ 1
  }
  else if (customKey && time == 2) {
    Position2 = customKey;
    Number = String(Position1) + String(Position2);
    Serial.println( Number );
    time = 1; //กำหนดตัวเลขลำดับที่ 2
  }

}
