#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
    
    

    
    
int main()
{
 
 cout<<"a"-"A"<<endl;
 // upper case doing 
  string s1="adfdsfkjdownowonef";
 for(int i=0;i<s1.length();i++){
s1[i]=s1[i]-32;

 }
s1="SSAJFDKDASFSKAFJ";
 cout<<endl<<s1;

 for(int i=0;i<s1.length();i++){
s1[i]=s1[i]+32;

 }

 
 cout<<endl<<s1;
  string s4="sadfklklsdkl";
  cout<<s4<<endl;
transform(s4.begin(),s4.end(),s4.begin(),::toupper);
cout<<s4<<endl;
 
 
 
transform(s4.begin(),s4.end(),s4.begin(),::tolower);
cout<<s4<<endl;
//descending order sorting the 
 string sd="9493034";
 sort(sd.begin(),sd.end(),greater<int>());
 cout<<sd;
 
 // to count the biggest repeating letter in c++
 cout<<endl;
string a="kdfjlddsdddddddddddddskfkjoin";
int freq[26];
for (int  i = 0; i < 26; i++)
{
    freq[i]=0;
    /* code */
}

for (int  i = 0; i < a.size(); i++)
{
    /* code */
  freq[a[i]-'a']++;
}
int great=0;
char len;
 for (int  i = 0; i < 26; i++)
 {

if (freq[i]>great)
{
    /* code */
    great=freq[i];
    len=i+'a';
}

 }
 cout<<great<<"  "<<len<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}