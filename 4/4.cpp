#include <iostream>
#include <string>

using namespace std;

//Can only be 5 or 6 digits
bool isPalindrome(const int _num){
	//Last digit is num %10
	//Second to last is num % 100
	//etc
	int reverse = 0;
	int num = _num;
	while(num > 0){
		int digit = num % 10;
		reverse = reverse*10 + digit;
		num = num/10; 
	}
	if(reverse == _num)
		return true;
	return false;
}

int main(){
	int maxP = 0;
	for(int i = 100; i < 1000; i++){
		for(int j = i; j < 1000; j++){
			int num = i*j;
			if(isPalindrome(num)){
				if(num > maxP)
					maxP = num;
			}
		}
	}
	cout << "Max: " << maxP << endl;
	return 0;
}
