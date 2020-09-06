//Transform of two real functions simultaneously
#include <stdio.h>
#include <conio.h>
#include <complex.h>
#include <math.h>
#include <stdlib.h>

void four1(complex fft1[],int n,int a);//DFT of a function
float cmplx(float j, float k);//Complex number representation
void main(){
	int n;
	double data1[100],data2[100];
	complex fft1[100],fft2[100];
	int j, n2;
	complex h1,h2,c1,c2;
	c1=cmplx(0.5,0.0);
	c2=cmplx(0.0,-0.5);
	j=1;
	while(j<=n){
		fft1[j]=cmplx(data1[j],data2[j]);j++;
	}
	four1(fft1,n,1);
	fft2[1]=cmplx(aimag(fft1[1]),0.0);
	fft1[1]=cmplx(real(fft[1]),0.0);
	n2=n+2; j=2;
	do{
		h1=c1*(fft[j]+conjg(fft1[n2-j]));
		h2=c2*(fft[j]-conjg(fft1[n2-j]));
		fft1[j]=h1;
		fft1[n2-j]=conjg(h1);
		fft2[j]=h2;
		fft2[n2-j]=conjg(h2);}while(j<=n/2+1);
	}
	
	getch();
}
void four1(complex fft1[],int n,int a){
	int i,j;
	
	for(i=0;i<n;i++){
		sum=0.0;
		for(j=0;j<n;j++){
			theta=(-2*3.1428*i*j)/n;
			sum+=f[j]*exp(theta);
		}//Summation of f(t)
		F[i]=sum/n;//Value of F(v)	
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
}
