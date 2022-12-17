#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cin>>n;
    int *p=new int();
    *p=20;
    cout<<*p;
    delete(p);
    p=new int[n];
    for(int i=0;i<n;i++){
    cin>>p[i];
    }
        for(int i=0;i<n;i++){
  cout<<p[i];
    
    }

delete []p;
p=NULL;
return 0;
 }