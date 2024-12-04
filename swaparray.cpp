#include <iostream>
using namespace std;
int search(int arr[], int sz, int target)
{
    for (size_t i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i;
            /* code */
        }

        /* code */
    }
    return -1;
}
void reversearray(int arr[], int sz)
{
    int start = 0, end = sz - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
        /* code */
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int sz = 7;
    int target = 4;
    cout << search(arr, sz, target);
    cout << endl;
    cout << "before revese" << endl;
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
        /* code */
    }
    cout << endl;
    cout << "after reverse" << endl;
    reversearray(arr, sz);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
        /* code */
    }
    cout << endl;

    return 0;
}