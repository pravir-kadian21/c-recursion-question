// RECURSION-CONVERT STRING TO INTEGER
// Take as input str, a number in form of a string. Write a recursive function to convert the number in string form to number in integer form. E.g. for “1234” return 1234. Print the value returned.

// Input Format:
// Enter a number in form of a String

// Constraints:
// None

// Output Format
// Print the number after converting it into integer

// Sample Input
// 1234
// Sample Output
// 1234
#include<iostream>
#include<cstring>
using namespace std;

void strinttoint(char *a,int l){
    if(l==0){
        return;
    }
    cout << a[0];
    return strinttoint(a+1,l-1);
}

int main() {
    char a[10000000];
    cin>>a;
    int l=strlen(a);
    strinttoint(a,l);
	return 0;
}