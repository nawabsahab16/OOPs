#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int num, i, sum =0;
    cout << "Enter a positive integer :";
    cin >> num;
    i = 1;
    while(  i<= num) {
        sum += i;
        i++;
    }
    cout << "Sum of the natural numbers are: " << sum;
    getch();

 return 0;
}


