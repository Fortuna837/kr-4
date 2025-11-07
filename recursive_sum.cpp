#include <iostream>
#include <vector>
using namespace std;

int array_sum(vector<int>& arr, int index = 0) {
    if (index == arr.size()) {
        return 0;
    }
    return arr[index] + array_sum(arr, index + 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "Сумма массива = " << array_sum(arr) << endl;
    return 0;
}
