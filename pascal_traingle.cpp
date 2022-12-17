#include<iostream>


using namespace std;
int fact(int no){
    int a=1;
    for(int i=1;i<=no;i++){
        a=a*i;
    }
    return a;
}
int main()
{
system("cls");
int no;
cout<<"Enter the number =";
cin>>no;
cout<<endl;

for(int i=0;i<=no;i++){
    for(int j=0;j<=i;j++)
    {
cout<<fact(i)/(fact(i-j)*fact(j))<<" ";

    }cout<<endl;

}
return 0;
}

