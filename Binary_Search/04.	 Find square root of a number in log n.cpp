/*link
https://www.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root
*/
 long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        long long int s=1;
        long long int e=x;
        long long int mid;
        long long int ans=0;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if((mid*mid)== x)
            {
                ans=mid;
                return ans;
            }
            else if((mid * mid) > x )
            {
                //search in left
                e=mid-1;
            }
            else {
                ans = mid;
                s=mid+1;
            }
            
        }
        return ans;
    }
