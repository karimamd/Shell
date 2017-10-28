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
    int numberOfArguments=0;
    //shell runs while exit command not written
    //TODO replace inputLine with command (after you parse)
    while(strcmp(inputLine,"exit")!=0 )
    {
        printf("Shell> ");
        //TODO manage case of entering more than 512 chars
        char checkSuccess=fgets(inputLine,512,stdin);
        //removing extra line \n
        inputLine[strlen(inputLine)-1]='\0';
        //splitting line into command and arguments
        commandParts=str_split(inputLine,' ');


        //put all code in here: it will execute if first word isn't exit
        if(strcmp(commandParts[0],"exit")!=0 )
        {

            int i;
            //free all dynamically allocated variables and print content
            for (i = 0; *(commandParts + i); i++)
            {
                //TODO resolve the extra line problem on entering command
                printf("\ncommand parts=[%s]", *(commandParts + i));
                free(*(commandParts + i));
            }
            printf("\n");
            free(commandParts);

        }
        else{
            printf("exiting shell ....");
            //inputLine[4]='\0';
            int i;
            //free all dynamically allocated variables
            for (i = 0; *(commandParts + i); i++)
            {
                free(*(commandParts + i));
            }
            printf("\n");
            free(commandParts);

        }




    }
    return 0;
}

