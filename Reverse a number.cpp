#include<iostream>
using namespace std;

void reverse(long n) {
	long rev = 0;
	int dig;
	while(n) {
		dig = n%10;
		rev = rev*10 + dig;
		n /= 10;
	} 
	cout<<rev;
}

int main() {
	long n;
	cin>>n;
	reverse(n);
	return 0;
}
