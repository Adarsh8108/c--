
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class qu
{
private:
string aa,qe,name,rolno,div,std,a,b,c,d;
char co,x;
public:
void get();
int show(int i,int no);
void dis(int i,int no);
};
void qu::get()
{
	
cout<<") Enter the question : ";
getline(cin,aa);
getline(cin,qe);
cout<<"a:";
getline(cin,a);
cout<<"b:";
getline(cin,b);
cout<<"c:";
getline(cin,c);
cout<<"d:";
getline(cin,d);
cout<<endl<<"Ans for question is = ";
cin>>co;
if(co=='a' || co=='b' ||co=='c' ||co=='d' )
{system("cls");}
else
{
cout<<endl<<" WRONG OPTION SELECTED as  "<<co<<"  (select only a,b,c,d options) --*REST IT*-- "<<endl;

getch();
system("cls");}
 
}
int qu::show(int i,int no)
{
system ("cls");
cout<<"Question) "<<aa<<endl<<qe<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl<<"c:"<<c<<endl<<"d:"<<d<<endl<<endl;
cout<<endl<<"your ans =";
cin>>x;
if(co=='a')
{
switch(x)
{
case 'a':
{
cout<<"ans is correct";
i=i+1;
} break;

default:
cout<<"Answer is Wrong";
cout<<endl<<"correct option is a" ;
break;
}
}
if(co=='b')
{
switch(x)
{

case 'b':
{
cout<<"Answer is Right";
i=i+1;
}  break;

default :
{
cout<<"Answer is Wrong ";
cout<<endl<<"correct option is b" ;   }  break;}

}

if(co=='c')
{
switch(x)
{


case 'c':
{
cout<<"Answer is Right";
i=i+1;
 } break;
default:
{cout<<"Answer is Wrong ";
cout<<endl<<"correct option is c" ;   } break;

}
}
if(co=='d')
{
switch(x)
{

case 'd':
{cout<<"Answer is Right ";
i=i+1;
 } break;
default :
{
cout<<"Answer is Wrong";
cout<<endl<<"correct option is d" ;} 
break;
}
}
getch();
return i;
}
  void qu::dis(int i,int no){
     float per;
	
	getch();

per=(i*100)/no;

cout<<endl<<"\n NO. of correct ans is "<<i<<endl;
i=no-i;
getch();
cout<<"NO. of wrong ans is "<<i<<endl;
getch();
cout<<"percentage is "<<per<<endl;
if(per>=90)
	  {
    
	  cout<<"grade : A+" ;
	  }
	  if(per>=75&&per<90)
	  {
	  cout<<"grade : A" ;
	  }

	  if(per<75&&per>=60)
	  {
	  cout<<"grade : B" ;
	  }
	  if(per<60&&per>=40)
	  {
	  cout<<"grade : C" ;
	  }  if(per<40&&per>=35)
	  {
	  cout<<"grade : D" ;
	  }
	  if(per<35)
	  {
	  cout<<"Fail" ;
	  }

 getch();

}

int main()
   {

   system("cls");
   int i=0,no,nos,t;
cout<<"\t::::::::::::::::::::::::::::::::::::::::TEACHER:::::::::::::::::::::::::::::::::::"<<endl;
qu a,b,c,d,e,f,g,h,j,k,s;
cout<<"no of question=";
int oi=1;
qu std[1000];
cin>>no;
int loop;
for(loop=1;loop<=no;loop++){
 cout<<oi++; 
 
std[loop].get();
}
 system("cls");
 string stvi,name,rolno,div;
cout<<"::::::::::::::::::::::::::::::::::::::::::::STUDENT::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
cout<<"NO. of students (n)=";
cin>>nos;
 
for(t=1;t<=nos;t++)
{

system("cls");
 cout<<"ENTER THE NAME =";
	getline(cin,name);
	cout<<"ENTER THE ROLL NO. =";
	cin>>rolno;
	cout<<"ENTER THE DIVISION =";
	cin>>div;
	cout<<"ENTER THE STANDARD =";
	getline(cin,div);
for(loop=1;loop<=no;loop++){
i=std[loop].show(i,no);
}
cout<<endl<<"THE NAME OF STUDENT  IS "<<name;
cout<<endl<<"THE ROLL NO. OF STUDENT IS "<<rolno;
cout<<endl<<"THE STANDARD OF STUDENT IS "<<stvi;
cout<<endl<<"THE DIVISION OF STUDENT  IS "<<div<<endl;
getch();
s.dis(i,no);

i=0;
}
return 0;
}