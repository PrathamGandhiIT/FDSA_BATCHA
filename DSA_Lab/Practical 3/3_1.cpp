#include <iostream>
using namespace std;

void print(int a[], int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void bubblesorting(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - i - 1; j++)
            if(a[j] > a[j + 1])
                swap(a[j], a[j + 1]);

    print(a, n);
}

void selectionsorting(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int m = i;
        for(int j = i + 1; j < n; j++)
            if(a[j] < a[m])
                m = j;
        swap(a[i], a[m]);
    }

    print(a, n);
}

void insertionsorting(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int x = a[i];
        int j = i - 1;

        while(j >= 0 && a[j] > x)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = x;
    }

    print(a, n);
}

int main()
{
    int n;
    cin >> n;

    int b[n], s[n], in[n];

    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
        s[i] = b[i];
        in[i] = b[i];
    }

    cout << " Using Bubble Sort - ";
    bubblesorting(b, n);

    cout << " Using Selection Sort - ";
    selectionsorting(s, n);

    cout << " Using Insertion Sort - ";
    insertionsorting(in, n);

    return 0;
}
