//HFT 

#include <stdio.h>
#include <math.h>
#include <conio.h>
void main(){
	float F[100],sum,theta;
	int f[100],n,i,j;
	printf("Enter the number of discrete values, n: ");
	scanf("%d",&n);
	printf("\nEnter the discrete values:\n{");
	for(i=0;i<n;i++)
		scanf("%d",&f[i]);
	printf("}");
	for(i=0;i<n;i++){
		sum=0.0;
		for(j=0;j<n;j++){
			theta=(-2*3.1428*i*j)/n;
			sum+=f[j]*exp(theta);
		}//Summation of f(t)
		H[i]=sum/n;//Value of F(v)
	}
	
	
	
	
	
	
}
