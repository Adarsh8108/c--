#include<iostream>
#include<complex.h>
#include<string>
#include<float.h>
#include<stdlib.h>

using namespace std;
int main()
{
system("cls");
int n;
float  k,m=1,a,i;
cout<<"Enter the text size in no greater than 4. = ";
cin>>n;
a=n-1;

    
do{

if(m!=1){
    
for(i=1; i<=(a); i++)
{
    for( float  j=1;j<=a-i;j++){

cout<<" ";
} 
cout<<"*";
if(i==a/2 ){

    if(n%2==0){
        for(float  h=1;h<=a-1;h++){
        cout<<"*";
    }
    }else{
    for(float  h=1;h<=a;h++){
        cout<<"*";
    }}
}else{
for(float  h=1;h<=2*i;h++)
{
cout<<" ";
}}
cout<<"*"; 
cout<<"  ";
// drawing the letter D
for( float  j=1;j<=a-i;j++){

cout<<" ";
} 






//
cout<<endl;

m++;
}
}
else{

    for( float  j=1;j<=a;j++){

cout<<" ";
    }
    cout<<"**"<<endl;
    // drawing the letter D 
    for( float  j=1;j<=6;j++){

cout<<"*";
} 
    m++;
}
}
while(m<=n);




return 0;
}



