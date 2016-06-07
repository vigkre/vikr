#include <stdio.h>
int main(void) {
	int num,r,sum=0;
	scanf("%d",&num);
while(num!=0)
{
	num%=10;
	r=num/10;
	sum=sum*10+r;
}
if(sum==num)
printf("palindrome");
else 
printf("not");
	return 0;
}
