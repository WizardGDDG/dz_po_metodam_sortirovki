#include <iostream>
using namespace std;

// Пузырковый метод сортировки
void puzirkoviyMetod(int arr[])
{
    int start = 10;
    int end = 50;




    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % (end - start);

    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j + 1];
            }
        }
    }
}

// Сортировка вставкой
void sortirovkaVstavkoy(int arr[])
{
    int start = 10;
    int end = 50;




    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % (end - start);

    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i;j > 0 && arr[j - 1] > arr[j];j--)
        {
            swap(arr[j - 1], arr[j]);
        }

    }
}
// Сортировка выбором
void sortirovkaViborom(int arr[])
{
    int min;
    int buf;
    for (int i = 0; i < 10; i++)
    {
        min = i;
        for (int j = i + 1; j < 10; j++)
        {
            min = (arr[j] < arr[min]) ? j : min;
            if (i!=min)
            {
                buf = arr[i];
                arr[i] = arr[min];
                arr[min] = buf;
            }
        }
    }
}


int main()
{

    int arr[10] = {2,4,3,1,5,9,7,8,10,6};

    
    sortirovkaViborom(arr);

    // Вывод массива
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
    }
}
