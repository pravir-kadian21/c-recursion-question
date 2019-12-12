// STRINGS-REMOVE DUPLICATES
// Take as input S, a string. Write a function that removes all consecutive duplicates. Print the value returned.

// Input Format:
// String

// Constraints:
// A string of length between 1 to 1000

// Output Format
// String

// Sample Input
// aabccba
// Sample Output
// abcba
#include<iostream>
#include<cstring>
using namespace std;

void removeduplicate(char *a,int l){
    if(l==0){
        return;
    }
    int rep=1;
    int val=1;
    while(a[0]==a[val]){
        rep++;
        val++;
    }
    cout << a[0];
    return removeduplicate(a+rep,l-rep);
}

int main() {
    char a[10000];
    cin>>a;
    int l=strlen(a);
    removeduplicate(a,l);
	return 0;
}