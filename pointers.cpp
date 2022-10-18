#include<iostream>

using namespace std;

int main() {
    int age =17;
    int *pAge = &age;
    double gpa = 1.9;
    double *pGpa = &gpa;
    string name = "Juan";
    string *pName = &name;
    cout << age << " " << &age << endl;
    cout << *pAge;
    return 0;
}
