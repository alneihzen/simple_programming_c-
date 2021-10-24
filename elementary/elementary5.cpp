#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int answer(int n){

    int sum = 0;

    for (int i = 1; i <= n; i++){

        if (i % 3 == 0 || i % 5 == 0){

            sum += i;
        }
    }

    return sum;
}


int main(void){

    int n;

    cout << "I ask you for a number n: ";
    cin >> n;
    cout << answer(n) << endl;

    return 0;
}
