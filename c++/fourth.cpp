#include<iostream>
using namespace std;
#define MAX 100



int main(){
	int i, j, n;
	int temp;
	int arr[MAX];
	cout << "The number of array elements you want to sort : ";
    cin >> n;

    if(n < 0 || n > MAX){
        cout << "Input valid range!!" << endl;
        return -1;
    }

    for(i = 0; i < 5; i++){
        cout << "Enter the element " << i + 1 << " = ";
        cin >> arr[i];
    }
	cout << "Unsorted array : " << endl;
	for(i = 0; i < 5; i++){
		cout << arr[i] << "\t";
        cout << endl;
    }
    for(i = 0; i < 5; i++){
        for(j = i+1; j < 5; j++){
            if(arr[j] < arr[i]){
                temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
                }
            }
		}
    cout << "Sorted elements : " << endl;
    for(i = 0; i < 5; i++){
        cout << arr[i] << "\t";
        cout << endl;
	}
return 0;
}