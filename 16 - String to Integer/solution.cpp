#include <bits/stdc++.h>
#include <stdexcept>
#include <string.h>
#include <stdlib.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);

    try{
        int num1;
        num1 = stoi(S);
        cout << num1;
    }catch(exception &e){
        cout << "Bad String";
    }

    return 0;
}
