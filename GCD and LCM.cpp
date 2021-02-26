#include <iostream>
using namespace std;

int hcf(int a, int b) 
{
    if(b == 0) return a;
    return hcf(b, a%b);
}

int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;
    int gcd, lcm;
    gcd = hcf(num1, num2);
    lcm = (num1*num2) / gcd;
    cout << gcd << endl << lcm;
    return 0;
}
