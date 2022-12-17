#include<iostream>

#include<stdlib.h>

using namespace std;
int primee(int prime){
    int i;
for( i=2;i<prime;i++){
    if(prime%i==0)
{
cout<<endl<<"Number is not a prime number .";
break;

}}

return i;
}
int show(int i,int prime){
    if(i==prime)
{
    cout<<endl<<"Number given is a prime number ";
}
return 0;
}
int main()
{
system("cls");
int prime,i;
cout<<"enter the number to check whether its prime or not =";
cin>>prime;
i=primee(prime);
show(i,prime);
return 0;
}



