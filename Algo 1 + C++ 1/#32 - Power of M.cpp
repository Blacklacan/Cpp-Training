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


int Power_of_NtoM(int N, int M) {
    int P = 1;

    if (M == 0)
    {
        return 1;
    }

    for (int counter = 1; counter <= M; counter++)
     {
        P *= N;
     }
    return P;


}

int main() {

    int N = ReadN();
    int M = ReadM();
    cout << Power_of_NtoM(N, M);
    return 0;
}