#include<iostream>
using namespace std;
int main(){
    int sum = 0, n;
    cout << "Enter a number: ";
    cin >> n;   

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout <<"Sum of " << n << " numbers is " << sum << endl;
    

return 0;
}