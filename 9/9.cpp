#include <iostream>
using namespace std;

int main(){
	for(int a = 1; a < 998; a++){
		for(int b = 1; b < 1000-a; b++){
			int c = (1000-a)-b;
			int as = a*a;
			int bs = b*b;
			int cs = c*c;
			if((as + bs) == cs){
				cout << as << ' ' << bs << ' ' << cs << endl;
				cout << a << '*' << b << '*' << c << '=' << a*b*c << endl;
				return 0;
			}
		}
	}
	return 0;
}
