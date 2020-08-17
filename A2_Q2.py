"""
Create two vectors of type A=(a1,a2,a3) and B=(b1,b2,b3) with numbers of
your choice (butnot random numbers) in the code itself.
Find A+B and A.B (dot product).
"""
A=[-2.5,5,6]
B=[6,0,-1]
sum=[0]*3
dot_pdt=0
#addition of two vecter(A+B)
for i in range(len(A)):
    sum[i]+=A[i]+B[i]
print("\nThe addition A+B vecter is : ",sum,"\n")
#dot product of two vecter
for j in range(len(A)):
    dot_pdt+=A[j]*B[j]
print("The dot product A.B is : ",dot_pdt)

