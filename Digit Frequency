#include <iostream>
using namespace std;
int nodigits(int n, int d) {
    int dig, res=0;
    while(n) {
        dig=n%10;
        if(dig==d) res++;
        n/=10;
    }
    return res;
}
int main() {
    int n, d;
    cin>>n>>d;
    cout<<nodigits(n,d);
    return 0;
}
