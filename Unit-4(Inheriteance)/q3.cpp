#include <iostream>
using namespace std;

class welcome {
public:
    void display() {
        cout << "Welcome!! ";
    }
};

class hello : public welcome {
private:
    string name;

public:
    void setname(const string &n) {
        name = n;
    }

    void greet() {
        cout << "Hi, " << name << endl;
    }
};

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;

    hello helloobj;
    helloobj.setname(name);

    helloobj.display();
    helloobj.greet();

    return 0;
}
