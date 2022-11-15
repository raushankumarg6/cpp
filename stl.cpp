#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    // Input or output
    for (int i = 0; i <= 5; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele); // v.emplace_back(ele); // Faster than push_back
        cout << v[i];     // Printing the value
    }
    for (auto ele : v)
    {
        cout << ele << " "; // Printing
    }

    // We can use v.cbegin() but it can'nt give access to change the content , here c stands for constant iterator
    // Give begin() give the 1st element address
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it; // We can change the content by *it
    }
    // rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    // rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = v.rbegin(); ir != v.rend(); ++ir)
        cout << *ir << " ";

    // Capacity 1.size(),max_size(),capacity(),empty(),reserve() etc
    // Element Access 1. reference_operator i.e. v[i] 2. at(pos) 3. front() 4. back()
    // Modifiers
    // 1. Assign -> The syntax for assigning constant values:
    // vectorname.assign(int size, int value) // Parameters: size - number of values to be assigned , value - value to be assigned to the vectorname

    // 2. push_back() , 3. pop_back() , 4. vector_name.insert (position, val)
    // 5. erase(pos) // remove ele from a vector from pos idx
    // 6.swap()
    // 7.clear() // used to remove all the elements
    // 8. auto it = vec.emplace(vec.begin(), 15); It return itr to the newly inserted element It extends the container by inserting new element at position
    // 9.emplace_back() // Insert the element at the end of the vecot like push_back but it is faster.

    string str;
    // input-> 0. length() 1.  getline(cin, str); 2. push_back() // insert char at the end  3. pop_back() // remove the char of the last idx
    // We can use getline() function to split a sentence on the basis of a character. Let’s look at an example to understand how it can be done.
    //     int main()
    // {
    //     string S, T;

    //     getline(cin, S);

    //     stringstream X(S);

    //     while (getline(X, T, ' ')) {
    //         cout << T << endl;
    //     }

    //     return 0;
    // }

    //   Sets are a type of associative container in which each element has to be unique because the value of the element identifies it.
    // The values are stored in a specific sorted order i.e. either ascending or descending.
    //     The time complexities for doing various operations on sets are:

    // Insertion of Elements – O(log N)
    // Deletion of Elements – O(log N)
    // clear() 	Removes all the elements from the set.
    // find(const g)  , Returns 1 or 0 based on whether the element ‘g’ is present in the set or not.
    // erase(const g)	Removes the value ‘g’ from the set
    set<int> s1;
    // count(const g)
    // insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    // printing set s1
    set<int, greater<int>>::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr << " ";
    }
    // assigning the elements from s1 to s2
    set<int> s2(s1.begin(), s1.end());
    // remove all elements up to 30 in s2
    cout << "\ns2 after removal of elements less than 30 "
            ":\n";
    s2.erase(s2.begin(), s2.find(30));

    // Unordered Sets in C++

    // An unordered_set is implemented using a hash table where keys are hashed into indices of a hash table
    // so that the insertion is always randomized. All operations on the unordered_set takes constant time O(1)
    // on an average which can go up to linear time O(n) in worst case which depends on the internally used hash function,
    // but practically they perform very well and generally provide a constant time lookup operation.
    // The Unordered_set allows only unique keys, for duplicate keys unordered_multiset should be used.
    unordered_set<string> stringSet;
    // inserting various string, same string will be stored
    // once in set

    stringSet.insert("code");
    stringSet.insert("in");
    stringSet.insert("c++");
    stringSet.insert("is");
    stringSet.insert("fast");
    string key = "c++";
    //  find returns end iterator if key is not found,
    //  else it returns iterator to that key

    if (stringSet.find(key) == stringSet.end())
        cout << key << " not found" << endl
             << endl;
    else
        cout << "Found " << key << endl
             << endl;
    // now iterating over whole set and printing its
    // content
    cout << "\nAll elements : ";
    unordered_set<string>::iterator itr;
    for (itr = stringSet.begin(); itr != stringSet.end(); itr++)
        cout << (*itr) << endl;

    // Map

    // empty map container
    map<int, int> gquiz1;
    // insert elements in random order
    gquiz1.insert({2, 30});
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1[7] = 10; // another way of inserting a value in a map

    // printing map gquiz1
    map<int, int>::iterator itr;

    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    // assigning the elements from gquiz1 to gquiz2
    map<int, int> gquiz2(gquiz1.begin(), gquiz1.end());
    // remove all elements up to
    // element with key=3 in gquiz2
    // Erase fun
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    // Find key presents or not
    if (gquiz1.find(s1) != gquiz1.end())
    {
        // if the element is found before the end of the map
        cout << " : found : Value : " << m[s1] << endl;
        // if the element is present then you can access it using the index
    }

    // unordered_map
    unordered_map<string, int> umap;
    // inserting values by using [] operator
    umap["GeeksforGeeks"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;

    // Traversing an unordered map
    for (auto x : umap)
        cout << x.first << " " << x.second << endl;


    // map vs unordered_map in C++
    /*
    Difference : 

                        | map             | unordered_map
        ---------------------------------------------------------
        Ordering        | increasing  order   | no ordering
                        | (by default)        |

        Implementation  | Self balancing BST  | Hash Table
                        | like Red-Black Tree |  

        search time     | log(n) It is slow   | O(1) -> Average  It is fast
                        |                     | O(n) -> Worst Case

        Insertion time  | log(n) + Rebalance  | Same as search
                            
        Deletion time   | log(n) + Rebalance  | Same as search

        Use std::map when 
        You need ordered data.
        You would have to print/access the data (in sorted order).
        You need predecessor/successor of elements.
        See advantages of BST over Hash Table for more cases.



        Use std::unordered_map when 

        You need to keep count of some data (Example – strings) and no ordering is required.
        You need single element access i.e. no traversal.

        Difference between Map and Multimap in C++ STL

        S No. 	                Map	                                                                                    Multimap
        1	It stores unique key-value pair where each key is unique.	                        1. It can store duplicate key-value pair where keys may not be unique.
        2	Using count() function on a map can only return two values which is either 0 or 1.  2. Using count() function on a multimap can return any non-negative integer.
        3	Accessing Value of any key is easy and directly accessible.                         3. Accessing value of any key is not easy and is not directly accessible.
        4	Deleting in a map using key will delete only one key-value pair.                    4.Deleting in a multimap using key will delete all the key-value pair having same key.

        5	Map can be used when a simple look up table having unique key-value pairs           5.Multimap can be used when grouping of values together using the keys are required.
            is required for quickly accessing to the value using the key.	                    

        */


}
