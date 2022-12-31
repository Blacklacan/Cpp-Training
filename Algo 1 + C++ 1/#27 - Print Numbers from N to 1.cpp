#include <iostream>

using namespace std;


int ReadN() {
    cout << "Enter the number you want to start at: " << '\n';
    int N;
    cin >> N;
    return N;

}

int ReadA() {
    cout << "Enter the number you want to stop at: " << '\n';
    int A;
    cin >> A;
    return A;
}


void PrintFromA_To_N_usingFor(int A, int N) {

    for (int i = N; i >= A; i = i - 1) {
        cout << i << endl;
    }

}


int main() {

    int A = ReadA();
    int N = ReadN();




    PrintFromA_To_N_usingFor(A, N);

    return 0;
}