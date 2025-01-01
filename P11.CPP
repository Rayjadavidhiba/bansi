//Quick sort...
#include<iostream.h>
#include <stdio.h>
#define size 10
int partition(int a[],int low, int high);
void quicksort(int a[],int low, int high);
void disp(int a[]);
void main()
{

	int data[size];
	int i;
	for(i=0; i<size; i++)
	cin>>"%d",&data[i];
	cout<<"\n before sorting...\n";
	disp(data);
	quicksort(data,0,size-1);
	cout<<"\n after sorting...\n";
	disp(data);
}
//find partition position
int partition(int a[],int low,int high)
{
	int pivot=a[high];
	int i=low;
	int j,tmp;
	for(j=low; j<high; j++)
//compare each element with pivot value
if(a[j]<=pivot)
{
	tmp=a[i];
	a[i]=a[j];
	a[j]=tmp;
	i++;
}
//swapping pivot value with greater value
	tmp=a[i];
	a[i]=a[high];
	a[high]=tmp;
	return i;
}
void quicksort(int a[],int low,int high)
{
	int part;
	if(low<high)
	{
		part=partition(a,low,high);
		quicksort(a,low,part-1);
		quicksort(a,part+1,high);
	}
}
void disp(int a[])
{
	int i;
	for(i=1; i<size; i++)
	cout<<" %d "<<a[i];
}
