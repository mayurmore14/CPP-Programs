//program to find square and cube of an number
#include<iostream.h>
#include<conio.h>
class Number
{
	public:
		int num;
	void getnum()
	{
		cout<<"\nEnter The Number :";
		cin>>num;
	}
};
class Square:public Number
{
	public:
		int sqr;
	void showsquare()
	{
		sqr=num*num;
		cout<<"\nSquare of "<<num<<" is ="<<sqr;
	}
};
class Cube:public Number
{
	public:
		int cube;
	void showcube()
	{
		cube=num*num*num;
		cout<<"\nCube of "<<num<<" is ="<<cube;
	}
};
void main()
{
	clrscr();
	Square S;
	Cube C;
	S.getnum();
	S.showsquare();
	C.getnum();
	C.showcube();

	getch();
}