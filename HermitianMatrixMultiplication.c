//Matrix Multilication of Hermitian Matrices
#include <stdio.h>
#include <conio.h>

struct complex{
	int real;
	int imaginary;
};
void main()
{
  int m, n, p, q, c, d, k, sum = 0;
  complex first[2][2],second[2][2],third[2][2],fourth[2][2],multiply[2][2];
  //First Matrix
  printf("Enter elements of first matrix\n");
  for (c = 0; c < 2; c++){
    for (d = 0; d < 2; d++){
      scanf("%d", &first[c][d].real);
      scanf("%d", &first[c][d].imaginary);
 	}
  }
  //Second Matrix
  printf("Enter elements of second matrix\n");
  for (c = 0; c < 2; c++){
    for (d = 0; d < 2; d++){
      scanf("%d", &second[c][d].real);
      scanf("%d", &second[c][d].imaginary);
 	}
  }
  //Third Matrix
  printf("Enter elements of third matrix\n");
  for (c = 0; c < 2; c++){
    for (d = 0; d < 2; d++){
      scanf("%d", &third[c][d].real);
      scanf("%d", &third[c][d].imaginary);
 	}
  }
  //Fourth Matrix
  printf("Enter elements of fourth matrix\n");
  for (c = 0; c < 2; c++){
    for (d = 0; d < 2; d++){
      scanf("%d", &fourth[c][d].real);
      scanf("%d", &fourth[c][d].imaginary);
 	}
  }
  
  for (c = 0; c < 2; c++) {
      for (d = 0; d < 2; d++) {
        for (k = 0; k < 2; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
    
	printf("Product of the first two matrices:\n");
 	for (c = 0; c < 2; c++) {
      for (d = 0; d < 2; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
    
    printf("Product of the first three matrices:\n");
 
    for (c = 0; c < 2; c++) {
      for (d = 0; d < 2; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  
  for (c = 0; c < 2; c++) {
      for (d = 0; d < 2; d++) {
        for (k = 0; k < 2; k++) {
          sum = sum + multiply[c][k]*fourth[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
  
  printf("Product of the four matrices:\n");
 
    for (c = 0; c < 2; c++) {
      for (d = 0; d < 2; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
	}
}

 
    

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  