#include <iostream>
using namespace std;

bool checkPrime(int n) {
    int i;
	for(i = 2; i*i <= n; i++) {
		if(n % i == 0) 
			break;
	}
	if(i*i > n)
	    return true;
	else
	    return false;
}

int main(int argc, char **argv){
    int i, low, high;
    cin >> low >> high;
	for(i=low; i<=high; i++) {
        if(checkPrime(i))
	        cout<<i<<endl;
	}
	return 0;
}
