#include<iostream>

using namespace std;
int main()
{
int no;
cin>>no;
int arr[no];
for(int i=0;i<no;i++)
{
cin>>arr[i];
} 
int a=999999;
int minz=a;
const int n=10000  ;
  int arrt[n];
for(int i=0;i<n;i++){
  arrt[i]=-1;
}
for(int i=0;i<no;i++){
  if( arrt[arr[i]]!=-1 )
  {
 minz=min(minz,arrt[arr[i]]);
  }else{
    arrt[arr[i]]=i;
  }
          
}

cout<<endl<<minz+1;
return 0;
}

