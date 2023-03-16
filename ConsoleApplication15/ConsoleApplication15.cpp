// ConsoleApplication15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "");
    const int n = 5;//let's make the matrix square and enter the number of columns
    int* sums = new int[n];
    int** a = new int*[n];
    for (int i = 0; i < n; i++) 
    {
        sums[i] = 0;
        a[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 10;
            sums[i] += a[i][j];
        }
    for (int i = 0; i < n; i++)
    {
        
        cout << "  Сумма строки: " << sums[i] << endl;
       
    }
    
    for (int i = 0; i < n; i++)
    {
        delete[] a[i];
    }
    delete[] a;
    delete[] sums;
    return 0;
}


