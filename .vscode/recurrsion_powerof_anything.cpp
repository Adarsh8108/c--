#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <conio.h>
using namespace std;

 int power(int n,int p){
    if(p==0){
        return 1;
    }
return n*power(n,p-1);
}
// in recursion simple question 
// do this 
// 1) write the form in note book
// 2) find and then write the chota expresion on computer
// 3) find the change and put like p-1 in the formula 
// 4) the n* of n+ next expresion will be the functon itself so dont think just change its changing variable like p
// 5) make change varialb (p) in this p=0 and find n and eg when p=0 then n=1 return that 


int main()
{int n,p;
    cout<<"give the base fo no then its power like 2 to the power 3 :";
    cin>>n;
    cin>>p;
    
cout<<power(n,p);
        return 0;
}