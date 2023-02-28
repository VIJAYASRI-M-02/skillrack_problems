The program must accept N integers separated by a comma as the input.
The program must print the positive integers separated by a comma among the N integers as the output. 
If there is no positive integer then the program must print -1 as the output. 
Boundary Condition(s): 
    1 <= N <= 100 -999 <= Each integer value <= 999 
Input Format:
The first line contains the value of N.
The second line contains N integers separated by a comma. 

Output Format: 
The first line contains either the positive integers separated by a comma or -1. 
  
Example Input/Output 1: 
Input: 5 
12,-10,78,-5,-99 
Output:
12,78 
  
Explanation: 
The positive integers are 12 and 78. 
So they are separated by a comma and printed as the output. 
  
  
Example Input/Output 2: 
Input: 6 
-41,-93,-91,-54,-59,-88 
Output: -1
  
  
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d,",&arr[i]);
    }
    int f=1;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            if(f){
                printf("%d",arr[i]);
                f=0;
            }
            else{
                printf(",%d",arr[i]);
            }
            
        }
    }
    if(f)
    printf("-1");

}
