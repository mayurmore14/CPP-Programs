#include<iostream.h>
#include<conio.h>
void main()
{
	int n,t,i,r,sum=0;
	clrscr();
	cout<<"\nEnter Number :";
	cin>>n;
	t=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(t==sum)
	{
		cout<<"\nPalindrome Number";
	}
	else
	{
		cout<<"\nNot Palindrome Number";
	}

	getch();
}