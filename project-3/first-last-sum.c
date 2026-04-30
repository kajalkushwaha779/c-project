#include<stdio.h>
int main(){
	int num,sum,first,last;
	printf("Enter any number:");
	scanf("%d",&num);
	last=num%10;
	first=num;
	while(first>=10){
		first=first/10;
	}
	sum=first+last;
	printf("the sum of the first and last digit:%d\n",sum);
}