#include<iostream>
#include<string>
#include<algorithm>
#include<set>
using namespace std;
int num{};

struct compare {
    bool operator() (const string& a, const string& b) const{
        if (a.size() == b.size()) {
            return a <b;
        }
        else {
            return a.size() < b.size();
        }
    }
};

int main()
{
    cin >> num;
    set<string ,compare> con;
    for (int i = 0; i < num; ++i) {
        string s;
        cin >> s;
        con.insert(s);
    }
    for (const string s : con) {
        cout << s << '\n';
    }
}