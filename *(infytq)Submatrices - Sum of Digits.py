Submatrices - Sum of Digits 

The program must accept an integer matrix of size RxC as the input. 
The program must print all possible 2x2 submatrices where each integer should follow the below rule. - 
Each integer of the submatrix should be divisible by the sum of its digits. 

Note: At least one such submatrix is always present in the given matrix. 

Boundary Condition(s): 
2 <= R, C <= 50 

Input Format: 
The first line contains R and C separated by a space. 

The next R lines each contain C integers separated by a space. 

Output Format: 
The lines containing the 2x2 submatrices as per the given condition. 

Example Input/Output 1: 

Input: 
4 4
18 19 72 42
92 84 60 63 
12 50 93 35 
24 54 94 37 

Output: 
72 42 
60 63 
12 50 
24 54 

Explanation: 
The 2x2 submatrices where each integer of the submatrix is divisible by the sum of its digits are highlighted below. 

18 19 72 42 
92 84 60 63 
12 50 93 35 
24 54 94 37

def su(n):
    s=0
    for i in n:
        s+=int(i)
    return s
def checkmat(m,n,arr):
    arr1=[]
    arr2=[]
    for i in range(m-1):
        for j in range(n-1):
            if(arr[i][j]%su(str(arr[i][j]))==0 and arr[i][j+1]%su(str(arr[i][j+1]))==0 and arr[i+1][j]%su(str(arr[i+1][j]))==0 and arr[i+1][j+1]%su(str(arr[i+1][j+1]))==0):
                arr2.append(arr[i][j])
                arr2.append(arr[i][j+1])
                arr1.append(arr2)
                arr2=[]
                arr2.append(arr[i+1][j])
                arr2.append(arr[i+1][j+1])
                arr1.append(arr2)
                arr2=[]
    return arr1
r,c=map(int,input().split())
arr=[]
for i in range(r):
    arr.append(list(map(int,input().split())))
arr1=checkmat(r,c,arr)
for i in arr1:
    print(*i)
