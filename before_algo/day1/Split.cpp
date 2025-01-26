#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split(const string& str, const string& delimiter) {
    vector<string> result;  // 결과를 저장할 벡터
    size_t start = 0;       // 현재 단어의 시작 위치
    size_t end;             // 구분자의 위치를 저장

    // 문자열을 끝까지 탐색, npos :: 끝 단어 없음
    // for문이 생신될 때마다 시작 지점, 끝 지점을 확인하게 됨
    for (end = str.find(delimiter); end != string::npos; end = str.find(delimiter, start)) {
        result.push_back(str.substr(start, end - start)); // 현재 단어를 추출
        start = end + delimiter.length();                // 다음 단어의 시작 위치 갱신
    }
    result.push_back(str.substr(start)); // 마지막 단어 추가

    return result;
}

int main() {
    string text = "I::am::hand::some";
    string delimiter = "::";

    vector<string> words = split(text, delimiter);

    // 결과 출력
    for (const string& word : words) {
        cout << word << '\n';
    }

    return 0;
}
