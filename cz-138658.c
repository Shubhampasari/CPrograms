//Employee Name and ID: Shubham Pasari 138658
#include <stdio.h>

int CountZeroBits(unsigned char a)
{
	int ans=0;
	for (int i = 0; i < 8; i++)
    if((a & (1 << (7 - i) ) )==0)
    ans++;
    return ans;
}


int main(void) 
{
	unsigned char a;
	scanf("%c",&a);
	int ans=CountZeroBits(a);
	printf("%d",ans);
	return 0;
}
