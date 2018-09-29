#include <iostream>
using namespace std;

int main() {
  int arraySize;
  cout<<"Input array size: how many numbers will you be inputting?"<<endl;
  cin>>arraySize;

  int array1[arraySize];

  for(int i = 0; i < arraySize; i++){
    cout<<"Input number "<<i+1<<" please:";
    cin>>array1[i];
  }
  cout<<"The array is {";
  for(int i = 0; i < arraySize-1; i++){
      cout<<array1[i]<<", ";
  }
  cout<<array1[arraySize-1]<<"}";
}