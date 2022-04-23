
// Contact List implementation using Map of STL.

#include <bits/stdc++.h>
using namespace std;


//////////////////// Menu
void menu(){
    cout << "1) insert contact" << endl;
    cout << "2) get Number" << endl;
    cout << "3) print all contacts" << endl;
    cout << "4) exit" << endl << endl;
}

// Validate Number
set<char> digit{'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
bool isDigit(char ch){
    return digit.count(ch);
}
bool validate(string number){
    if(number.size() != 10){
        // cout << "hhh"<< endl;
        return false;
    }
    for(int i = 0;  i < number.size();   i++){
        if(!isDigit(number[i])){
            return false;
        }
    }
    return true;
}



// Driver Code
int32_t main(){
    map<string, string> obj;

    do{
        menu();
        cout << "Enter your choice" << endl;
        string ch;  cin >> ch;

        if(ch == "1"){
            cout << "Enter name" << endl;
            string name;  cin >> name;
            cout << "Enter number" << endl;
            string number;  cin >> number;
            while(!validate(number)){
                cout << "Sorry, Wrong input...TRY AGAIN\n";
                cout << "Enter number" << endl;
                number;  cin >> number; 
            }
            obj[name] = number;
        }

        else if(ch == "2"){
            cout << "Enter name" << endl;
            string name;  cin >> name;
            bool flag = false;
            for(auto it : obj){
                if(it.first == name){
                    cout << endl<< it.second << endl;
                    flag = true;
                    break;
                }
            }
            if(!flag){
                cout << "Contact not found...!!" << endl;
            }
            
        }
        else if(ch == "3"){
            for(auto it : obj){
                cout << it.first << "  " << it.second << endl;
            }
        }
        else if(ch == "4"){
            break;
        }
    }while(1);
    



    return 0;
}