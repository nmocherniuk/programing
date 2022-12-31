#include<iostream>
using namespace std;

int main()
{
    const int  Row = 10;
    const int Col = 10;
    int mass[Row][Col];
    cout << "< Matrix >" << endl;
    cout << "----------------------------------------" << endl;
    for (int n = 0; n < Row; n++)
    {
        for (int m = 0; m < Col; m++)
        {
            mass[n][m] = rand();
        }
    }
    
    // min line & min value

    int minV = mass[0][0], line = 0;
    for (int n = 0; n < Row; n++)
    {
        for (int m = 0; m < Col; m++)
        {
            if (mass[n][m] < minV)
            {
                minV = mass[n][m];
                line = n;
            }
        }
    }
    cout << "The minimum element in the given matrix: " << minV << endl;
    cout << "Minimum element row: " << line + 1 << endl;
    cout << "----------------------------------------" << endl;


    for (int n = 0; n < Row; n++)
    {
        cout << "|\t";
        for (int m = 0; m < Col; m++)
        {
            mass[0][m] = minV + line;
            cout << mass[n][m] - line << "\t";

        }
        cout << "\t|";
        cout << endl;
    }

    cout << "----------------------------------------" << endl;
    system("pause");
    return 0;
}