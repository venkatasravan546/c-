#include <iostream> 
#include <cmath> 
using namespace std;
int main()
{
 int start = 1;
 int end = 10;
 int total = 0;
 int count = (end - start) + 1;
 float average = 0;
 
 cout << "Average of numbers between " << start << " and " << end  << ":\n";
 for(start=start; start<=end; start++)
  total += start;

 cout << "\nTotal = " << total;
 cout << "\nCount = " << count;
 average = (float) total / count;
 cout << "\nAverage is " << average;
 return 0;
}