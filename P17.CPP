//QueueImplementation Using Array...
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>
#define size 10
int queue[size],front=0,rear=0;
void push();
void pop();
void peep();
void display();
void main()
{
	int ch;
	while(1)
	{
		cout<<"\n 1.Push\n 2.Pop\n 3.Peep\n 4.Display\n Enter your choice[0 for Exit] :";
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
	if(rear>size-1)
		cout<<"\nQueue is Overflow...";
	else
	{
		cout<<"\n Enter value :";
		cin>>"%d",&queue[rear];
		rear++;
	}
}
void pop()
{
	if(front==rear)
	{
		cout<<"\nQueue is Underflow...";
		cout<<"\n Resetting the Queue...";
		front=rear=0;
	}
	else
	{
		cout<<"\nPopped value is %d",queue[front];
		front++;
	}
}
void display()
{
	int i=front;
	if(front==rear)
		cout<<"\n Queue is Empty...";
	else
	{
		cout<<"\nQueue :%d",queue[i];
		i++;
	while(i<rear);
	{
	cout<<",d",queue[i];
	i++;
	}
	cout<<"]";
	}
}
void peep()
{
	int totele=rear-front;
	int position;
	if(totele)
	{
	   display();
	   cout<<"\nEnter Position at the value U want to modify";
	   cin>>"%d",&position;
	   if(position<1 || position>rear-front)
		cout<<"\nEnter wrong position of elements...";
	   else
	   {
		cout<<"\nYou want to modify %d value",queue[front+position-1];
		cout<<"\nEnter New Value : ";
		cin>>"%d",queue[front+position-1];
	   }
       }
       else
       cout<<"Queue is Empty...!!!";
}