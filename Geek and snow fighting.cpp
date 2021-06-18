#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int snowball(int n, vector<int> weights){
        int sum = 0;
        for(int i=0;i<n;i++) {
            sum += weights[i];
        }
        return sum;
    }
};

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> weights(N);
        for(int i = 0; i < N; i++){
            cin >> weights[i];
        }
        Solution obj;
        cout << obj.snowball(N, weights) << "\n";
    }
}
