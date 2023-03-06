The program must accept two integers X and Y as the input. 
The program must print the product of X and Y after swapping their unit digits as the output. 

Boundary Condition(s): 
1 <= X, Y <= 10^9 

Input Format: 
The first line contains the value of X and Y separated by a space. 

Output Format: 
The first line contains the product of X and Y after swapping their unit digits. 

Example Input/Output 1: 
Input: 984 51 
Output: 52974 

Explanation: 
After swapping the unit digits of 984 and 51, their values become 981 and 54. 
So the product of 981 and 54 is 52974. Hence the output is 52974 

Example Input/Output 2: 
Input: 3988477 48754884 
Output: 194457599172438


#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int n1,n2;
    scanf("%ld %ld",&n1,&n2);
    int a=n1%10,b=n2%10;
    n1/=10;
    n2/=10;
    printf("%lld ",(n1*10 +b)*(n2*10 +a));

}
