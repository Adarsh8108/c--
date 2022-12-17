#include<iostream>


using namespace std;
int main()
{
system("cls");
int n;

cin>>n;

float factorial=1;

for(int i=1;i<=n;i++)
{

factorial=factorial*i;


}cout<<endl<<factorial;
return 0;
}



