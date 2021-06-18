#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    long long HCF(long long n, long long m){
        if(m==0)
            return n;
        
        return HCF(m, n%m);
    }
    
    long long sum(long long N, long long M){
        long long hcf = HCF(N,M);
        long long q1 = N/hcf; 
        long long q2 = M/hcf;
        long long sum = q1+q2;
        return sum;
    }
};

int main(){
    int T;
    cin >> T;
    while(T--){
        long long N, M;
        cin >> N >> M;
        Solution obj;
        cout << obj.sum(N, M) << "\n";
    }
}
