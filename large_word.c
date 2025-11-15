#include <stdio.h>
#include <string.h>
void longest_char(char n[100]);
int main()
{
    char n[100]="hell da thamdfsfsbi paya fdggg";
    longest_char(n);
}
void longest_char(char n[100]){
 int i=0;
 int large_count=-1;
 int total_it=0;
 int space=0;
 
 another_word:
  int count=0;
 while(n[i]!='\0'){
     i++;
     count++;
     total_it++;
     if(large_count<count){
         large_count=count;
     }
     
     if(n[i]==' '){
         space++;
         goto another_word;
     }

}


int j=0;
int l=0;
again:
 int mount=0;
while(n[j]!='\0'){
    j++;
     mount++;
     l=l+1;
    if(mount==large_count){
         break;
    }
    if(n[j]==' '){
        goto again;
    }
    
}
int last_char=j;
int first_char=j - large_count;
for(int k=first_char;k<=last_char;k++){
    printf("%c",n[k]);
}

}


