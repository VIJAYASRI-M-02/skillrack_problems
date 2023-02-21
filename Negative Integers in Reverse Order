The program must accept an integer array of size N as the input. 
The program must print the negative integers in the array in reverse order as the output. 
If there is no negative integer in the array, then the program must print -1 as the output. 
Boundary Condition(s): 
3 <= N <= 50 -100 <= Each Integer <= 100 
Example Input/Output 1: 
Input: 5 45 -89 -28 38 49 
Output: -28 -89 
Example Input/Output 2: 
Input: 3 12 34 56 
Output: -1

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],arr1[50],k=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr1[k++]=arr[i];
        }
        
    }
    if(k==0){
        printf("-1");
    }
    else{
        for(int i=k-1;i>=0;i--){
            printf("%d ",arr1[i]);
        }
    }

}
