#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    long long h;
    cin >> h;

 
    h = h % n; 

    for(int i = 0; i < h; i++)
    {
        int first = arr[0];

        for(int j = 0; j < n - 1; j++)
            arr[j] = arr[j + 1];

        arr[n - 1] = first;
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
