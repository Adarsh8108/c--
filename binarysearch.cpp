#include<iostream>
using namespace std;

int main(){

int no;
cin>>no;
int arrey[no];

for(int i=1;i<=no;i++){
    cin>>arrey[i];
}int key;
cout<<"enter the key =";
cin>>key;
for(int i=1;i<=no;i++){
    if (key==arrey[i])
    { 
        cout<<endl<<i;
    }
}

}