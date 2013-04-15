#include <iostream>
#include <vector>

using namespace std;
#define MAX 2000000ULL

//Find prime numbers
int main(){
	vector<long long> primes;
	long sum = 2;
	bool prime;
	long long j;
	for(long long i = 3; i < MAX; i += 2){
		prime = true;
		for(j = 0; j < primes.size(); j++){
			if((i % primes[j]) == 0){
				prime = false;
				break;
			}
		}
		if(prime){
			sum += i;
			primes.push_back(i);
		}
		if(i == 100003){
			for(int k = 0; k < primes.size(); k++){
				cout << primes[k] << ' ';
			}
			cout << endl;
		}
	}
	cout << sum << endl;
	return 0;
}
