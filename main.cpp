#include <iostream>

using namespace std;

int main()
{
    int arr[] = {2, 3, 12, 3, 4, 6, 3, 8};

    int min = INT_MAX, max = INT_MIN;
    for (int i: arr)
    {
        if (i < min) {
            min = i;
        }

        if (i > max) {
            max = i;
        }
    }

    cout << "Angka Terkecil adalah: " << min <<endl;
    cout << "Angka Terbesar adalah: " << max <<endl;
    return 0;
}
