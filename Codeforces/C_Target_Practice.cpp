// File Name: C_Target_Practice.cpp
// Date: 2023-10-06
// Time: 00:09:42

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        char arr[10][10];

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> arr[i][j];
            }
        }

        int startRow = 0;
        int endRow = 9;
        int startCol = 0;
        int endCol = 9;

        int sum = 0;
        int count = 1;

        while (startRow <= endRow && startCol <= endCol)
        {
            for (int i = startCol; i <= endCol; i++)
            {
                if (arr[startRow][i] == 'X')
                {
                    sum = sum + count;// cout<<sum<<endl;
                }
            }

            for (int i = startRow + 1 ; i <= endRow; i++)
            {
                if (arr[i][endCol] == 'X')
                    sum += count;
            }

            for (int i = endCol -1 ; i >= startCol; i--)
            {
                if (arr[endRow][i] == 'X')
                {
                    sum += count;
                }
            }

            for (int i = endRow -1 ; i >= startRow + 1; i--)
            {

                if (arr[i][startCol] == 'X')
                {
                    sum += count;
                }
            }

            startRow++;
            endRow--;
            startCol++;
            endCol--;

            count++;
        }

        cout << sum << endl;
    }
    return 0;
}
