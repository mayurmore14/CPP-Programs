#include<iostream.h>
#include<conio.h>
void main()
{
	int c,a=10,b=10,z;
	clrscr();
	cout<<"\n*Menu*";
	cout<<"\n1. Addition";
	cout<<"\n2. Substraction";
	cout<<"\n3. Exit";
	cout<<"\nEnter Your Choice :";
	cin>>c;
	switch(c)
	{
		case 1:
			z=a+b;
			cout<<"\nAddition ="<<z;
		break;
		case 2:
			z=a-b;
			cout<<"\nSubstraction ="<<z;
		break;
		case 3:
			cout<<"\nBye Bye";
		break;
		default:
			cout<<"\nInvalid No";
		break;
	}

	getch();
}