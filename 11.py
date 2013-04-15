import string	
import math

inFile = open("input.txt")

#Prints the array with formatting
def betterPrint(v):
	for x in range(len(v)):
		 print ('{:>4}'*20).format(*v[x]) 

# Initialize array
def getArray():
	ar = [0]*20
	for i in range(20):
		ar[i] = [0] * 20
	return ar

a = getArray()

#File input into array
x = y = 0
for i in range(0, (20*20)):
	num = int(inFile.read(3))
	a[int( math.floor(i/20) )][i % 20] = num

betterPrint(a)
maxP = 0

#Check horizontal products
for y in range(20):
	for x in range(20-4): #We want to stop 4 numbers short
		tempP = a[x][y] * a[x+1][y] * a[x+2][y] * a[x+3][y]
		if(tempP > maxP):
			maxP = tempP
print maxP

#Check vertical products
for x in range(20):
	for y in range(20-4): #We want to stop 4 numbers short
		tempP = a[x][y] * a[x][y+1] * a[x][y+2] * a[x][y+3]
		if(tempP > maxP):
			maxP = tempP

print maxP

#Check diagonal products (in \ direction)
#First check top-right half
for i in range((20*20) - (20*3)): #Ignore last 3 rows
	if( (i % 20) < 17): #We can't start from last 3 columns
		x = i % 20
		y = int( math.floor(i/20) )
		tempP = a[x][y] * a[x+1][y+1] * a[x+2][y+2] * a[x+3][y+3]
		if(tempP > maxP):
			maxP = tempP

print maxP

#Check diagonal products (in / direction)
#Check bottom-left half
for i in range((20*20) - (20*3)): #Ignore last 3 rows
	if( (i % 20) > 2): #We can't start from first 3 columns
		x = i % 20
		y = int( math.floor(i/20) )
		tempP = a[x][y] * a[x-1][y+1] * a[x-2][y+2] * a[x-3][y+3]
		if(tempP > maxP):
			maxP = tempP

print maxP
