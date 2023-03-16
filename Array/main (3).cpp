#include <iostream>
using namespace std;

int cal_size(int array[]) {
    int count = 0;
    for (int i = 0; i<20; i++) {
        if (array[i] == 0) {
            break;
        }
        count++;
    }
    return count;
}

void menu() {
    cout << "\n=========== Program Executing... ============ \n";
    cout << "\n1. Show array" << endl
    << "2. insert Element to array" << endl
    << "3. delete Element by given value" << endl
    << "4. delete all Element" << endl
    << "5. insert end (append)" << endl
    << "6. check duplicate" << endl
    << "7. delete all by given value" << endl
    << "Press other key to exit..."<<endl
    << "Choose : ";
}

void show(int array[]) {
    cout << "============== Display Array ==============" << endl;
    cout << "Here are your array: ";
    for (int i = 0; i < cal_size(array); i++) {
        cout << array[i] << " ";
    }
    cout << "\n================ End ======================" << endl;
}

void insert(int array[], int size_of_array) {
    int inserted_element, position;
    cout << "Enter Element to insert: ";
    cin >> inserted_element;
    cout << "Position: ";
    cin >> position;
    position--;
    for (int i = cal_size(array)-1; i>=position; i--) {
        array[i+1] = array[i];
    } 
    array[position] = inserted_element;
    cout << " ----- successfully inserted at given position -----";
}


void _delete(int array[]) {
    int element;
    cout << "Which element you want to delete: ";
    cin >> element;
    // search for element's index;
    int index = -1;
    for (int i = 0; i<cal_size(array); i++) {
        if (array[i] == element) {
            index = i;
        }
    }
    // check if element not exist in array
    if(index == -1) {
        cout << "----- delete FAILED! given element doesn't exist in array -----";
        return;
    }

    // move element backward
    for (int i = index; i<cal_size(array); i++) {
        array[i] = array[i+1];
    }
    cout << " ----- successfully delete given element -----";
}

void delete_at_position(int array[], int position) {
    for (int i = position; i<cal_size(array); i++) {
        array[i] = array[i+1];
    }
}

void delete_all_by_value(int array[]) {
    int value;
    cout << "which value you want to delete all?: ";
    cin >> value;

    // search through array, if value found, delete one, if found more, delete one more
    int found = -1;
    for (int i = 0; i<cal_size(array); i++) {
        if (array[i] == value) {
            // delete array at this index i
            delete_at_position(array, i);
            i--;
            found++;
        }
    }
    if (found == -1) {
        cout << "----- given element Not found ----- DELETE failed! -----";
    } else {
        cout << "---- successfully delete all element with the given value ----";
    }
}

void delete_all(int array[]) {
    for (int i=0; i<cal_size(array); i++) {
        array[i] = 0;
    }
    cout << " ----- successfully delete all >_< -----";
}

void duplicate(int array[]) {
    int value;
    cout << "Which number you want to check?: ";
    cin >> value;
    int count = 0;

    for (int i = 0; i<cal_size(array); i++) {
        if (array[i] == value) {
            count++;
        }
    }

    if (count >= 2) {
        cout << "given value " << value << "is Duplicated.";
    } else {
        cout << "given value " << value << " is NOT Duplicated.";
    }

    // loop through given array
    // if count > 1, cout << duplicate
}

void insert_end(int array[], int size_of_array) {
    int index = cal_size(array);

    cout << "enter value: ";
    cin >> array[index];
    cout << " ----- successfully inserted at end -----";
}


int main() {
    system("cls"); // clear the screen before run

    int choice;
    cout << "How many size you want array to hold?: ";
    int size_of_array;
    cin >> size_of_array;

    int num[size_of_array] = {15, 2, 3, 5, 20, 20, 40, 15}; // initialize array, we can also set it to empty for user to input.

    while (true) {
        menu();
        cin >> choice;
        cout << "========================================\n";
        switch (choice) {
            case 1:
                show(num);
                break;
            case 2:
                insert(num, size_of_array);
                break;
            case 3:
                _delete(num);
                break;
            case 4:
                delete_all(num);
                break;
            case 5:
                insert_end(num, size_of_array);
                break;
            case 6:
                duplicate(num);
                break;
            case 7:
                delete_all_by_value(num);
                break;
            default:
                cout << "\n Invalid Command!!! \n";
                cout << "=========== Program Exit... =========\n\n";
                exit(0);
        }    
    }
    return 0;
}