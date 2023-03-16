#include <iostream>
using namespace std;
void showarray(int arr[20], int arr_size) {
  cout << "the array are: " << endl;
  for (int i = 0; i < arr_size; i++) {
    cout << arr[i] << " ";
  }
}

void insertarray(int arr[20], int arr_size) {
  int i, ins, pos;
  cout << "\nArray Element: ";
  for (i = 0; i < arr_size; i++) {
    cout << arr[i] << " ";
  }
  cout << "\nWant to insert Element: ";
  cin >> ins;
  cout << "At Position :";
  cin >> pos;
  for (i = arr_size; i > pos; i--)
    arr[i] = arr[i - 1];
  arr[i] = ins;
  arr_size++;
  cout << "\nElement inserted" << endl << "Array After: ";
  for (i = 0; i < arr_size; i++)
    cout << arr[i] << " ";
}

void deleteElem(int arr[20], int arr_size) {
  int i, j, del;
  cout << "\nArray Element: ";
  for (i = 0; i < arr_size; i++) {
    cout << arr[i] << " ";
  }
    cout << "\nEnter Element to Delete: ";
    cin >> del;
    for (i = 0; i < arr_size; i++) {
    if (arr[i] == del) {
      for (j = i; j < (arr_size - 1); j++) {
        arr[j] = arr[j + 1];
      }
      i--;
      arr_size--;
    }
  }
  cout << "\nElement Deleted : " << del << endl << "Array After: ";
  for (i = 0; i < arr_size; i++) {
    cout << arr[i] << " ";
  }
}

void deleteByvalue(int arr[20], int arr_size) {
  int deleted;
  cout << "\nArray Element: ";
  for (int i = 0; i < arr_size; i++) {
    cout << arr[i] << " ";
  };
  cout << "\nEnter Number To Delete: ";
  cin >> deleted;
  int i = 0;
  while (i < arr_size) {

    if (arr[i] == deleted) {
      if (i < (arr_size - 1))
        for (int j = i; j < (arr_size - 1); j++)
          arr[j] = arr[j + 1];
      arr_size--;
    } else
      i++;
  }
  for (int i = 0; i < arr_size; i++)
    cout << arr[i] << " ";
}


void duplicate_check(int arr[], int *search_element, int *array_size,
                     int *count) {
  for (int i = 0; i < *array_size; i++) {
    if (arr[i] == *search_element) {
      *count = *count + 1;
    }
  }
}

int main() {
  int choice;
  int num[] = {1, 2, 3, 4, 5, 4, 6, 2, 2};
  int size = 9;
  cout << "1. Show array" << endl
       << "2. insert Element to array" << endl
       << "3. delete Element by position" << endl
       << "4. delete Element by value" << endl
       << "5. search Duplicate element" << endl
       << "Choose : ";
  cin >> choice;
  if (choice == 1) {
    showarray(num, size);
  } else if (choice == 2) {
    insertarray(num, size);
  } else if (choice == 3) {
    deleteElem(num, size);
  } else if (choice == 4) {
    deleteByvalue(num, size);
  } else if (choice == 5) {
    cout << "\nArray Element: ";
    for (int i = 0; i < size; i++) {
      cout << num[i] << " ";
    }
    int search_element;
    cout << "\nEnter search element: ";
    cin >> search_element; 


    int count = 0;
    duplicate_check(num, &search_element, &size, &count);


    if (count <= 1) 
    {
      cout << "input element is NOT duplicate";
    } else {
      cout << "input element is DUPLICATE";
    }
  } else {
    cout << "input invalid";
  }
  return 0;
}
