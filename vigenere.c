#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int shift (char c);
int main(int argc, string argv[])
{ 
    // checking the key input
    if (argc != 2) 
    {
        printf("error\n");
        return 1;
    }
    else
    {   
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("Usage: ./vigenere keyword\n");
                return 1;
            }
            else
            { 
                for( int z = 0, m = strlen(argv[1]); z < m; z++)
                {
                    int key = shift(argv[1][z]);
                    printf("%i", key);
                }
                printf("\n");
                
                //get plaintex
                string plaint = get_string("plaintext:\n");
                
                //encript text
                printf("cyphertext: ");
                for (int j = 0, n = strlen(plaint); j < n; j++)
                {
                    if (isalpha(plaint[j]))
                    {
                        if (isupper(plaint[j]))
                        {
                            printf("%c", (((plaint[j] - 65) THIS IS WHERE I WOULD USE PUT THE KEY IF I KNEW HOW) % 26) + 65);
                        }
                        else if (islower(plaint[j]))
                        {
                            printf("%c", (((plaint[j] - 97) THIS IS WHERE I WOULD PUT THE KEY AS WELL ) % 26) + 97);        
                        }
                    }
                    else
                    {
                        printf("%c", plaint[j]);
                    }
                    
                }
                printf("\n");
                return 0;
            }
        } 
     
    }
}

int shift (char c)
{    
     if(isalpha(c))
     {
          if(isupper(c))
          {
               int k = c - 65;
               return k;
          }
          else if(islower(c))
          {
              int k = c - 97;
             return k;
          }
     }
     return 1;
     
    
}


