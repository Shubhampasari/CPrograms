//Employee Name and ID: Shubham Pasari 138658

#include<stdio.h>
#include<string.h>

void FindLongestWord(char pstr[])
{
 int count = 0, max = 0,i,index=0,length;
 length = strlen(pstr);
 for( i = 0 ; i< length ; i++)
 {
  if(pstr[i] != ' ')
  count++;
  else
  {
   if(count > max)
   {
    max = count;
    index = i-max;
   }
   count = 0;
  }
 }
 if(count>max)
 {
  max = count;
  index = length-max;
 }
 printf("Length is %d\n",max);
 printf("Position is %d\n",index);
}


int main()
{
 char string[100];
 gets(string);
 FindLongestWord(string);
 return 0;
}
