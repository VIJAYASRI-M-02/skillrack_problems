 The program must accept two integers N and P where P <= N as input.
The program must print the pattern as shown in the Example Input/Output section.

Boundary Condition(s): 
1 <= N <= 10 1 <= P <= N 
Input Format: 
The first line contains the value of N and P separated by a space.
Output Format:
The first N lines containing the desired pattern as shown in the Example Input/Output section.
Example Input/Output 1: 
Input: 5 3 
Output:
1 1 
2 2 2 2 
3 3 3 3 3 3
4 4 4 4
5 5 5 5 5


#include<stdio.h>
#include<stdlib.h>

void printnumber(int n,int idx){
    for(int i=0;i<idx;i++){
        printf("%d ",n);
    }
    printf("\n");
}

int main()
{
    int n,p;
    scanf("%d %d",&n,&p);
    int k=0;
    for(int i=1;i<n+1;i++){
        if(i<=p){
            k+=2;
            printnumber(i,k);
        }
        else{
            printnumber(i,i);
        }
    }
    

}
