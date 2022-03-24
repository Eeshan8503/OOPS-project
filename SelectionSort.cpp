// C++ program for implementation of selection sort
#include <bits/stdc++.h>
// #include "printer.cpp"
using namespace std;
template<class T>
class SelectionSort{
	public:
		unsigned int interval;
		SelectionSort(int interval){
			this->interval=interval;
		}

		void swap(T *xp, T *yp)
		{
			T temp = *xp;
			*xp = *yp;
			*yp = temp;
		}

		void Sort(T arr[],int n)
		{
			int i, j, min_idx;
			for (i = 0; i < n-1; i++)
			{
				// Find the minimum element in unsorted array
				min_idx = i;
				for (j = i+1; j < n; j++){
				if (arr[j] < arr[min_idx])
					min_idx = j;

					
				}

				// Swap the found minimum element with the first element
				swap(&arr[min_idx], &arr[i]);
				this_thread::sleep_for(std::chrono::milliseconds(interval));
					printArray(arr,n);
					cout<<"\n";
			}
		}
};