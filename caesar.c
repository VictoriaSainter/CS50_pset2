#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>

int main(int arcv, string argv[])
{
    //error checking number of entries
    if ( arcv != 2) {
    
    printf("you have entered an incorrect value, please type: ./caesar X, where X is a non negative integer\n");
    return 1; 
    }
    
    //get integer k from string
    int k = atoi(argv[1]);
    
    k = k % 26;
    
    //get user's string
    string inputString = GetString();
    
    for (int i = 0, n = strlen(inputString); i < n; i++)
    {
        char j = 0;
        
        //if uppercase char
        if (inputString[i] >= 65 && inputString[i] <= 90)
        {
            //if go outside the bounds of uppercase chars in ASCII
            if ((inputString[i] + k) > 90) 
            {
                j = (k + inputString[i]) - 26;
            }
            else 
            {
                j = k + inputString[i];
            } 
        printf("%c", j);
        }
        
        //if lowercase char
        else if (inputString[i] >= 97 && inputString[i] <= 122)
        {
            //if goes outside bounds of uppercase chars in ASCII
            if ((inputString[i] + k) > 122) 
            {
                j = (k + inputString[i]) - 26;
            }
            else 
            {
                j = k + inputString[i];
            }
            
        printf("%c", j);
        }
        else 
        {
            printf("%c", inputString[i]);
        }
    }
    
    printf("\n");
    return 0;

}

