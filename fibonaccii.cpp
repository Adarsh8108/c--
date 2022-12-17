#include<iostream>

#include<complex.h>
#include<string>
#include<float.h>
#include<stdlib.h>

using namespace std;
int fibo(int no){
cout<<"Enter the number =";
cin>>no;
return no;
}
int main()
{

int n=0,no,t1=0,t2=1,tlast=0;

no=fibo(n);

for(int i=1;i<=no;i++)
{
    tlast=t1+t2;
    t1=t2;
    t2=tlast;
    cout<<endl<<tlast;
}
cout<<endl<<endl<<"arryquedtion cpp playing "<<endl;


return 0;
}



