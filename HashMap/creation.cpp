#include <bits/stdc++.h>
#include <map>
#include <unordered_map>

using namespace std;

int main(){

    //creation
    map<string, int> m;

    //insertion

    //1
    pair<string, int> p = make_pair("Shrish", 4);
    m.insert(p);

    //2
    pair<string, int> pair2("love", 6);
    m.insert(pair2);

    //3
    m["success"] = 1;

    m["success"] = 2;


    //search
    cout<< m["Shrish"]<<endl;
    cout<< m.at("love") << endl;

    cout<< m["unknownKey"] << endl;
    cout<< m.at("unknownKey") << endl;

    //Size
    cout << m.size() << endl;

    //to check presence
    cout<< m.count("Shrish") << endl;

    //erase
    m.erase("love");
    cout << m.size() << endl;

    //iterator
    map<string, int> :: iterator it = m.begin();

    while(it != m.end()) {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;


}