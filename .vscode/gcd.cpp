#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rem, a;
    cin>>a;
    while (a!= 0)
    {
        /* code */
        rem=n%a;

        n = a;
        a = rem;
      
    }

cout<<n;
    return 0;
}