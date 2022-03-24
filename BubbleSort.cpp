// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>
#include "printer.cpp"
using namespace std;
template <class T>
class bubbleSort{
	public:
		unsigned int interval;
		bubbleSort(int interval){
			this->interval=interval;
		}
		void swap(T *xp, T *yp)
		{
			T temp = *xp;
			*xp = *yp;
			*yp = temp;
		}

		// A function to implement bubble sort
		void Sort(T arr[],int n)
		{
			int i, j;
			for (i = 0; i < n-1; i++)	{
			for (j = 0; j < n-i-1; j++){
				if (arr[j] > arr[j+1])
					swap(&arr[j], &arr[j+1]);
					this_thread::sleep_for(std::chrono::milliseconds(interval));
					printArray(arr,n);
					cout<<"\n";
			}
			}
		}
};
