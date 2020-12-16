#include <bits/stdc++.h> 
using namespace std; 

// To store digit to word mapping 
char word[][10] = {"zero", "one", "two", "three","four", 
				"five", "six", "seven", "eight", "nine"}; 

void printWordsWithoutIfSwitch(int n) 
{ 
	// Store individual digits 
	int digits[10]; // a 32 bit int has at-most 10 digits 

	int dc = 0; // Initialize digit count for given number 'n' 

	// The below loop stores individual digits of n in reverse order. do-while is used to handle "0" input 
	do
	{ 
		digits[dc] = n%10; 
		n = n/10; 
		dc++; 
	} while (n != 0); 

	// Traverse individual digits and print words using word[][] 
	for (int i=dc-1; i>=0; i--) 
	cout << word[digits[i]] << " "; 
} 
 
int main() 
{ 
	int n = 350; 
	printWordsWithoutIfSwitch(n); 
	return 0; 
} 
