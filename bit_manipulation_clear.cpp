
#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
    
    
    
    
  int   clearbit(int n,int i){
return ((~(1<<i))&n);
    }
//     0101
//    0100
//    1011
//    0101
//    0001
   
    
    
    
    
int main()
{
 
 
 
 
 int n,i;
 cin>>n>>i;

 cout<<clearbit(n,i);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}