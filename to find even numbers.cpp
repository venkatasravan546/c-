#include <iostream> 
using namespace std;
int main()
{
 int start = 10;
 int end = 25;

 cout << "Even numbers between " << start << " and " << end << ":\n";
 for(start=start; start<=end; start++)
 {
  if(start % 2 == 0)
   cout << start << " ";
 }
 
 return 0;
}