#include <iostream>
#include <string>
#include <sstream>
using namespace std;



int main()
{
  // Variables
  stringstream ss; // Will be used as a output str
  string input; // full name
  bool first = true; // needs in "for" cycle
  size_t it = 0;

  cout << "Enter the full name: ";
  getline(cin, input);

  while (input[it])
  {
    if (first)
    {
      ss << char(toupper(input[it]));
    } else if (input[it] == ' ') {
      ss << "." << char(toupper(input[++it]));
    }

    first = false;
    ++it;
  }
  
  cout << ss.str() << endl;
  return 0;
}
