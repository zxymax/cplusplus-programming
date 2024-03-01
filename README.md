# C++ Programming

[01.C++HelloWorld.cpp](./01.C++HelloWorld.cpp)
```c++
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World" << endl;

    // without using namespace std;
    std::cout << "Hello C++" << std::endl;

    return 0;
}
```

[02.basic_io.cpp](./02.basic_io.cpp)
```c++

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
```

[03.getline.cpp](./03.getline.cpp)
```c++
#include <iostream>

using namespace std;

int main()
{
    // cin with strings
    string mystr;
    cout << "What's your name? ";

    // 获取整行 一个名为getline函数 该函数将流(cin)作为第一个参数 并将字符串变量作为第二个参数
    getline(cin, mystr);
    cout << "Hello " << mystr << ".\n";
    cou << "What's your favorite team? ";
    getline(cin, mystr);
    cout << "I like " << mystr << " too!\n";

    return 0;
}
```
