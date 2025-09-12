#include <stdio.h>
#define PI 3.14
int main(){
	int p ,t,m,celsius,f;
	char z;
	float s,r,c,a;
	printf("do you want to know :\n 1.simple interest \n 2.area and circumfernce of circle \n 3.conversion of  faranheit to celsius\n enter 1/2/3:");
	scanf("%c",&z);
	switch(z){
		case '1':// checkout switch
			printf("enter the p ,r ,t:");
			scanf("%d %d %d",&p,&r,&t);
			//  principle * radius * time(years)
			s=p*r*t/100;
			printf("the answer is simple interest=%f:",s);
			break;
		 case'2':
			printf("\n enter the radius:");
			scanf("%d",&m);
			c=2*PI*m;
			a=PI*m; // use macro, or pi from math.h
			printf("the circumference =%f,and area =%f",c,a);
			break;
		case '3' :
			printf("\n enter the faranhiet:");
			scanf("%d",&f);
			celsius=(f-32)*5/9;
			printf("then the celsius  is %d:",celsius);
			break;
		default:
		      	printf("are you stupid?");
      	}
}


