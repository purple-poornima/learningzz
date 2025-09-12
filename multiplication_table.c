#include <stdio.h>
int main(){
 	int x ,y;
 	printf("enter a number to show its multiplication table: ");
 	scanf("%d",&x);
 	for(int i=0;i<=15;++i){
 	y=i*x;
 	printf("%d * %d = %d \n",i,x,y);
 	}
}
