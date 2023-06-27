#include <iostream>
#include <algorithm>
#include <initializer_list>

using namespace std;

template <typename T>
void print(const T &value)
{
    cout << value << endl;
}
int main() {
    int countEven = 0, countOdd = 0;
    int coutEven = 0, coutOdd = 0;
    initializer_list<int> arr = {1, 39, 34, 245, 329};

    countEven = count_if(arr.begin(), arr.end(), [](int i) {
        return i % 2 == 0;
    });
    countOdd = count_if(arr.begin(), arr.end(), [](int i) {
        return i % 2 != 0;
    });
count_if(arr.begin(),arr.end(),[&coutEven,&coutOdd](int i){ return i%2 !=0 ? coutOdd++ : coutEven++;});
    cout << "Count of even numbers: " << countEven << endl;
    cout << "Count of odd numbers: " << countOdd << endl;
    print(coutOdd); print(coutEven);

    return 0;
}
