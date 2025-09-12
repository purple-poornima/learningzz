#include <stdio.h>
#include <math.h>

int main(){
	while(1){
		int x;
		int y=0;
		printf("enter the value :");
		scanf("%d",&x);
		for(int i=2 ;i <= sqrt((int)x); ++i){
			if( x%i==0){
				++y;
				break;
			}
		}
		if(y > 0){
			printf("not prime number\n");
		} else {
			printf("prime number\n");
		}
	}
}
		
/*
x = 10
i : 2 3 4 5 6 7 8 9
x = 15
i : 1 2. .. 15 

x = 1000000000000
i = 2 3 4 5 

100
2 50
4 25
5 20
10 10
20 5
25 4
50 2

13
2
3
4
5
6
7
8
9
10
11
12
13



*/
