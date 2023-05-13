#include <iostream>
using namespace std;
#define MAX 100

template <class X> void sort(X *arr){
X temp;
int i, j;

for(i = 0; i < 5; i++){
    for(j = i+1; j < 5; j++){
        if(arr[j] < arr[i]){
            temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
            }
        }
	}
}

int main()
{
    int i, j, n;
    int temp;
    int arr[MAX];

    cout << "For integer..." << endl;

    cout << "The number of elements in the array are : ";
    cin >> n;

  int iarr[MAX];
  double darr[MAX];

  if(n < 0 || n > MAX){
    cout << "Input valid range!!" << endl;
    return -1;
  }

  for(i = 0; i < n; i++){
    cout << "Enter the element " << i+1 << " = ";
    cin >> iarr[i];
  }

  cout << "Here is unsorted integer array: ";
  for(int i=0;  i<n; i++)
    cout << iarr[i] << ' ';
  cout << endl;

  sort(iarr);

  cout << "Here is sorted integer array: ";
  for(int i=0;  i<n; i++)
    cout << iarr[i] << ' ';
  cout << endl;

  cout << "For double..." << endl;

  cout << "The number of elements in the array are : ";
  cin >> n;

  for(i = 0; i < n; i++){
    cout << "Enter the element " << i+1 << " = ";
    cin >> darr[i];
  }

  cout << "Here is unsorted double array: ";
  for(int i=0;  i<n; i++)
    cout << darr[i] << ' ';
  cout << endl;

  sort(darr);

  cout << "Here is sorted double array: ";
  for(int i=0;  i<n; i++)
    cout << darr[i] << ' ';
  cout << endl;

  return 0;
}