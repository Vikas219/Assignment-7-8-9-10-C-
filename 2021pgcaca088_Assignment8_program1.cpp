
// 1) Design a program to handle multiple exceptions. i.e. divide by zero, divide by
// very large numbers and divide by negative numbers.


#include <bits/stdc++.h>
using namespace std;

void solve(){

    cout << "Enter an integer" << endl;
    string number;  cin >> number;

    try{
        if(number == "0"){
            throw 0;
        }
        else if(number.size() > 18){
            throw string("Very Large number");
        }
        else if(number[0] == '-'){
            throw string("Negative number");
        }
        else{
            cout << "good to go...!!" << endl;
        }
    }
    catch(int){
        cout << "Divide by zero error" << endl;
    }
    catch(string error){
        cout << error << endl;
    }
}



// Driver Code
int32_t main(){

    solve();

    return 0;
}