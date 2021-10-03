
#include <bits/stdc++.h>
using namespace std;

// Function to print the submasks of N
void SubMasks(int N)
{
	for (int S = N; S; S = (S - 1) & N) {
		cout << S << " ";
	}
}

// Driver Code
int main()
{
	int N = 25;
	SubMasks(N);

	return 0;
}
