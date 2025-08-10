#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter No: ";
    cin >> a;
    cout << "Enter No: ";
    cin >> b;
    cout << "Enter No: ";
    cin >> c;

    cout << "(a < b) && (b < c): " << ((a < b) && (b < c)) << endl;
    cout << "(a < b) || (b < c): " << ((a < b) || (b < c)) << endl;
    cout << "!(b < c): " << (!(b < c)) << endl;
    

}