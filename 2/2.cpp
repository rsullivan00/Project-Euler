#include <iostream>
using namespace std;
#define MAX 4000000 //4 million
int main(){
	int term1 = 1;
	int term2 = 2;
	int temp;
	int sum = 0;
	while(term2 < MAX){
		if(term2 % 2 == 0)
			sum += term2;
		temp = term1;
		term1 = term2;
		term2 = temp + term2;
	}
	cout << sum << endl;
	return 0;
}
