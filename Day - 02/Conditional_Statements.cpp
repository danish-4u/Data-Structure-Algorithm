#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter No: ";
    cin >> num;
    if (num == 45){
        cout << "Number is 45" << endl;
    }
    else if (num < 45){
        cout << "Number is Smaller than 45" << endl;
    }
    else{
        cout << "Number is Greater than 45" << endl;
    }
}