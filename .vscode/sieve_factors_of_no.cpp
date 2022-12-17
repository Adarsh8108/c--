#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<conio.h>
using namespace std;
    
    
    
    
    
    
    
    
    
    
    
int main()
{
 
 
 int n;
 cin>>n;
 int arr[n];
 for (size_t i = 0; i <= n; i++)
 {
    arr[i]=i;
    /* code */

 }
 for (size_t i = 2; i <=n; i++)
 {
    for (size_t j = i*i; j <= n; j=i+j)
    {
        /* code */
        if (arr[j]==j)
        {
            /* code */
            arr[j]=i;
        }
        
        
    }
    
 }
 
 while (n!=1)
 {
    /* code */
    cout<<endl<<arr[n]<<"   ";
    n=n/arr[n];

 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}