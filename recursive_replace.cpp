#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<conio.h>
using namespace std;
    
    
    
    
    void strin(string s)
    {
        if (s.length()==0)
        { return;
            /* code */
        }
        if (s[0]=='p' && s[1]=='i')
        {
            cout<<"3.14";
            strin(s.substr(2));
            // substr will send all string rest first 2 characters;

            /* code */
        }else{
            cout<<s[0];
            strin(s.substr(1));
        }
        
        
        
    }
    
    
    
    
    
int main()
{
 
 
 string s="pixxxxpiccddfpipicapifpfdpdifdfiippdfippi";
 cout<<s<<endl;
 strin(s);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}