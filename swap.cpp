#include<iostream>
using namespace std;

template <typename T,typename R>
void Swap( T &num1,R &num2)
{

    int temp ;
temp = num1;
num1 = num2;
num2 = temp;
    cout <<"Swapped Number " <<num1<<" "<<num2<< endl;
}

int main() {
int num1,num2;
cin>>num1>>num2;

Swap(num1,num2);
return 0;
}