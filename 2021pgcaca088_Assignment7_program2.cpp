/*
2) Implement the following class hierarchy using virtual function. Create base class
pointers to hold address of base class as well as derived class objects and call the
corresponding about() function of the assigned object.
Class : FamilyMember
Members : name, familyname, origin
Functions: constructor, destructor, about() //prints about father object
Class : Citizen
Members : name, country, year
Functions: constructor, destructor, about() //prints about mother object
Class : Employee (inherits FamilyMember and Citizen)
Members : name
Functions: constructor, destructor, about() //prints all about the child including
parent info
*/

#include <bits/stdc++.h>
using namespace std;

class FamilyMember{

protected:
    string name;
    string familyName;
    string origin;

public:
    // Default Constructor
    FamilyMember(){}

    // Parimeterized Constructor
    FamilyMember(string n, string c, string o){
        name = n;  familyName = c;  origin = o;
    }

    // About method
    void about(){
        cout << "\n==========================================\n";
        cout << "Name = " << name << endl;
        cout << "Family Name = " << familyName << endl;
        cout << "Origin = " << origin << endl;
    }

    // Destructor
    ~FamilyMember(){
        cout << "Destructor of FamilyMember Class.\n";
    }
};



/////////////// Cittizen Class /////////////////
class Citizen{

protected:
    string name;
    string country_name;
    string year;

public:
    // Default Constructor
    Citizen(){}
    // Perimeterized Constructor
    Citizen(string n, string c, string o){
        name = n;  country_name = c;  year = o;
    }
    
    // About method
    virtual void about(){
        cout << "\n==========================================\n";
        cout << "Name = " << name << endl;
        cout << "Country Name = " << country_name << endl;
        cout << "Year = " << year << endl;
    }

    // Destructor
    ~Citizen(){
        cout << "Destructor of Citizen Class.\n";
    }
};


///////////// Derived Class Employee ////////////////////

class Employee : public FamilyMember, public Citizen {

protected:
    string name;

public:
    // Default Constructor
    Employee(){}

    // Perimeterized Constructor
    Employee(string name, string familyName, string origin, string name1, string countr, string yea, string n): FamilyMember(name, familyName, origin), Citizen(name1, countr, yea){
        this->name = n;
    }

    // Member method
    void about(){
        cout << "\n==========================================\n";
        cout << "Employee Name : " << this->name << endl;
    }

    // Destructor
    ~Employee(){
        cout << "Destructor called for Employee.\n";
    }
};


///////======== Driver Code =========////////////
int main(){

    cout << "Enter The Father's Name : ";
    string fat;  cin >> fat;

    cout << "Enter The Father's Family Name : ";
    string fam_fat;  cin >> fam_fat;

    cout << "Enter The Father's Origin : ";
    string ori; cin >> ori;

    FamilyMember *father = new FamilyMember(fat, fam_fat, ori);

    cout << "Enter The Mother's Name : ";
    string mot; cin >> mot;

    cout << "Enter The Mother's Country : ";
    string fam_mot; cin >> fam_mot;

    cout << "Enter The Mother's Year : ";
    string mo_ori; cin >> mo_ori;

    Citizen *mother = new Citizen(mot, fam_mot, mo_ori);

    cout << "Enter The Child's Name : ";
    string chil; cin >> chil;

    Employee *child = new Employee(fat, fam_fat, ori, mot, fam_mot, mo_ori, chil);
    father->about();
    mother->about();
    child->about();


    return 0;
}