 The program must accept two string values S1 and S2 as the input. The program must find the absolute difference between the number of common characters and the number of uncommon characters in the string values and print the value as the output. 

Boundary Condition(s): 
  1 <= Length of S1, Length of S2 <= 10^6 
   
Input Format: 
  The first line contains S1 The second line contains S2
Output Format: 
  The first line contains the positive integer value denoting the absolute difference 
Example Input/Output 1: 
  Input: abcdxyza 
         bcdxmnomm 
  Output: 2 
Explanation: Common characters are bcdx and the count is 4.
             Uncommon characters are ayzmno and the count is 6. Hence difference is 4-6 = -2. 
             But as absolute difference is asked, the output is 2. 
Example Input/Output 2: 
    Input: aaaaaaaa 
           bbbbbbbcccccc 
    Output: 3
    
    
s1=str(input().strip())
s2=str(input().strip())
s3=''
s4=''
s1=set(s1)
s2=set(s2)
for i in s1:
    if i in s2:
        s4+=i
    else:
        s3+=i
for i in s2:
    if i in s1:
        s4+=i
    else:
        s3+=i
print(abs(len(set(s3)))-len(set(s4)))
