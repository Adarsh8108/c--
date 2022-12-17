
#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<conio.h>
using namespace std;
    
    
    
   bool sorted(int arry[],int n,int temp) {
    

if (n==1)
{
    return true;

    /* code */
}


        if ((arry[temp-n]<arry[temp-n+1] &&  sorted(arry,n-1,temp))==true)
        {
            return true;
            /* code */
        }else
        {
            return false;
        }
        



   }
    
    
    
    
    
    
    
int main()
{
    int n=9;
    
    int arry[n]={1,2,3,4,0,6,7,8,9};
   int  temp=n;
cout<<sorted(arry,n,temp);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}