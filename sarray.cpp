#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {80, 90, 33, 50, 100};
    int size = 5;

    int smallest = INT16_MAX;
    for (int i = 0; i < size; i++)
    {
        if (marks[i] < smallest)
        {
            smallest = marks[i];
            /* code */
        }

        /* code */
    }
    cout << smallest;
}
