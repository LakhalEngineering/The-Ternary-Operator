#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){


    if (argc != 3)
    {
        printf("This a not what execpt");
        exit(EXIT_FAILURE);
    }

    int num1,num2,themax;

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    themax = (num1>num2) ? num1 : num2; 
    /*
    if (num1 > num2 )
    {
        themax = num1;
    }else
    {
        themax = num2;
    }
    */
    printf("num1 : %d, num2 : %d, themax : %d", num1,num2,themax);
}