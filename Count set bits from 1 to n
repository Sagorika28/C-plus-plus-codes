//complexity = O(log n)
#include <iostream>
using namespace std;

int largestPowerOf2inRange(int n) {
    int x=0;  
    while((1<<x) <= n) {
        x++;
    }
    return x-1;   //since it increments once already for x=0
}

int bitsCount(int n) {
    if(n==0) return 0;
    int x = largestPowerOf2inRange(n);
    //formula = x.2^(x-1) + (n - 2^x + 1) + bitsCount(n - 2^x)
    int bitsTill2x = x * (1 << (x-1));
    int msb = n - (1 << x) + 1;
    int remaining = bitsCount(n - (1 << x));
    int ans = bitsTill2x + msb + remaining;
    return ans;
}

int main() {
    int n;
    cin>>n;
    cout<<bitsCount(n);
}
