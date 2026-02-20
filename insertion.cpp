#include <iostream>
using namespace std;
int main() 
{    int arr[8]={4,5,6,3,2,44,67,89};
	for(int i=0;i<8;i++){
       for(int j=i-1;j>=0;j--){
            if(arr[j]<arr[j+1]){
              int temp;
			  temp=arr[j];
			  arr[j]=arr[j+1];
			  arr[j+1]=temp;
			}
	   }
	}
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	
	
	}
}
