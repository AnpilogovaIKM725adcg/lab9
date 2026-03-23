#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 5;
    const int COLS = 5;
    double array[ROWS][COLS];

    srand(time(NULL));

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            array[i][j] = rand() % 11 - 5;
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << array[i][j] << '\t';
        }
        cout << endl;
    }

    cout << endl;

    double max = array[0][0];
    int row = 0;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
                row = i;
            }
        }
    }

    double sum = 0;
    int count = 0;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (j % 2 == 1)
            {
                sum += array[i][j];
                count++;
            }
        }
    }

    double average = sum / count;

    cout << "Максимальний елемент: " << max << endl;
    cout << "Номер рядка: " << row + 1 << endl;
    cout << "Середнє арифметичне тільки в парних стовпців: " << average << endl;
}