#include <iostream>
#include <iomanip>
using namespace std;
void change(int n, int b) {
    int ans=0,dig, p=1;
    while(n) {
        dig = n%b;
        ans += p*dig;
        p *= 10;
        n /= b;   
    }
    cout<<ans;
}
int main() {
    int n,b;
    cin>>n>>b;
    change(n, b);
    return 0;
}
