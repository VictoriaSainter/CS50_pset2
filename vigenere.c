#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int arcv, string argv[])
{
    //error checking number of entries
    if ( arcv != 2) {
    
    printf("you have entered an incorrect value, please type: ./caesar X, where X is a non negative integer\n");
    return 1; 
    }
    

    
    
    //get integer keyword from string
    string key = argv[1];
    
    //need to check if any of the key is non-alphabetical *******************
    for (int u = 0, v = strlen(key); u < v; u++)
    {
        if (key[u] < 65 || (key[u] > 90 && key[u] < 97) || key[u] > 122)
        {
            printf("you have entered an incorrect key!\n");
            return 1;
        }

    }
    
    
    //get user's message
    string secretMessage = GetString();
    
    
    int lengthOfKey = strlen(key);
    
        //iterating through the secret message
        int i = 0;
        int n = strlen(secretMessage);
        int t = 0;
        
        while (i < n)
        {

            int j = 0;
            int positionInKey = t % lengthOfKey;
            
            //checking if secret message is uppercase 
            if (secretMessage[i] >= 65 && secretMessage[i] <= 90)
            {   
            
            
                //check if key char is uppercase
                if (key[t % lengthOfKey] >= 65 && key[t % lengthOfKey] <=90)
                {
                    positionInKey = key[(t % lengthOfKey)] - 65;
                    j = positionInKey + secretMessage[i];
                    if (j > 90)
                    {   
                        j = j - 26;
                    }  
                    
                }
                //check if key char is lowercase
                else if (key[t % lengthOfKey] >=97 && key[t % lengthOfKey] <=122)
                {
                    positionInKey = key[(t % lengthOfKey)] - 97;
                    j = positionInKey + secretMessage[i];
                    if (j > 122)
                    {   
                        j = j - 26;
                    } 
                }
                
                printf("%c", j);
                i++;
                t++;
            }
            
            
            
            //checking if secret message is lowercase
            else if (secretMessage[i] >= 97 && secretMessage[i] <= 122)
            {
                //check if key char is uppercase
                if (key[t % lengthOfKey] >= 65 && key[t % lengthOfKey] <=90)
                {
                    positionInKey = key[(t % lengthOfKey)] - 65;
                    j = positionInKey + secretMessage[i];
                    if (j > 90)
                    {   
                        j = j - 26;
                    }  
                    
                }
                //check if key char is lowercase
                else if (key[t % lengthOfKey] >=97 && key[t % lengthOfKey] <=122)
                {
                    positionInKey = key[(t % lengthOfKey)] - 97;
                    j = positionInKey + secretMessage[i];
                    if (j > 122)
                    {   
                        j = j - 26;
                    } 
                }
                
                printf("%c", j);
                i++;
                t++;
            }
            
            else 
            {
            
                printf("%c", secretMessage[i]);
                i++;
            }
            
        }

    printf("\n");
    
    return 0;
    
}

//:( encrypts "world, say hello!" as "xoqmd, rby gflkp!" using "baz" as keyword
//   expected output, but not "xpsme, tbz ifmmp!\n"


