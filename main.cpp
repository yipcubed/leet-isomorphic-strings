#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    bool isIsomorphic(string& s, string& t) {
        if (s.length() != t.length()) return false;
        unordered_map<char,char> m;
        map<char,char> r;
        for (int i = 0; i < s.length(); ++i) {
            if (m.count(s[i]) || r.count(t[i])) {
//                PV3(i, m[s[i]], r[t[i]]);
                if (m[s[i]] != t[i])
                    return false;
                if (r[t[i]] != s[i])
                    return false;
            } else {
                m[s[i]] = t[i];
                r[t[i]] = s[i];
            }
        }
        return true;
    }
};

void test1() {
    vector<int> v1{1,2,3,4,5,6,7,8};
    string s1 = "egg";
    string s2 = "add";

    cout << "1 ? " << Solution().isIsomorphic(s1, s2) << endl;
}

void test2() {

}

void test3() {

}