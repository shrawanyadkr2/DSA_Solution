/*
link:-
https://leetcode.com/problems/koko-eating-bananas/description/
*/
class Solution {
public:
    int getMaximum(vector<int>&piles)
    {
        int maxi=INT_MIN;
        for(int i=0;i<piles.size(); i++)
        {
            if(piles[i] > maxi)
            {
                maxi = piles[i];
            }
        }
        return maxi;
        
    }
    long long countHours(vector<int>&piles,int mid)
    {
        long long counter=0;
        for(int i=0;i<piles.size();i++)
        {
            counter+= ceil(double(piles[i])/double(mid));
        }
        return counter;
    }


    int minEatingSpeed(vector<int>& piles, int h) {
        // asbse pahile hum original function implimnent karenge
        int s=1;
        int e=getMaximum(piles);
        int ans = e;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            long long totalHrs=countHours(piles,mid);
            if(totalHrs > h)
            {
                //Binary search bhaiya bhaiya right me search kro
                s=mid+1;
            }
            else {
                ans = mid;
                e=mid-1;
            }
        }
        return ans;
        
    }
};
