// stl/riter1.cpp

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
  vector<int> col1;

  // insert elements from 1 to 9
  for (int i = 1; i <= 9; ++i) {
    col1.push_back(i);
  }

  // print all element in reverse order
  copy(col1.rbegin(), col1.rend(), ostream_iterator<int>(cout, " "));
  cout<<endl;
}
