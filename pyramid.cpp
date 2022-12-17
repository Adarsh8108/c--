#include<iostream>
#include<complex.h>
#include<string>
#include<float.h>
#include<stdlib.h>

using namespace std;
int main()







































{
system("cls");
int i,j,n;
cout<<"Enter the Number =";
cin>>n;

cout<<endl<<" print Half Pyramid Pattern using Stars"<<endl;

for(i=1;i<=n;i++)
{


for(j=1;j<=i;j++)
{
cout<<"* ";
}

cout<<endl;
}

cout<<endl<<" Print an Inverted Half pyramid"<<endl;

for(i=n;i>=1;i--)
{


for(j=1;j<=i;j++)
{
cout<<"* ";
}

cout<<endl;
}
cout<<endl;
cout<<endl;


cout<<endl<<" Print Half Pyramid after 180 degree rotation"<<endl;
for(i=1;i<=n;i++)
{

for( int k=n-1;k>=i;k--)
{

    cout<<"  ";
}
for(j=1;j<=i;j++)
{
cout<<"* ";
}
cout<<endl;
}
cout<<endl<<" Print Half Pyramid using numbers"<<endl;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<j<<" ";
}
cout<<endl;
}
for(i=n;i>=1;i--)
{
for(j=1;j<=i;j++)
{
cout<<j<<" ";
}cout<<endl;
}
cout<<endl<<" Print Half Pyramid using numbers - 2"<<endl;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<i<<" ";
}
cout<<endl;
}
cout<<endl<<" Print Inverted Half Pyramid using numbers - 2 it is diffferent"<<endl;
for(i=1;i<=n;i++)
{
for(j=1;j<=n+1-i;j++)
{
cout<<i<<" ";
}cout<<endl;
}
cout<<endl<<" Print Floyd's Triangle"<<endl;
int k=1;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++){
cout<<k++<<" ";
}
cout<<endl;
}
cout<<endl<<"Print 0-1 pattern "<<endl;
for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
if((i+j)%2==0)
{
cout<<"1 ";
}
else{
cout<<"0 ";
}
}
cout<<endl;
}
cout<<endl<<" Print pallendroma"<<endl;
for(i=1;i<=n;i++)
{
for( int g=1;g<=n-i;g++)
{
cout<<"   ";
}
for( int j=0;j<=i-1;j++)
{
cout<<i-j<<"  ";
}
for( int l=2;l<=i;l++)
{
cout<<l<<"  ";
}
cout<<endl;
}
cout<<endl<<" Print Diamond using Stars : Given n, print diamond with 2*n rows."<<endl;
for(i=1;i<=n;i++)
{
for( int g=1;g<=n-i;g++)
{
cout<<"  ";
}
for( int j=1;j<=1+(i-1)*2;j++)
{
cout<<"* ";
}
cout<<endl;
}
for(i=n;i>=1;i--)
{
for( int g=1;g<=n-i;g++)
{
cout<<"  ";
}
for( int j=1;j<=1+(i-1)*2;j++)
{
cout<<"* ";
}
cout<<endl;
}
cout<<endl<<" Print hollow Diamond using Stars : Given n, print diamond with 2*n rows."<<endl;
for(i=1;i<=n;i++)
{
for( int g=1;g<=n-i;g++)
{
cout<<" ";
}
for( int j=1;j<=1+(i-1)*2;j++)
{
if (j==1 || j==1+(i-1)*2)
{
    cout<<"*";

}else{
    cout<<" ";
}
}
cout<<endl;
}
for(i=n;i>=1;i--)
{
for( int g=1;g<=n-i;g++)
{
cout<<" ";
}
for( int j=1;j<=1+(i-1)*2;j++)
{
if (j==1 || j==1+(i-1)*2)
{
    cout<<"*";

}else{
    cout<<" ";
}
}

cout<<endl;
}


cout<<endl<<" Print Hollow Diamond Inscribed in a Rectangle"<<endl;
for(i=1;i<=n;i++)
{
for( int g=1;g<=n-i;g++)
{
cout<<"* ";
}
for( int j=1;j<=1+(i-1)*2;j++)
{
if (j==1 || j==1+(i-1)*2)
{
    cout<<"* ";

}else{
    cout<<"  ";
}
}for( int g=1;g<=n-i;g++)
{
cout<<"* ";
}

cout<<endl;
}
for(i=n;i>=1;i--)
{
for( int g=1;g<=n-i;g++)
{
cout<<"* ";
}
for( int j=1;j<=1+(i-1)*2;j++)
{
if (j==1 || j==1+(i-1)*2)
{
    cout<<"* ";

}else{
    cout<<"  ";
}
}
for( int g=1;g<=n-i;g++)
{
cout<<"* ";
}
cout<<endl;
}

cout<<endl<<"Print Solid Rhombus\n"<<endl;
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
    cout<<" ";
}
for(k=1;k<=n;k++){

    cout<<"*";
}
cout<<endl;
}
cout<<endl<<"Print Hollow Rhombus"<<endl;\
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
    cout<<"  ";
}
if(i==1 || i==n){


for(k=1;k<=n;k++){

    cout<<"* ";
}

}
else{
for(k=1;k<=n;k++){
if(k==1 || k==n){
    cout<<"* ";
}else{
    cout<<"  ";}
}}
cout<<endl;
}
cout<<endl<<"Pyramid pattern for Numbers "<<endl;

for(i=1;i<=n;i++){
for(j=1;j<=n-i;j++){

cout<<" ";

}
for(j=1; j<=i;j++){
    cout<<i<<" ";
}cout<<endl;
}


cout<<endl<<"Pyramid pattern for Numbers "<<endl;
for(i=1;i<=n;i++){
for(j=1;j<=n-i;j++){

cout<<" ";

}
for(j=1; j<=i;j++){
    cout<<j<<" ";
}cout<<endl;
}

cout<<endl<<"############BUTTERFLY   "<<endl;
for(i=1;i<=n;i++){

for(j=1;j<=i;j++){
cout<<"*";
}
for(j=1;j<=2*(n-i);j++){
cout<<" ";

}
for(j=1;j<=i;j++){
cout<<"*";

}
cout<<endl;
}
for(i=n;i>=1;i--){

for(j=1;j<=i;j++){
cout<<"*";

}
for(j=1;j<=2*(n-i);j++){
cout<<" ";

}
for(j=1;j<=i;j++){
cout<<"*";

}

cout<<endl;
}



cout<<endl<<"############BUTTERFLY  HOLLOW@@@@@@@ "<<endl;

for(i=1;i<=n;i++){

for(j=1;j<=i;j++){
    if(j==1 || i==j){
        cout<<"*";
    }else{
cout<<" ";
    }
}
for(j=1;j<=2*(n-i);j++){
cout<<" ";

}
for(j=1;j<=i;j++){
    if(j==1 || i==j){
        cout<<"*";
    }else{
cout<<" ";
    }
}
cout<<endl;
}
for(i=n;i>=1;i--){

for(j=1;j<=i;j++){
    if(j==1 || i==j){
        cout<<"*";
    }else{
cout<<" ";
    }
}
for(j=1;j<=2*(n-i);j++){
cout<<" ";

}
for(j=1;j<=i;j++){
    if(j==1 || i==j){
        cout<<"*";
    }else{
cout<<" ";
    }
}

cout<<endl;
}


cout<<endl<<"zig zag pattern "<<endl;

for(i=1;i<=3;i++){
    for(j=1;j<=n;j++){
if((i+j)%4==0 || (i==2 && j%4==0 )){
  cout<<" *" ;
   }
   else{
cout<<"  ";

   }

}
cout<<endl;
}
return 0;
}
