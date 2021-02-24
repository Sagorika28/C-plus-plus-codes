#include <iostream>

using namespace std;

int main(int argc, char **argv){
    int c=0, n;
    cin >> n;
    int *arr = new int[10000000];
   
    while(n) {
        arr[c++]=n%10;
        n/=10;
    }

    for(int i=c-1; i>=0; i--) 
        cout<<arr[i]<<endl;
    
}
