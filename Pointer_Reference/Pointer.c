include <stdio.h>
int main (void){
  //2d array
  int num[3][4]={
  {1, 2, 3, 4},
  {5, 6, 7, 8},
  {9, 10, 11, 12},
  };
  int 
  Rows=3,
  Cols=4
  i, j;
  //pointer
  int *ptr =&num[0][0];
  //print the element of the array 
  for (i=0; i<Row; i++){
    for (j=0; j<Col; j++){
      printf("%d", *(ptr + i * Cols))
      
    }
    printf("\n");
    return 0;
  }
}