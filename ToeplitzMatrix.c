//Toeplitz Matrix

#include <stdio.h>
#include <conio.h>

void main(){
	int i,j,n,t[100][100],r1[100],r2[100],k1=0,k2=1;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("\nEnter r(0)----r(N-1) elements, to be filled in the Toeplitz Matrix:\n");
	for(i=0;i<n;i++)
		scanf("%d",&r1[i]);
	printf("\nEnter r(-N+1)----r(-1) elements, to be filled in the Toeplitz Matrix:\n");
	r2[0]=0;
	for(i=1;i<n;i++)
		scanf("%d",&r2[i]);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i>j)
				t[i][j]=r1[k1++];
			else if(i<j)
				t[i][j]=r2[k2++];
			else
				t[i][j]=r1[0];
		}
	}
	printf("\nThe Toeplitz Matrix is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d ",t[i][j]);
		printf("\n");
	}
	getch();
}
		
	
	
