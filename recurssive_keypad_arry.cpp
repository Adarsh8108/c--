
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <conio.h>
using namespace std;
 string keypad[] = {"", "/", "abc", "def", "ghi", "klm", "nop", "pqr", "stu"};
 void keypadoo(string s, string ans)
 {
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];

    string pad = keypad[ch - '0'];
    string ros = s.substr(1);
    for (int i = 0; i < pad.length(); i++)
    {
        keypadoo(ros, ans + pad[i]);
    }
 }

 int main()
 { keypadoo("24","");

    return 0;
}