/* Simple code to find reverse of a two digit postive number*/
Uploaded by Sairam on 20/2/2016

#include<stdio.h>
int main()
{
int x,y;
printf("Enter a Two digit Number : ");
scanf("%d",&x);
y=x%10+x/10;                                              /* the logic*/
printf("The reverse of the entered number is %d\n",y);
}
 

