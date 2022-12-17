#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
    
    
    int getbit(int no,int i)
    {
        return ((no&(1<<i))!=0);
        

    }
    
    
    // important notice:::::
    // this  is very useful
    // note this ::::::::::::::::::::::::::::::::::::::::
    // when we use the operator like 
    // left shift <<
    // right shift >>
    // then it is used like this
    // ( no that has to be operated) >>( how much operation in to be done)/
    // set=3
    // eog if I write 1 << set ;
    // the no . (0001) will right shifted by 3 
    // the result is will be like 0100;
    
    
    
    
    
int main()
{
    int no;
cin>>no;
int i;
cin>>i;
cout<<endl<<getbit(no,i);



 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}