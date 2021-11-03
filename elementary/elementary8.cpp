#include <bits/stdc++.h>

using namespace std;

#define ll long long


void SieveEratosthenes(int n){

    bool prime[n+1];

    memset(prime, true, sizeof(prime));

    for (ll p = 2; p*p <= n; p++){

        if (prime[p] == true){

            for (ll i = p*2; i <= n; i += p){

                prime[i] = false;
            }
        }
    }

    for (ll p = 2; p <= n; p++){

        if (prime[p])
            cout << p << "\n";
    }
}



int main(){

    ios::sync_with_stdio(0);

    SieveEratosthenes(1000000);

    return 0;
}
