#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <string>

std::string Replace( std::string input )
{
   std::string output;
   std::unordered_map<char, int> cache;
   std::transform( input.begin(), input.end(), input.begin(), std::tolower );

   for( char c : input )
      cache[c] = cache[c] + 1;

   for( char c : input )
   {
      if( cache[c] > 1 )
         output += ')';
      else
         output += '(';
   }
   return output;
}

int main( void )
{
   std::cout << "ASCII Input >> ";
   std::string input;
   std::getline( std::cin, input, '\n' );
   std::cout << Replace( input ) << std::endl;
   return 0;
}
