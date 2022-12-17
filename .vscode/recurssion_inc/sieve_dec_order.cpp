#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<conio.h>
using namespace std;
    
    
    int dec(int n){
        cout<<n<<endl;
        if(n==0){
            return 0;
        }
        return dec(n-1);

    }
    
  int inc(int n){
        
        if(n==0){
            cout<<n<<endl;

            return n;
        }
      int   no=inc(n-1);
      cout<<n<<endl;
      return 0;

    }
    

    
    
    
    
    
int main()
{
 
 
 
 
 int n;
 cin>>n;
 cout<<endl;
dec(n);
inc(n);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}