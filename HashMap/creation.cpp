#include <bits/stdc++.h>
using namespace std;

/*
==========================================================
1. MAP (Ordered Map)
----------------------------------------------------------
Internal DS : Red-Black Tree
Stores      : key -> value
Order       : Sorted by key
Insert      : O(log n)
Search      : O(log n)
Delete      : O(log n)
==========================================================
*/

/*
==========================================================
2. UNORDERED_MAP (HashMap)
----------------------------------------------------------
Internal DS : Hash Table
Stores      : key -> value
Order       : No order
Insert      : O(1) average
Search      : O(1) average
Delete      : O(1) average
==========================================================
*/

/*
==========================================================
3. SET
----------------------------------------------------------
Stores only unique values
No duplicate elements allowed

set                -> Ordered
unordered_set      -> Unordered

set operations     -> O(log n)
unordered_set      -> O(1) average
==========================================================
*/

int main() {

    // =====================================================
    // MAP
    // =====================================================

    map<string, int> m;

    // INSERTION

    pair<string, int> p = make_pair("Shrish", 4);
    m.insert(p);

    pair<string, int> p2("Love", 6);
    m.insert(p2);

    m["Success"] = 1;

    // Update existing key
    m["Success"] = 2;

    // SEARCH

    cout << "Shrish = " << m["Shrish"] << endl;

    cout << "Love = " << m.at("Love") << endl;

    // Presence Check
    cout << "Shrish Present? "
         << m.count("Shrish") << endl;

    // Size
    cout << "Size = "
         << m.size() << endl;

    // Erase
    m.erase("Love");

    cout << "\nMap Traversal:\n";

    for(auto i : m) {
        cout << i.first
             << " -> "
             << i.second
             << endl;
    }

        // //iterator
    // map<string, int> :: iterator it = m.begin();

    // while(it != m.end()) {
    //     cout << it->first << " " << it->second << endl;
    //     it++;
    // }


    // =====================================================
    // UNORDERED_MAP (HASHMAP)
    // =====================================================

    unordered_map<string, int> um;

    um["Apple"] = 10;
    um["Banana"] = 20;
    um["Mango"] = 30;

    cout << "\nHashMap Search:\n";

    cout << um["Apple"] << endl;

    cout << "Apple Present? "
         << um.count("Apple")
         << endl;

    cout << "\nHashMap Traversal:\n";

    for(auto i : um) {
        cout << i.first
             << " -> "
             << i.second
             << endl;
    }

    /*
       Output order may be:

       Banana -> 20
       Mango -> 30
       Apple -> 10

       OR ANY OTHER ORDER
    */


    // =====================================================
    // SET
    // =====================================================

    set<int> s;

    // Insert
    s.insert(10);
    s.insert(20);
    s.insert(30);

    // Duplicate ignored
    s.insert(20);

    cout << "\nSet Elements:\n";

    for(auto x : s) {
        cout << x << " ";
    }

    cout << endl;

    // Presence Check
    cout << "20 Present? "
         << s.count(20)
         << endl;

    // Erase
    s.erase(20);

    cout << "After Erase:\n";

    for(auto x : s) {
        cout << x << " ";
    }

    cout << endl;


    // =====================================================
    // UNORDERED_SET
    // =====================================================

    unordered_set<int> us;

    us.insert(100);
    us.insert(200);
    us.insert(300);

    cout << "\nUnordered Set:\n";

    for(auto x : us) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}