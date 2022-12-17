#include<iostream>
#include<math.h>



using namespace std;
int main()
{
system("cls");
int n1,n2,n3;
cin>>n1>>n2>>n3;
// taking the input
int arr[n1][n2],m[n2][n3],ans[n1][n3];
for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        cin>>arr[i][j];
        
    }
}
cout<<"the second matrix ";
cout<<endl;
for(int i=0;i<n2;i++){
    for(int j=0;j<n3;j++){
        cin>>m[i][j];
        
    }
}

cout<<endl;
// printing the input 
cout<<endl<<endl<<endl;
for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
    cout<<arr[i][j]<<" ";

    }
    cout<<endl;
    }
    cout<<endl;
 //    printing the input 
cout<<endl<<endl<<endl;
for(int i=0;i<n2;i++){
    for(int j=0;j<n3;j++){
    cout<<m[i][j]<<" ";

    }
    cout<<endl;
    }
    cout<<endl;
    

for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
        for(int k=0;k<n2;k++)
        ans[i][j] =ans[i][j]+arr[i][k]*m[k][j];

    }
}
cout<<endl<<endl<<endl;
for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
    cout<<ans[i][j]<<" ";

    }
    cout<<endl;
    }
    cout<<endl;
    












return 0;
}

