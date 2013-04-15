#include <iostream>
using namespace std;
#define RANGE 20

unsigned gcd(unsigned, unsigned);

//Find the lowest number divisible by all numbers 1-20
// lcm(a,b) = abs(a*b)/gcd(a,b)
unsigned lcm(unsigned a, unsigned b){
	return (a/gcd(a,b)) * b;
}

unsigned gcd(unsigned a, unsigned b){
	if(b == 0)
		return a;
	return gcd(b, a % b);
}

int main(){
	unsigned mult = 1;
	for(unsigned i = 1; i < RANGE; i++){
		mult = lcm(mult, i);
	}
	cout << mult << endl;
}
