#include <iostream>
using namespace std;
int main () {
  struct Student{
int id;
string name;
char gender;
} student1;
  student1.id = 1;
  student1.name = "Jennie";
  student1.gender = 'F';
  // display the result 
  cout << "ID: " << student1.id <<endl;
  cout << "Name: " << student1.name <<endl;
  cout << "Gender: " << student1.gender << endl;

  
}



// buffer is like container that store the user input after thant a
// pointer -> , else.
//accessing members of a structure
// studentid_t

// student_ptr = &student1;
// student_ptr->id
