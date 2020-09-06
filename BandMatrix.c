//Band Matrix

#include <stdio.h>
#include <conio.h>

void main(){
	int a[10][10],n,i,j;
	printf("Enter value of n:\n");
	scanf("%d",&n);
	printf("\nEnter random elements:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j||(i>=0 && i<=2)||(j>=n-3&&j<=n-1))
				scanf("%d",&a[i][j]);
			else
			 a[i][j]=0;
			}
	}
	for(i=0;i<n/2;i++){
		for(j=3;j<n;j++)
			a[i][j]=0;	
	}	
	
	printf("\nThe band matrix generated is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	getch();
}


/*

Output(n=5):
The band matrix is:

1       2       3       0       0
6       7       8       0       0
-2      -3      -4      -6      -7
0       0       -8      -9      10
0       0       11      12      13


Output(n=6):
The band matrix generated is:

0       -1      1       0       0       0
-3      4       -4      0       0       0
-6      7       -7      0       0       0
0       0       0       -9      10      -10
0       0       0       -2      -4      -6
0       0       0       -8      -10     2

*/

