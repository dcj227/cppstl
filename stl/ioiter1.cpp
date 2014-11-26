#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
  vector<int> col1;
  /* read all words from the standard input
   * - source; all ints until end-of-file (or error)
   * - destination: col1
   */
  copy(istream_iterator<int>(cin),   // start of source
       istream_iterator<int>(),      // end of source
       back_inserter(col1));            // destination
  
  // sort elements
  sort(col1.begin(), col1.end());

  /* print all elements without duplicates
   * - source: col1
   * - destination: standard output (with newline between elements)
   */
  unique_copy(col1.begin(), col1.end(),       // source
              ostream_iterator<int>(cout, "\n"));  // destination
}

