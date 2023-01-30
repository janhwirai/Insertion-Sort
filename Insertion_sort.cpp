#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Values from the unsorted part are picked and placed at the correct position in the sorted part.
class Solution
{
    public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n){
        for (int i = 0; i < n; i++)
        {
            int current=arr[i];
            int j=i-1;  //Previous element
            while(arr[j]>current && j>=0) //j should be +ve
            {
                arr[j+1]=arr[j];    //move forward
                j--;    //to check for previoud elements
            }
            arr[j+1]=current;   
        }
    }
};

int main(){
    cout<<"Enter the size of array:- ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:- ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    Solution s;
    s.insertionSort(arr,n);
    cout<<"The sorted array is:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}