#include<bits/stdc++.h>
using namespace std; 

int n, cnt[26]; 
string name, result; 

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> n; 
    // 선수 이름 cnt
    for(int i = 0; i < n; i++){
        cin >> name; 
        cnt[name[0] - 'a']++;
    }
    // 알파뱃이 5이상인 경우가 존재할 경우
    for(int i = 0; i < 26; i++){
        if(cnt[i] >= 5){
            result+=  i + 'a'; 
        }
    }

    if(result.size()) {
        cout << result << "\n"; 
    }
    else cout << "PREDAJA" << "\n";

    return 0;
}