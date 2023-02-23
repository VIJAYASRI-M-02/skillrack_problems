The program must accept two character matrices are of the same size RxC as the input. 
For each alphabet at the same position in both the matrices, the program must print greater alphabet as the output. 
Note: Alphabets in both the matrix matrices are only in lower-case. 

Boundary Condition(s):
2 <= R, C <= 100 

Input Format: 
The first line contains the values of R and C separated by a space. 
The next Rx2 lines each contain C alphabets separated by a space. 

Output Format: 
The first R lines each contain C alphabets separated by a space. 

Example Input/Output 1: 
Input: 
2 3 
a f h 
n u d 
m o g
k t s 

Output: 
m o h 
n u s



#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    char arr[r][c],arr1[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf(" %c",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf(" %c",&arr1[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int a=arr[i][j];
            int b=arr1[i][j];
            if(a>=b){
                printf("%c ",arr[i][j]);
            }
            else{
                printf("%c ",arr1[i][j]);
            }
        }
        printf("\n");
    }
}
