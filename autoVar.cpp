#include<iostream>
using namespace std;
void print(auto printMessage){
    cout<<printMessage<<endl;
}

int main() {
auto a =2;
print(typeid(a).name());
return 0;
}