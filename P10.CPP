//Insertion Sorting...Using Array.
#include<iostream.h>
#include<stdlib.h>
#define size 10
void inssort(int a[]);
void disp(int a[]);
void main()
{
    int i,data[size];
	for(i=0;i<size;i++)
		data[i]=rand()%1000;
	cout<<"\n Before sorting...\n";
	      disp(data);
    cout<<"\n After sorting...\n";
	inssort(data);
	disp(data);
}
void inssort(int a[])
{
	 int insinsout,insin,insmin,count=0;
	 for(insinsout=0;insinsout<size;insinsout++)
	 {
		 insmin=a[insinsout];
		 insin=insinsout;
		 while(a[insin-1]>insmin && insin>=1)
		 {
	  a[insin]=a[insin-1];
	  insin--;
	   count++;
		 }
	  a[insin]=insmin;
	 }
	 cout<<"\n total iteration %d \n",count;
}
void disp(int a[])
{
	  int i;
	  for(i=0;i<size;i++)
   cout<<" %d ",a[i];

}