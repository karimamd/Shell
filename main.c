/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char ** parse(char *inputLine)
{
    //splittedInput[0][x] is the command splittedInput[1][y] is the first argument ..etc
    char splittedInput [][]=splitOnSpaces(inputLine);
}

int main() {
    char inputLine [512]="";
    //shell runs while exit command not written

    while(!strcmp(input,"exit"))
    {
        printf("Shell> ");
        char checkSuccess=fgets(inputLine,512,stdin);
        char input [50][]=parse(inputLine);


    }
    return 0;
}

*/