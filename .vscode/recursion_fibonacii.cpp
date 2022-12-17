
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <conio.h>
using namespace std;

 int fibonaci(int n){
    if (n==0 || n==1)
    {
        return n;
        /* code */
    }
    
    return fibonaci(n-1)+fibonaci(n-2);
}
int main()
{
int n ;
cin>>n;
cout<<fibonaci(n);
    return 0;
}