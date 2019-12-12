// RECURSION-DUPLICATE CHARACTER FORMATTING
// Take as input str, a string. Write a recursive function which returns a new string in which all duplicate consecutive characters are separated by a ‘ * ’. E.g. for “hello” return “hel*lo”. Print the value returned

// Input Format:
// Enter a String

// Constraints:
// None

// Output Format
// Display the resulting string (i.e after inserting (*) b/w all the duplicate characters)

// Sample Input
// hello
// Sample Output
// hel*lo
#include<iostream>
#include<cstring>
using namespace std;

void duplicate(char *a,int l){
    if(l==0){
        return;
    }
    if(a[0]==a[1]){
        cout << a[0] << "*";
    }
    else{
        cout << a[0];
    }
    return duplicate(a+1,l-1);
}

int main() {
    char a[10000000];
    cin>>a;
    int l=strlen(a);
    duplicate(a,l);
	return 0;
}