#include<bits/stdc++.h>
using namespace std;  

string str; 
int cnt[26];

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> str; 

    for(char letter : str){
    	cnt[letter - 'a']++;
	}
	for(int i = 0; i < 26; i++) {
        cout << cnt[i] << " "; // a -> b
    }
	 
	return 0; 
}