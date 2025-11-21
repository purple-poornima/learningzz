#include <stdio.h>
#include <math.h>
int main(){
    int m=1634;
    int l;
    l=m;
    int r=m;
    int count=0;
   int last_digit;
    int sum=0;
    while(l!=0){
        last_digit=l%10;
        count++;
        l=l/10;
    }
   int last_digit2;
    while(m!=0){
        last_digit2=m%10;
        sum=sum+pow(last_digit2,count);
        m=m/10;
    }
    if(sum==r){
        printf("its armstrong number");
    }
    else{
        printf("Not");
    }
}
