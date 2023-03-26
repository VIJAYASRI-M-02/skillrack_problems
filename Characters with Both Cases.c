
 The program must accept a string S as the input.
 The program must print the alphabets in S which have both uppercase and lowercase alphabets in S as the output. 
 The alphabets must be printed in the same order as given in the input. 
 Note: There will be at least one alphabet with both uppercase and lowercase letters in S.
 
 Boundary Condition(s): 1 <= Length of S <= 100 
 Input Format: 
 The first line contains S. 
 Output Format: 
 The first line contains alphabets as per the condition.
 
 Example Input/Output 1:
 Input: aeroRadeOnoWe 
 Output: roROo 
 Explanation: The alphabets r and o are present in both uppercase and lowercase so they are printed. 
 
 Example Input/Output 2: 
 Input: ImpeccAbleCitrus
 Output: IccCi

#Your code below
s=str(input().strip())
s1=''
s2=''
for i in s:
    if(i.isupper()):
        s1+=i
for i in s1:
    if((i.lower() in s) and( i.lower() not in s2)):
        s2+=i.lower()
for i in s2:
    s2+=i.upper()
for i in s:
    if i in s2:
        print(i,end="")
