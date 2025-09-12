#include <stdio.h>
int main(){
	
	unsigned long long int sum ,first=0, second=1 ,n;;
	printf("enter the number of terms ");
	scanf("%d", &n);
	if(n==1){
		printf(" 0\n");
	}
	else{
		printf(" 0 \n 1 \n");
	}
       for(int i=1;i<=n-2 ;i++){
		sum=first+second;
		first=second;
		second=sum;
	
        	 printf(" %llu \n",sum);
	}
}
