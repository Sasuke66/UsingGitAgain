#include <iostream>
using namespace std;
#define MAX 100

template <class X> void bubble(X *items,int count)
{
  X t;

  for(int a=1; a<count; a++)
    for(int b=count-1; b>=a; b--)
      if(items[b-1] > items[b]) {
        t = items[b-1];
        items[b-1] = items[b];
        items[b] = t;
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

  for(i = 0; i < 5; i++){
        for(j = i+1; j < 5; j++){
            if(iarr[j] < iarr[i]){
                temp = iarr[i];
				iarr[i] = iarr[j];
				iarr[j] = temp;
                }
            }
		}
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

  for(i = 0; i < 5; i++){
        for(j = i+1; j < 5; j++){
            if(darr[j] < darr[i]){
                temp = darr[i];
				darr[i] = darr[j];
				darr[j] = temp;
                }
            }
		}

  cout << "Here is sorted double array: ";
  for(int i=0;  i<n; i++)
    cout << darr[i] << ' ';
  cout << endl;

  return 0;
}