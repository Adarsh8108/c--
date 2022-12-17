
#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<conio.h>
using namespace std;
    
    void substring(string s,string ans){
            if (s.length()==0)
            {
                cout<<ans<<endl;
                return;
                /* code */
            }
            char k=s[0];
            string rest=s.substr(1);
            
        substring(rest,ans);
        substring(rest,ans+k);
        

             
    }
    
    
    
    
    
    
    
    
    
int main()
{
 
string ss="ABCDEFEHG";
system("cls");
cout<<endl<<endl;
substring(ss,"");
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}