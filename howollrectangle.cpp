#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
system("cls");
int i,k,j,n;
cout<<"enter the row =";
cin>>n;
cout<<endl<<"enter the column =";
cin>>k;
for(i=1;i<=n;i++)
{
if(i==1 ||i==n){
for(j=1;j<=k;j++)
{
cout<<"* ";
}
}
else{
cout<<"* ";
for(j=1;j<=k-2;j++)
{
cout<<"  ";
}
cout<<"* ";
}
cout<<endl;
}
return 0;
}



 