#include <iostream>
using namespace std;

int fact(int n) {
	if(n<=1)
		return n;
	// int ans=n*fact(n-1);
	// return ans;
	return n*fact(n-1);
}

int fibb(int n) {
	if(n<=1)
		return n;
	int ans1=fibb(n-1);
	int ans2=fibb(n-2);
	return ans1+ans2;
}

void rev(int i, int arr[n]) {
	if(i>n/2)
		return;
	swap(a[i],a[n-i-1]);
	rev(i+1,arr);
}

int main() {
	int n;
	cin>>n;
	int arr[n]
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<rev(n,arr);
}



// Implement Binary Search recursively
// Check if string is palindrome or not