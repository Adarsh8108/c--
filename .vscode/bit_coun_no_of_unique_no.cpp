
#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<conio.h>
using namespace std;
    
 int    xxor(int arry[],int n){




int xore=0;
for (size_t i = 0; i < n; i++)
{
    /* code */
    xore=xore^arry[i];
// (^)is use to determine the xor file and 
// xor is complement of both are true then only true its equal to if 
// both are false then only false

}
return xore;






 }



    
    
    
    
    
    
    
    
    
int main()
{
    int n;
    cin>>n;
    cout<<endl<<"enter the array ";
    cout<<endl;
int arry[n];
for (size_t i = 0; i < n; i++)
{
  cin>>  arry[i];

}
cout<<"the unique no wh/ is not repetaed is = "<<xxor(arry,n);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}