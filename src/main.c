#define __STDC_WANT_LIB_EXT1__ 1

// standard libraries
#include <stdio.h>
#include <stdlib.h>
// string manipulation libraries
#include <string.h>
#include <ctype.h>

int main(void){
    char filename[FILENAME_MAX+1], filename_lower_nospaces[FILENAME_MAX+1], command[FILENAME_MAX+12] = "../src/script.bat ", restart;
    int i;

    do
    {
        printf("Name of the folder: ");
        gets(filename);

        if (strlen(filename) > FILENAME_MAX)
            printf("Name of the folder too long. Retry\n");
    } while (strlen(filename) > FILENAME_MAX);

    strcpy(filename_lower_nospaces, filename);

    for (i=0; i<strlen(filename_lower_nospaces); i++){
        // change all the spaces of the input string into underscores
        if (isspace(filename_lower_nospaces[i])){
            filename_lower_nospaces[i] = '_';
            filename[i] = '_';
        }
        // change all the upper letters to lower
        if (isupper(filename_lower_nospaces[i]))
            filename_lower_nospaces[i] = tolower(filename_lower_nospaces[i]);
    }

    strcat(command, filename);
    command[strlen(command)] = ' ';
    strcat(command, filename_lower_nospaces);

    system(command);

    printf("The folder \"%s\" has been created.\nNow it contains \"%s.c\" file.\n\nDo you want to create a new file? (Y/N)\n", filename, filename_lower_nospaces);
    scanf_s("%c", &restart);
    getchar();

    if (restart == 'Y' || restart == 'y')
        main();
    
    return 0;
}