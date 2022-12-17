#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<conio.h>
using namespace std;
    
    
 int  tilescount(int n) {
    if(n==0){
        return 0;

    }
    if(n==1){
        return 1;
    }
    
    return tilescount(n-1)+tilescount(n-2);
 }  
    
    
    
    
    
    
    
    
int main()
{
    int n;
 
 cin>>n;
 cout<<tilescount(n);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}