import math

sum = 0
list = [True]*2000000

for x in range(2, len(list)):
	if(list[x] == True):
		sum += x
		for y in range(int( math.ceil(len(list)/ x) ) + 1):	
			if((x*y) < len(list)):
				list[x*y] = False 
print sum
		 
