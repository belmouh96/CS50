#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    int key;
      if(argc == 2)
      {
          for(int i = 0; i < strlen(argv[1]); i++)
          {
              if(isdigit(argv[1][i]))
              {
                  key = atoi(argv[1]);
                  string plainText = get_string("plaintext: ");
                  for (int j = 0; j < strlen(plainText); j++)
                  {
                       plainText[j] += key;
                  }
                  printf("ciphertext: %s\n", plainText);
              } else {
                  printf("Usage ./caesar Key\n");
              }
          }
      } else {
          printf("Usage: ./caesar Key\n");
          return 1;
      }


}
