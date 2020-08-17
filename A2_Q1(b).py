'''
The average distance between two points on a 6 by 6 two-dimensional grid (no diagonal connections)
'''
rows,cols=(6,6)
arr=[]
dist=0
count=0
#creaing 6x6 2d array
for i in range (cols):
    col=[]
    for j in range (rows):
        col.append(0)
    arr.append(col)

for px in range(len(arr)):
    for py in range(len(arr[px])):
        for i in range (len(arr)):
            for j in range(len(arr[i])):
                dist=dist+abs(i-px)+abs(j-py)
                count+=1
print("\nTotal sum of the distance between two point in (6x6) grid is  : ",dist)
print("Total number of  the distances in (6x6) grid is : ",count)
print("\nAvg distance between two point in (6X6) grid is : ",float(dist/count))