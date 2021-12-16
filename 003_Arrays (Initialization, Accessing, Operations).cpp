#include<iostream>
#include<array>
#include<tuple>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    array <int, 10> array = {10, 15, 20, 25, 30, 45, 90, 150, 35, 80};
    int arr[10] = {10, 15, 20, 25, 30, 45, 90, 150, 35, 80};
    int  total=0, high;
    cout << array.at(7);
    high=arr[0];
    for (int i = 1; i < 10; i++)
    high = max(high, arr[i]);
    cout << "Maximum marks: " << high << endl;

    int n=sizeof(arr)/sizeof(arr[0]);
    cout << *max_element(arr, arr+n) << endl;

    cout << "Sum of elements: " << accumulate(arr, arr+n, total) << endl;
    return 69;
}