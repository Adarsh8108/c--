#include<iostream>

using namespace std;
    












    int selbit(int that_arry_no_ofposi,int pos){
        pos=pos-1;
        // when we use not in return then take like if also in mind

        return ((that_arry_no_ofposi &(1<<pos))!=0);
    }
 void   xxor(int arry[],int n){




int xore=0;
for (size_t i = 0; i < n; i++)
{









    /* code */
    xore=xore^arry[i];
// (^)is use to determine the xor file and 
// xor is complement of both are true then only true its equal to if 
// both are false then only false


// to find the right most one
// if to find take bits by comparing use and &
//












}
int pos=0;
int tempxore=xore;
int setbit=0;
while( setbit!=1)
{
    setbit=xore & 1;
    pos++;
    xore=xore>>1;




}



int newxore=tempxore;

for (size_t i = 0; i < n; i++)
{



    // if will work if only something return from fxn selbit 
// selbit fxn will return only if it no has 1 at that pos 
    if (selbit(arry[i],pos)){
        // ^ use for xor
newxore=newxore^arry[i];
    }
    
}

// when we use fxn like and xor or we shd put addintal brackets always while printin use allocating difining subraract and taking etc
cout<<newxore<<endl;
cout<<(tempxore^newxore);






 }



    
    
    
    
    
    
    
    
    
int main()
{
    int n;
    cin>>n;
    cout<<endl<<"enter the array ";
    cout<<endl;
int arry[n];
for (size_t i = 0; i < n; i++)
{
  cin>>  arry[i];

}
cout<<endl<<"the ans is :"<<endl;
xxor(arry,n);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}