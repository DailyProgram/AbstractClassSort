#include <iostream>
#include <cstdlib>
#include <time.h>

#include "src/sort.h"

using namespace std;

int main() {
    Sort *Mysort = new Double_track_inserts();
    Sort *Mysort_1 = new ShellSort();

    int *vector = new int[10];

    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        vector[i] = rand() % 20;
        cout << vector[i] << " ";
    }
    cout << endl;

    Mysort->sorting(vector, 10);

    print(vector, 10);

    cout << endl;

    for (int i = 0; i < 10; i++) {
        vector[i] = rand() % 20;
        cout << vector[i] << " ";
    }

    Mysort_1->sorting(vector, 10);

    cout << endl;
    print(vector, 10);

    delete[] vector;

    return 0;
}