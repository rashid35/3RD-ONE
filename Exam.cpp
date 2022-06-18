#include<stdio.h>
int main()
{
	int number,sum,a,b,c,d,e,d1,d2,d3,d4,d5;
	
	printf("Enter the 5 digit number: ");
	scanf("%d",&number);
	a=number/10; //6543
	d5=number%10;  // 2
	b=a/10; //654
	d4=a%10;//3
	c=b/10; //65
	d3=b%10;//4
	d=c/10;//6
	d2=c%10;///5
	e=d/10; //0
	d1=d%10;//6
	
	sum=d1+d2+d3+d4+d5;
	
	///printf("Reverse Order: ");
	////printf("%d\t %d\t %d\t %d\t %d\t ",d5,d4,d3,d2,d1);
	  printf("Sum:%d",sum);
	
	
	return 0;
	
	
}
