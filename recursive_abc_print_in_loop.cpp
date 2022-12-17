// In this we are doing some extra thing "adding some ascii code of letters in abc "/
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <conio.h>
using namespace std;

void substring_print(string s, string ans)
{

    if (s.length() ==0)
    {
        cout << ans << endl;
        return;
     
    }
    char ch=s[0];
   int code=ch;
   // will store the code the of ascii of ch ;
   string rest=s.substr(1);
   substring_print(rest,ans);
   substring_print(rest,ans+ch);
   substring_print(rest,ans+to_string(code));
}
// to string will convert int to string ;

int main()
{

    substring_print("abc", "");

    return 0;
}