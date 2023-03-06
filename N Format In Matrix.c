The program must accept a character matrix of size NxN as the input. 
The program must print the alphabets in 'N' format in the matrix as the output. 
Boundary Condition(s): 
              1 <= N <= 50 
Input Format: 
The first line contains the integer N. 
The next N lines contain N characters separated by spaces. 
Output Format: 
The first line contains the alphabets in 'N' format the matrix. 
Example Input/Output 1: 
Input: 4 
r t u o 
k l a d 
j h d g 
v b m z 
Output: rkjvldzgdo 
Explanation: 
r     o 
k l   d 
j   d g
v     z


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    char arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%s",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
            printf("%c",arr[i][0]);
    }
    for(int di=1;di<n-1;di++){
        printf("%c",arr[di][di]);
    }
    for(int i=n-1;i>=0;i--){
        printf("%c",arr[i][n-1]);
    }
    

}
