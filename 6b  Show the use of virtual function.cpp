#include<iostream.h>
#include<conio.h>

class base
{
	public:
	virtual void show()
	{
		cout<<"\n Base class show:";
	}
	void display()
	{
		cout<<"\n Base class display:";
	}
};

class drive:public base
{
	public:
	void display()
	{
		cout<<"\n Drive class display:";
	}
	void show()
	{
		cout<<"\n Drive class show:";
	}
};

void main()
{
	clrscr();
	base obj1;
	base *p;
	cout<<"\n\t p points to base:\n";
	p=&obj1;
	p->display();
	p->show();
	cout<<"\n\n\t p points to derive:\n";
	drive obj2;
	p=&obj2;
	p->display();
	p->show();
	getch();
}
