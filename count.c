#include <stdio.h>

int main(void) {
	int n,count=0;
	scanf("%d",&n);
	while(n!=0)
	{
		n/=10;
		count++;
	}
	printf("%d",count);
	// your code goes here
	return 0;
}
