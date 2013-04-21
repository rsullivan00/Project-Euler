#include <iostream>
using namespace std;
#define MAX 101

int main(){
	long long sumSquares = 0;
	int sum = 0;
	for(int i = 1; i < MAX; i++){
		sumSquares += i*i;
		sum += i;
	}
	//No problem with this
	long long squareOfSum = sum * sum;
	cout << squareOfSum << '-' << sumSquares << '=' << squareOfSum - sumSquares << endl;
	return 0;
}
