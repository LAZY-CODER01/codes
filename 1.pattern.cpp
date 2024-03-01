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
  for (int row = 0; row < nh; row++) {
    if (row == 0 || row == nh - 1) {
      for (int col = 0; col < nh; col++) {
        cout << "* ";
      }
      cout << endl;
    } else {
      for (int col = 0; col < nh; col++) {
        if (col == 0 || col == nh - 1) {
          cout << "* ";
        } else {
          cout << "  ";
        }
      }
      cout << endl;
    }
  }
  // half pyramid
  cout << "half pyramid" << endl;

  for (int row = 0; row < 6; row++) {
    for (int col = 0; col < row + 1; col++) {
      cout << "* ";
    }

    cout << endl;
  }

//  inverted half pyramid
cout << " inverted half pyramid" << endl;












































}