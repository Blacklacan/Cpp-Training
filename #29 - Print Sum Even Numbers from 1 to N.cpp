#include <iostream>

using namespace std;

int ReadN() {
    cout << "enter N: \n";
    int N;
    cin >> N;
    return N;
}



//enum OddorEven {Odd=1, Even= 2};
//
//OddorEven ChechOddorEven(int Number) {
//    if (Number %2){  }
//}

void Sum_of_N(int N) {
    int sum = 0; 
    for (int counter = 1; counter <= N; counter +=1)
    {
        if (counter % 2 == 0)
        {
            sum += counter;
        }
    }
    cout << sum;
}

int main() {

    int N = ReadN();

    Sum_of_N(N);
    return 0;
}