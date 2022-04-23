

// 4) Demonstrate the recursive handling of exception 
// during function call.

#include <bits/stdc++.h>
using namespace std;

// Working function
void solve(int &num, int&cnt){
    // cout << cnt << endl;

    if(cnt == 20)
        return;

    try{
        if(num < 3 and cnt != 20 ){
            cnt++;
            throw string("\nNumber is less than 3 error\n");
        }
        else{
            cout << "Number is decresed by 1" << endl;
            num--;
        }
    }
    catch(string err){
        cout << err;
    }
    solve(num, cnt);
}

// Driver Code
int32_t main(){

    cout << "Enter a number less than 10" << endl;
    int num;  cin >> num;

    int cnt = 0;
    solve(num, cnt);

    return 0;
}