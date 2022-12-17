
#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<conio.h>
using namespace std;
    
    
    int pairno(int n) {

 
if (n==1)
{
    
    return n;
    /* code */
}

return n+pairno(n-1);
   }
    
    
    
    
    
    
    

int main()
{
 system("cls");
int n;
cin>>n;
cout<<pairno(n);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}