#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

char** str_split(char* inputLine, const char delimiter)
{
    char** result    = 0;
    size_t count     = 0;
    char* tmp        = inputLine;
    char* last_comma = 0;
    char delim[2];
    delim[0] = delimiter;
    delim[1] = 0;

    /* Count how many elements will be extracted. */
    while (*tmp)
    {
        if (delimiter == *tmp)
        {
            count++;
            last_comma = tmp;
        }
        tmp++;
    }

    /* Add space for trailing token. */
    count += last_comma < (inputLine + strlen(inputLine) - 1);

    /* Add space for terminating null string so caller
       knows where the list of returned strings ends. */
    count++;

    result = malloc(sizeof(char*) * count);

    if (result)
    {
        size_t idx  = 0;
        char* token = strtok(inputLine, delim);

        while (token)
        {
            assert(idx < count);
            *(result + idx++) = strdup(token);
            token = strtok(0, delim);
        }
        assert(idx == count - 1);
        *(result + idx) = 0;
    }

    return result;
}

int main() {
    char * inputLine;
    char **commandParts;
    //shell runs while exit command not written
    //TODO replace inputLine with command (after you parse)
    while(strcmp(inputLine,"exit")!=0)
    {
        printf("Shell> ");
        char checkSuccess=fgets(inputLine,512,stdin);
        commandParts=str_split(inputLine,' ');


    }
    return 0;
}

