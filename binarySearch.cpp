// C++ program to implement iterative Binary Search
#include <bits/stdc++.h>
using namespace std;

// An iterative binary search function.
int binarySearch(int arr[],int n, int x)
{
    int l = 0, r = n-1;
	while (l <= r) {
		int m = l + (r - l) / 2;

		// Check if x is present at mid
		if (arr[m] == x)
			return m;

		// If x greater, ignore left half
		if (arr[m] < x)
			l = m + 1;

		// If x is smaller, ignore right half
		else
			r = m - 1;
	}

	// If we reach here, then element was not present
	return l;
}

// Driver code
int main(void)
{
	int x,n;
	cin>>n>>x;
	int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	int result = binarySearch(arr,n,x);
	cout<<result;
	return 0;
}
