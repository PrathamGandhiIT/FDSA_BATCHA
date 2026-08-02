#include<iostream>
using namespace std;


int rec(int t, int n[], int low, int high)
{
   
    if (low > high) {
        return -1; 
    }

    int mid = low + (high - low) / 2;

    
    if (n[mid] == t) 
    {
        return mid + 1; 
    }

    else if (n[mid] < t) 
    {
        return rec(t, n, mid + 1, high);
    }

    else 
    {
        return rec(t, n, low, mid - 1);
    }
}

int main()
{
    int no;
    cin >> no;

    int n[no];
    cout << "Enter Sorted Catalog of Book Codes" << endl;
    for(int i = 0; i < no; i++)
    {
        cin >> n[i];
    }

    int t;
    cout << "Enter the Book Code to search: ";
    cin >> t;

   
    int ans = rec(t, n, 0, no - 1);

    if (ans != -1)
        cout << "Found at " << ans << endl;
    else
        cout << "Book code not found" << endl;

    return 0;
}