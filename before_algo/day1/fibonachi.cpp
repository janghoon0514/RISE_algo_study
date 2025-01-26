#include <iostream>
#include <vector>

using namespace std;

// 재귀함수.
int fibonacci(int fibonacci_size){
    // 멈추는 위치를 기입해줘야 하는 것이 매우 중요하다.
    cout << fibonacci_size;
    if(fibonacci_size == 1 || fibonacci_size == 0 ){
        return fibonacci_size;        
    }
    return fibonacci(fibonacci_size - 1) + fibonacci(fibonacci_size - 2);
}

int main(){
    int fibonacci_size = 7;
    int result = 0;
    result = fibonacci(fibonacci_size);
    cout << endl <<result;
}