//Menu driven program from Caluclating add,subtract,multiply and divide two numbers

#include<iostream.h>
#include<conio.h>
int main()
{ int ch;
int a,b,ans;
clrscr();
cout<<"Enter two integer:"<<endl;
cin>>a>>b;
cout<<"Enter number are:"<<a<<"\t"<<b<<endl;
do
{ cout<<"Caluclator opened:"<<endl;

cout<<"1.Addition"<<endl<<"2.Subtract"<<endl<<"3.Multiply"<<endl<<"4.Division"<<endl;
cout<<"5.Modulus"<<"\n"<<"6.Exit"<<endl;

cout<<"Enter your choice between 1 to 6"<<endl;
cin>>ch;
switch(ch)
{ case 1:
	   cout<<"You choose addition\n";
	   ans=a+b;
	   cout<<"Addition of enter number ="<<ans<<endl;
	   break;
case 2:
	   cout<<"You choose subtraction\n";
	   ans=a-b;
	   cout<<"Subtraction of enter number ="<<ans<<endl;
	   break;
case 3:
	   cout<<"You choose multiplication\n";
	   ans=a*b;
	   cout<<"Multiplication of enter number ="<<ans<<endl;
	   break;
case 4:
	   cout<<"You choose division\n";
	   if(b==0)
	   {
	   cout<<"Divide by zero error. So please enter new value for b\n";
	   }

	   else
	   ans=a/b;
	   cout<<"Division of enter number ="<<ans<<endl;
	   break;

case 5:
	   cout<<"You choose to see reminder\n";
	   ans=a%b;
	   cout<<"Modulus of enter number ="<<ans<<endl;
	   break;
case 6:

	   cout<<"Exiting all operation!!!"<<endl;
	   break;
default:
	  cout<<"You enter a wrong choice";
}
}while(ch<6);
getch();
return 0;

}