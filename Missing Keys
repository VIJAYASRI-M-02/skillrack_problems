Some of the keys in a keyboard which supports only lowercase alphabets were not working. 
Mr. XYZ presses all the keys in the keyboard one by one in random order. 
The program must accept a string S representing the keys typed as the input. 
Then the program must print the keys which are not working in alphabetical order as the output. 

Boundary Condition(s):
    1 <= Length of String S <= 25 
Input Format: 
    The first line contains the string S. 
Output Format: 
    The first line contains alphabets without any space. 
Example Input/Output 1: 
    Input: abcdefghijlmnopqrtuvwxyz 
    Output: ks 
    Explanation: The alphabets k and s are missing in the given string abcdefghijlmnopqrtuvwxyz so those keys are not working. 
 Example Input/Output 2: 
    Input: zfrsydigxhlounpkewqj 
    Output: abcmtv


#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int alpha[26]={0};
    for(int i=0;i<strlen(s);i++){
        alpha[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        char c='a'+i;
        if(alpha[i]==0){
        printf("%c",c);
        }
    }

}
