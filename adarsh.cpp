#include<iostream>
#include<complex.h>
#include<string>
#include<float.h>
#include<stdlib.h>
#include<ctime>
#include<conio.h>
using namespace std;



void sleep(float seconds){
    clock_t startClock = clock();
    float secondsAhead = seconds * CLOCKS_PER_SEC;
    // do nothing until the elapsed time has passed.
    while(clock() < startClock+secondsAhead);
    return;
}
int main()
{
system("cls");
float  k,i;
int n,g;
cout<<"Enter the text size  greater than.3 = ";
cin>>n;
g=n/2;
sleep(2.0);
for(i=0; i<=(n); i++)
{
    // aaaaaaaaaaaaaaaaa
    for( float  j=0;j<=n-i;j++){

cout<<" ";
} 
cout<<"*";
if(i==n/2 ){

    if(n%2==0){
        for(float  h=0;h<=n;h++){
        cout<<"*";
    }
    }else{
    for(float  h=0;h<=n-1;h++){
        cout<<"*";
    }}
}else{
for(float  h=0;h<=2*i;h++)
{
cout<<" ";
}}
cout<<"*"; 
cout<<"  ";





for( float  j=1;j<=n-i;j++){

cout<<" ";
}
//  dddddddddddddd
sleep(0.18);


cout<<"*";
if(i<=n/2){
for(int j=0;j<i;j++){
    cout<<"  ";
}}

else{
for(int j=n-i;j--;j>=0)
{
cout<<"  ";


}



}



cout<<"*";
if(i<=n/2){
    for(int j=(n/2)-i;j--;j>=1)
{
cout<<"  ";


}

}else
{
    if(n%2==0){
    for(int j=1;j<=i-(n/2);j++){
    cout<<"  ";
}}else{
    for(int j=2;j<=i-(n/2);j++){
    cout<<"  ";
}
}

}


// ddddddddddd
sleep(0.18);
    // aaaaaaaaaaaaaaaaa
    for( float  j=0;j<=n-i;j++){

cout<<" ";
} 
cout<<"*";
if(i==n/2 ){

    if(n%2==0){
        for(float  h=0;h<=n;h++){
        cout<<"*";
    }
    }else{
    for(float  h=0;h<=n-1;h++){
        cout<<"*";
    }}
}else{
for(float  h=0;h<=2*i;h++)
{
cout<<" ";
}}
cout<<"*"; 
cout<<" ";





for( float  j=1;j<=n-i;j++){

cout<<" ";
}
cout<<" ";
// rrrrrrrrrrrrrrrrr
sleep(0.18);

if(i==g || i==0){
    for(int j=1;j<=n/2;j++){
   cout<<"* ";
   }
   cout<<"  ";
}
if(0<i && i<g){
cout<<"*";

for(int j=1;j<=(n/2)-1;j++)
{
   cout<<"  ";
   }
   cout<<"*";
cout<<"  ";

}
int t=0,y=1;
if(i>g){
    cout<<"*";



for(int j=i-t;j>=2;j--){
cout<<" ";
t+2;
}
cout<<"*";
for(float j=n-i;j>=1;j--){
    cout<<" ";
}
if(n%2==0){
    cout<<" ";
}
}


cout<<" ";

// rrrrrrrrrrrr
// ssssssssss
// ssssssssss
if(i==0 || i==g || i==n){
    cout<<"  ";
    for( int j=1;j<=g;j++)
    {
        cout<<" *";
    }
    cout<<"  ";

}
if(0<i && i<g){
cout<<" *";

for( int j=1;j<=g;j++)
    {
        cout<<"  ";
    }
    cout<<"  ";
}

if(i>g && i<n)
{
    cout<<"  ";

for( int j=1;j<=g;j++)
    {
        cout<<"  ";
    }
    cout<<" *";
}

cout<<"  ";







// ssssssssssss
sleep(0.18);

//hhhhhhhhhh

if(i==g){
    
    for( int j=1;j<=n+2;j++)
    {
        cout<<"*";
    }
}
else{
cout<<"*";

for( int j=1;j<=n;j++)
    {
        cout<<" ";
    }
    cout<<"*";


}














//hhhhhhhhhhhhh

cout<<endl;

}
getch();
return 0;
}
