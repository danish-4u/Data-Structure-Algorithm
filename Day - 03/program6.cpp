#include<iostream>
using namespace std;

int main(){
    int n,num=1;
    cout << "Enter a number: ";
    cin >> n;
    for(int j = 1; j <= n; j++){    
        for (int i = 1; i <= n; i++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << "The last number printed is: " << num << endl;
    return 0;
}