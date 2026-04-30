#include <stdio.h>

int main() {
    int n,m;
    printf("Enter the array row size: ");
    scanf("%d", &n);
    printf("Enter the array column size: ");
    scanf("%d", &m);

    int a[n][m];
    
    printf("Enter array elements:\n");
    for ( int i = 0; i <n; i++) {
        for ( int j = 0; j < m; j++) {
        	printf("a[%d][%d]:", i,j);
            scanf("%d", &a[i][j]);
        }
    }
     int max = a[0][0]; // Assume first largest
        for ( int i = 0; i <n; i++) {
          for ( int j = 0; j <m; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    printf("\nThe largest element is: %d\n", max);

}
	  