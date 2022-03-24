// C++ program for Merge Sort
#include <iostream>
// #include "IO.cpp"
using namespace std;
template <class T>
class MergeSort{
	public:
		unsigned int interval;
		MergeSort(int interval){
			this->interval=interval;
		}
		void merge(T array[], int const left, int const mid, int const right)
		{
			auto const subArrayOne = mid - left + 1;
			auto const subArrayTwo = right - mid;

			// Create temp arrays
			auto *leftArray = new T[subArrayOne],
				*rightArray = new T[subArrayTwo];

			// Copy data to temp arrays leftArray[] and rightArray[]
			for (auto i = 0; i < subArrayOne; i++)
				leftArray[i] = array[left + i];
			for (auto j = 0; j < subArrayTwo; j++)
				rightArray[j] = array[mid + 1 + j];

			auto indexOfSubArrayOne = 0, // Initial index of first sub-array
				indexOfSubArrayTwo = 0; // Initial index of second sub-array
			int indexOfMergedArray = left; // Initial index of merged array

			// Merge the temp arrays back into array[left..right]
			while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
				if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
					array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
					indexOfSubArrayOne++;
				}
				else {
					array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
					indexOfSubArrayTwo++;
				}
				indexOfMergedArray++;
			}
			// Copy the remaining elements of
			// left[], if there are any
			while (indexOfSubArrayOne < subArrayOne) {
				array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
				indexOfSubArrayOne++;
				indexOfMergedArray++;
			}
			// Copy the remaining elements of
			// right[], if there are any
			while (indexOfSubArrayTwo < subArrayTwo) {
				array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
				indexOfSubArrayTwo++;
				indexOfMergedArray++;
			}
		}

		// begin is for left index and end is
		// right index of the sub-array
		// of arr to be sorted */
		void mergeSort(T array[], int const begin, int const end,int n)
		{
			if (begin >= end)
				return; // Returns recursively

			auto mid = begin + (end - begin) / 2;
			mergeSort(array, begin, mid,n);
			mergeSort(array, mid + 1, end,n);
			merge(array, begin, mid, end);
			this_thread::sleep_for(std::chrono::milliseconds(interval));
					printArray(array,n);
					cout<<"\n";
		}
};
