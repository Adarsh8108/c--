#include<iostream>

using namespace std;
 
 int main(){
    system('cls');
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
 cout<<endl<<"Enter the number to be finded :";
 int k;
 cin>>k;
 bool  aa=false;
 int q=a-1,w=0;
 while (q>=0 || w<n)
 {
if(arr[w][q]==k){
bool aa=true;
cout<<endl<<w<<","<<q<<endl;

}
// conditon     ?  Yes: no;
arr[w][q]>k ? w++:q--;

 }
 if(aa==true){
    cout<<endl<<"the no has founded ";

 }
else{
    cout<<endl<<"false"
}


    return 0;
 }