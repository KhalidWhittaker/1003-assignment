//rotational cipher program
#include <stdio.h>

int main()  {
    
    char phrase[300];
    char letter;
    int idx;
    int key;
    int x;
    int y;
    
    printf("Please enter a phrase: ");
    scanf("%s", &phrase);
    printf("Would you like to use rotational or substitution? \n Rotational = 1\n Substitution = 2\n ");
    scanf("%d", &y);
    printf("Would you like to encrypt or decrypt? \n Encrypt = 1\n Decrypt = 2\n ");
    scanf("%d", &x);
    printf("Please enter a key: ");
    scanf("%d", &key);
    
   if(x == 1 && y == 1)    {
       for(idx = 0; phrase[idx] != 0; idx++)    {
        letter = phrase[idx];
        
        if(letter >= 97 && letter <= 122)  {
            letter = letter + key;
            
            if(letter > 122)    {
                letter = letter - 122 + 97 - 1;
            }
            phrase[idx] = letter;
        }
        else if(letter >= 65 && letter <= 90) {
            letter = letter + key;
            
            if(letter > 90)    {
                letter = letter - 90 + 65 - 1;
            }
            phrase[idx] = letter;
        }
    }
    printf("The encrypted phrase is: %s", phrase);
   }
   
   if(x == 2 && y == 1)   {
       for(idx = 0; phrase[idx] != 0; idx++) {
           letter = phrase[idx];
           
           if(letter >= 97 && letter <= 122)   {
               letter = letter - key;
               
               if(letter < 97) {
                   letter = letter + 122 - 97 + 1;
               }
               phrase[idx] = letter;
           }
           else if(letter >= 65 && letter <= 90)   {
               letter = letter - key;
               
               if(letter < 65) {
                   letter = letter + 90 - 65 + 1;
               }
               phrase[idx] = letter;
               
           }
       }
       printf("The decrypted phrase is: %s", phrase);
   }
   
    
    return 0;
}


