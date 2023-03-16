#include <iostream>
#include <vector>

using namespace std;

class Array {
    private:
        vector <double> v;
    public:
        void insert(int value) {
            v.push_back(value);
        }
        void display() {
            for (int i = 0; i < v.size(); i++) {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        void insertion_sort(int option) {
            for (int i=1; i<v.size(); i++) {
                double key = v[i];
                int j = i-1;

                if (option == 1) {
                    while (j>=0 && key < v[j]) {
                        v[j+1] = v[j];
                        j = j -1;
                    }
                } else if (option == 2) {
                    while (j>=0 && key > v[j]) {
                        v[j+1] = v[j];
                        j = j -1;
                    }
                }
                
                v[j+1] = key;
            }
        }
};
int main() {
    Array a1 = Array();
    a1.insert(49);
    a1.insert(53);
    a1.insert(9);
    a1.insert(42);
    a1.insert(89);
    a1.insert(19);

    cout << "unsorted array: ";
    a1.display();

    int option;
    cout << "1. Ascending..." << endl;
    cout << "2. Descending..." << endl;
    cin >> option;

    a1.insertion_sort(option);

    cout << "sorted array: ";
    a1.display();
    return 0;
}
