//Employee Name and ID: Shubham Pasari 138658

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 100

void main()
{
    char str[max];
    int i, wrd;	
    printf("Input the string : ");
    fgets(str, max, stdin);	
    i = 0;
    wrd = 1;

    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            wrd++;
        }

        i++;
    }

    printf("Total number of words in the string is : %d\n", wrd-1);
}