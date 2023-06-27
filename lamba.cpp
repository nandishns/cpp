#include <iostream>
#include <vector>
#include <algorithm>


/*template
[capture-list](parameter-list) -> return-type {
    Function body
}*/


int main() {
    // Example 1: Simple lambda function
    auto add = [](int a, int b) {
        return a + b;
    };

    int result = add(3, 4);
    std::cout << "Addition result: " << result << std::endl;

    // Example 2: Lambda function with capture list
    int factor = 2;
    auto multiply = [factor](int num) {
        return num * factor;
    };

    result = multiply(5);
    std::cout << "Multiplication result: " << result << std::endl;

    // Example 3: Lambda function as argument to algorithm function
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = 0;
    std::for_each(numbers.begin(), numbers.end(), [&sum](int num) {
        sum += num;
    });
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
