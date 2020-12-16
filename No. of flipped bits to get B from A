#include <iostream>
using namespace std;

int setBits(int n) {
    int count=0;
    while(n) {
        n &= (n-1);
        count++;
    }
    return count;
}

int diffBits(int a, int b) {
    //to find out the the differing bits only
    //XOR of two number will have set bits only at those places where A differs from B.
    int n;
    n = a^b;
    
    //counting the number of 1's in n
    return setBits(n);
}

int main() {
    int a,b;
    cin>>a>>b;
    cout<<diffBits(a,b);
    return 0;
}
