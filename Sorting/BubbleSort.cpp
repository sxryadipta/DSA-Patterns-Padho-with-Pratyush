// Problem  : Bubble Sort
// GeeksforGeeks : https://www.geeksforgeeks.org/problems/bubble-sort/1
// Pattern  : Selection Sort
// TC       : O(n²)
// SC       : O(1)
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
  
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
      
        // If no two elements were swapped, then break
        if (!swapped)
            break;
    }
}
