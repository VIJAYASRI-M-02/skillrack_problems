 The program must accept N positive integers as the input. The program must subtract the integers from the largest integer among the N integers and print the modified integers as the output. 

Boundary Condition(s): 
1 <= N <= 1000 

Input Format: 
The first line contains N.
The second line contains N integers separated by space. 

Output Format: 
The first line contains N integers separated by a space. 
Example Input/Output 1:
Input: 
6 12 40 30 56 21 8
Output: 44 16 26 0 35 48



#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int n,max=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",max-arr[i]);
    }

}
