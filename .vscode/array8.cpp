#include<iostream>
#include<math.h>

#include<array>
using namespace std;
int main(){

system("cls");
int n;
cin>>n;

 cout<<"enter the array: ";
cin.ignore();

char arr[n+1];

// puting the fxn to ignore the complier the spaces between the words 
//if not putted then complier will store the one word 
// after the spaces it store the next word in the another 
// array


cin.getline(arr,n);
// it wiill store  to the n'th array only n+1'th array will be \0 to detext null.
// that why it is created n+1 
cin.ignore();

int i=0;
int len=0,mx=0;
// store every starting pt st
// store mxa=st  from comparing max length  of the words 
//mxa= starting pt of the big word. 
int st=0,mxa=0;
// put while(1) if you want to out of loop only throught the break;
 while(i!=-1){
    if(arr[i]==' ' || arr[i]=='\0'){
        if(len>mx){
            mx=len;
            mxa =st;
        }
        len=0;
        st=i+1;

    }
    else{
        len++;

    }















    if (arr[i]=='\0'){
        break;

    }
    i++;
 }




cout<<endl<<"the max no of lenth    :"<<mx<<"    -";
for(int i=mxa;i<mx+mxa;i++){
    cout<<arr[i];
}






 











    return 0;
}