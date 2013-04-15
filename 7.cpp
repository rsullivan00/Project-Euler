#include <iostream>
using namespace std;
#define MAXCOUNT 10001ULL

//Find prime numbers
int main(){
	long count = 1;
	long long i = 1;
	while(count < MAXCOUNT){
		i += 2;
		bool prime = true;
		for(long long j = 2; j < i; j++){
			if((i % j) == 0){
				prime = false;
				break;
			}
		}
		if(prime){
			count++;
			cout << "Prime #" << count << " is: " << i << endl;
			if(count >= MAXCOUNT){	
				cout << "Done." << endl;
				break;
			}
		}
	}
	return 0;
}
