#include <iostream>
#include <cmath>
using namespace std;
void changeBtoDec(int n, int b) {
    int ans=0,dig, p=0;
    while(n) {
        dig = n%10;
        ans += (pow(b,p)*dig);
        p++;
        n /= 10;   
    }
    cout<<ans;
}
int main() {
    int n,b;
    cin>>n>>b;
    changeBtoDec(n, b);
    return 0;
}
