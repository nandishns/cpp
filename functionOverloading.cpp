//static polymorphism 

#include<iostream>
using namespace std;
template <typename T>
void print(const T& value) {
    cout << value << endl;
}
double area(double side){
    return side*side;
}
double area(double width,double height){
    return width*height;
}

int main() {
print(area(2));
print(area(2,3));
return 0;
}