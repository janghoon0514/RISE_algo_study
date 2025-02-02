#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;  

bool combi(int start, vector<int>& seven_vector, int array_size, int pick_size, int all_array[]) {

    if(seven_vector.size() == pick_size){
        int sum = 0;
        for(int cnt = 0; cnt < seven_vector.size(); cnt++){
            sum += seven_vector[cnt];
            // cout << seven_vector[cnt] << " ";
        }

        if (sum == 100){
            
        for(int cnt = 0; cnt < seven_vector.size(); cnt++){
            cout << seven_vector[cnt];
            if(cnt < seven_vector.size() - 1)
                cout << "\n";
        }
            return true; // 값이 더했을 때 true
        }
        else{
            return false;
        }
    }// 값이 7개(랜덤 배열 7개가 정해짐) 다른 함수들이 전부 작동을 하지 않도록 할 필요가 있다.
    
    for (int i = start; i < array_size; i++){
        seven_vector.push_back(all_array[i]);
        if(combi(i + 1, seven_vector, array_size, pick_size, all_array) == true){
            return true;
        } // 만약 값이 100이 될 경우 true를 연쇄적으로 return.
        seven_vector.pop_back();
    }
    return false;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int all_array[9];
    // int all_array[9] = {20, 7, 23, 19, 10, 15, 25, 8, 13};
    for(int i = 0; i < 9; i++){
        cin >> all_array[i]; 
    }

    sort(all_array, all_array + 9);


    vector<int> seven_vector;
    combi(0, seven_vector, 9, 7, all_array);
    return 0;
}
