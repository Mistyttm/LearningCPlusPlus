#include <iostream>
#include <string>

using namespace std;

int main(){

    string name;
    cout << "Enter your Name: ";
    getline(cin, name);

    cout << "Hello " << name << endl;

    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "You are " << age << " years old." << endl;

    return 0;
}