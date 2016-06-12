#include <iostream>
using namespace std;

int main() {
	int i,n,count=0;
	char c[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>c[i];
		count++;
	}
	cout<<count;

	return 0;
}
