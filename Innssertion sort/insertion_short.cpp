//This problem name is 'Insertion Sort'
#include<iostream>
using namespace std;

int main()
{
    //Here user input the array size.
    int n;
    cout << "Enter The Array Size: ";
    cin >> n;
    cout << endl;

    //Here user input the array elements.
    int arr[n];
    cout << "Enter The Array Elements: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter the array element no " << i+1 << " is : " ;
        cin >> arr[i];
    }
    cout << endl;

    //Here print the array elements without sorting.
    cout << "The Unsorted Array is: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    //Here sorting the array elements using nsertion sort theory.
    for(int i = 0; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        for (j = i - 1; j >= 0 && arr[j] > key; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }

    //Here print the sorted array elements.
    cout << "The Sorted Array Using Insertion Sort is: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
