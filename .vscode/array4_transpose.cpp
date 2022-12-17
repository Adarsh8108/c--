#include<iostream>




using namespace std;
int main()
{

int n=3;
cout<<"Enter the rows and column of the array"<<endl;

// taking the input
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
        
    }
}
// printing the input 
cout<<endl<<endl<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<arr[i][j]<<" ";

    }
    cout<<endl;
    }
    cout<<endl;

 // transpose 
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            //swap
            
         int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;

        }
    }


    //print------------------------------------------------------------------



    // printing the transpose 
    cout<<endl<<endl<<endl;
     for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    cout<<arr[i][j]<<" ";

    }
    cout<<endl;
    }
    cout<<endl;


int N = 3;
 int A[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
 for(int i=0; i<N; i++) {
 for(int j=i; j<N; j++) {
 //swap
 int temp = A[i][j];
 A[i][j] = A[j][i];
 A[j][i] = temp;
 }
 }
 //print transpose
 for(int i=0; i<N; i++) {
 for(int j=0 ;j<N; j++) {
 cout << A[i][j] << " ";
 }
 cout << "\n";
 }
 








return 0;
}

