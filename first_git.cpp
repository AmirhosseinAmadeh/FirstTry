#include <iostream>
using namespace std;
int main()
{
    int row, col;
    int **arey;
    int result = 0;
    cin >> row >> col;
    arey = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arey[i] = new int[col];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arey[i][j];
        }
    }
    for (int i = 1; i < row - 1; i++)
    {
        for (int j = 1; j < col - 1; j++)
        {
            if ((arey[i][j] > arey[i][j + 1] && arey[i][j] > arey[i][j - 1] && arey[i][j] < arey[i - 1][j] && arey[i][j] < arey[i + 1][j]) || (arey[i][j] < arey[i][j + 1] && arey[i][j] < arey[i][j - 1] && arey[i][j] > arey[i - 1][j] && arey[i][j] > arey[i + 1][j]))
                result++;
        }
    }
    cout << result;
}