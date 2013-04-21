import math
import string

inFile = open("input.txt", 'r')
sum = 0;
for line in inFile:
	num = int(line[:15])
	print num
	sum += num

print sum
