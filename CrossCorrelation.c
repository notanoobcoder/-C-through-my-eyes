//Cross-Correlation
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	float d1[100],d2[100],D[100],sum,k;
	float n1,n2,i,j;
	printf("Enter the values of n1 and n2:\n");
	scanf("%d%d",&n1,&n2);
	printf("\nEnter elements of first set of data:\n");
	for(i=0;i<n1;i++)
		scanf("%f",&d1[i]);
	printf("\nEnter elements of second set of data:\n");
	for(i=0;i<n2;i++)
		scanf("%f",&d2[i]);
	k=1/(n1+n2);
	for(i=0;i<n1+n2;i++){
		for(j=0;j<(n1+n2)-i-1;j++){
			sum+=k*d1[j]*d2[i+j];
		}
		D[i]=sum;
		sum=0.0;
	}	
	
	printf("\nNew set of data:\n");
	for(i=0;i<n1+n2;i++)
		printf("%f ",D[i]);
		
	getch();
		
}
