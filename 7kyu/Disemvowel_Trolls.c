//solution must allocate all required memory
//and return a free-able buffer to the caller.
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *disemvowel(const char *str)
{
  char* giveIt = (char*) malloc(sizeof(giveIt) * strlen(str));
  
  if(!giveIt){
    free(giveIt);
    return NULL;
  }
  int c = 0;

  for(unsigned long i = 0; i < strlen(str); i++){
    
    if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || 
      str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') {
      continue;
    }
    giveIt[c++] = str[i];
  }
  giveIt[c] = '\0';
  return giveIt; 
}
