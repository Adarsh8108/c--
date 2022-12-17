#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<conio.h>
using namespace std;
    
    
    
    
    
    
    
    
    
    int hello(int n ,int a,int b){
        int z=n/a;
        int l=n/b;
        int k=n/(a*b);
        return (z+l-k);
    }
    
int main()
{
 
 // if you multiply any two numbers eg 5
 // or 6 the number you get is 30 
 // means that the numbers that are divisble by 30 are divisble by 5 and 6 both
 // to get how many no are divsible by 5 form 1 to 100
 // simple divide 100/5;
// we are trying to get the numbr's that are divisible by eg 5 and 6 between 100 and 1 so they are many nos reptead btwen these 1 to 100 so too remove them we shd subtract them shown in code.  
 
 int in,a ,b ;
 cin>>in;
  cin>>a;
  cin>>b;
 cout<<hello(in,a,b);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}