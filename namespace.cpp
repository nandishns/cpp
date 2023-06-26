// first class
// tut on namespace, nested namespace, class in a namespace, fun in namespace,scopes of namespace

#include <iostream>
using namespace std;

// namespace first
// {
//     int a=2;
// }
// namespace second{
//     int a= 3;
// }
//  namespace first{
//    class demo{
//     public:
//      void display()
//     {
//         cout<<"im in first namespace"<<endl;
//     }
//    };
//  }
//  namespace second
//  {
//     void display();
//  } // namespace second
//  void second::display()
// {
//     cout<<"Im in second namespace"<<endl;
// }

// void display(){
//    cout<<"Im in global namespace"<<endl;
// }
// namespace ns
// {
//   int a = 2;
// } // namespace ns
// namespace ns
// {
//   void display(){
//     cout<<"a="<<a<<endl;
//   }
// } // namespace ns
namespace outer
{
  int a[] = {1, 2, 3};
  int n = sizeof(a) / sizeof(a[0]);
  namespace inner
  {
    void display()
    {

      cout << "im in display" << endl;
      for (int i = 0; i < n; i++)
      {
        cout << a[i] << " ";
      }
      cout << endl;
    }
  }
  void print()
  {
    cout << "im in outer namespace" << endl;
    inner::display();
  }
} // namespace outer
namespace inner
{
  void display()
  {
    cout << "hey man" << endl;
  }

} // namespace inner

int main()
{
  // outer::print();
  // outer::inner::display();
  inner::display();
}
