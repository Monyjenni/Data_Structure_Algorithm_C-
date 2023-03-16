#hinclude<iostream>
using namespace std;
void main (int i, int j, temp= 0 ){
  int arr_size=4;
  int array= {10,2,0,14};
  for(i=0; i<arr_size-1 ; i++){
    for(j=0; i<)
  }
}
int main ()
{
  int i, j,temp,pass=0;
  int arr_size =4;
  int arry = {10,2,0,14};
   for(i = 0; i<arr_size-1; i++) {
      cout <<a[i]<<"\t";\
   }
cout<<endl;
for(i = 0; i<4; i++) {
   for(j = i+1; j<10; j++)
   {
      if(a[j] > a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<10; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
return 0;
}
