#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int num{};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;

    cin >> num;
    for (int i = 0; i < num; ++i) {
        int sortNum{};
        cin >> sortNum;
        v.push_back(sortNum);
    }
    sort(v.begin(), v.end());
    for (const int i : v) {
        cout << i << '\n';
    }
}