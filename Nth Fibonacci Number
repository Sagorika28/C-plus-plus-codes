#include <iostream>
using namespace std;

int fib(int n) {
    int i, first=0, second=1, third;
    
    //base case
    if(n<=1) {
        return n;
    }
    
    for(i=2; i<=n; i++) {
        third = first + second;
        first = second;
        second= third;
    }
    
    return second;
}

int main() {
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}
