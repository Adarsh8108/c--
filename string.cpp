#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
 
//  string aa;
//  getline(cin,aa);
// cout<<endl<<endl<<aa;
// // append = joing two
 string s1="fami";
 string s2="ly";
cout<<s1 +s2<<endl;
cout<<"or ";
string s3=s1+s2;
cout<<endl<<s3;
cout<<endl<<s3[5];
s3.clear();
cout<<s3<<endl;
cout<<s2.compare(s1)<<endl;
s1='aa';
s2='aa';
cout<<s2.compare(s1)<<endl;
// both are equal so 0

s1.clear();
s3.clear();
s2.clear();
cout<<s1<<endl<<s2<<endl<<s3;
s1="adarsh_panddey";
// earase (starting index of letter jho delete karni hai  ,lenth kitni delete karni hai )
cout<<s1;
// s1.erase(3,3);
// cout<<endl<<s1;
cout<<endl<<s1.find("sh")<<endl;// will show the index of starting letter typed in stirng




 
 cout<<endl;
 cout<<s1.insert(4,"_l0L_");
 cout<<endl<<s1.size()<<endl;
 cout<<s1.length()<<endl;
 for(int i=0;i<s1.length();i++)
 cout<<endl<<s1[i]<<endl;
 // substr-substring (starting index of letter jho creaate karni hai  ,lenth kitni create karni hai 

cout<<endl<<s1.substr(5,3)<<endl;
// important :::::: string to int -only if string contains no. and letter (e)-denotes the 10 to the power because are should be in the  string 
string   s5="888";
int a=stoi(s5);
cout<<endl<<a;
// to convert int to string : to_string(x);
int x=786;
cout<<endl<<to_string(x)+"2";
//appending addint 2 charaters as string run seee how its output :7862;
string s6="fdkjwovneoekovmetoncsfmoroucapzx.vnrowpqwesdfghro";
sort(s6.begin(),s6.end());
cout<<endl<<s6;




 
 
 
 
 
 
 
 
    return 0;
}