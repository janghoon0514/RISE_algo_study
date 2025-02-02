#include <bits/stdc++.h>
using namespace std;
string a;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> a;
    int str_size = a.size();
    int flag = 1;
    
    for(int cnt = 0; cnt < str_size; cnt++){
        // cout << cnt << "  " << str_size - cnt - 1 << "\n";
        if(a[cnt] != a[str_size -cnt -1]){
            // cout << a[cnt] << a[str_size-cnt -1];
            flag = 0;
            break;
        }
    }
    cout << flag;
    
}