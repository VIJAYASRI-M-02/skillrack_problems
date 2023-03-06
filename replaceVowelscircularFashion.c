The program must accept a string S as the input. 
The program must replace all the vowels in S by the vowels a, e, i, o and u in a circular manner.
Finally, the program must print the modified string as the output.
Note: All the alphabets in S are only in lower case. 

Boundary Condition(s): 
1 <= Length of S <= 100 

Input Format: 
The first line contains the string value S. 
Output Format: 
The first line contains the modified string value of S. 

Example Input/Output 1: 
Input: 
kingkong 

Output: 
kangkeng 

Explanation: 
The vowels in the string kingkong are i and o. So they are replaced by a and e. Hence the output is kangkeng 

Example Input/Output 2: 
Input: 
icecreamchocolate 

Output: 
acecriomchucaleti

#include<stdio.h>
#include<stdlib.h>

int isvow(char c){
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}


int main()
{
    char s[100];
    scanf("%s",&s);
    char vow[]="aeiou";
    int k=0;
    for(int i=0;i<strlen(s);i++){
        if(isvow(s[i])){
            s[i]=vow[k++];
        }
        if(k==5)
        k=0;
    }
    printf("%s",s);
}
