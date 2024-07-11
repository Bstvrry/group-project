#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int x = rand() % 100;
    double y = (double)rand() / RAND_MAX;
    char z = 'a' + rand() % 26;
    string s = "Hello, ";
    s += "world!";
    cout << "Random value: " << x << endl;
    cout << "Random float: " << y << endl;
    cout << "Random character: " << z << endl;
    cout << s << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bool b = true;
    if (b) {
        cout << "The answer is yes." << endl;
    } else {
        cout << "The answer is no." << endl;
    }

    return 0;
}
