#include<iostream>
using namespace std; 
int main( ) 
{  
	int arr[4][3] = {
		{ 10, 11, 12 },
		{ 20, 21, 22 },
		{ 30, 31, 32 },
    { 40, 41, 42 },
		} ;
		
	int 
  ROWS = 4,
  COLS = 3,
  i,j;
  // pointer
  int *ptr = &arr[0][0];
	
	cout<<"Printing a 2D Array:\n";
	for(i=0; i<ROWS; i++)
	{
		for(j=0; j<COLS ;j++)
		{
			cout<<"\t"<< *(ptr + i * COLS + j);
		}
		cout<<endl;
	}
  return 0;
}

  