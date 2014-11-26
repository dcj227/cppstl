// stl/remove3.cpp

#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
  set<int> col1;

  // insert elements from 1 to 9
  for (int i = 1; i <= 9; ++i) {
    col1.insert(i);
  }

  // print all elements of the collection
  copy(col1.begin(), col1.end(), ostream_iterator<int>(cout, " "));
  cout << endl;

  /* remove all elements with value 3
   * - algorithm remove() does not work
   * - instead member function erase() works
   */
  int num = col1.erase(3);

  // print number of removerd elements
  cout << "number of removed elements: " << num << endl;

  // print all elements of the modified collection
  copy(col1.begin(), col1.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
}
