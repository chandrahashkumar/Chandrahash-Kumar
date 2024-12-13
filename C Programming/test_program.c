#include<stdio.h>
//#include<conio.h>
int main()
{
//clrscr();
float a,b;
float percentage;
printf("enter obtained marks");
scanf("%f",&a);
printf("enter total marks");
scanf("%f",&b);
percentage =(a/b)*100>80;
printf("%f",percentage);
//getch();
return 0;
}