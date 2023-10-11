/*
 Hashing is not a type of data structure but it is process or technique to insert, search and delete in O(1)
 time complaxity.
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(3);
    s.insert(5);
    s.insert(6);
    if (s.find(6) == s.end())
    {
        cout << "Not Present" << endl;
    }
    else
    {
        cout << "Present" << endl;
    }
    if (s.count(4) == 1)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }

    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << (*i) << " ";
    }
    cout << endl;
    cout <<"Size "<< s.size() << endl;
    s.erase(6);
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << (*i) << " ";
    }
    cout << endl;
    cout <<"Max_size "<< s.max_size() << endl;
    s.clear();
    cout << s.size();

    return 0;
}