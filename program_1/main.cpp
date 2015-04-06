#include <cassert>

#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
#include <iostream>
#include <stdexcept>
#include <iterator>

#include "utilities.h"

using namespace std;


int main(int argc, char** argv)
{
   try
   {
      if (myMin(2,5) != 2)
         throw runtime_error("Test failure: myMin(2, 5) != 2");

      if (myMin(9,5) != 5)
         throw runtime_error("Test failure: myMin(9, 5) != 5");

      cout << "All tests have passed." << endl;
   }
   catch (std::exception& excpt)
   {
      cerr << "Exception caught: '" << excpt.what() << "'" << endl;
      return 1;
   }
}

