#include<iostream>
#include<conio.h>
#include<math.h>
#include<vector>
#include<algorithm>
#include<complex.h>
#include<float.h>
#include<memory.h>   
#include<windows.h>
using namespace std;
int main()
{


    int n1,n2;
    char op;
cin>>n1>>n2;
cout<<"op";
cin>>op;

    switch (op)
    {
    case 'a':
      cout<<n1+n2;


        break;                                                                       
    
    default:
    cout<<n1*n2;
    
        break;
    }
}

