#include <iostream>

using namespace std;

// cin 标准输入流
// cout 标准输出流

int main()
{
    
    cout << "Output sentence"; // prints Output sentence on screen
    cout << 120;               // prints number 120 on screen
    // cout << x;                 // prints the value x on screen

    // 多个插入操作
    cout << "\nThis " << " is a " << "single C++ statement";

    // 插入换行符
    cout << "First sentence.\n";
    cout << "Second sentence. \nThird sentence.\n";

    // standard input (cin)
    int age;
    cin >> age;
    cout << "age: " << age << endl;

    int i;
    cout << "Please enter an integer value: ";
    cin >> i;
    cout << "The value you entered is " << i;
    cout << " and its double is " << i*2 << ".\n";

    int a, b;
    cin >> a >> b;
    cout << "a: " << a << " b: " << b << endl;


    return 0;
}
