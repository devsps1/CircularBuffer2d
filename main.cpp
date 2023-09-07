#include <iostream>
#include "CircularBuffer2d.h"
using namespace std;

int main() {
  CircularBuffer2d<int, 8, 8> buffer;
  int data1[8] = {0};
  int data2[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  buffer.put(data1);
  buffer.put(data2);
  int data3[8]; 
  buffer.get(data3);
  for (int i = 0; i < 8; i++){
    cout << data3[i] << endl;
  }
  cout << endl;
}