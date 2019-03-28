#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> M;
    char c;
    string s;
    while (cin >> c >> s) {
        map<string, int>::iterator it = M.find(s);
        if (c == 'f') {
            if (it == M.end()) cout << 0 << endl;
            else cout << it->second << endl;
        }
        else {
            if (it == M.end()) {
                pair<string, int> p (s, 1);
                M.insert(p);
            }
            else {
                ++(it->second);
            }
        }
    }
}
