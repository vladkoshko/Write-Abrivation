#include <iostream>
#include <string>
using namespace std;



int main()
{
  // Variables
  string input; // full name
  string output;
  bool first = true; // needs in for cycle

  cout << "Enter the full name: ";
  cin >> input;

  for (const auto i : input)
  {
    if (first) // If this is the first char in string input
    {
      output += i;
    } else {
      if (i == ' ') // FIXME
      {
        output += '.' + input[i + 1];
      }
    }
    
    first = false;

  }
  
  cout << output << endl;
  return 0;
}
