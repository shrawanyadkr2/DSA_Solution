/*link:-
https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-nth-root-of-m

*/

int NthRoot(int n, int m)
	{
	    // Code here.
	    //how the joshhhhhh
	    int s=1;
	    int e=m;
	    int mid;
	    int ans=-1;
	    
	    while(s<=e)
	    {
	        mid=s+(e-s)/2;
	        if(pow(mid,n)== m)
	        {
	            ans = mid;
	            return ans;
	        }
	        else if(pow(mid,n) > m)
	        {
	            e=mid-1;
	        }
	        else {
	            //ans = mid;
	            s=mid+1;
	        }
	    }
	    return ans;
	    
	} 
