#include <iostream>
using namespace std;
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << " " << array[i];
  }
  cout << "\n";
}
void bubbleSort(int array[], int size) {
  for (int step = 0; step < size; ++step) {
    for (int i = 0; i < size - step; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
int main() {
  system("cls");
  int arr_data[] = {6, 2, 5, 9, 1};
  int size = sizeof(arr_data) / sizeof(arr_data[0]);
  cout << "The current size of my array: " << size << endl;


  cout << "The original of an unorder array data: ";
  printArray(arr_data, size);

  cout << "Sorted Array in Ascending Order: ";
  bubbleSort(arr_data, size);
  printArray(arr_data, size);

  return 0;
}