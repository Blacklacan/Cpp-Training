#include <iostream>

using namespace std;

int ReadN() {
    cout << "enter N: \n";
    int N;
    cin >> N;
    return N;
}

void Factorial_of_N(int N) {
    int counter = 1;
    int mlty = 1;
    if (N == 0)
    {
        cout << mlty;
    }
    while (counter <= N)
    {
     mlty *= counter;
     counter += 1;
    }
    cout << mlty;
}

int main() {

    int N = ReadN();
    Factorial_of_N(N);
    return 0;
}