input:
7

output:

1 * * 4 3 2 1 
2 * * 5 * * * 
3 * * 6 * * * 
4 5 6 7 6 5 4 
* * * 6 * * 3 
* * * 5 * * 2 
1 2 3 4 * * 1 


n=int(input())
k=n-(n//2)
y=n-(n//2) -1
a=1
b=1
m=n-(n//2)
z=n-1

for i in range(n):
    for j in range(n):
        if(i<n//2):
            if(j<n//2):
                if(j==0):
                    print(a,end=" ")
                    a+=1
                else:
                    print("*",end=" ")
            elif(j==n//2):
                print(k,end=" ")
                k+=1
            else:
                if(i==0):
                    print(y,end=" ")
                    y-=1
                else:
                    print("*",end=" ")
            
        
        elif(i==n//2):
            if(j<=n//2):
                print(m,end=" ")
                m+=1
            else:
                print(z,end=" ")
                z-=1
        
        else:
            if(j==n//2):
                print(k-1,end=" ")
                k-=1
            elif(j==n-1):
              print(z,end=" ")
              z-=1
            elif(i==n-1):
                if(j<=n//2) :
                    print(b,end=" ")
                    b+=1
                
                else:
                    print("*",end=" ")
            
            else:
                print("*",end=" ")
    print()
