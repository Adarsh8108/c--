
#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<conio.h>
using namespace std;
    
    bool powerof2(int n)
    {
return (n && !(n&(n-1)));
// other then case 0 and 1 bool not read n because it save only 1,0 for n&&
// in case of (1) 2 power 0 =2 so its power of 2 let return 1=true
// in case of (0) 2 power anything !=2 so its power of 2 let return 0=false
    }
    
    
    
    
    
    
    
    
    
int main()
{
 
 
 
 int n;
 cin>>n;
 //1=true
 //0=false
 cout<<powerof2(n)<<endl;
 
 //see notes in this to understand carefully
 powerof2(n)==1 ? cout<<"the no is power of 2" : cout<<"tthe  no is not the power of 2 ";
 // if you flip the binary form of any n number form  right most 1 bit to all bits
 // eg 1010=1001
 // then you will get n-1 no for 8 its 7 and any no
 //and every power of 2 like 0010 0100 1000
 //have 1 rigth most in last when you flip them then you get 0001  0011 0111
//  in last you will get 1
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}