#include <iostream>
using namespace std;

int main() {
	int m,i,n;
	cin>>m>>n;
	for(i=m;i<=n;i++)
	{
		if(i%2==0)
		{	cout<<i<<" ";
		cout<<"\t";}
	}

	return 0;
}
