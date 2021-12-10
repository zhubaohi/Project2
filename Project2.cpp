// Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Rongkun Zhu

#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}

template <class T>
T biSeSearch(T a[], int length, T x)
{
    int low = 0;
    int high = length - 1;
    cout << "Second Method";


    while (low <= high and length > 18)
    {
        int mid = (low + high) / 2;
        length = length / 2;
        

        if (x < a[mid]) {
            cout << a[mid] << " ";
            high = mid - 1;
        }
        else if (x > a[mid]) {
            cout << a[mid] << " ";
            low = mid + 1;
        }
        else {
           
            cout << a[mid] << " ";
            return mid;
        }
      

    }
    
    for (int i = low; i < high; i++) {
        cout << a[i] << " ";
        if (a[i] == x) {
            return i;

        }
    }

    return -1;
}

template <class T>
T bisearch(T a[], int length, T x)
{
    int low = 0;
    int high = length - 1;
    cout << "First Method";
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x < a[mid]) {
            cout << a[mid] << " ";
            high = mid - 1;
        }
        else if (x > a[mid]) {
            cout << a[mid] << " ";
            low = mid + 1;
        }
        else {
            cout << a[mid] << " ";
            return mid;
        }
        
    }
    return -1;
}

int main()
{
    int list[1000];
    for (int i = 0; i < 1000; i++) {
        list[i] = rand() % 1000;
    }
    bubbleSort<int>(list, 1000);

    int length = 1000;

    cout << "Please enter a number to search";
    int t;
    cin >> t;
    
    int resulti;
    int resultii;


    resulti = bisearch(list, 1000, t);
    resultii = biSeSearch(list, 1000, t);

    if (resulti != -1) {
        cout << "The position of the number is " << resulti;
    }







}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
