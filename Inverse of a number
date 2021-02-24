#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, dig, pos=0, res=0;
    cin>>n;
    while(n) {
        dig = n%10;
        pos++;
        res += pos*pow(10, dig-1);
        n/=10;
    }
    cout<<res;
    return 0;
}
