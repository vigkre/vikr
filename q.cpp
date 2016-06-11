#include <iostream>
using namespace std;

int main() {
    char ch,arr[100];
    int i=0;
    do{
        cin>>ch;
        if(ch=='q'||ch=='Q')
            exit(0);
        else
            arr[i++]=ch;
    }
    while(true);
    return 0;
}
