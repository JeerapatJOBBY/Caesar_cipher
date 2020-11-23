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
int cipher = 1;
int Done = 0;
String Position1 , Position2 ,Number ,show;
int lek ;

void setup(){
  Serial.begin(9600);
}



void loop(){
  char customKey = customKeypad.getKey();
  
    if (customKey == 'A')
    {
      Done = 1;
    }


    else if (customKey && time == 1 && Done == 0){
    Position1 = customKey;
    Number = String(Position1);
    Serial.println( Number );
    time = 2; //กำหนดตัวเลขลำดับที่ 1
    cipher = 1;
    }
  
    else if (customKey && time == 2 && Done == 0) {
    Position2 = customKey;
    Number = String(Position1) + String(Position2);
    Serial.println( Number );
    time = 1; //กำหนดตัวเลขลำดับที่ 2
    cipher = 1;
    }
    
    else if (cipher == 1 && Done == 1) 
    {
        if ( Number == "1")
        {
            show = alphabet[0];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "2")
        {
            show = alphabet[1];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "3")
        {
            show = alphabet[2];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "4")
        {
            show = alphabet[3];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "5")
        {
            show = alphabet[4];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "6")
        {
            show = alphabet[5];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "7")
        {
            show = alphabet[6];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "8")
        {
            show = alphabet[7];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "9")
        {
            show = alphabet[8];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "10")
        {
            show = alphabet[9];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "11")
        {
            show = alphabet[10];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "12")
        {
            show = alphabet[11];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "13")
        {
            show = alphabet[12];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "14")
        {
            show = alphabet[13];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "15")
        {
            show = alphabet[14];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "16")
        {
            show = alphabet[15];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "17")
        {
            show = alphabet[16];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "18")
        {
            show = alphabet[17];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "19")
        {
            show = alphabet[20];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "20")
        {
            show = alphabet[19];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "21")
        {
            show = alphabet[20];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "22")
        {
            show = alphabet[21];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "23")
        {
            show = alphabet[22];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "24")
        {
            show = alphabet[23];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "25")
        {
            show = alphabet[24];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        if ( Number == "26")
        {
            show = alphabet[25];
            Serial.println(show);
            cipher = 0, Done = 0 ,time = 1;
        }
        else {
            cipher = 0, Done = 0 ,time = 1;
        }
    }

}
