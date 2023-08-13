#include <bits/stdc++.h>
using namespace std;
void Selection(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        
        swap(&arr[min_idx], &arr[i]);
    }
}
void bubble(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
void BinarySearch(int arr[], int n)
{
    int lo = 0, hi = n - 1;
    int ele;
    cout << "\n Enter The Element=";
    cin >> ele;
    while (lo <= hi)
    {
        int mid = (lo + (hi - lo)) / 2;
        if (arr[mid] == ele)
        {
            cout << "\nElement Found\n";
            return;
        }
        if (arr[mid] < ele)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }

    cout << "\nElement Not Found\n";
}
void linearSearch(int arr[], int n)
{
    int ele;
    cout << "\n Enter The Element=";
    cin >> ele;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            cout << "\nElement Found\n";
            return;
        }
    }
    cout << "\nElement Not Found\n";
}
int main()
{
    int arr[10] = {100, 52, 16, 86, 23, 5, 0, 3, 30, 15};
    int ch;
    do
    {
        cout << "\n\n1.Sort Using Selection Sort\n2.Sort Using Bubble Sort\n";
        cout << "3.Search Using Binary Search\n4.Search Using linear Search\n";
        cout << "Enter The Choice=";
        cin >> ch;
        switch (ch)
        {
        case 1:
            Selection(arr, 10);
            break;
        case 2:
            bubble(arr, 10);
            break;
        case 3:
            BinarySearch(arr, 10);
            break;
        case 4:
            linearSearch(arr, 10);
            break;
        default:
            cout << "\n\n Enter Correct Choice\n\n";
        }
    } while (ch != 5);
}