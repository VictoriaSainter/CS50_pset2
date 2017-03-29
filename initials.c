#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char* argv[])
{
    
    string input = GetString();
    char userInput[] = "";
    strcpy(userInput, input);
    char output[] = "";

        for ( int i = 0, n = strlen(userInput); i < n ; i++)
        {

            
            if (i == 0)
            {   
                char a = toupper(userInput[i]);
                char aAsString[2] = {a, '\0'};
                strcat(output, aAsString);

            }
            else if (userInput[i] == ' ')
            {

                char b = toupper(userInput[i+1]);
                char bAsString[2] = {b, '\0'};
                strcat(output, bAsString);
                
            }   
        }
        printf("%s\n", output);
        return 0;
}

