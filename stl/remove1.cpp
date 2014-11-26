// stl/remove1.cpp

#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
  list<int> col1;

  // insert elements from 6 to 1 and 1 to 6
  for (int i = 1; i <= 6; ++i) {
    col1.push_front(i);
    col1.push_back(i);
  }

  // print all elements of the collection
  cout<<"pre: ";
  copy(col1.begin(), col1.end(),            // source
       ostream_iterator<int>(cout, " "));   // destination
  cout<<endl;

  // remove all elements with value 3
  remove(col1.begin(), col1.end(),          // range
         3);                                // value
  
  // print all elements of the collection
  cout<<"post: ";
  copy(col1.begin(), col1.end(),            // source
       ostream_iterator<int>(cout, " "));   // destination
  cout<<endl;
}
