//Stack...
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>
#define size 10
void push(void);
void pop(void);
void peep(void);
void display(void);
int stack[size],top=0;
void main()
{
	int ch;
	while(1)
	{
		cout<<"\n 1.Push\n 2.Pop\n 3.Peep\n 4.Display\n Enter your choice :";
		cin>>"%d",&ch;
		switch(ch)
		{
			case 1: push(); break;
			case 2: pop(); break;
			case 3: peep(); break;
			case 4: display(); break;
			default: cout<<"\nExiting program...";
			return;
		}
	}
}
void push()
{
	if(top>size-1)
		cout<<"\nStack Overflow...";
	else
	{
		cout<<"\n Enter value:";
		cin>>"%d",&stack[top];
		top++;
	}
}
void pop()
{
	if(top==0)
		cout<<"\nStack underflow...";
	else
	{
		printf("\nPopped value is %d",stack[top-1]);
		top--;
	}
}
void display()
{
	int i=top;
	if(top==0)
		cout<<"\n Stack is empty...";
	else
	{
		cout<<"\nStack:[%d", stack[i-1];
		i--;
		while(i>0)
		{
			cout<<",%d",stack[i-1];
			i--;
		}
		cout<<"]";
	}
}
void peep()
{
	int totele=top;
	int position;
	if(totele)
	{
	   display();
	   cout<<"\nEnter position at the value U want to modify";
	   cin>>"%d",&position;
	   if(position<1 || position>top)
		cout<<"\nEnter wrong position of element...";
	   else
	   {
		cout<<"\nyou want to modify %d value",stack[top-position];
		cout<<"\nEnter new value";
		cin>>"%d",&stack[top-position];
	   }
       }else cout<<"\n Stack is emplty...!!!";
}