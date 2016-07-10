#include<stdio.h>
int hanoi(int n,char s,char t,char d)
{
if(n==1)
{printf("\nMove disk %d from rod %c to rod %c",n,s,d);
return 0;
}
hanoi(n-1,s,d,t);
printf("\n Move disk %d from rod %c to rod %c",n,s,d);
hanoi(n-1,t,s,d);
}
int main()
{
int n;
char src='aa',temp='bb',dest='cc';
printf("enter the total number of disk:");
scanf("%d",&n1);
hanoi(n1,src,temp,dest);
return 0;
}
