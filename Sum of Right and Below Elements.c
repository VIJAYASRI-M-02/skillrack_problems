 The program must accept an integer matrix of size RxC as the input. For each integer, the program must print the sum of the elements which are present on its right and below the current element as the output. The elements in the last column have no element on their right and the elements in the last row have no elements below them. So consider the available elements to print the sum. The element which is present in the Rth row and Cth column has no element on its right and below it, so print the same as the output. 

Boundary Condition(s): 2 <= R, C <= 100 
Input Format: The first line contains two integers R and C separated by a space. The next R lines contain C integers separated by space(s). 
Output Format: The first R lines contain C integers separated by space. 
Example Input/Output 1: 

Input: 
3 3 
10 20 30 
15 25 35 
80 70 60 

Output: 
35 55 35 
105 105 60 
70 60 60





#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i!=r-1 && j!=c-1){
                printf("%d ",arr[i+1][j]+arr[i][j+1]);
            }
            else if(i!=r-1 && j==c-1){
                printf("%d ",arr[i+1][j]);
            }
            else if(i==r-1 && j!=c-1){
                printf("%d ",arr[i][j+1]);
            }
            else{
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }

}
