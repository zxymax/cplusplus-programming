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
    cout << "What's your favorite team? ";
    getline(cin, mystr);
    cout << "I like " << mystr << " too!\n";

    return 0;
}
