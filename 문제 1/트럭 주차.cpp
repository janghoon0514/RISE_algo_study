#include <bits/stdc++.h>
using namespace std;
int fee_a, fee_b, fee_c;
int times[101];
int total_fee = 0;

int main{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> fee_a << fee_b << fee_c;

    for(truck = 0; truck < 3; truck++){
        int truck_time_start = 0;
        int truck_time_end = 0;
        cin >> truck_time_start >> truck_time_end;

        for(parking_time = truck_time_start; parking_time < truck_time_end; parking_time++){
            if(times[parking_time]){
                times[parking_time]++;
            }
            else{
                times[parking_time] = 1;
            }
        }

    } 

    for(int cnt = 0; cnt < 101; cnt++){
        if(times[cnt]){
            if(times[cnt] == 1) total_fee += fee_a;
            if(times[cnt] == 2) total_fee += fee_b * 2;
            if(times[cnt] == 3) total_fee += fee_c * 3;
        }
    }
    cout << total_fee;
}