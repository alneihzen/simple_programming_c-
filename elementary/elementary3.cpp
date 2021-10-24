#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(void){

    string name;

    cout << "What's your name. \n";
    cin >> name;

    if (name == "Alice" || name == "Bob"){
        cout << "Greetings, " << name << endl;
    }
    else{
        printf("ew \n");
    }
    return 0;
}
