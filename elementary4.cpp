#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(void){

    int n;
    int sum = 0;

    cout << "I ask you for a number n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum is: " << sum << endl;

    return 0;
}
