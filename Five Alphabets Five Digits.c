The program must accept a string S (where the length of S is always a multiple of 5) as the input. 
The program must print YES if the first five characters of S are alphabets, the second five characters of S are digits, the third five characters of S are alphabets and so on. 
Else the program must print NO as the output. 
Boundary Condition(s): 
    5 <= Length of S <= 100 
Input Format: 
The first line contains the string S.

Output Format: 
The first line contains either YES or NO. 

Example Input/Output 1: 

Input: 
abcde25353KnMDn92483fjkdm 

Output: 
YES 
Explanation: 
The first five characters in S are alphabets (abcde). 
  The second five characters in S are digits (25353). 
  The third five characters in S are alphabets (KnMDn). 
  The fourth five characters in S are digits (92483). 
  The fifth five characters in S are alphabets (fjkdm). 
  Hence the output is YES 
  
  Example Input/Output 2: 
Input: 
qwers63i53asdfe 
Output: 
NO


#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[100];
    int flag=1,k=0;
    scanf("%s",&s);
    for(int i=0;i<strlen(s);i+=5,k++){
        if(k%2==0){
        for(int j=i;j<i+5;j++){
            if(!isalpha(s[j])){
                flag=0;
            }
        }
        }
        else{
            for(int j=i;j<i+5;j++){
                if(!isdigit(s[j])){
                    flag=0;
                }
            }
        }
    }
    if(flag){
        printf("YES");
    }
    else{
        printf("NO");
    }

}
