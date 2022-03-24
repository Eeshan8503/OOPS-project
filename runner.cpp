#include "BubbleSort.cpp"
#include "SelectionSort.cpp"
#include "mergeSort.cpp"
#include "quicksort.cpp"
#include "IO.cpp"
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
template<class T>
class runner{
	public:
		void run(){
			int c;
			cout<<"Enter\n 1. Bubble Sort\n 2. Selection sort\n 3. Merge Sort\n 4. Quick Sort\n";
			cin>>c;
			IO <int> o;
			switch(c){
				case 1:
				{
				o.inputArray();
				o.setInterval();
				bubbleSort<int> b(o.interval);
				b.Sort(o.arr,o.n);
				break;
				}
				case 2:
				{
				o.inputArray();
				o.setInterval();
				SelectionSort<int> b(o.interval);
				b.Sort(o.arr,o.n);
				break;
				}
				case 3:
				{
				o.inputArray();
				o.setInterval();
				MergeSort<int> b(o.interval);
				b.mergeSort(o.arr,0,o.n-1,o.n);
				break;
				}
				case 4:
				{
				o.inputArray();
				o.setInterval();
				QuickSort<int> b(o.interval);
				b.quickSort(o.arr,0,o.n-1,o.n);
				break;
				}
			}
		}
};
int main()
{
	int typeChoice;
    cout<<"What is the type of your array: \n1. Integer\n2. Float\n3. Character\n";	
	cin>>typeChoice;
	switch(typeChoice){
		case 1:
			// int t;
			runner<int> ri;
			ri.run();
			break;
		case 2:
			// int t;
			runner<float> rf;
			rf.run();
			break;
		case 3:
			// int t;
			runner<char> rc;
			rc.run();
			break;
	}
}