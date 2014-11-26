// stl/remove4.cpp

#include <iostream>
#include <list>
#include <algorithm>
//#include <
using namespace std;

int main() {
  list<int> col1;

  // insert elements from 6 to 1 and 1 to 6
  for (int i = 1; i <= 6; ++i) {
    col1.push_front(i);
    col1.push_back(i);
  }

  // remove all elements with value 3
  // - poor performance
  // col1.erase(remove(col1.begin(), col1.end(), 3), col1.end());
  remove(col1.begin(), col1.end(), 3);

  // remove all elements with value 4
  // - good performance
  // col1.remove(4);

  for(list<int>::iterator it = col1.begin(); it != col1.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;
}
