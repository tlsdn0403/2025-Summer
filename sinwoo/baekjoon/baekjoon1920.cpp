#include<iostream>
#include<string>
#include<unordered_set>
#include<vector>
using namespace std;
int main()
//------------------------------------------------------------
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unordered_multiset<int> us;
    vector<int> searchV;
    int num;
    cin >> num;

    for (int i = 0; i < num; ++i) {
        int value;
        cin >> value;
        us.insert(value);
    }
    int searchNum;
    cin >> searchNum;
    searchV.resize(searchNum);
    for (int i = 0; i < searchNum; ++i) {
        int value;
        cin >> value;
        auto p = us.find(value);
        if (p != us.end())
            cout << "1" << '\n';
        else
            cout << "0" << '\n';
    }
}