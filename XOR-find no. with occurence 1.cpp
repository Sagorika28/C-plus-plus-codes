#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr;
    int a;
    while(cin>>a) {
        arr.push_back(a);
    }
    int res=arr[0];
    //XOR each element to find the one which occurs only once, the ones that occur twice get XORed to give 0 leaving the mismatched one
    for(int i=1; i<arr.size(); i++) {
        res = res^arr[i];
    }
    cout<<res;
    return 0;
}
