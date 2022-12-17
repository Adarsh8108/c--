

#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<conio.h>
using namespace std;
    
    
    
    int powerof1(int n){
        int i=0;
        while (n>0)
        {
            n=n & (n-1);
            i++;

        }
        return i;
    }
    
    
    
    
    
    
    
int main()
{
 
 cout<<"how are you \n";


 int n;
 cin>>n;
cout<<endl<<powerof1(n);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}