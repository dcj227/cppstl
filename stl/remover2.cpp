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
  copy(col1.begin(), col1.end(),
       ostream_iterator<int>(cout, " "));
  cout<<endl;

  // remove all elements with value 3
  // - return new end
  list<int>::iterator end = remove(col1,begin(), col1.end(), 3);
  
  // print resulting elements of the collection
  copy(col1.begin(), end,
       ostream_iterator<int>(cout, " "));
  cout<<endl;

  //print number of resulting elements
  cout<<"number of removed elements: "
      <<distance(end,col1.end())<<endl;

  // remove "removerd" elements
  col1.srase(end, col1.end());

  // print all elements of the modified collection
  copy(col1.begin(), col1.end(),
       ostream_iterator<int>(cout, " "));
  cout<<endl;
}
