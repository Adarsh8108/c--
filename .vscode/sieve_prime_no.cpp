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
    cout << endl;

    int arry[1000];
    for (size_t i = 0; i < 1000; i++)
    {
        /* code */  arry[i] = {0};
    }
    for (int i = 2; i <= n; i++)
    {
        if (arry[i] == 0)
        {
            for (int f = i * i; f < n; f = f + i)
            {
                arry[f] = 1;
            }
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (arry[i] == 0)
        {

            cout << i << endl;
        }
        /* code */
    }

    return 0;
}
