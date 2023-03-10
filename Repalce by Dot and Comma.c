
 The program must accept a string S as the input. 
The program must replace all the special characters by . (dot) and , (comma) such that the next ocurring special character of . (dot) must be a , (comma) and also the next ocurring special character of , comma must . (dot). Finally, the program must print the modified string as the ouput. 

Note: The first ocurring special character must be . (dot) in the output. 

Boundary Condition(s): 1 <= Length of S <= 1000 

Input Format: 
The first line contains S. 

Output Format: 
The first line contains the modified string. 

Example Input/Output 1: 
Input: yum.as;io/d'p 
Output: yum.as,io.d,p 

Explanation: There are four special characters which are replaced by . and , alternatively. 

Example Input/Output 2: 
Input: \s.s/qw'sd?fe2'3r 
Output: .s,s.qw,sd.fe2,3r


#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[1000];
    int d=0,c=0;
    scanf("%s",&str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if(!isalpha(str[i]) && !(isdigit(str[i]))){
            
                if(d==1){
                    printf(",");
                    d=0;
                    c=1;
                }
                else{
                    printf(".");
                    d=1;
                    c=0;
                }
        }
        else{
            printf("%c",str[i]);
        }
    }
}
