#include <cassert>

#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
#include <iostream>
#include <stdexcept>
#include <iterator>

using namespace std;


int main(int argc, char** argv)
{
   try
   {
      cout << "OK" << endl;
   }
   catch (std::exception& excpt)
   {
      cerr << "Exception caught: '" << excpt.what() << "'" << endl;
   }
}

