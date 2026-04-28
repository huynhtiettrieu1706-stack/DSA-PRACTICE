#include <bits/stdc++.h>

using namespace std;

void simulation_solve(){
    long long n,k;
    cin >> n, k;
    if(n==1){
        cout << 1 << endl;
        return;
    }
    long long cycle_length = 2*n - 2;
    long long position_in_cycle = (k-1) % cycle_length;
    if(position_in_cycle < n)
    {
        cout << position_in_cycle + 1 << endl;
    }
    else
    {
        cout << cycle_length - position_in_cycle + 1 << endl;
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >>T;
    while(T--){
        simulation_solve();
    }
    return 0;
}