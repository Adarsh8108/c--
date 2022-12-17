
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class qu
{
private:
string aa,qe,a,b,c,d;
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
 system("cls");
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
case 'b':
{
cout<<"Answer is Wrong";
cout<<endl<<"correct option is a" ;
}break;
case 'c':
{
cout<<"Answer is Wrong";
cout<<endl<<"correct option is a" ;}
break;
case 'd':
{cout<<"Answer is Wrong ";
cout<<endl<<"correct option is a" ;   }     break;
default:
{
cout<<" invalid option";
}
break;
}
}
if(co=='b')
{
switch(x)
{
case'a':
{
cout<<"Answer is Wrong";
cout<<endl<<"Correct option is b" ;
}break;
case 'b':
{
cout<<"Answer is Right";
i=i+1;
}  break;
case 'c':
{
cout<<"Answer is Wrong";
cout<<endl<<"correct option is b" ; } break;
case 'd':
{cout<<"Answer is Wrong ";
cout<<endl<<"correct option is b" ;   }  break;
default :
{
cout<<" inval id option";}
break;
}
}
if(co=='c')
{
switch(x)
{
case 'a' :
{
cout<<"Answer is Wrong";
cout<<endl<<"correct option is c" ;
}         break;
case 'b':
{
cout<<"Answer is Wrong";
cout<<endl<<"correct option is c" ;
}
break;
case 'c':
{
cout<<"Answer is Right";
i=i+1;
 } break;
case 'd':
{cout<<"Answer is Wrong ";
cout<<endl<<"correct option is c" ;   } break;
default :
{
cout<<" invalid option";}
}
}
if(co=='d')
{
switch(x)
{
case 'a':
{
cout<<"Answer is Wrong";
cout<<endl<<"correct option is d" ;
}      break;
case 'b':
{
cout<<"Answer is Wrong";
cout<<endl<<"correct option is d" ;
}      break;
case 'c':
{
cout<<"Answer is Wrong";
cout<<endl<<"correct option is d" ;}  break;
case 'd':
{cout<<"Answer is Right ";
i=i+1;
 } break;
default :
{
cout<<" invalid option";}
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

cout<<endl<<"\nNO. of correct ans is "<<i<<endl;
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

cin>>no;
switch(no)
{
case 10:

   cout<<oi++  ; 
  a .get();
 cout<<oi++  ; 
  b .get();
cout<<oi++  ; 
  c.get()  ;
cout<<oi++  ; 
  d.get()  ;
cout<<oi++  ; 
  e.get()  ;
cout<<oi++  ; 
  f.get()  ;
cout<<oi++  ; 
  g.get()  ;
cout<<oi++  ; 
  h.get()  ;
cout<<oi++  ; 
  k.get()  ;
cout<<oi++  ; 
  j.get()  ;

break;
case 9:
 cout<<oi++  ; 
  a .get();

 cout<<oi++  ; 
  b .get();
cout<<oi++  ; 
  c.get()  ;
cout<<oi++  ; 
  d.get()  ;
cout<<oi++  ; 
  e.get()  ;
cout<<oi++  ; 
  f.get()  ;
cout<<oi++  ; 
  g.get()  ;
cout<<oi++  ; 
  h.get()  ;
cout<<oi++  ; 
  k.get()  ;

break;
case 8:
       cout<<oi++  ; 
  a .get();
  cout<<oi++  ; 
b.get();
cout<<oi++  ; 
  c.get() ;
cout<<oi++  ; 
  d.get()  ;
cout<<oi++  ; 
  e.get()  ;
cout<<oi++  ; 
  f.get()  ;
cout<<oi++  ; 
  g.get()  ;
cout<<oi++  ; 
  h.get()  ;

break;
case 7:
 cout<<oi++  ; 
  a .get();
 cout<<oi++  ; 
  b .get();
cout<<oi++  ; 
  c.get()  ;
cout<<oi++  ; 
  d.get()  ;
cout<<oi++  ; 
  e.get()  ;
cout<<oi++  ; 
  f.get()  ;
cout<<oi++  ; 
  g.get()  ;

break;
case 6:
 cout<<oi++  ; 
  a .get();
 cout<<oi++  ; 
  b .get();
cout<<oi++  ; 
  c.get()  ;
cout<<oi++  ; 
  d.get()  ;
cout<<oi++  ; 
  e.get()  ;
cout<<oi++  ; 
  f.get()  ;
cout<<oi++  ; 
  g.get()  ;

break;
case 5:
 cout<<oi++  ; 
  a .get();
 cout<<oi++  ; 
  b .get();
cout<<oi++  ; 
  c.get()  ;
cout<<oi++  ; 
  d.get()  ;
cout<<oi++  ; 
  e.get()  ;
cout<<oi++  ; 
  f.get()  ;

break;
case 4:
 cout<<oi++  ; 
  a .get();
 cout<<oi++  ; 
  b .get();
cout<<oi++  ; 
  c.get()  ;
cout<<oi++  ; 
  d.get()  ;
cout<<oi++  ; 
  e.get()  ;


break;
case 3:
 cout<<oi++  ; 
  a .get();
 cout<<oi++  ; 
  b .get();
cout<<oi++  ; 
  c.get()  ;


break;
case 2:
 cout<<oi++  ; 
  a .get();
 cout<<oi++  ; 
  b .get();



break;
case 1:
 cout<<oi++  ; 
  a .get();
break;

}
 system("cls");

cout<<"::::::::::::::::::::::::::::::::::::::::::::STUDENT::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
cout<<"NO. of students (n)=";
cin>>nos;
for(t=1;t<=nos;t++)
{
 system("cls");

switch(no)

{
case 10:
i=a.show(i,no);
i=b.show(i,no);
i=c.show(i,no);
i=d.show(i,no);
i=e.show(i,no);
i=f.show(i,no);
i=g.show(i,no);
i=h.show(i,no);
i=k.show(i,no);

i=j.show(i,no);
s.dis(i,no);
break;
case 9:
i=a.show(i,no);
i=b.show(i,no);
i=c.show(i,no);
i=d.show(i,no);
i=e.show(i,no);
i=f.show(i,no);
i=g.show(i,no);
i=h.show(i,no);
i=k.show(i,no);
s.dis(i,no);
break;

  case 8:
i=a.show(i,no);
i=b.show(i,no);
i=c.show(i,no);
i=d.show(i,no);
i=e.show(i,no);
i=f.show(i,no);
i=g.show(i,no);
i=h.show(i,no);
s.dis(i,no);

break;
       case 7:
i=a.show(i,no);
i=b.show(i,no);
i=c.show(i,no);
i=d.show(i,no);
i=e.show(i,no);
i=f.show(i,no);

s.dis(i,no);


break;

  case 6:
i=a.show(i,no);
i=b.show(i,no);
i=c.show(i,no);
i=d.show(i,no);
i=e.show(i,no);
i=f.show(i,no);
s.dis(i,no);


break;

    case 5:
i=a.show(i,no);
i=b.show(i,no);
i=c.show(i,no);
i=d.show(i,no);
i=e.show(i,no);
s.dis(i,no);


break;
  case 4:
i=a.show(i,no);
i=b.show(i,no);
i=c.show(i,no);
i=d.show(i,no);
break;
   case 3:
i=a.show(i,no);
i=b.show(i,no);
i=c.show(i,no);
s.dis(i,no);
break;
  case 2:
i=a.show(i,no);
i=b.show(i,no);
 s.dis(i,no);
break;
 case 1:
i=a.show(i,no);
s.dis(i,no);
break;
}
i=0;
}
return 0;
}
