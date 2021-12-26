#include <stdio.h>
int add(num);

int main()
{
	int number,sum;
	printf("Enter any number:");
	scanf("%d",&number);
	sum=add(number);
	printf("The sum of digits of %d is: %d",number,sum);
}

int add(num)
{
	int sum,reminder;
	while(num!=0)
		{
			reminder=num%10;
			num=num/10;
   			sum+=reminder;
		}
		return sum;
	
}
