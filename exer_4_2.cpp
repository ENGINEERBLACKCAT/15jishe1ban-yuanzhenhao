#include<stdio.h>
void main()
{
 int a=2000,i=0;
 do
 {
    if(a%4==0&&a%100!=0||a%400==0)
    {printf("%d  ",a);i++;}
    if(i%10==0)
     printf("\n");
    a++;
 }
 while(a<=3000);
}