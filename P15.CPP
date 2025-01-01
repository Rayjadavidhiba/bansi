#include <stdio.h>
#include<iostream.h>
void printSeries(int n, int *ptr) 
{
    if (n > 10) 
    {
        return;
    }
    cout<<*ptr;
    *ptr += 1;
    printSeries(n + 1, ptr);
}
int main() 
{
    int start = 1;
    int *ptr = &start;
    printSeries(1, ptr);
    return 0;
}