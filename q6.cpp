// ALL INDICES PROBLEM
// Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns an array containing indices of all items in the array which have value equal to M. Print all the values in the returned array.

// Input Format:
// Enter a number N(size of the array) and add N more numbers to the array Enter number M to be searched in the array

// Constraints:
// None

// Output Format
// Display all the indices at which number M is found in a space separated manner

// Sample Input
// 5
// 3
// 2
// 1
// 2
// 3
// 2
// Sample Output
// 1 3
#include<iostream>
using namespace std;

void giveindex(int *a,int n,int i,int key){
    if(i==n){
        return;
    }
    if(a[i]==key){
        cout << i << " ";
    }
    return giveindex(a,n,i+1,key);
}

int main() {
    int n;
    cin>>n;
    int a[100000005];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    giveindex(a,n,0,key);
	return 0;
}