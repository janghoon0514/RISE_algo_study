#include <iostream>
#include <vector>

using namespace std;

// 재귀함수.
int factorial(int factorial_size){
    // 멈추는 위치를 기입해줘야 하는 것이 매우 중요하다.
    if(factorial_size == 1 || factorial_size ==0){
        cout << "  " <<  1;
        return 1;
        
    }
    cout << "  " <<  factorial_size;
    return factorial(factorial_size - 1) * factorial_size;
}

int main(){
    int factorial_size = 5;
    int result = 0;
    result = factorial(factorial_size);
    cout << endl <<result;
}