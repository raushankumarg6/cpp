#include <bits/stdc++.h>
using namespace std;
template <class T>
void print(T a, int n)
{
    cout << "Printing elements of Container: ";
    for (auto i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

// Define a comparator fun
bool cmp(int a, int b)
{
    // cout<<"Comparing method !";
    return a < b; // For desc order
}

// Passing the cmp fun we can give any name but same return type and parameters
void bubble_sort(int a[], int n, bool (&cmp)(int a, int b)) // Bubble sort
{
    // n-1 large elements to the end
    for (int i = 1; i <= n - 1; i++)
    {
        // Pairwise swapping in the un-sorted of the array.
        for (int j = 0; j <= (n - i - 1); j++)
        {
            if (cmp(a[j], a[j + 1])) // a[j] > a[j + 1]
                swap(a[j], a[j + 1]);
        }
    }
    print(a, n);
}
int main()
{
    // int a[] = {2, 3, 1, 0, -2, 3, 4, 5, 20, -11};
    // int n = sizeof(a) / sizeof(int);
    // int key = 100;
    // bubble_sort(a, n, cmp); // User defined

    // 1. Sorting O()  work on [s,e) ,
    //  sort(s,e); , for desc sort(a,a+n, greater<int>())
    // sort(a, a + n, cmp); // greater<int>());
    // print(a, n);

    // 2. Binary search  O(logn )->
    // bool present = binary_search(a, a + n, key);
    // if(present){cout<<"Present!" ; }
    // else{cout<<"Not present !" ; }

    // Two more things
    // Get the index of the element
    // lower_bound(s,e,key) -a; it gives the index of the key which is >= key i.e. 1st occurrence of key if present else just greater than that key
    // upper_bound(s,e,key) -a ; it gives the index of the key which is strictly > key

    // auto lb = lower_bound(a, a + n, 5) - a;
    // cout<< lb  ;
    // if ((lb - a) == n) // if not found
    // {
    //     cout << "Not present " << endl;
    // }

    // auto ub = upper_bound(a, a + n, 5) - a;
    // cout << ub << " " << a[ub];
    // cout << "Occ. freq of 5 is: " << ub - lb << endl;

    // int arr[] = {1, 2, 3, 4, 5};
    // int size = sizeof(arr) / sizeof(int);
    // vector<int> v{1, 2, 3};

    // 3. Rotate
    // rotate(arr, arr + 2, arr + size);
    // print(arr, size);
    // rotate(v.begin(), v.begin() + 2, v.end());
    // print(v , v.size());

    // 4. Next permutation- > Suppose if we want to generate the next lexographically greater  .
    // ex-> 1,2,3 -> 1,3,2
    // next_permutation(v.begin(), v.end());
    // print(v, v.size());

    // 5. Swap , min , max
    // int x = 3, y = 5;
    // cout << "x: " << x << " "
    //      << "y: " << y << endl;
    // swap(x, y);
    // cout << "After swapping "
    //      << "x: " << x << " "
    //      << "y: " << y << endl;

    // cout<<"Min : " << min(x,y) <<endl ;
    // cout<<"Max : " << max(x,y) <<endl ;

    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    // 6. reverse  Range [a,b ) -> reverse(startingPoint , pointAtWhichweWantReverse) ,
    // For whole reversing -> reverse(v.begin(), v.end());

    // reverse(v.begin(), v.end());
    // reverse(v.begin(), v.begin() + 4);
    // print(v, v.size());
}