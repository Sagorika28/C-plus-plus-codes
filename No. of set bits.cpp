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

int main() {
    int n;
    cin>>n;
    cout<<setBits(n);
    return 0;
}
