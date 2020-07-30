//Employee Name and ID: Shubham Pasari 138658

#include <stdio.h> 
#include <string.h> 
void ReverseString(char* pstr) 
{ 
    int l, i; 
    char *begin_ptr, *end_ptr, ch; 
    l = strlen(pstr); 
    begin_ptr = pstr; 
    end_ptr = pstr; 
    for (i = 0; i < l - 1; i++) 
        end_ptr++; 
 
    for (i = 0; i < l / 2; i++) { 
        ch = *end_ptr; 
        *end_ptr = *begin_ptr; 
        *begin_ptr = ch; 
        begin_ptr++; 
        end_ptr--; 
    } 
} 
 
int main() 
{
	int max=100;
    char str[max]; 
    fgets(str, max, stdin); 
    printf("%s\n", str);  
    ReverseString(str); 
    printf("%s\n", str); 
    return 0; 
} 