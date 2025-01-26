#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printV(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}


// next_permutation은 오름차순의 함수의 조합을 나타내고
// prev_permutation은 내림 차순의 함수의 조합을 나타낸다.
// sorting이 제대로 되어있지 않을 경우 원하는 결과가 나타나지 않을 수도 있다.
int main(){
    int a[3] = {1, 2, 3};
    vector<int> v;

    for(int i = 0; i < 3; i++)
        v.push_back(a[i]);
        
    do{
        printV(v);
    }while(next_permutation(v.begin(), v.end()));
    
    cout << "-------------" << '\n';

    v.clear();

    for(int i = 2; i >= 0; i--)v.push_back(a[i]);
        do{
            printV(v);
        }while(prev_permutation(v.begin(), v.end()));
    return 0;
}