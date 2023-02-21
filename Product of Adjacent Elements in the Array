The program must accept the elements of an array of size N as the input.
The program must print the product of the adjacent elements as the output. Note: The first and the last element has only one adjacent element. 
The only adjacent element is considered as the product for the first and the last element. 
Boundary Condition(s): 
          3 <= N <= 50 1 <= Each element <= 9999 Example 
Input/Output 1: 
          Input: 5 7 6 5 4 8 
          Output: 6 35 24 40 4 
Example Input/Output 2: 
          Input: 3 789 675 456 
          Output: 675 359784 675


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d ",arr[1]);
    for(int i=1;i<n-1;i++){
        printf("%d ",arr[i-1]*arr[i+1]);
    }
    printf("%d ",arr[n-2]);
}
