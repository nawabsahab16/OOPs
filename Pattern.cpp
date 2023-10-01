#include <iostream>
#include <string>
using namespace std;

int main() {
    int i,j,rows , k=1;
    cout << "\n\n Display such a pattern like right angle triangle with number increased by 1 :";
    cout << "Input numbers of row :";
    cin >> rows;
    for( i=1; i<=rows; i++) {
        for(j=1; j<=i; j++) {
            cout << k << " " << endl;
        }
    }
    return 0;
}