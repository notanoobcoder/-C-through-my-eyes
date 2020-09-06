//Choleski Factorization

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define N 3
void multiply(int x[N][N],int y[N][N],int z[N][N]);
int main(){
	int A[N][N],L[N][N],D[N][N],Lt[N][N],temp=0,s1,s2,i,j;
	
	//Lower Triangular Matrix
	printf("\nEnter elements in an array A: ");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&A[i][j);
		}
	}
	for(i=0;i<N;i++){
		for(k=1,j=i+1;k<i-1,j<=N;k++,j++){
			s1=s1+L[i][k]*L[i][k];
			s2=s2+L[i][k]*L[j][k];
		}
		L[i][i]=(A[i][i]-s1);
		for(j=0;j<N;j++){
			L[j][i]=(1/L[i][i])*(A[i][j]-s2);}
		}
		
	printf("\nThe factorized Lower triangular matrix is:\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d",L[i][j);
		}
	}
	//Find transpose of L[][]
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
		if(i!=j){
			temp=L[i][j];
			L[i][j]=Lt[j][i];
			Lt[j][i]=temp;}	
		}
	}
	printf("\nThe transpose of L[][] matrix:\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			printf("%d ",Lt[i][j]);
		printf("\n");}
	multiply
	inverse(L);
	multiply(A,B);
	
	
	getch();
}
	
