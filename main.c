/* Take users text input and encrypt it using a rotation cipher
 key = 1, so it will shift letters by one 
 Input UPPER CASE letters only
 */


#include <stdio.h>
#include <string.h>


//Prototype of the 
void rotCipher(char *UserText, int key);


int main(void){
    int key = 1;
    char UserText[200];
    
    printf("Please enter text to encrypt: "); //ask user for text for the cipher
    fgets(UserText, sizeof(UserText), stdin); //Store input inside of 'UserText' 
    printf("The encrypted text is: ");//prints final output after encryption
    rotCipher(UserText, key); //calls function
    
    }
 
//Function Definition
void rotCipher(char *UserText, int key){
    int n=0; //initialised variables
    int Value;
    char encryption;
    
        while (UserText[n] != '\0' && strlen(UserText)-1 > n){ //Loop by incrementing n until it reaches the length of the string input
            Value = (UserText[n] -65 + key) % 26 + 65; // Shifts letter by one
            encryption = Value;
            
            printf("%c", encryption);
            n++;
        }
        
}