#include<iostream>
using namespace std;
int main(){

    int poctmon=3200;
     for(int i=0;i<=30;i++)
     {
        if(i%2==0)
        {
            continue;


        }
       
        poctmon=poctmon-200;
        cout<<i<<"   = go out today     "<<poctmon<<endl;
 if (poctmon==0)
{
    break;
}
     }



for (int i=1;i<=100;i++)
{
    /* code */
    if(i%3==0)
{
    continue;
}    cout<<i<<"   ";
}

return 0;
}