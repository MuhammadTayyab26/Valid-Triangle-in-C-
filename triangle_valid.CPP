#include<iostream.h>
#include<conio.h>
int main()
{
float a,b,c,sum ;
clrscr();
sum=0;
cout<<"enter the value of A side :";
cin>>a;
cout<<"enter the value of B side :";
cin>>b;
cout<<"enter the value of C side :";
cin>>c;
sum=a+b+c;
if(sum==180)
{
cout<<"tringle is valid "<<endl;
}
else
{
cout<<"triangle is not valid "<<endl;
}
getch();
return 0;
}