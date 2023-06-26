#include <iostream>
#include <string>

using namespace std;

template <typename T>
void print(const T& value) {
    cout << value << endl;
}

int main() {
    const string message = "Something went wrong. Please try again."; // read-only string
    const int a = 10;
    const int* p = &a;

    print(message);
    print(to_string(a)); // Convert 'a' to string before passing it to the print function
print(p);
    return 0;
}
