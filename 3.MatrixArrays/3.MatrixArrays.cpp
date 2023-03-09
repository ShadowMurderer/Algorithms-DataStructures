#include <iostream>
#include <cstring>

using namespace std;

void printArray(int asd[][10], int m, int n)
{
    for (int i = 0; i < m; i++) /// Print 2D array row wise
    {
        for (int j = 0; j < n; j++)
        {
            cout << asd[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int asd[5][10] = {{1, 2, 3},
                      {4, 5, 6}};
    int arr[100][100];
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) /// Store values inside 2D array
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) /// Print 2D array collum wise
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    printArray(asd, 5, 10);

    return 0;
}