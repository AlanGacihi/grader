#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Prototype
char *rot13(const char *src);

int main(int argc, char **argv)
{
    char *result;
    
    result = rot13(argv[1]);
    if (result == NULL)
        result = "";
    printf("%s\n", result);
    free(result);

    return (EXIT_SUCCESS);
}

char *rot13(const char *src)
{
    if(src == NULL){
      return NULL;
    }
  
    char* result = malloc(strlen(src));
    
    if(result != NULL){
      strcpy(result, src);
      char* current_char = result;
      
      while(*current_char != '\0'){
        //Only increment alphabet characters
        if((*current_char >= 97 && *current_char <= 122) || (*current_char >= 65 && *current_char <= 90)){
          if(*current_char > 109 || (*current_char > 77 && *current_char < 91)){
            //Characters that wrap around to the start of the alphabet
            *current_char -= 13;
          }else{
            //Characters that can be safely incremented
            *current_char += 13;
          }
        }
        current_char++;
      }
    }
    return result;
}