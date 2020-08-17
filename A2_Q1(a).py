'''Find the average distance between two points on a straight line made of discrete N (=6) points
initialise the variable'''
n=6
dist=0
count=0
#iterate the loop till n
for p in range(1,n+1):
    for i in range(1,n+1):
         dist+=abs(i-p)
         count+=1
print("\nThe total sum of the distances between two points : ",dist)
print("The total number of distances is : ",count)
print("\nThe average distances between two points is : ",float(dist/count))
