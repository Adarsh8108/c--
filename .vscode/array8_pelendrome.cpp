#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int n ;
cin>>n; 

char arr[n];
cin>>arr;
bool aa=true;
for(int i=0;i<=n/2;i++){
    if(arr[i]==arr[n-i-1]){kk
        
    }else
    {
        aa=false;
    }
    
}
cout<<endl;
if(aa==false){
    cout<<"the word is not pellendrome\n";

}else{
    cout<<"the  word  is pallendrome ";
}










return 0;



}