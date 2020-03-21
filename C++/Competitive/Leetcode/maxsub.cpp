#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {

	class Solution{
		public:
			int maxSubArray(vector<int>& nums){
				/*
				int sum1 = 0, sum2 = 0;

				for(int i = 0; i < nums.size(); i++){
					if( sum1 + nums[i] < sum2 )
						continue;
					else
						sum1 += nums[i];

					sum2 = sum1;
				}

				return sum1;
				*/

				// Kadane's Algorithm
				int maxsum = nums[0];
				int curr = maxsum;

				for(int i = 0; i < nums.size(); i++){
					curr = max( nums[i] + curr , nums[i] );
					maxsum = max(curr, maxsum);
				}
				
				return maxsum;
			}
	};

	return 0;
}
