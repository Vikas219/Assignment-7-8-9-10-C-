
// 3) Write a program to handle the exception when substring 
// function is applied to an empty string.

#include <bits/stdc++.h>
using namespace std;


void solve(){

    string str = "";
    try{
        int start, end;
        cout << "Enter starting position of substring" << endl;
        cin >> start;
        cout << "Enter ending position of substring" << endl;
        cin >> end;

        if(str.size() == 0)
            throw string("Sorry, string is empty");
    }
    catch(string err){
        cout << err << endl;
    }
}


int32_t main(){

    solve();
    return 0;
}