import math

# Max starting point is 1,000,000

# Let's give brute force a try
def iterate(num):
	if(num % 2 == 0):
		return num/2
	else:
		return 3*num + 1

maxSteps = 0
bestNum = 1
for x in range(2, 1000000):
	hold = x
	count = 0
	while(x > 1):
		x = iterate(x)
		count += 1
	if(count > maxSteps):
		maxSteps = count
		bestNum = hold

print maxSteps
print bestNum
# Brute force worked (slowly)
# I could have sped up the process by building a list of numbers we have 
# already processed and checked that list at each iteration.
