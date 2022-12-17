
#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<conio.h>
using namespace std;
    
  int sss(int arry[],int n){
    for (int i=0;i<(1<<n);i++){
      cout<<"{";
        for (int  j = 0; j < n; j++)
        {
          




                if(i &( 1<<j)){
                    cout<<arry[j];

                }

            /* code */
        }
        cout<<"}"<<endl;;
    }
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
sss(arry,n);
 cout<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}