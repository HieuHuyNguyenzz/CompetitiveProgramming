#include <bits/stdc++.h>

using namespace std;

string N;
string ans = "-1";
vector<int> a;
vector<int> listPosition[1000005];
vector<pair<int, int>> listCandidates;
int minDiff = 10000007;

string add(string a, string b) {
    while (a.size() < b.size()) {
        a = "0" + a;
    }
    while (b.size() < a.size()) {
        b = "0" + b;
    }
    string ret;
    ret.resize(a.size());
    int rem = 0;
    for (int i = a.size() - 1; i >= 0; i--) {
        int sum = a[i] - '0' + b[i] - '0' + rem;
        int dig = sum % 10;
        rem = sum / 10;
        ret[i] = static_cast<char>(dig + '0');
    }
    if (rem == 1) {
        ret = "1" + ret;
    }
    return ret;
}

void init() {
    for (int i = 0; i < N.size(); i++) {
        if (N[i] != '0') {
            a.push_back(i);
        }
    }
    int len = N.size();
    for (int i = 1; i < len; i++) {
        int lo = 0;
        int hi = a.size() - 1;
        int firstPosition = -1;
        int secondPosition = -1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (a[mid] == 0) {
                lo = mid + 1;
            } else if (i + 1 >= 2 * a[mid]) {
                firstPosition = a[mid];
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        lo = 0;
        hi = a.size() - 1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (a[mid] > i) {
                hi = mid - 1;
            } else if (2 * a[mid] >= i + 1) {
                secondPosition = a[mid];
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        int firstDiff = len + 10, secondDiff = len + 10;
        if (firstPosition != -1) {
            firstDiff = i + 1 - 2 * firstPosition;
        }
        if (secondPosition != -1) {
            secondDiff = 2 * secondPosition - (i + 1);
        }
        if (firstDiff < secondDiff) {
            listPosition[i].push_back(firstPosition);
        } else if (firstDiff > secondDiff) {
            listPosition[i].push_back(secondPosition);
        } else if (firstDiff != len + 10 && secondDiff != len + 10) {
            listPosition[i].push_back(firstPosition);
            listPosition[i].push_back(secondPosition);
        }
    }
}

string minString(const string &a, const string &b) {
    if (a.size() > b.size()) {
        return b;
    } else if (a.size() < b.size()) {
        return a;
    } else {
        if (a > b) {
            return b;
        }
        return a;
    }
}

void addCandidate(const int &pos1, const int &pos2) {
    int len = N.size();
    int len1 = pos1 + 1;
    int len2 = pos2 - pos1;
    int len3 = len - len1 - len2;
    int mini = len1;
    mini = min(mini, len2);
    mini = min(mini, len3);
    int maxi = len1;
    maxi = max(maxi, len2);
    maxi = max(maxi, len3);
    if (minDiff > maxi - mini) {
        listCandidates.clear();
        minDiff = maxi - mini;
        listCandidates.push_back(make_pair(pos1, pos2));
    } else if (minDiff == maxi - mini) {
        listCandidates.push_back(make_pair(pos1, pos2));
    }
}

void process1() {
    int len = N.size();
    int pos1 = len - 3;
    int pos2 = len - 2;
    addCandidate(pos1, pos2);
}

void process2() {
    vector<pair<int, int>> savePosition;
    int minDiff = N.size() + 10;
    for (int i = 1; i < N.size() - 1; i++) {
        if (N[i] == '0' && N[i + 1] != '0') {
            int firstLength = i + 1;
            int secondLength = N.size() - 1 - firstLength;
            int diff = abs(firstLength - secondLength);
            if (minDiff > diff) {
                savePosition.clear();
                minDiff = diff;
                savePosition.push_back(make_pair(i - 1, i + 1));
            } else if (minDiff == diff) {
                savePosition.push_back(make_pair(i - 1, i + 1));
            }
        }
    }
    for (int i = 0; i < savePosition.size(); i++) {
        int pos1 = savePosition[i].first;
        int pos2 = savePosition[i].second - 1;
        addCandidate(pos1, pos2);
    }
}

void process3() {
    int len = N.size();
    vector<int> &save = listPosition[len - 1];
    for (int i = 0; i < save.size(); i++) {
        int pos1 = save[i] - 1;
        int pos2 = len - 2;
        addCandidate(pos1, pos2);
    }
}

void process4() {
    vector<pair<int, int>> listTwoPositions;
    int len = N.size();
    int minLength = len + 10;
    for (int i = len - 1; i >= 2; i--) {
        if (N[i] != '0') {
            int prev = i - 1;
            if (listPosition[prev].empty() == true) {
                continue;
            }
            for (int j = 0; j < listPosition[prev].size(); j++) {
                int position = listPosition[prev][j];
                int len1 = position;
                int len2 = i - len1;
                int len3 = len - i;
                int maxSubLength = max(len1, max(len2, len3));
                if (minLength > maxSubLength) {
                    listTwoPositions.clear();
                    minLength = maxSubLength;
                    listTwoPositions.push_back(make_pair(position - 1, prev));
                } else if (minLength == maxSubLength) {
                    listTwoPositions.push_back(make_pair(position - 1, prev));
                }
            }
        }
    }
    for (int i = 0; i < listTwoPositions.size(); i++) {
        pair<int, int> element = listTwoPositions[i];
        int pos1 = element.first;
        int pos2 = element.second;
        addCandidate(pos1, pos2);
    }
}

int main() {
    cin >> N;
    init();
    process1();
    process2();
    process3();
    process4();
    ans = "-1";
    for (int i = 0; i < listCandidates.size(); i++) {
        pair<int, int> twoPosition = listCandidates[i];
        string sum = "";
        for (int j = 0; j <= twoPosition.first; j++) {
            sum += N[j];
        }
        string value = "";
        for (int j = twoPosition.first + 1; j <= twoPosition.second; j++) {
            value += N[j];
        }
        sum = add(sum, value);
        value = "";
        for (int j = twoPosition.second + 1; j < N.size(); j++) {
            value += N[j];
        }
        sum = add(sum, value);
        if (ans == "-1") {
            ans = sum;
        } else {
            ans = minString(ans, sum);
        }
    }
    cout << ans;
    return 0;
}
