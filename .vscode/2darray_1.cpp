#include<iostream>



using namespace std;
int main()
{
system("cls");
int n,a;
cout<<"Enter the rows and column of the array"<<endl;
cin>>n>>a;
// taking the input
int arr[n][a];
for(int i=0;i<n;i++){
    for(int j=0;j<a;j++){
        cin>>arr[i][j];
        
    }
}
// printing the input 
cout<<endl<<endl<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<a;j++){
    cout<<arr[i][j]<<" ";

    }
    cout<<endl;
    }
    cout<<endl;
    // find  a number
bool flag=false;
 int k;
 cin>>k;
 for(int i=0;i<n;i++){
    for(int j=0;j<a;j++){
        if(arr[i][j]==k){
            flag=true;
            cout<<endl;
            cout<<i+1<<" "<<j+1<<endl;
            
        }
    }
 }
 if(flag=true){
    cout<<"The given no is matched";

 }else{
    cout<<"the given no is not matched";
 }

return 0;
}

