#include <iostream>
using namespace std;

int main()
{

    int Smallest = INT_MAX;
    int Largest = INT_MIN;
    int n;
    int a[n];

    cout << "Input the lenght of the array" << endl;
    cin >> n;

    cout << "Provide the numbers in the array." << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > Largest)
        {
            Largest = a[i];
        }

        if (a[i] < Smallest)
        {
            Smallest = a[i];
        }
    }

    cout << "Smallest number in array is: " << Smallest << endl;
    cout << "Highest number in array is: " << Largest << endl;
}