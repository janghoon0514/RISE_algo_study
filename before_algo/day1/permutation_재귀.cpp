#include <iostream>
#include <algorithm>

using namespace std;

void print(int r, int a[]) {
    for (int i = 0; i < r; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

// 코테를 기준으로 한다고 하면 값을 받는 식으로 작동을 한다고 생각하여 다음과 같이 짜둠
void permutation(int n, int r, int depth, int a[]) {
    // r개까지 찾기 때문에 depth가 이 이상 올라가면 의미가 없어진다.
    if (r == depth) {
        print(r, a);
        return;
    }

    // 하나씩 바꿔보면서 순열 조합을 찾는다. 한 층씩 내려간다고 하면 1번쨰 원소를 다른 원소 중 하나와 바꾼 것을 기준으로 찾는다.
    // 첫 행은 자기 자신과 바꾸기 때문에 의미가 없음
    for (int i = depth; i < n; i++) {
        swap(a[i], a[depth]);            
        permutation(n, r, depth + 1, a);
        swap(a[i], a[depth]);
    }
    return;
}

int main() {
    int a[4] = {1, 2, 3, 4};
    int n = 4, r = 4;

    permutation(n, r, 0, a);

    return 0;
}
