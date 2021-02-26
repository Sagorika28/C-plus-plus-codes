#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> arr;
    int sum = 0;
    int num;
    while(true) {
        cin>>num;
        sum += num;
        
        if(sum < 0) {
            for(int i = 0; i<arr.size(); i++) {
                cout<<arr[i]<<endl;
            }
            break;
        }
        else {
            arr.push_back(num);
        }
    }
    return 0;
}
