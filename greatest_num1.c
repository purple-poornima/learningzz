#include <stdio.h>
int main(){
     int x,y,z,k;
     printf("i did two different programs but they are all similar 1st one made by me but a little improvised and the 2nd one is from online\n 1.my program \n 2.online program \n enter 1/2:");
     scanf("%d",&k);
     switch(k){
     
     case 1:
	     printf("enter the three nums:  ");
	     scanf("%d %d %d",&x,&y,&z);
	     
	     if(x>y && y>z){
		      printf("%d is greater  ",x);
		     }
	     else if(x<y && y<z){
		      printf("%d is greater ",z);
		      }
	     else if(x<y && y>z){
		      printf("%d is greater  ",y);
		   }
		   break;
     case 2:
	     printf("enter the three nums ");
	     scanf("%d %d %d",&x,&y,&z);
	     if(x>y){
		 if(x>z){
		 printf("%d is greater",x);
		 }
		 else{
		 printf("%d is greater",z);
		 }
	}
	      if(x<y){
		   if(y>z){
		   printf("%d is greater");
		   }
		   else{
		   printf("%d is greater ");
		   }
		   }
		   break;
     default :
     printf("wrong entry");
 }          
}
