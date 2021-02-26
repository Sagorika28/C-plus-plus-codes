#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,k, count=0;
    cin>>n>>k;
    int num = n;

    while(num) 
    {
        num/=10;
        count++;
    }

    //for handling k>n
    k = k % count;

    //for handling negative rotation
    if (k < 0)
    {
        k = k + count;
    }

    //rotating the number
    int divisor = 1;
    int multiplier = 1;
    for (int i = 0; i < count; i++)
    {  
       if (i < k)
       {
           divisor *= 10;
       }
       else
       {
           multiplier *= 10;
       }
        
    }
    
    int remainder = n % divisor;
    int quotient = n / divisor;

    int rotate = remainder * multiplier + quotient;
    cout << rotate;
    
    return 0;
}
