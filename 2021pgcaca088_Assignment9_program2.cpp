
// 2) Use a function template to perform insertion sort on the 
// arrays of i. integers, ii. doubles, iii. Distances (feet, inches)

#include <bits/stdc++.h>
using namespace std;

// Distance class
class Distance{

    float feet;
    float inch;
public:
    // Default Constructor
    Distance(): feet{0.0}, inch{0.0}{}

    // Parimeterized Constructor
    Distance(float f,  float i){
        feet = f;
        inch = i;
    }

    friend bool operator>(Distance &a, Distance &b);
    friend ostream &operator<<(ostream &out,  Distance &obj);

    Distance &operator=(const Distance &rhs);
};

// copy assignment
Distance &Distance::operator=(const Distance &rhs)
{
    cout << "Copy assignment..." << endl;
    if(this == &rhs)
        return *this;

    feet = rhs.feet;
    inch = rhs.inch;

    return *this;
}

ostream &operator<<(ostream &out,  Distance &obj){
    out << obj.feet << " feet  " << obj.inch << " inch";
    return out;
}


// > Operator Overloading
bool operator>(Distance &a, Distance &b){

    if(a.feet > b.feet){
        return true;
    }
    else if(a.feet < b.feet){
        return false;
    }
    else{
        if(a.inch > b.inch){
            return true;
        }
        else{
            return false;
        }
    }
}



// Sorting function
template <class T>
void insertion_sort(T *arr,  int &size){

    for(int i = 0;  i < size-1;  i++){
        for(int j = i+1;   j < size;  j++){

            if(arr[i] > arr[j]){
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
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





// Display menu ///////////////////////////
void menu(){
    cout << "1) array of integer\n";
    cout << "2) array of doubles\n";
    cout << "3) array of complex class objects" << endl;
    cout << "4) Exit\n";
}


/////////////////////////////////////////////////
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
            insertion_sort(obj, size);
            print(obj, size);
        }
        else if(ch == "2"){
            double obj[size];
            for(int i = 0;  i < size;  i++){
                cout << "Enter " << i+1 << " number" << endl;
                cin >> obj[i];
            }
            print(obj, size);
            insertion_sort(obj, size);
            print(obj, size);
        }

        else if(ch == "3"){
            Distance obj[size];
            for(int i = 0;  i < size;  i++){
                cout << "Enter feet and inch seperated by space" << endl;
                float real, img;
                cin >> real >> img;
                obj[i] = {real, img};
            }
            print(obj, size);
            insertion_sort(obj, size);
            print(obj, size);
        }
        else if(ch == "5"){
            break;
        }
    }while(1);

    return 0;
}