The program must accept an alphabet CH as the input. 
The program must print all the consonants from CH circularly as the output. 
Note: CH is always in lowercase. 

Boundary Condition(s): 'a' <= CH <= 'z' 

Input Format: The first line contains CH. 
Output Format: The first line contains all the consonants in lowercase from CH circularly. 

Example Input/Output 1: 
Input: w 
Output: wxyzbcdfghjklmnpqrstv 
Explanation: All the lowercase consonants are printed circularly starting from the given alphabet w 

Example Input/Output 2: 
Input: e 
Output: fghjklmnpqrstvwxyzbcd

#include<stdio.h>
#include<stdlib.h>
int isvowel(char ch){
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}

int main()
{
    char ch;
    scanf("%c",&ch);
    for(char i=ch;i<='z';i++){
        if(!isvowel(i))
        printf("%c",i);
    }
    for(char i='a';i<ch;i++){
        if(!isvowel(i))
        printf("%c",i);
    }

}
