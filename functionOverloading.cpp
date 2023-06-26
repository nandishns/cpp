//static polymorphism - decision made during compile time
//fun overloading is a static polymorphism
// #include<iostream>
// using namespace std;
// template <typename T>
// void print(const T& value) {
//     cout << value << endl;
// }
// double area(double side){
//     return side*side;
// }
// double area(double width,double height){
//     return width*height;
// }

// int main() {
// print(area(2));
// print(area(2,3));
// return 0;
// }


#include<iostream>
using namespace std;
template <typename T>
void print(const T& value) {
    cout << value << endl;
}
int sum(int a,int b){
   
    return a+b;
}
double sum(double a, double b){
    return a+b;
}

int main() {
 print(sum(1,2));

 print(sum(1.4,1.2222));
//  print(sum("s","d"));    -> no instance of overloaded function "sum" matches the argument list
return 0;
}


