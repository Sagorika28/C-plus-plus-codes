// Time complexity: O(log n)
#include <bits/stdc++.h>
using namespace std;

int findExtra(int a[], int b[], int n) {
    int beg = 0, last = n-1, i=-1, mid;
    while(beg<=last) {
        mid=(beg+last)/2;
        if(a[mid]==b[mid]) {
            beg = mid+1;
        }
        else {
            last = mid-1;
            i=mid;
        }
    }
    return i;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        cout << findExtra(a, b, n) << endl;
    }
}
