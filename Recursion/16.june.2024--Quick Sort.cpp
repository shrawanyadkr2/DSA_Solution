
/*
Link:-
--->    https://www.geeksforgeeks.org/problems/quick-sort/1
---->   https://www.geeksforgeeks.org/quick-sort/

*/

public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low>=high) return; 
        int part=partition(arr,low,high);
        quickSort(arr,low,part-1);
        quickSort(arr,part+1,high);
        
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here 
       int pivot=arr[low];
       int i=low;
       int j=high;
 while (i <= j) {
            // Find an element greater than or equal to pivot from the left
            while (i <= high && arr[i] <= pivot) {
                i++;
            }
            // Find an element smaller than pivot from the right
            while (j >= low && arr[j] > pivot) {
                j--;
            }
            // Swap the elements if i is less than j
            if (i < j) {
                swap(arr[i], arr[j]);
            }
        }
        // Swap the pivot element with the element at index j
        swap(arr[low], arr[j]);
        return j;
    }
};
