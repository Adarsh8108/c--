#include<iostream>


using namespace std;
int fact(int no)
{
int i;
int n=1;
    for( i=1;i<=no;i++){
n=n*i;
    }
    return n;
}
bool check(int no)
{
if (no%2==0)
{return true ;}
return false;
}
int main()
{
system("cls");
int no;
cin>>no;
int r;
cin>>r;
int a;
a =no-r;
 int t=fact(no);
 cout<<t<<endl;

 int l=fact(a);
 cout<<l<<endl;
 
 int n=fact(r);
 cout<<n<<endl;

 int g=t/(l*n);
cout<<endl<<g;
if(true==check(no)){
    cout<<endl<<"the number given is even no.";

}

return 0;
}
