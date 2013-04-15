#include <iostream>
#include <vector>
using namespace std;
#define INPUT 600851475143ULL

int main(){
	long long input = INPUT;
	for(long long i = 1; i <= input; i++){
		if(input % i == 0){
			input = input/i;
			cout << input << endl;
		}
	}
}
