//Employee Name and ID: Shubham Pasari 138658

#include<stdio.h>
#include <string.h> 
#include <stdlib.h> 

void Num2Words(char *num) 
{ 
    int len = strlen(num); 
    char *single_digits[] = { "zero", "one", "two","three", "four","five","six", "seven", "eight", "nine"}; 
  
    while(*num != '\0')
    {
        printf("%s ", single_digits[*num - '0']); 
        num++;
    }
    printf("\n");
}
     
int main(void) 
{ 
    int num;
    scanf("%d",&num);
    Num2Words(num);
    return 0; 
} 