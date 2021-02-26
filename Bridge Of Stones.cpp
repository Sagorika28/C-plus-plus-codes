#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void findJumps(int, int);

// Function to find number of jumps
// N : number inscribed on the last stone.
// X : number on which we have to reach
void findJumps(int N, int X){
    
    int i, minJumps, m1=0, m2=0, count=0;
    
    if(X==1 || X==N) {
        minJumps = 0;
        cout<<minJumps<<endl;
        return;
    }
    
    else {
        for(i=2; i<N ; i+2) {
            count++;
            if(i==X || (i+1)==X) {
                m1=count;
                break;
            }
        }        
        m2 = (N/2) - m1;        
        minJumps = (m1<=m2)?m1:m2;
    }
    cout<<minJumps;
    cout << endl;
    
}

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        long long N, X;
        cin >> N >> X;
        
        findJumps(N, X);
    }
    
    return 0;
}
