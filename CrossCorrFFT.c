//Implementation of Cross-Correlation
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<alloc.h>
#define NMAX 4096
float data1[100],data2[100];
int n;
compl ans[n];

void correl(){
	int i,no2;
	compl fft(NMAX);
	twofft(data1, data2, fft, ans, n);
	no2=n/2; i=1;
	do{
		ans[i]=fft[i]*conjg(ans[i])/(float)(no2);
		i++;
	}while(i<=no2+1);
	ans[i]=cmplx(double(ans[i]));
	realft(ans,n,-i);	
}
void main(){
	double r[], n;
	int i[],p;
	n=pow(2,p);
//Inserting data
	for(i=0;i<n;i++){
		r[i]=i+1;
		i[i]=0;
	}
}
//Bit Reversal Function
	void funcb(int j){
		int j1=j, k0=0, p, i, l;
		for(q=1;q<=p;q++){
			j2=j1/2;
			k0=(k0+2)+(j1-2*j2);
			j1=j2;
		}

	n2=n/2; f1=p-1;
	k=0;
	1: for(l=1;l<p;l++){
			for(i=1;i<n2;j++){
				j=funcb(k)/pow(2,f1);
				k=k+2+(j-2*j1);
				a=2*pi*(j/n);
				u=r[k+n2]*c+i[k+n2]*s;
				v=i[k+n2]*c+i[k+n2]*s;
	    	}
	if(k<n)
		goto 1;
	k=0;f1--;
	n2/=2;}
	for(k=0;k<n;k++){
		i=funcb(k);
		if(i<k)
			goto 2;
		u=r[k]/n;
		v=i[k]/n;
		r[k]=r[i]/n;
		i[k]=i[i]/n;
		r[i]=u;
		i[i]=v;
	}
}
void correl(){
	int n, NMAX=4096, i, no2;
	float data1[n], data[n];
	compl ans[n];
	compl fft(NMAX);
	fft(n);
	twofft(data1, data2, fft, ans, n);
	no2
}




	
	
	
	


