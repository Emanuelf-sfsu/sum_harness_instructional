#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>


void 
setup(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);
   for(int i = 0; i< N; i++){
	A[i] = rand() % N-1;
   }
}

int64_t
sum(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);
	
   int64_t index = 5;
   int64_t sum = 0;
   for(int i = 0; i < N; i++){
	sum += A[index];
   	index = rand() % N-1;
	 }
   return sum;
}

