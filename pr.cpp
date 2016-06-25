#include <iostream>
using namespace std;

int main()
{
    int a,b,count=0,i,c;
    cin>>a>>b;
    while(a<b)
    {
        c=0;
        for(i=2;i<a/2;i++)
        {
            c=1;
            break;
        }
        if(c==0)count++;
        ++a;
    }

    
    cout <<count<< endl;
    return 0;
}
