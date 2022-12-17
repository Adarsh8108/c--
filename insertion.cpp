#include<iostream>



using namespace std;
int main()
{
system("cls");
int no;
cin>>no;
cout<<"Enter the elements of array ";
int arr[no];
for(int i=0;i<no;i++){
    cin>>arr[i];

}
for(int i=0;i<no;i++){
    int counter=arr[i];
int j=i-1;
while(arr[j]>counter && j>=0){
arr[j+1]=arr[j];
j--;

}
arr[j+1]=counter;

}
cout<<endl;
for(int i=0;i<no;i++){
    cout<<arr[i];
cout<<"  \t";
}



return 0;
}

