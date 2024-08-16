//reverse 5 no
#include<stdio.h>
#include<math.h>
int main()
{
int num,rev=0,sum,i;
printf("enter 5 no. ");
scanf("%d",&num);

{
    sum=num%10;
    rev=rev*10+sum;
    num=num/10;
    
       sum=num%10;
    rev=rev*10+sum;
    num=num/10;
    
       sum=num%10;
    rev=rev*10+sum;
    num=num/10;
    
       sum=num%10;
    rev=rev*10+sum;
    num=num/10;
    
       sum=num%10;
    rev=rev*10+sum;
    num=num/10;
}
printf("rev value. ""%d",rev);
return 0;
}    