#include<iostream>


using namespace std;

int main()
{
system("cls");
int no;

cout<<"enter the size of array ";

cin>>no;
cout<<"enter the elements of array:"<<endl;
int array[no];

for( int i=0;i<=no-1;i++)
{
    cin>>array[i];

}
cout<<endl;
cout<<"enter the key";
int key;
cin>>key;
   int st=array[0];
    int end=array[no-1];
while(st>end){
   int  mid=(st+end)/2;
 if(key==mid){
    cout<<"done";
    break;

 }
 else if(key<mid){
end=mid-1;

 }else if(key>mid){
    st=mid+1;
 }

}


return 0;
}

