The program must accept an integer N as the input. 
The program must remove the digits of N in odd positions if N is odd. 
Else the program must remove the digits in even positions of N. 
Finally, the program must print the modified N as the output. 

Boundary Condition(s): 
1 <= N <= 10^18 

Input Format:
The first line contains N.

Output Format: 
The first line contains the modified N.

Example Input/Output 1:
Input: 245872 
Output: 257 
Explanation: 245872 is an even integer so all the digits at even positions are removed to get 257.

Example Input/Output 2: 
Input: 1009 
Output: 9


#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[100],res[100];
    scanf("%s",s);
    int n=strlen(s),k=0;
    if((s[n-1]-'0')%2==0){
        for(int i=0;i<n;i+=2){
            res[k++]=s[i];
        }
    }
    else{
        for(int i=1;i<n;i+=2){
            res[k++]=s[i];
        }
    }
    res[k]='\0';
    int i=0;
    if(res[0]=='0'){
    while(res[i]=='0'){
        i++;
    }
    }
    for(int j=i;j<strlen(res);j++){
        printf("%c",res[j]);
    }

}
