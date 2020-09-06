//Crout Factorization of a 5x5 matrix

#include <bits/stdc++.h> 
using namespace std; 

const int MAX = 100; 

void luDecomposition(int mat[][MAX], int n) 
{ 
	int lower[n][n], upper[n][n]; 
	memset(lower, 0, sizeof(lower)); 
	memset(upper, 0, sizeof(upper)); 

	// Decomposing matrix into Upper and Lower 
	// triangular matrix 
	for (int i = 0; i < n; i++) { 

		// Upper Triangular 
		for (int k = i; k < n; k++) { 

			// Summation of L(i, j) * U(j, k) 
			int sum = 0; 
			for (int j = 0; j < i; j++) 
				sum += (lower[i][j] * upper[j][k]); 

			// Evaluating U(i, k) 
			upper[i][k] = mat[i][k] - sum; 
		} 

		// Lower Triangular 
		for (int k = i; k < n; k++) { 
			if (i == k) 
				lower[i][i] = 1; // Diagonal as 1 
			else { 

				// Summation of L(k, j) * U(j, i) 
				int sum = 0; 
				for (int j = 0; j < i; j++) 
					sum += (lower[k][j] * upper[j][i]); 

				// Evaluating L(k, i) 
				lower[k][i] = (mat[k][i] - sum) / upper[i][i]; 
			} 
		} 
	} 

	// setw is for displaying nicely 
	cout << setw(6) << "	 Lower Triangular [L]"
		<< setw(32) << "Upper Triangular [U]" << endl; 

	// Displaying the result : 
	for (int i = 0; i < n; i++) { 
		// Lower 
		for (int j = 0; j < n; j++) 
			cout << setw(6) << lower[i][j] << "\t"; 
		cout << "\t"; 

		// Upper 
		for (int j = 0; j < n; j++) 
			cout << setw(6) << upper[i][j] << "\t"; 
		cout << endl; 
	} 
} 

// Driver code 
int main() 
{ 
	int mat[][MAX] = {{1,2,3,0,0}, 
					{6,7,8,0,0}, 
					{-2,-3,-4,-6,-7 },{0,0,-8,-9,10},{0,0,11,12,13}}; 

	luDecomposition(mat, 5); 
	return 0; 
} 


/*Output:

Enter the order of square matrix: 3

Enter matrix element:
Enter A[0][0] element: 1
Enter A[0][1] element: 1
Enter A[0][2] element: 1
Enter A[1][0] element: 1
Enter A[1][1] element: 1
Enter A[1][2] element: 1
Enter A[2][0] element: 1
Enter A[2][1] element: 1
Enter A[2][2] element: 1
[L]:
    1.000    0.000    0.000
    1.000    1.000    0.000
    1.000    0.000    1.000


[U]:
    1.000    1.000    1.000
    0.000    1.000    1.000
    0.000    0.000    0.000

*/ 

/*Output 2:

Enter the order of square matrix: 3

Enter matrix element:
Enter A[0][0] element: -2
Enter A[0][1] element: -1
Enter A[0][2] element: 4
Enter A[1][0] element: -5
Enter A[1][1] element: 1
Enter A[1][2] element: -6
Enter A[2][0] element: 7
Enter A[2][1] element: 0
Enter A[2][2] element: -8

[L]:
    1.000    0.000    0.000
    2.500    1.000    0.000
   -3.500   -3.500    1.000

[U]:
   -2.000   -1.000    4.000
    0.000    1.000   -6.000
    0.000    0.000    6.000
*/












