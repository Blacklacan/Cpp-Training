#include <iostream>

using namespace std;

int ReadN() {
    cout << "enter N: \n";
    int N;
    cin >> N;
    return N;
}



void Factorial_of_N(int N) {
    int mlty = 1;
    for (int counter = 1; counter <= N; counter++)
    {
        mlty *= counter;
    }
    cout << mlty;
}

int main() {

    int N = ReadN();
    Factorial_of_N(N);
    return 0;
}