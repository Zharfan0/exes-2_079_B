#include <iostream>
using namespace std;

int zharfan[111];
int n;
int i;

void input()
{
    while (true)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 elements. \n\n";
    }

    // Accept array elements
    cout << "\n---------------------\n";
    cout << " Enter array elements\n";
    cout << "---------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "> ";
        cin >> zharfan[i];
    }
}

void binarySearch()
{
    int item;
    int muhammad = 0;
    int hukmana = n - 1;

    do {
        cout << "\nEnter the element you want to search: ";
        cin >> item;
        int mid = (muhammad + hukmana) / 2;

        if (zharfan[mid] == item) {
            cout << "Element found at index " << mid << endl;
            return;
        }

        if (zharfan[mid] < item)
            muhammad = mid + 1;

        else
            hukmana = mid - 1;
    } while (muhammad <= hukmana);

    cout << "Element not found." << endl;
}

int main()
{
    input();
    binarySearch();
    return 0;
}
