// C++ implementation to find LIS in circular way
#include<bits/stdc++.h>
using namespace std;

// Utility function to find LIS using Dynamic programming
int computeLIS(int circBuff[], int start, int end, int n)
{
	int LIS[end-start];

	/* Initialize LIS values for all indexes */
	for (int i = start; i < end; i++)
		LIS[i] = 1;

	/* Compute optimized LIS values in bottom up manner */
	for (int i = start + 1; i < end; i++)

		// Set j on the basis of current window
		// i.e. first element of the current window
		for (int j = start; j < i; j++ )
			if (circBuff[i] > circBuff[j] && LIS[i] < LIS[j] + 1)
				LIS[i] = LIS[j] + 1;

	/* Pick maximum of all LIS values */
	int res = INT_MIN;
	for (int i = start; i < end; i++)
		res = max(res, LIS[i]);

	return res;
}

// Function to find Longest Increasing subsequence in
// Circular manner
int LICS(int arr[], int n)
{
	// Make a copy of given array by appending same
	// array elements to itself
	int circBuff[2 * n];
	for (int i = 0; i<n; i++)
		circBuff[i] = arr[i];
	for (int i = n; i < 2*n; i++)
		circBuff[i] = arr[i-n];

	// Perform LIS for each window of size n
	int res = INT_MIN;
	for (int i=0; i<n; i++)
		res = max(computeLIS(circBuff, i, i + n, n), res);

	return res;
}

/* Driver program to test above function */
int main()
{
	int arr[] = { 1, 4, 6, 2, 3 };
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Length of LICS is " << LICS( arr, n );
	return 0;
}
