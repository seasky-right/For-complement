/*#include <iostream>
using namespace std;


void Swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void BubbleSort(int * arr, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				Swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main() {
	int arr[10] = { 5,2,1,4,3,9,6,7,8,0 };
	cout << "排序前的数组为：" << endl;
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	BubbleSort(arr, size);
	cout << "\n排序后的数组为：" << endl;
	for (int l = 0; l < size; l++) {
		cout << arr[l] << " ";
	}
	system("pause");
	return 0;
}
*/