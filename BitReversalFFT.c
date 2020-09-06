#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TRSIZ 8
#define SWAP(a,b) tempr=(a); (a)=(b); (b)=tempr
#define f1 10
#define f2 20
#define f3 30
#define pi 3.14159

typedef struct{
	double a1, a2, a3, f1, f2, f3;
}sig[10];

double x(double a1, double a2, double a3, double t){
double x;
x = (a1*sin(2*pi*f1*t) + a2*sin(2*pi*f2*t) - a3*cos(2*pi*f3*t));
return x;
}

int main()
{
double wtemp, wr, wpr, wpi, wi, theta;
double tempr, tempi;
double s[7] = {0.2, 0.5, 1.0, 2.0, 5.0, 10.0, 20.0};
double a1, a2, a3, a4, f1, f2, f3;
double T[21];
int N = TRSIZ;
int i = 0, j = 0, n = 0, k = 0, m = 0, isign = -1,istep, mmax, size=0;
printf("Enter number of samples to be used: ");
scanf("%d",&size);
printf("Enter values of f1, f2, f3: ");
for(i=0; i<10; i++){
	scanf("%f",&f1);
	scanf("%f",&f2);
	scanf("%f",&f3);
}
printf("Enter amplitudes a1, a2 and a3: ");
for(i=0; i<21;){
	scanf("%f %f %f",&T[i],&T[i+1],&T[i+2]);
	i = i + 3;
}

double data1[2*TRSIZ] ;
double *data;
data = &data1[0] - 1;
n = N*2;
mmax = n/2;
// calculate the FFT
while (mmax >= 2) {
istep = mmax << 1;
theta = isign*(6.28318530717959/mmax);
wtemp = sin(0.5*theta);
wpr = -2.0*wtemp*wtemp;
wpi = sin(theta);
wr = 1.0;
wi = 0.0;
for (m = 1; m < mmax; m += 2) {
for (i = m; i <= n; i += istep) {
j = i + mmax;
tempr = data[i];
tempi = data[i+1];
data[i] = data[i] + data[j];
data[i+1] = data[i+1] + data[j+1];

data[j] = tempr - data[j];
data[j+1] = tempi - data[j+1];
tempr = wr*data[j] - wi*data[j+1];
tempi = wr*data[j+1] + wi*data[j];
data[j] = tempr;
data[j+1] = tempi;
printf("\ni = %d ,j = %d, m = %d, wr = %f , wi = %f",(i-1)/2,(j-1)/2,m,wr,wi);
}
printf("\nm = %d ,istep = %d, mmax = %d, wr = %f , wi = %f, Z = %f"
,m,istep,mmax,wr,wi,atan(wi/wr)/(6.28318530717959/(1.0*n/2)));
wtemp = wr;
wr += wtemp*wpr - wi*wpi;
wi += wtemp*wpi + wi*wpr;
}
mmax = mmax/2;
}
j = 1;
for (i = 1; i < n; i += 2) {
if (j > i) {
SWAP(data[j], data[i]);
SWAP(data[j+1], data[i+1]);
}
m = n >> 1;
while (m >= 2 && j > m) {
j -= m;
m >>= 1;
}
j +=m;
}

printf("\nFourier components from the Bit-Reversal algorithm:");
for (k = 0; k < 2*N; k +=2 )
printf("\n%f %f", data[k+1], data[k+2]);
return 0;
} // end of diftt()


/*Output:

i = 0 ,j = 4, m = 1, wr = 1.000000 , wi = 0.000000
m = 1 ,istep = 16, mmax = 8, wr = 1.000000 , wi = 0.000000, Z = 0.000000
i = 1 ,j = 5, m = 3, wr = 0.707107 , wi = -0.707107
m = 3 ,istep = 16, mmax = 8, wr = 0.707107 , wi = -0.707107, Z = -1.000000
i = 2 ,j = 6, m = 5, wr = -0.000000 , wi = -1.000000
m = 5 ,istep = 16, mmax = 8, wr = -0.000000 , wi = -1.000000, Z = 2.000000
i = 3 ,j = 7, m = 7, wr = -0.707107 , wi = -0.707107
m = 7 ,istep = 16, mmax = 8, wr = -0.707107 , wi = -0.707107, Z = 1.000000
i = 0 ,j = 2, m = 1, wr = 1.000000 , wi = 0.000000
i = 4 ,j = 6, m = 1, wr = 1.000000 , wi = 0.000000
m = 1 ,istep = 8, mmax = 4, wr = 1.000000 , wi = 0.000000, Z = 0.000000
i = 1 ,j = 3, m = 3, wr = -0.000000 , wi = -1.000000
i = 5 ,j = 7, m = 3, wr = -0.000000 , wi = -1.000000
m = 3 ,istep = 8, mmax = 4, wr = -0.000000 , wi = -1.000000, Z = 2.000000
i = 0 ,j = 1, m = 1, wr = 1.000000 , wi = 0.000000
i = 2 ,j = 3, m = 1, wr = 1.000000 , wi = 0.000000
i = 4 ,j = 5, m = 1, wr = 1.000000 , wi = 0.000000
i = 6 ,j = 7, m = 1, wr = 1.000000 , wi = 0.000000
m = 1 ,istep = 4, mmax = 2, wr = 1.000000 , wi = 0.000000, Z = 0.000000

Fourier components from the Bit-Reversal algorithm:

28.000000 0.000000
-6.242641 -1.414214
-6.000000 10.000000
2.242641 -1.414214
-8.000000 0.000000
2.242641 1.414214
-6.000000 -10.000000
-6.242641 1.414214

*/
