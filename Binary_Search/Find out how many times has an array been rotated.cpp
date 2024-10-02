/*link:-
https://www.geeksforgeeks.org/problems/rotation4723/1
//User function template for C++
*/
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
    int s = 0;
    int e = n - 1;
    int mid;

    while (s < e) {
      
        mid = s + (e - s) / 2;
        
        if (arr[mid] > arr[e]) {
            s = mid + 1;
        } else if (arr[mid] < arr[e]) {
            e = mid;
        } else {
            // Handle the case when nums[mid] == nums[e]
            // Move the pointer towards the left
            e--;
        }
    }
    return s; // No rotation, return start
}
	

};
