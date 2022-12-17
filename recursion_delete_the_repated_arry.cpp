#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<conio.h>
using namespace std;
    
    
    
 string  replace( string ss){
if (ss.length()==0)
{
    return "";

    /* code */
}

char ch=ss[0];
string k=replace(ss.substr(1));
if (ch==k[0])
{
   return k;
    /* code */
}
return ch+k;


 }
    
    
    
    
    
    
    
int main()
{
 
 
 
 
 string ss;
 getline(cin,ss);
 cout<<replace(ss);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}