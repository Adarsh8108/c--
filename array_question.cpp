#include<iostream>
using namespace std;
int main(){
    int n;
    // how many times an is_arithmetic difference between elements of  array repeted 
    
    cout<<"the array size :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    
    int curr=2, stor[n ], value,t=0;
   stor[0]=arr[1]-arr[0];
    for(int j=2;j<n;j++){
      stor[j-1]=arr[j]-arr[j-1];
       if (stor[j-1]==stor[j-2]){
curr++;


       }
       if(stor[j-1]!=stor[j-2] || j==n-1 ){
        if (curr>t){
            t=curr;
            curr=2;
        }else{
  curr=2;
        }
       }
    }
    cout<<endl<<t;
}