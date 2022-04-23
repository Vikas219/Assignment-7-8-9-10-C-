
// 2) Write a program to handle array index out of bound 
// exception, and using user defined exception objects.


#include <bits/stdc++.h>
using namespace std;

// User Defined class to hande exceptions
class user_defined{
public:
    void error(){
        cout << "Array index out of bound " << endl;
    }
};


// Working Function
void solve(){

    cout << "Enter number of elements in array less than 11" << endl;
    int size;  cin >> size;

    int arr[size];

    for(int i = 0;   i < size;  i++){
        cout << "Enter " << i+1 << " element" << endl;
        cin >> arr[i];
    }

    // try to access an element by giving index
    try{
        cout << "Enter position of element which you wanna get..." << endl;
        int position;   cin >> position;
        if(position >= size){
            throw user_defined();
        }
    }
    catch(user_defined obj){
        obj.error();
    }
}


// Driver Code
int32_t main(){

    solve();

    return 0;
}