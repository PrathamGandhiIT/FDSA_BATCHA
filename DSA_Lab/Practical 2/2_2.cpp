    #include<iostream>
    using namespace std;
    
    int main()
    {
      
         int no;
         cin >> no;
         int n[no];
         cout << "Enter Sorted Catalog of Book Codes" << endl;
         for(int i=0;i<no;i++)
         {
             cin >> n[i];
         }

        int t;
        cout << "Enter the Book Code to  search " ;
        cin >> t;

        int low = 0;
        int high = no -1;
        int mid;
        while(low<=high)
        {
            mid = low + (high-low)/2;
            if(n[mid]==t)
            {
                cout << "Found at" <<" "<< mid+1<< endl;
                return 0;
            }
            else if(n[mid]<t)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << "Not Found" << endl;
        return 0;
    }