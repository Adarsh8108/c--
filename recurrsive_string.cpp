 
  #include<iostream>
  #include<math.h>
  #include<string>
  #include<algorithm>
  #include<conio.h>
  using namespace std;
      
      
      
      int reverse(string b,int i,int n){
        if (i==n)
        {
            return -1;
            /* code */
        }
        
     int restarry=reverse(b,i+1,n);
         
       cout<< b[i];


return restarry;
      }
      
      
      
      
      
      
      
  int main()
  {
   
   
   string b;
getline(cin,b);
   int n=b.length();
   reverse(b,0,n);
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
      return 0;
  }