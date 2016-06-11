#include<stdio.h>
int main()
{
int no,nor,r,sum;
  cin>>no;
  nor=no;
  while(no)
  {
  rem=no%10;
  sum=sum+(rem*rem*rem);
  no/=10;
  }
  if(nor==no)
  cout<<"Arm";
  else 
  cout<<"Not";


}
