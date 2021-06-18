#include<iostream>
#include<cstring>
#include<ctype.h>
using namespace std;
bool isValid(string s) {
    bool l=false, u=false, n=false;
    for(int i=0; i<s.length(); i++) {
        if(islower(s[i])) 
            l = true;
        if(isupper(s[i])) 
            u = true;
        if(isdigit(s[i])) 
            n = true;
    }
    
    if(l && u && n)
        return true;
    
    return false;
}
int main()
{
	int t;
	string s;
	cin >> t;
	while(t--) {
	    cin >> s;
	    cout << (isValid(s)?"YES":"NO") << endl;
	}
	return 0;
}
