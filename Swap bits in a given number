#include <iostream>
using namespace std;
int main() {
    unsigned int n, p1, p2, x;
    cin>>x>>p1>>p2>>n;
    //Move all bits of the first set to the rightmost side
    unsigned int s1 = (x>>p1) & ((1U<<n)-1);
    //(1U << n) - 1 gives a number that contains last n bits set and other bits as 0. We do & with this expression so that bits other than the last n bits become 0.

    unsigned int s2 = (x>>p2) & ((1U<<n)-1);

    unsigned int Xor = s1^s2;
    Xor = (Xor<<p1) | (Xor<<p2);
    unsigned int ans = x^Xor;
    cout<<ans;
    return 0;
}
