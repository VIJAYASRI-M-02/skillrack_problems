input:
6 *

output:
-----*
----***
---*-*-*
--*--*--*
-*---*---*
*----*----*
-----*
-----*
-----*
-----*
-----*
-----*
*----*----*
-*---*---*
--*--*--*
---*-*-*
----***
-----*

program:
n,ch=map(str,input().split())
n=int(n)
k=n-1
l=-1
for i in range(n):
  print('-'*k+ch,end="")
  if(i!=0):
      for j in range(2):
          print('-'*l+ch,end="")
  k-=1
  l+=1
  print()

for i in range(n):
  print("-"*(n-1)+ch)
k=0
l=n-2

for i in range(n):
  print(k*'-'+ch,end='')
  if(i!=n-1):
      for j in range(2):
          print('-'*l+ch,end='')
  print()
  k+=1
  l-=1
