#include<bits/stdc++.h>
using namespace std;   
string sentence; 
int main(){
    char small_letter_a = 'a';
    char small_letter_z = 'z';
    char big_letter_A = 'A';
    char big_letter_Z = 'Z';

    getline(cin, sentence); // 문장을 받을 경우

    for(int i = 0; i < sentence.size(); i++){
        if(sentence[i] >= big_letter_A && sentence[i] <= big_letter_Z){
            if(sentence[i] + 13 > big_letter_Z) sentence[i] = sentence[i] + 13 - 26; 
            else sentence[i] = sentence[i] + 13;  
        }
        else if(sentence[i] >= small_letter_a && sentence[i] <= small_letter_z){
            if(sentence[i] + 13 > small_letter_z)sentence[i] = sentence[i] + 13 - 26; 
            else sentence[i] = sentence[i] + 13;  
        }
        cout << sentence[i];  
    } 
    return 0; 
}
