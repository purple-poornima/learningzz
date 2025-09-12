#include <stdio.h>
int main(){
	int a,b,c,d;
	printf("enter the value a, b,c,d:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b && a>c && a>d){
	printf("%d =(the first value) Enter is greater",a);
	}
	else{
	printf("the first value=%d is not greater",a);
	}


}
