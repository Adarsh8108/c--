#include<iostream>
using namespace std;
int main()
{
  int n;
    cout<<"the array size :";
    cin>>n;
    int arr[n+1];
    arr[n]=-1;

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    if (n==1){
        cout<<arr[0];
return 0;
    }
int mx=arr[0];
int ans=0;
if(arr[0]>arr[1] ){
ans++;
}
// fdjkslfjdkslklfdsajsdfklj;fadsjkl;asdfjklfdsjklfdsjkljfkdlasfdsajkl;fdsjklfdsjklfkdsjlfdskjlfdjsklfdjsklfdjklfdksjlfkdjslfdjskkfdjlsfdksljfkdjlfdskjlfdjsklfkdjs;
 

    for (int i=1;i<n;i++){
if (mx<arr[i] && arr[i]>arr[i+1] ){
    mx=arr[i];
ans++;
}

    }
    cout<<endl<<ans;
return 0;

} // namespace std;

