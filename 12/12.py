import math
import string

factortable = []

def getTriangleNums(MAX):
	numbers = []
	sum = 0
	i = 1
	while(sum < MAX):
		sum += i		
		numbers.append(sum)
		i += 1
	return numbers

def getNumDivisors(num):
	count = 1
	i = 2
	while(i < int(math.sqrt(num))):
		if(num % i == 0):
			count += 1
		i += 1
	return count
		
tris = getTriangleNums(1000000000000)
print tris[len(tris)-1]
print getNumDivisors(tris[len(tris)-1])
