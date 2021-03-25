#include <stdio.h>
#include <string.h>

int main(void)

{
    //Reserve 15 bypte of buffer plus terminating NULL.
    //Should allocate 8 bytes = 2 double words
    //To overflow, need more than 8 bytes, will cause segmentation fault. 
    char buff[15];
    int pass = 0;
    printf("\n Enter the password : \n");
    gets(buff);

    if(strcmp(buff, "adminpass"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
       /* Now Give root or admin rights to user*/
        printf ("\n Root privileges given to the user \n");
    }

    return 0;
}