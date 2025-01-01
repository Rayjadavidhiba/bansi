//Circular Array...
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>
#include<math.h>
#define size 10
int queue[size],front=0,rear=0,overflow=0,underflow=1;
void push();
void pop();
void peep();
int display();
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
	if(overflow)
		cout<<"\nQueue is Overflow...";
	else
	{
		underflow=0;
		cout<<"\n Enter value :";
		cin>>"%d",&queue[rear];
		rear=(rear+1)%size;
		if(front==rear)
		overflow=1;
	}
}
void pop()
{
	if(underflow)
		cout<<"\nQueue is underflow...";
	else
	{
		overflow=0;
		cout<<"\nPopped value is %d",queue[front];
		front=(front+1)%size;
		underflow=1;
	}
}
int display()
{
	int i=front,count=0;
	if(underflow)
		cout<<"\n Queue is empty...";
	else
	do
	{
		count++;
		cout<<"\nQueue Value at %d Position is %d",count,queue[i];
		i=(i+1)%size;
	}while(i!=rear);
	return count;

}
void peep()
{
	int totele=display();
	int position;
	if(totele)
	{
	  // display();
	   cout<<"\nEnter Position at the value U want to modify";
	   cin>>"%d",&position;
	   if(position<1 || position>totele)
		cout<<"\nEnter wrong position of elements...";
	   else
	   {
		cout<<"\nyou want to modify %d value",queue[(front+position-1)%size];
		cout<<"\nEnter new value : ";
		cin>>"%d",queue[(front+position-1)%size];
	   }
       }
}