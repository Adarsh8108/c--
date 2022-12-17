
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

 int    updatebit(int n ,int i,int value){


return ((n&(~(1<<i)))|(value<<i));
    }

    
int main()
{
 
 
 int n,i,value;
 cin>>n>>i>>value;
 // n=no,position where value to be setted ,value =1,0;
 cout<<updatebit(n,i,value);


 
 
 getch();
    return 0;
}