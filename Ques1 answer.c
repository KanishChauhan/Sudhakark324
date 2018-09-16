#include<stdio.h>
int main()
{
     int a,b,c;
     printf("enter the three integers:");
     scanf("%d %d %d" , &a, &b, &c);

        if(a!=b&&a!=c&&b!=a&&b!=c&&c!=a&&c!=b)
{	  printf("1");}
        else if(a==b||a==c||b==a||b==c||c==a||c==b)
{
	printf("0");}

return 0;
}
