#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int summing(int n){

    int sum = 0;

    for (int i = 1; i <= n; i++){

        sum += i;
    }

    return sum;
}

int producting(int n){

    int product = 1;

    for (int i = 1; i <= n; i++){

        product *= i;
    }

    return product;
}

int main(void){

    int n, choice;

    cout << "I ask you for a number n: ";
    cin >> n;
    cout << "I aks you for a choice 1 or 0: ";
    cin >> choice;

    if (choice == 1){

        cout << summing(n) << endl;
    }

    else if (choice == 0){

        cout << producting(n) << endl;
    }

    return 0;
}
