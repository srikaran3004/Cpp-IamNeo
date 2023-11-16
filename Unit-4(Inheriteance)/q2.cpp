#include <iostream>
using namespace std;

class Parent {
protected:
    int num;

public:
    void setNum(int n) {
        num = n;
    }
};

class Child : public Parent {
public:
    void fun() {
        int k = 0, sum = 0;
        int a[10];
        int tempNum = num;

        // Extract individual digits and store them in the array
        while (tempNum != 0) {
            a[k++] = tempNum % 10;
            tempNum = tempNum / 10;
        }

        // Calculate the sum of pairs
        for (int i = 0; i < k - 1; i++) {
            for (int j = i + 1; j < k; j++) {
                sum += (a[i] + a[j]);
            }
        }

        cout << sum;
    }
};

int main() {
    Child c;
    int num;

    // Input
    cin >> num;
    c.setNum(num);

    // Call the fun method and print the result
    c.fun();

    return 0;
}
