#include <stdio.h>
#include <math.h>
#include <time.h>

int min(int x, int y); // prototype

int main(){
	long int x,y,lcm; // datatypes
	clock_t start, stop;
	while(1){
		printf("enter the number: ");
		scanf("%ld %ld",&x,&y);
		long int last_found_common_factor = 1;
		
		start = clock();
		for(int i=2 ; i<= min(x ,y); ++i){ // scope, math functions
			 if(x%i==0 && y%i==0){
			 	last_found_common_factor = i;
			 }
		}
		stop = clock();
		
		printf("time taken : %f\n", (double)(stop-start) / CLOCKS_PER_SEC);
		
		printf("the HCF is : %ld\n", last_found_common_factor);
		long int hcf = last_found_common_factor;
		lcm=x*y/hcf; // operator precedence
		printf("the LCM is : %ld\n",lcm);
	}
}

int min(int x, int y){
	if(x < y) return x;
	return y;
}



