
#include <bits/stdc++.h>
using namespace std;

// Function to print the submasks of N
void SubMasks(int mask)
{

//we try to print all the possible combination of bit generated with mask

for(int submask = mask; ; submask = (submask - 1) & mask) {
         // submask = (submask - 1) & mask
         //here we take submask -1 to make last occur of 1 to zero
         // and taking '&' operation with given number to mask to find
         // all variation
        cout<<submask<<" ";
        if(submask == 0)
            break;
}


}

// Driver Code

//Time complexity = O(3^n) if we are generating all submasks for all 2^n numbers for the n bit number
//else for a particular number having k out of n bits set complexity is O(2^k)
int main()
{
	int N = 30;
	SubMasks(N);

	return 0;
}


