//
////
//// Created by kareem on 24/10/17.
////
//#include <stdio.h>
//#include <memory.h>
//#include <stdlib.h>
//#include <unistd.h>
//char ** parse(char inputLine [],int *numberOfArguments)
//{
//    inputLine= "ls -l";
//    char ** split  = NULL;
//    char *  word = strtok (inputLine, " ");
//    int numberOfSpaces = 0, i;
//
//
//
//// split string and append tokens to 'split'
//
//    while (word) {
//        split = realloc (split, sizeof (char*) * ++numberOfSpaces);
//
//        if (split == NULL)
//            exit (-1); // memory allocation failed
//
//        split[numberOfSpaces-1] = word;
//
//        word = strtok (NULL, " ");
//    }
//
//// realloc one extra element for the last NULL
//
//    split = realloc (split, sizeof (char*) * (numberOfSpaces+1));
//    split[numberOfSpaces] = 0;
//
//    *numberOfArguments=numberOfSpaces+1;
//// print the result
//
////    for (i = 0; i < (numberOfSpaces+1); ++i)
////        printf ("split[%d] = %s\n", i, split[i]);
//}
//
//void main()
//{
//    int i;
//    printf("Shell>");
//    char input [512];
//    int numberOfArguments;
//    char s=fgets(input,512,stdin);
//    char ** split=parse(input,&numberOfArguments);
//    printf("%d",numberOfArguments);
//    printf(input);
//    for (i = 0; i < (numberOfArguments+1); ++i)
//        printf ("split[%d] = %s\n", i, split[i]);
//}
//
