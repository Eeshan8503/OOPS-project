#include "BubbleSort.cpp"
#include "SelectionSort.cpp"
#include "mergeSort.cpp"
#include "quicksort.cpp"
using namespace std;
int main()
{
    cout<<"Enter \n 1. Bubble Sort\n 2. Selection Sort\n 3. Merge Sort\n 4. Quick Sort\n";
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	cout<<"Sorted array: \n";
	printArray(arr, n);
	return 0;
}