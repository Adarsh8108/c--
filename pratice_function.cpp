#include<iostream>


using namespace std;
int main()
{
system("cls");
int no;

cin>>no;
float  sum=no*(no+1)/2;
cout<<"the sum of n natural numbers = "<<sum;
cout<<endl<<"Enter the triplet of pythagorus =";
int a ,b, c;
cin>>a>>b>>c;
if(a*a==b*b+c*c){
    cout<<"This is a phythagorus";
}
if(b*b==a*a+c*c){
    cout<<"This is a phythagorus";
}
if(c*c==b*b+a*a){
    cout<<"This is a phythagorus";
}
if(a*a!=b*b+c*c && b*b!=a*a+c*c && c*c!=b*b+a*a ){
    cout<<"this is not a phythagorean triplet";

}

cout<<endl;
int n,v=0;
cin>>n;
for(int a=1;a<=n;a++)
{
    
    for(int c=1;c<=n;c++){

for(int b=1;b<=n;b++){
    if(a*a==b*b+c*c){
    cout<<endl<<a<<" ,"<<b<<" ,"<<c;
    goto LINE;
}


    }


   
    }
   LINE:
    {

    }
}
return 0;
}

