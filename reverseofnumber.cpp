#include<iostream>

#include<complex.h>
#include<string>
#include<float.h>
#include<stdlib.h>

using namespace std;
int main()
{int n,no,rem,rev=0;
system("cls");
cout<<"Enter  the  number =";
cin>>no;
int no;
for(int i=0;i<=n;i++){
cout<<"Hello my name is Adarsh Pandey";
rem=n%10;
n=n/10;
rev=rev+rem;
if(n%10==0){

break;
}
}

cout<<endl<<"sum of reverse of Number ="<<rev;
// this is the reverse of the number 

cout<<endl<<"Enter the number =";
cin>>n;
int remainder,reverse=0,j=1;
while(n>0){
remainder=n%10;
reverse=reverse*10+remainder;
n=n/10;

}
cout<<endl<<reverse;
return 0;
}



