
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <conio.h>
using namespace std;


int firstocc(int arry[],int n,int key,int i){
    
if (arry[i]==key)
{
    return i;
    /* code */
}
if (i==n)
{
    return -1;
    /* code */
}

return firstocc(arry,n,key,i+1);

}
int lastocc(int arry[],int n,int key,int i){
    if (i==n+1)
    {return -1;}
    
    int restarry=lastocc(arry,n,i+1,key);
    int k=key;
    if(restarry==key){
        return restarry;
    }
    if (arry[i]==key)
{
    return i;
    /* code */
}
 return restarry;

}
int main()
{
int n=7 ;
int arry[7]={1,2,3,2,5,7,9};
 int key=2;
 int i=0;
 // +1 for the easiest to get the arry from  1 ot n :
cout<<"the first occerance is = "<<firstocc(arry,n,key,i)+1;
cout<<endl<<"The last occerance  is = "<<lastocc(arry,n,key,i)+1;
    return 0;
}