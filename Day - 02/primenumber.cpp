#include<iostream>
using namespace std;
int main(){
    int n = 1;
    bool isPrime = true;
    cout << "Enter a Number: ";
    cin >> n;
    for (int i = 2; i <= n-1; i++)
    {
        if ( n % i == 0){
            isPrime = false;
            break;
        }
    }
    if (isPrime == true){
        cout << "Number is prime" << endl;
    }
    else{
        cout << "Number is not prime" << endl;
    }


return 0;
}