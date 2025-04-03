#include <iostream>

using namespace std;

int main()
{
    int arr[6] = {7, 12, 6, 5, 2, 1};

    for (int i = 1; i < 6; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }

    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}