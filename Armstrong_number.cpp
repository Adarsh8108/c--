#include<iostream>

#include<math.h>
using namespace std;
int main()
{
system("cls");
int no,n;
cout<<"Enter the number +++=";
cin>>no;
n=no;
int lastdi=0,remder=0;
while(n>0)
{
remder=n%10;
int mm;
mm=remder*remder*remder;
cout<<endl<<mm<<endl;
lastdi=mm+lastdi;
n=n/10;

}
if (lastdi==no){
    cout<<" This is a Amrstrong number";
    
}else{
    cout<<"this is not a Amrstrong number"<<endl;
}
return 0;
}

