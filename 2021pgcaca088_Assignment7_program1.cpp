
/*
1) Implement the abstract class and override the functions of the abstract class in
the provided derived classes.
Class : ProbDistribution
Members: (none)
Functions: getExpectedVal()=0, getVariance()=0
Class: BinomailDistribution (inherits ProbDistribution)
Members: p, n, k
Functions: getExpectedVal(), getVariance()
Class: GeometricDistribution (inherits ProbDistribution)
Members: p, k
Functions: getExpectedVal(), getVariance()
*/


#include<bits/stdc++.h>
using namespace std;


/////////====== ProbDistribution Class =====///////////
class ProbDistribution {

public:
    virtual void getexpectedval() = 0;
    virtual void getvariance() = 0;
};


//////////////////////////////////////////////////////////
class BinomialDistribution : public ProbDistribution {

protected:
    int n,p,k;

public:
    BinomialDistribution(int i, int j, int m) {
        n = i;  p = j;  k = m;
    }
    void getexpectedval() {
        int r = n * p;
        cout<<"\nExpected value of Binomial Distribution :\n"<<r<<endl;
    }
    void getvariance() {
        int res  =  n * p * k;
        cout<<"\nVariance of Binomial Distribution :" << res << endl;
    }
};


//////////////////////////////////////////////////////////////
class GeometricalDistribution : public ProbDistribution {

protected:
    int p,k;

public:
    GeometricalDistribution(int j,int m) {
        p = j;   k = m;
    }
    void getexpectedval() {
        double r  =  1 / p;
        cout<<"\nExpected value of Geometrical Distribution :"<<r<<endl;
    }
    void getvariance() {
        double res = (1-p) / (p*p);
        cout<<"\nVariance of Geometrical Distribution :"<<res<<endl;
    }
};



//////////////// DRIVER CODE
int main() {

    int x,y,z;

    cout << "Enter the value of n : ";
    cin >> x;

    cout << "Enter the value of p : ";
    cin >> y;

    cout << "Enter the value of k : ";
    cin >> z;

    GeometricalDistribution obj1(x,y);
    obj1.getexpectedval();
    obj1.getvariance();

    BinomialDistribution obj2(x,y,z);
    obj2.getexpectedval();
    obj2.getvariance();


    return 0;
}