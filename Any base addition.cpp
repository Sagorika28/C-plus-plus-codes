#include<iostream>
#include<cmath>
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

int getSum(int b, int n1, int n2) {
    int n1d = changeBasetoDec(n1,b);
    int n2d = changeBasetoDec(n2,b);
    int sumInDec = n1d + n2d;
    int sumInBase = changeDectoBase(sumInDec,b);
    return sumInBase;
}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
    return 0;
}
