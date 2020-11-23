#include <Keypad.h>

//https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

long first = 0;  
long second = 0;
double total = 0;
int time = 0 , Done = 0 , show = 0 ,Key = 0 , Encryption = 0 , Decryption = 0 ,numberic = 0;
String result ,resultEncryption , resultDecryption; 


char customKey;
const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {2,3,4,5};
byte colPins[COLS] = {6,7,8,9};

Keypad customKeypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS); 

String alphabet[] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"}; 
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  customKey = customKeypad.getKey();
    switch (customKey) 
    {
        case '0' ... '9':
        first = first * 10  + (customKey - '0');
        Serial.println(first);
        break;
        
        case 'A':
        Key = first;
        Serial.println("Key = " + String(Key));
        first = 0;
        break;


        case 'B' :

        if (first >= 26)
            {
                Serial.println("Error");
                Serial.println("last_result = " + String(result));
                first = 0;
                break;
            }

        show = first;
        Serial.println(alphabet[show]);
        
        result = result + alphabet[show];
        Serial.println("last_result = " + String(result)); 

        Encryption = ( first + Key ) % 26;
        resultEncryption = resultEncryption + alphabet[Encryption];

        Decryption = ( first - Key ) % 26;
        resultDecryption = resultDecryption + alphabet[Decryption];

        first = 0;
        break;


        case 'C':
        Serial.println("result_Encryption = " +String(resultEncryption));
        break;

        case 'D':
        Serial.println("result_Decryption = " +String(resultDecryption));
        break;

        case '*':
        result = result + " ";
        resultEncryption = resultEncryption + " ";
        resultDecryption = resultDecryption + " ";
        Serial.println("last_result = " + String(result));
        break;

      

    }

    

    
}

