#include <iostream>
#include <cmath>
using namespace std;
void checkPrime(int n) {
    int c = 0;
    if(n<2) {
        cout<<"Neither prime nor composite";
        return;
    }

	for(int i = 2; i <= sqrt(n); i++) {
		if(n % 2 == 0) {
			c = 1;
			break;
		}
	}
	if(c==0)
	cout << "Prime";
	else
	cout<<"Not Prime";
}

int main() {
	int n;
	cin>>n;
	checkPrime(n);
	return 0;
}
