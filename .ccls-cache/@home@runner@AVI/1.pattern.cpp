#include <iostream>
using namespace std;
int main() {
  // traingle
  int n = 5;
  for (int row = 0; row <= 5; row++) {
    for (int col = 0; col <= n; col++) {
      cout << "* ";
    }
    cout << endl;
    n--;
  }

  // hollow rectangle

  cout << "hollow rectangle" << endl;
  int nh = 5;
  for (int row = 0; row < 3; row++) {
    if (row == 0 || row == 2) {
      for (int col = 0; col <= 5; col++) {
        cout << "* ";
      }
      cout << endl;
    } else {
      for (int col = 0; col <= 5; col++) {
        if (col == 0 || col == 5) {
          cout << "* ";
        } else {
          cout << "  ";
        }
      }
      cout << endl;
    }
  }
}
