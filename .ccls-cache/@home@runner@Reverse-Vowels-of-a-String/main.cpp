#include <iostream>
#include <string>
using namespace std;



bool isVowel(char ch)
{
  ch = tolower(ch);
  if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
  {
    return true;
  }
  else
  {
    return false;
  }
}







int main() {

  char arr[10];
  cin >> arr;

  int i =0;
  int j =10-1;
  
  while(i< j)
    {
      if(isVowel(arr[i]) && isVowel(arr[j]))
      {
        swap(arr[i] , arr[j]);
        i++;
        j--;
      }
      else if(!isVowel(arr[i]))
      {
        i++;
      }
      else
      {
        j--;
      }
    }

  cout << arr;
}