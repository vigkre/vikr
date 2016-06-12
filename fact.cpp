#include <iostream>
using namespace std;

int main() {
	int fact=1,n,f;
   cin>>n;
   f=1;
   while(f<=n)
   {
   	fact=fact*f;
   	f++;
   }
   cout<<fact;
   return 0;
}
