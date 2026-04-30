#include<stdio.h>
void main(){
	int n;
	printf("Enter the array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array element:");
	for(int i=0; i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		
	}
	printf("negative elements from array:");
	for( int i=0; i<n;i++){
		if(a[i]<0){
			printf("%d",a[i]);
		}
	}
}