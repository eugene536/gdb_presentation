#include <iostream>
#include <cstdio>
#include <map>
#include <cstdlib>
#include <set>
#include <unordered_set>
#include <vector>
#include <string>

using namespace std;

map<string, pair<int, double>> m;
set<int> s;
unordered_set<int> s_unor;
vector<string> v;

int main() {
    for (int i = 0; i < 10; ++i) {
        m[std::to_string(i) + "hello"] = {rand(), rand() + 2.3};
        v.push_back(std::to_string(i));
        s_unor.insert(rand());
        s.insert(rand());
    }
    return 0;
}
