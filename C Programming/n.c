#include<stdio.h>
int* display()
{
    static 
    int n = 10;
    return &n;
}
int main()
{ 
   int *ptr = display();
   printf("%d",*ptr);
   return 0;
}