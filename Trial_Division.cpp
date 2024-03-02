// CPP implementation of
// Trial Division Algorithm
#include <bits/stdc++.h>

using namespace std;

// Function to check if a number is
// a prime number or not
int TrialDivision(int N){

	// Initializing with the value 2
	// from where the number is checked
	int i = 2;

	// Computing the square root of
	// the number N
	int k = ceil(sqrt(N));

	// While loop till the
	// square root of N
	while(i<= k){

		// If any of the numbers between
		// [2, sqrt(N)] is a factor of N
		// Then the number is composite
		if(N % i == 0)
			return 0;
		i += 1;
	}

	// If none of the numbers is a factor,
	// then it is a prime number
	return 1;
}

// Driver code
int main()
{
	// int N = 49;
    int p;

    for (int n =1 ; n<100; n++){
        p = TrialDivision(n);
        if(p)
		    cout << n << " ";
    }
	

	// To check if a number is a prime or not


	return 0;
}

// This code is contributed by mohit kumar 29
