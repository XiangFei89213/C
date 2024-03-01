// this is the leaarn with error problem
#include <stdio.h>
#include <stdlib.h>
#define N 2 

int* matrix_vector_multiply(int A[N][N], int v[N]) {
	static int result[N];
	int i,j;
    for (i = 0; i < N; i++) {
        result[i] = 0;
        for (j = 0; j < N; j++) {
            result[i] += A[j][i] * v[j];
        }
    }
    
    return result;
}

int main(){
	int i,j;
	int plaintext[N] = {14,-24};
	float ciphertext[N];
	int B_good[N][N] = { {3,0}, {0,2} };
	int B_bad[N][N] = { {6,14}, {3, 8} };
	// int result[N]; 
	int *answer;
	float error[N] = {-0.4,0.2};
	
	//////////////// 
	//Bob Encrypted
	//////////////// 
	answer = matrix_vector_multiply(B_bad, plaintext);
	
	//plus error
	for(i=0;i<N;i++){
		ciphertext[i] = (*(answer + i) + error[i]);	
	}
	 
	//show ciphertext
	for (i = 0; i < N; i++) {
  		printf("%f\n", ciphertext[i]);
	}
	
	//////////////// 
	//Alice decrypted
	////////////////
	
	
	
	return 0;
}
