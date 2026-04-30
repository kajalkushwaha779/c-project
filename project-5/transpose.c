#include<stdio.h>
void main(){
	int size;
	printf("Enter the size of array row and column :");
	scanf("%d",&size);
	int arr[size][size];                                                                               
	printf("Enter the element:\n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
		printf("a[%d][%d]:", i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("Transpose matrix:\n");
	for(int j=0;j<size;j++){
		for(int i=0;i<size;i++){
			printf("%d",arr[j][i]);
		}
	printf("\n");
	}
	
}