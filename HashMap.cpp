#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
    // CREATION
    unordered_map<string, int> m;

    // Method=01
    pair<string, int> p = make_pair("Prateek", 3);
    m.insert(p);

    // METHOD=02
    pair<string, int> pair2("Malti", 2);
    m.insert(pair2);

    // Method=03
    m["mine"] = 4;

    // Update the value associated with the key "mine"
    m["mine"] = 3;

    cout << m["mine"] << endl;
    cout<<m.at("Prateek")<<endl;
    cout<<m["Unknownkey"]<<endl;//Craete a entry for unknown key
    cout<<m.at("Unknownkey")<<endl;
    //SIZE
    cout<<m.size()<<endl;
    //ERASE
    m.erase("Malti");
    cout<<m.size()<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    //ITERATOR
    unordered_map<string,int>::iterator it=m.begin();
    while(it!=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

    return 0;
}
