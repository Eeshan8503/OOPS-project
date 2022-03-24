#include<iostream>
using namespace std;
template <class T>
class IO{
    public:
        int n;
        unsigned int interval;
        T *arr=new T[n];
        void inputArray(){
            cout<<"Enter the n \n";
            cin>>n;
            for(int i=0;i<n;i++)
            cin>>arr[i];
        }
        void printArray(T arr[],int n){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
        }
        void setInterval(){
            cout<<"Enter your delay interval in milliseconds \n";
            cin>>interval;
        }
};
