"""
Create 3x3 matrices M=(a11,a12 … a33) and N=(b11,b12, …, b33) with numbers of your
choice (zeros, negatives and positives but not random numbers) in two separate files. Read
the matrices from the files. Find M x A and M x N.
"""
#importing martix from text file
with open('M.txt', 'r') as m:
    M = [[float(num) for num in line.split(' ')] for line in m]
with open('N.txt', 'r') as n:
    N = [[float(num) for num in line.split(' ')] for line in n]
A = [[2], [-3.5], [4]]
Multiply = [[0,0,0],
            [0,0,0],
            [0,0,0]]
Multiply2 = [0]*3
#multiplication of M and N
for i in range(len(M)):
    # iterating the colomn of "N"
    for j in range(len(N[0])):

        # iterating row of "N"
        for k in range(len(N)):
          Multiply[i][j] += M[i][k] * N[k][j]
print("\n M x N :")
for i in Multiply:
    print(i)
#multiplication of M and A
for i in range(len(M)):
    # iterating the colomn of "N"
    for j in range(len(A[0])):
        # iterating row of "N"

        for k in range(len(A)):
            # print(k)
            Multiply2[i] += M[i][k] * A[k][j]
print("\n M x A :")
print(Multiply2)
