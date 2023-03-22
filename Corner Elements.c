The program must accept an integer matrix of size RxC as the input. 
The program must print the corner elements (top left, top right, bottom left and bottom right) of the matrix as the output.

Boundary Condition(s): 2 <= R, C <= 100 
Input Format: The first line contains two integers R and C separated by a space. 
              The next R lines contain C integers separated by space(s). 
Output Format: The first line contains four integers separated by a space. 

Example Input/Output 1: 
Input: 3 4 
10 20 30 40 
89 88 87 86 
90 70 80 60 

Output: 
10 40 90 60 

Explanation: The corner elements of the matrix in the order of top left, top right, bottom left, bottom right are printed as the output. 

Example Input/Output 2: 
Input: 
3 2 
1 9
6 7 
4 2 
Output: 1 9 4 2


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
    printf("%d %d %d %d",arr[0][0],arr[0][c-1],arr[r-1][0],arr[r-1][c-1]);

}
