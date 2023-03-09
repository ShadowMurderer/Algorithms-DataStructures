#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s = "abc";
    string s2;
    s2 = "def";

    string *sp = new string;
    *sp = "mno";
    cout << *sp << endl;

    vector<string> v; /// Creating a 2D vector string
    v.push_back(s);   /// Pushing values to it
    v.push_back("hello");
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;           /// Printing the vector string
        sort(v[i].begin(), v[i].end()); /// Sorts vector values
        cout << v[i] << endl;
    }

    string s3;
    s3 = "abcabc";
    s3[0] = 'd';

    string s4 = "";
    s4 += s3 + s2 + "hello world";
    cout << s3 << " " << s2 << endl;
    cout << s4 << endl;
    cout << s4.size() << endl; /// Prints length
    cout << s4.length() << endl;

    cout << s4.substr(3) << endl; /// Prints string from a specified index

    cout << s4.substr(5, 5) << endl; /// Prints specifed number of indexes from a specified index
    string s5 = s4.substr(5, 5);
    cout << s5 << endl;
    cout << s4.find("abc") << endl; /// Finds certain values in a string

    int a = 123;
    string s6 = to_string(a); /// Transforms int into strings
    cout << s6 << endl;
    s6[1] = '4';
    cout << s6 << endl;

    s6.push_back('5');    /// Adds a new value to the end of a string
    a = atoi(s6.c_str()); /// Transforms strings into int
    cout << a << endl;

    return 0;
}