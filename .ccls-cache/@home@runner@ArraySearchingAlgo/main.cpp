#include <iostream>
using namespace std;

int main() 
{
  int sequentialSearch(int [] a, int item)
  {
    int index = -1;
    bool found = false;
    int arraySize = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i < arraySize; i++)
      {
        if(a[i] == item)
        {
          found = true;
          index = i;
          break;
        } 
      }
    return index;
  }
  return 0;
}