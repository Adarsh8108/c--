#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
system("cls");
int no;
SetTextColor ;
cout <<"Enter the size of array =";
cin>>no;
int array[no];
cout<<"enter the element of the array  :";

for(int i=0;i<no;i++){
    cin>>array[i];
}
cout<<endl;
for(int c=1;c<no;c++){
for(int i=0;i<=no-c;i++){
if(array[i]>array[i+1]){
int temp=array[i];
array[i]=array[i+1];
array[i+1]=temp;
}
}
}
cout<<endl<<"The sorted array "<<endl;

for(int i=0;i<no;i++){
    cout<<array[i]<<"  ";
}
return 0;
}

