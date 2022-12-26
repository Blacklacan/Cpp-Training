#include <iostream>

using namespace std;

int ReadN() {
    cout << "enter N: \n";
    int N;
    cin >> N;
    return N;
}
int ReadM() {
    cout << "enter M: \n";
    int M;
    cin >> M;
    return M;
}


void Factorial_of_N(int N,int M) {

    for (int counter = 1; counter <= M; counter += 1)
    {
        N *= N;
    }
    cout << N;
}

int main() {

    int N = ReadN();
    int M = ReadM();
    Power_of_NtoM(N,M);
    return 0;
}