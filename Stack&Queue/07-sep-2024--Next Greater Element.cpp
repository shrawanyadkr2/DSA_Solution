/*

Link:-

07-sep-2024--Next Greater Element.cpp

https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1

*/
class Solution
{
    public:
    // Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n) {
        // Create a vector to store results, initialized to -1
        vector<long long> ans(n, -1);  // Initialize with -1, as this is the default if no greater element is found.

        stack<long long> st;  // Stack to store the elements

        // Traverse the array from right to left
        for(int i = n - 1; i >= 0; i--) {
            // Pop elements from the stack if they are smaller or equal to the current element
            while(!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }

            // If the stack is not empty, the top element is the next greater element
            if(!st.empty()) {
                ans[i] = st.top();
            }

            // Push the current element onto the stack
            st.push(arr[i]);
        }

        // Return the resulting vector
        return ans;
    }
};
