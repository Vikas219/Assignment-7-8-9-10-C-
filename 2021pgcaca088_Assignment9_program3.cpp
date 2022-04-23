
//  Queue implementation using a Vector of STL

#include <bits/stdc++.h>
using namespace std;

// Stact using Vector
template <class T>
class Queue{

    vector<T> arr;
public:
    void push(T data){
        arr.push_back(data);
    }
    void pop(){
        if(!empty()){
            auto pos = arr.begin();
            cout << *pos << " poped out\n";
            arr.erase(pos);
        }
        else    
            cout << "Underflow\n" << endl;
    }
    T top(){
        int lastIndex = arr.size() - 1;
        return arr[lastIndex];
    }
    bool empty(){
        return arr.size() == 0;
    }
    void front(){
        if(!empty())
            cout << arr[0];
        else{
            cout << "Empty Queue\n" << endl;
        }
    }
};


void menu(){
    cout << "1) Push" << endl;
    cout << "2) Pop" << endl;
    cout << "3) Front" << endl;
    cout << "4) empty" << endl;
    cout << "5) exit" << endl;
    cout << endl;
}



int32_t main(){

    Queue<int> obj;

    do{
        menu();
        cout << "Enter you choice" << endl;
        string ch;  cin >> ch;

        if(ch == "1"){
            cout << "Enter an integer" << endl;
            int n;  cin >> n;
            obj.push(n);
        }
        else if(ch == "2"){
            obj.pop();
        }
        else if(ch == "3"){
            obj.front() ;
        }
        else if(ch == "4"){
            cout << boolalpha << obj.empty() << endl;
        }
        else if(ch == "5"){
            break;
        }
    }while(1);


    return 0;
}
