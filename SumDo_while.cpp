#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;
    
    // user's input
    cout << "Enter a number";
    cin >> number;
    do{
        sum += number;
        cout << "Enter a number: ";
        cin>>number;
    }
     while(number >=0);
      cout << "\n The sum is " << sum << endl;
  return 0;
  
  }
