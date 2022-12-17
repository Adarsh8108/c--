#include<iostream>



using namespace std;
int main()
{
system("cls");
int no;
cout<<"Enter the number :";
cin>>no;
int array[no];
cout<<"Enter the values:";
for (int i =1;i<=no;i++){
    cin>>array[i];

}
int sum=0;
int maxi=0;
int mini=1000;
for (int i =1;i<=no;i++){
    if(maxi<array[i]){
        maxi=array[i];
    }
if(mini>array[i]){
    mini=array[i];
    }
}
cout<<"The smallest  no is ="<<mini<<endl;
cout<<"The  biggest no is ="<<maxi<<endl;
for (int i =1;i<=no;i++){
    sum=sum+array[i];

}
cout<<"The sum of number is ="<<sum;
return 0;
}