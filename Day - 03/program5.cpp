#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int j = 0; j < n; j++){  
        char ch = 'A';  
        for (int i = 1; i <= n; i++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;}
    
    return 0;
}