#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
    int size;
    char temp[50];
    char *first;

    size = argc - 1;
    first = strdup(argv[0]);

    for (int i = 0; argv[i] != NULL; i++) {
        printf("%s\n", argv[i]);
    }

    printf("\n");
    
    /*for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(strcmp(argv[j], argv[j+1]) > 0){
                //swap array[j] and array[j+1]
                strcpy(temp, argv[j]);
                strcpy(argv[j], argv[j+1]);
                strcpy(argv[j+1], temp);
            }
        }
    }

    for (int i = 0; argv[i] != NULL; i++) {
        printf("%s\n", argv[i]);
    }*/
    
    return 0;
}