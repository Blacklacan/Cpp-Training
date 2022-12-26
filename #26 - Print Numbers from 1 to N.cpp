#include <iostream>

using namespace std;


int ReadN() {
    cout << "Enter the number N: " << '\n';
    int N;
    cin >> N;
    return N;

}

int ReadA() {
    cout << "Enter the number you want to start at: " << '\n';
    int A;
    cin >> A;
    return A;
}


void PrintFromA_To_N_usingFor(int A, int B) {
    
    for (int i = A; i <= B; i++) {
        cout << i << endl;
    }

}


int main() {

    int A = ReadA();
    int N = ReadN();




    PrintFromA_To_N_usingFor(A, N);

    return 0;
}