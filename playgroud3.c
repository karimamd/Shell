/*

//
// Created by kareem on 24/10/17.
//

# include <stdio.h>
#include<unistd.h>
int main ()
{
    char *args[] = {"ls", "-l", "-a", NULL};
    char *env[] = {"PATH=/bin", NULL};
    pid_t ChildID;
    ChildID = fork();
//check for Fork
    if ( ChildID >= 0) // fork sucess
    {
        if ( ChildID ==0 ) // Code Of Child which the value will be 0 in case of Child code
        {
            printf("Child says my ID %d \n", getpid());
            printf("Child says my Parent ID %d \n", getppid());
            if (execv(args[0], args) == -1)
                printf("error in exec.");

            else { puts("success"); }
        }

        else // Code of parent and the value of ChildID = process ID of child in case of Parent’s code
        {
            printf("Parent says my ID %d \n", getppid());
            sleep(50);
        }
    }
    else
    {
        printf("Fork is fail \n");
        return 1;
    }
    return 0 ;
}

*/
