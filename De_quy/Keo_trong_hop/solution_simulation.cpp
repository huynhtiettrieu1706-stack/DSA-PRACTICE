#include <bits/stdc++.h>

using namespace std;

void simulation_solve(){
    long long n,k;
    cin >> n >> k;
    if(n==1){
        cout << 1 << endl;
        return;
    }
    long long current_box = 1;
    int direction = 1;
    for(long long i = 1; i < k; ++ i){
        current_box += direction;
        if(current_box == n ) direction = -1;
        else if( current_box == 1) direction = 1; 
    }
    cout << current_box << endl;
}
int main() 
{
    int T;
    cin >> T;
    while(T--)
    {
        simulation_solve();
    }
    return 0;
}