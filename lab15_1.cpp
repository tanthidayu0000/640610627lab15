#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
T temp;
for (int i=0; i<N-1; i++)
 {
  cout << "Pass " << i+1 << ":";
  for (int j=i; j>-1; j--)
  {
   temp = d[j+1];
   if (temp > d[j])
   {
    d[j+1] = d[j];
    d[j] = temp;
   }
  }
  for (int x=0; x<N; x++)
  {
   cout << d[x] << " ";
  }
     cout << "\n";
 }
}

int main(){
 int a[10] = {12,25,30,44,2,0,4,7,55,25};
 cout << "Input Array:";
 for(int i = 0; i < 10; i++) cout << a[i] << " ";
 cout << "\n\n";
 
 insertionSort(a,10);
 
 cout << "\nSorted Array:";
 for(int i = 0; i < 10; i++) cout << a[i] << " "; 
}