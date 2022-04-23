
#include <bits/stdc++.h>
// #include "file_handing.h"
using namespace std;



// File Pointers
fstream in_file, out_file;

// size variables for number of strings in file1 and file2
int size1, size2;


string fileOne = "file.txt";
string fileTarget = "copy.txt";




////////////////////////////////////////////////////
void input_file1(){
    cout << "Enter number of strings you wanna insert in file1\n";
    cin >> size1;
    vector<string> file1(size1);


    cout << "Enter " << size1 << " strings separated with spaces"<<endl;
    for(int i = 0;  i < size1;  i++){
        cin >> file1[i];
    }

    in_file.open(fileOne, fstream::out);

    for(int i = 0;  i < size1;  i++){
        in_file << file1[i] << " ";
    }
    in_file.close();

}



//////////////////////////////////////////////////////////
void copy(){

    in_file.open(fileOne, fstream::in);
    std::ofstream out_file {fileTarget, fstream::out};

    try{
        if(!in_file){
            throw string("File open Error...");
        }
        if(!out_file){
            throw string("File create error...");
        }

        std::string line {};

        char c;
        while(in_file.get(c))
            out_file.put(c);

        in_file.close();
        out_file.close();
    }
    catch(string err){
        cout << err << endl;
    }
}







///////////////////////////////////////////////////////////
void print(){
    out_file.open(fileTarget, fstream::in);
    if(!out_file){
        cout << "File opening error" << endl;
        return;
    }

    string s;
    cout << "\n===============================================\n";
    for(int i= 0;  i < size1+size2;  i++){
        out_file >> s;
        cout << s << " ";
    }
    cout << endl;
    out_file.close();
}








///////////////////////////////////////////////

// Driver Code

int main()
{
    input_file1();

    copy();

    cout << "\nAFTER COPYING" << endl;
    print();


    return 0;
}
