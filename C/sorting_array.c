#include<stdio.h>
#define size 10
int main(){
    int arr[size];
    int i,j,n,b,temp;
    printf("enter number of elements you want to store : ");
    scanf("%d",&n);
    printf("\nenter elements : ");
    for(b=0;b<n;b++)
    	scanf("%d",&arr[b]);
    for(i=0;i<n-1;i++){
         for(j=i++;j<n;j++){
        	if(arr[i]>arr[j]){
              temp=arr[i]; 
              arr[i]=arr[j];
              arr[j]=temp;
              i=-1;
              break;
            }
 	    }
    }
    printf("\narray after sorting \n");
    for(b=0;b<n;b++)
    	printf("%d|",arr[b]);
    return 0;
}