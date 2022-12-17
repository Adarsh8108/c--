
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <conio.h>
using namespace std;

int main()
{

    float a, b, c;

    cout << "put the values getting right hand side zero." << endl;
    cout << "put the values of a ,b and c  of the quadratic equation " << endl;
    cin >> a >> b >> c;
    float n;
    n = b * b - 4 * a * c;
   int  i;
    if (n > 400)
    {

        for (i; i <= n / 20; i + 1)
        {
            if (i * i == n)
            {
                break;
            }
        }
    }
    else
    {
        for (i; i <= n / 2; i + 0.1)
        {
            if (i * i == n)
            {
                break;
            }
        }
    }

    float x = ((-b + i) / (2 * a)), t = ((-b - i) / (2 * a));
    cout << endl << x << endl<< t;

    return 0;
}