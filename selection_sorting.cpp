#include<iostream>
#include<conio.h>
#include<math.h>


using namespace std;
int main()
{
system("cls");
int no;
cout<<"Enter the size of array =";

cin>>no;
int arrey[no];
cout<<"enter the array =";

for(int i=0;i<=no-1;i++){
    cin>>arrey[i];
}
cout<<endl;
int i=0;
for( i=0;i<=no-1;i++)
{
for(int j=i+1;j<=no;j++){
if(arrey[i]>arrey[j]){
int temp=arrey[i];
arrey[i]=arrey[j];
arrey[j]=temp;


}
}

}
cout<<"the sorted array is "<<endl;
for(int i=0;i<=no-1;i++){
    cout<<arrey[i]<<" , ";
}
return 0;
}

