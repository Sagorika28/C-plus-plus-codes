//This is the naive approach to this problem

// C++ implementation of For each element in 1st 
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>
 
using namespace std;

// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
vector <int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n);

// Driver program to test above
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        vector <int> res = countEleLessThanOrEqual(arr1, arr2, m, n);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        
        cout<<endl;
    }
    return 0;
}// } Driver Code Ends


// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n)
{
//Your code goes here
    sort(arr2, arr2+n);
    vector<int> count(m, 0);
    int i, j, c;
    for(i=0; i<m; i++) {
        c=0;
        j=0;
        while(arr2[j]<=arr1[i]) {
            c++;
            j++;
        }
        count[i]=c;
    }
    return count;
}
