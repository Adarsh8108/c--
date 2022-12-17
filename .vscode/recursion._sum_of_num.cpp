
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <conio.h>
using namespace std;


int number(int n){
    if(n==0){
    
    
        return 0;
     
    }
    
  return n + number(n-1);
}
int main()
{
    // sum of natural numbers
    int n;
    cin>>n;
    cout<<number(n);

    return 0;
}