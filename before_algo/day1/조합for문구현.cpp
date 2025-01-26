#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> b) {
    for (int i : b) cout << i << " ";
    cout << '\n';
}

void combi(int start, vector<int>& b, int n, int r, int a[]) {
    if (b.size() == r) {
        print(b);
        return;
    }

    for (int i = start; i < n; i++) { // start부터 반복
        b.push_back(a[i]);           // 현재 원소 추가
        combi(i + 1, b, n, r, a);    // 다음 원소로 재귀 호출
        b.pop_back();                // 백트래킹
    }
    return;
}

int main() {
    int n = 5, r = 3;
    int a[5] = {1, 2, 3, 4, 5};

    vector<int> b;

    combi(0, b, n, r, a); // start를 0으로 설정
    return 0;
}
