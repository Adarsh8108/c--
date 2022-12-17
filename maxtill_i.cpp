#include<iostream>



using namespace std;
int main()
{
system("cls");
int no;
cin>>no;
int array[no];
for(int i=0 ;i<no;i++){
    cin>>array[i];

}
cout<<" max till i"<<endl;

int mx=-19999999;
for( int i=0;i<no;i++){
    mx=max(mx,array[i]);
cout<<mx<<endl;
}
return 0;
}