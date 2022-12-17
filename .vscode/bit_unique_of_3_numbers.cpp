
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <conio.h>
using namespace std;

int getbit(int arry[], int j, int i)
{
    return ((arry[j] & (1 << i)) != 0);
}
int result(int ans, int i)
{
    return ((ans | (1 << i)));
}
void unique(int arry[], int n)
{
    
    int ans=0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getbit(arry, j, i))
            {
                /* code */
                sum++;
            }

            /* code */
        }
        if (sum % 3 != 0)
        {
           
            ans = result(ans, i);
        }


    }
    cout<<ans;
}

int main()
{
    system("cls");
    int n;
    cin >> n;
    cout << endl
         << "enter the array ";
    cout << endl;
    int arry[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arry[i];
    }
    unique(arry, n);

    return 0;
}