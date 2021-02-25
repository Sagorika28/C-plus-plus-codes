#include <iostream>
#include <cmath>
using namespace std;
int changeBasetoDec(int n, int b) {
    int ans=0,dig, p=0;
    while(n) {
        dig = n%10;
        ans += (pow(b,p)*dig);
        p++;
        n /= 10;   
    }
    return ans;
}

int changeDectoBase(int n, int b) {
    int ans=0,dig, p=1;
    while(n) {
        dig = n%b;
        ans += p*dig;
        p *= 10;
        n /= b;   
    }
    return ans;
}

int main() {
    int n,b1,b2,dec,res;
    cin>>n>>b1>>b2;
    dec = changeBasetoDec(n, b1);
    res = changeDectoBase(dec, b2);
    cout<<res;
    return 0;
}
