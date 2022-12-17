#include<iostream>
using namespace std;
int main(){
    system("cls");
int n,a;
cout<<"Enter the rows and column of the array"<<endl;
cin>>n>>a;
// taking the input
int arr[n][a];
for(int i=0;i<n;i++){
    for(int j=0;j<a;j++){
        cin>>arr[i][j];
        
    }
}
// printing the input 
cout<<endl<<endl<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<a;j++){
    cout<<arr[i][j]<<" ";
}
    cout<<endl;
    }
    cout<<endl;

// 2 3 4
// 5 6 7 
// 8 9 0 
// first travel from 2 to 4 and print it 
// then from 7to 0 and print it 
// next from 9 to 8 print it
// next form  5 then 6 in spiral 

    int row_start=0,col_start=0,row_end=n-1,col_end=a-1;
while ( row_start<=row_end && col_start<=col_end){
    for(int cl=col_start;cl<=col_end;cl++){
        cout<<arr[row_start][cl]<<" ";
    }



    row_start++;



    for(int row=row_start;row<=row_end;row++){
        cout<<arr[row][col_end]<<" ";
        }




    col_end--;




    for(int cl=col_end;cl>=col_start;cl--){
        cout<<arr[row_end][cl]<<" ";

    }






    row_end--;







    for(int row=row_end;row>=row_start;row--){
        cout<<arr[row][col_start]<<" ";
    }





    col_start++;





}
return 0;

}