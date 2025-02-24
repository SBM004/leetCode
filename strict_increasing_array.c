// 3105. Longest Strictly Increasing or Strictly Decreasing Subarray
// Attempted
// Easy
// Topics
// Companies
// You are given an array of integers nums. Return the length of the longest subarray of nums which is either strictly increasing or strictly decreasing.

 

// Example 1:

// Input: nums = [1,4,3,3,2]

// Output: 2

// Explanation:

// The strictly increasing subarrays of nums are [1], [2], [3], [3], [4], and [1,4].

// The strictly decreasing subarrays of nums are [1], [2], [3], [3], [4], [3,2], and [4,3].

// Hence, we return 2.

// Example 2:

// Input: nums = [3,3,3,3]

// Output: 1

// Explanation:

// The strictly increasing subarrays of nums are [3], [3], [3], and [3].

// The strictly decreasing subarrays of nums are [3], [3], [3], and [3].

// Hence, we return 1.

// Example 3:

// Input: nums = [3,2,1]

// Output: 3

// Explanation:

// The strictly increasing subarrays of nums are [3], [2], and [1].

// The strictly decreasing subarrays of nums are [3], [2], [1], [3,2], [2,1], and [3,2,1].

// Hence, we return 3.

 

// Constraints:

// 1 <= nums.length <= 50
// 1 <= nums[i] <= 50



class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int max=0;
        int min=0;
        if(size(nums)>=1 && size(nums)<=50)
        {
            for(int i=0;i<size(nums)-1;i++)
            {   int k=1;
                 int q;
                for(int j=i+1;j<size(nums);j++){
                    if(nums[i]>=1 && nums[i]<=50)
                    {
                        if(nums[j]>=1 && nums[j]<=50){
                        q=nums[j-1];
                        if(q>nums[j])
                        {
                          
                            k=k+1;
                        
                        }
                        else
                        {
                          
                            break;
                        }

                        }
                    }
                      
                }
                if(k > max)
                            {
                                max=k;
                            }
                int l=1;
                int L;
                 for(int j=i+1;j<size(nums);j++){

                    if(nums[i]>=1 && nums[i]<=50)
                    {
                        if(nums[j]>=1 && nums[j]<=50){
                            L=nums[j-1];
                            if(L<nums[j])
                            {
                                cout<<" lo ";
                                l++;
                                continue;
                            }
                            else
                            {
                                if(l > min)
                                {
                                    min=l;
                                }
                                break;
                            }
                        }
                    }
                 }
            }
            if(max>min)
                return max;
            else
                return min;
        }
        return 1;
    }
};



