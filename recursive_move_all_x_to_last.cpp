
#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<conio.h>
using namespace std;
    
    
    
    string movetolast(string s){
        if(s.length()==0){
            return "";
        }
      char storevariable=s[0];
      string reststring=movetolast(s.substr(1));
         if(storevariable=='x'){
            return reststring+storevariable;
         }
         return storevariable+reststring;
    }
    
    
    
    
    
    
    
int main()
{
 
 string s="aasxxxxd dkxxx dlx dlfdf xljdfd ddsosijv vx xx sdfjfsdlfs xx jdlf jx";
 cout<<s<<endl<<movetolast(s);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}