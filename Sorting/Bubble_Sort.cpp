/*
Bubble Sort

Topic:
Sorting

Time Complexity:
Worst Case: O(n²)
Average Case: O(n²)
Best Case: O(n)   // Optimized using swapped flag

Space Complexity: O(1)
*/

void bubbleSort(vector<int>& arr, int n)
{
    for (int i = 1; i < n; i++) {

        bool swapped = false;

        for (int j = 0; j < n - i; j++) {

            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}
