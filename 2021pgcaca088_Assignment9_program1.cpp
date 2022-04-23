
// 1) To print an array of elements, use a function template for arrays of 
// i. integers, 
// ii. doubles, 
// iii.Strings, and 
// iv. Complex numbers



#include <bits/stdc++.h>
using namespace std;

// class for complex number
class Complex{
    int real;
    int img;
public:
    // default constructor
    Complex(): real{0}, img{0}{}

    // Perimeterized constructor
    Complex(int real,  int img){
        this->real = real;
        this->img = img;
    }
    // friend function
    friend ostream &operator<<(ostream &out,  Complex &obj);
};

ostream &operator<<(ostream &out,  Complex &obj){
    out << obj.real << " + (" << obj.img << ")i ";
    return out;
}


template <class T>
// Print function to print array elements of any type
void print(T* arr,  int &size){

    cout << "\n======================================================\n";
    cout << "Array elements are \n";
    for(int i = 0;  i < size;  i++){
        cout << arr[i] << "\n";
    }
    cout << endl;
}



// Display menu
void menu(){
    cout << "1) array of integer\n";
    cout << "2) array of doubles\n";
    cout << "3) array of strings\n";
    cout << "4) array of complex class objects" << endl;
    cout << "5) Exit\n";
}






//////////////////////////////////////////////////
// Driver Code
int32_t main(){

    do{
        cout << "Enter the size of array" << endl;
        int size;   cin >> size;
        menu();
        cout << "Enter your choice" << endl;
        string ch;  cin >> ch;



        if(ch == "1"){
            int obj[size];
            for(int i = 0;  i < size;  i++){
                cout << "Enter " << i+1 << " number" << endl;
                cin >> obj[i];
            }
            print(obj, size);
        }
        else if(ch == "2"){
            double obj[size];
            for(int i = 0;  i < size;  i++){
                cout << "Enter " << i+1 << " number" << endl;
                cin >> obj[i];
            }
            print(obj, size);
        }
        else if(ch == "3"){
            string obj[size];
            for(int i = 0;  i < size;  i++){
                cout << "Enter " << i+1 << " string" << endl;
                cin >> obj[i];
            }
            print(obj, size);
        }
        else if(ch == "4"){
            Complex obj[size];
            for(int i = 0;  i < size;  i++){
                cout << "Enter real part and img part of complex number seperated by space" << endl;
                int real, img;
                cin >> real >> img;
                obj[i] = {real, img};
            }
            print(obj, size);
        }
        else if(ch == "5"){
            break;
        }
    }while(1);




    return 0;
}