#include <iostream>
using namespace std;

#define input 1000 
int main(){
	int sum = 0;
	for(int i = 0; i < input; i++){
		if(i % 3 == 0){
			sum += i;
		} else if(i % 5 == 0){
			sum += i;
		}
	}
	cout << sum << endl;

	return 0;
}
