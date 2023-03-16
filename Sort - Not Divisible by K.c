 The program must accept N integers and an integer K as the input.
 The program must sort those N integers in ascending order except the integers which are divisible by K. 
 Finally, the program must print the sorted integers as the output.
 Note: The integers which are divisible by K must retain their positions. 
 
 Boundary Condition(s): 1 <= N, K <= 1000 1 <= Each integer value <= 10^8 
 
 Input Format: 
 The first line contains the values of N and K separated by a space. 
 The second line contains N integers separated by space(s). 
 
 Output Format: 
 The first line contains N sorted integers separated by a space. 
 
 Example Input/Output 1: 
 Input: 7 5 65 83 75 92 47 50 19 
 Output: 65 19 75 47 83 50 92 
 
 Explanation: The integers which are not divisible by 5 are 83, 92, 47 and 19. 
 The integers which are divisible by 5 are 65, 75 and 50. 
 So sort the integers which are not divisible by 5 in their positions and also retain the integers which are divisible by 5 in their same positions. 
 Hence the output is 65 19 75 47 83 50 92 
 
 Example Input/Output 2: 
 Input: 4 2 90 40 72 46 
 Output: 90 40 72 46

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,k,t=0;
    scanf("%d %d",&n,&k);
    long long int arr1[n],arr2[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        if(arr1[i]%k!=0){
            arr2[t++]=arr1[i];
        }
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(arr2[i]<arr2[j]){
                int temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }
    t=0;
    for(int i=0;i<n;i++){
        if(arr1[i]%k !=0){
            arr1[i]=arr2[t];
            t++;
        }
        printf("%lld ",arr1[i]);
    }

}
