The program must accept a character matrix of size RxC as the input. 
The program must print the column which has the maximum number of vowels as the output. 
If more than one column have the same number of vowels then print the first occurring column. 
Note: Alphabets are only in lower case. 

Boundary Condition(s): 
1 <= R, C <= 100 

Input Format: 
The first line contains the values of R and C separated by a space. 
The next R lines contain C alphabets separated by a space. 

Output Format: 
The first R lines contain the alphabets as per the given condition. 

Example Input/Output 1: 
Input: 
6 5 
a n e i b
u t r h c 
k s f v p 
k j m r o 
i e o q o 
l g q q x 
Output: 
a u k k i l 

Explanation: 
The 1st column has 3 vowels. The 2nd column has 1 vowel. The 3rd column has 2 vowels. The 4th column has 1 vowel. The 5th column has 2 vowels. The maximum number of vowels in the 1st column. Hence the 1st column is printed.



#include<stdio.h>
#include<stdlib.h>
int vow(char c){
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
int main()
{
    int r,c,ind,max=0,j;
    scanf("%d %d",&r,&c);
    char arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf(" %c",&arr[i][j]);
        }
    }
    for(int i=0;i<c;i++){
        int count=0;
        for(j=0;j<r;j++){
            if(vow(arr[j][i])){
                count++;
            }
        }
        if(count>max){
            max=count;
            ind=i;
        }
        
    }
    for(int i=0;i<r;i++){
        printf("%c\n",arr[i][ind]);
    }


}
