//
// Created by pda on 22.03.19.
//
#include <iostream>


#include "sort.h"

using namespace std;

void print(int *arr, unsigned int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void ShellSort::sorting(int *A, unsigned int n) {

    int eq = 0;
    int sw = 0;

    int i, j, d;

    d = n;
    d = d / 2;
    while (d > 0) {
        for (i = 0; i < n - d; i++) {
            j = i;
            eq++;
            while (j >= 0 && A[j] > A[j + d]) {
                swap(A[j], A[j + d]);
                sw++;
                eq++;
                j--;
            }
        }
        d = d / 2;
    }

}

void Double_track_inserts::sorting(int *arr, unsigned int num) {

    int eq = 0;
    int insert = 0;
    int shift = 0;

    int *x;
    int i, j, t;
    int left = num - 1;
    int right = num - 1;

    x = new int[2 * num - 1];
    x[num - 1] = arr[0];

    for (i = 1; i < num; i++) {
        t = arr[i];
        eq++;
        if (t >= arr[0]) {
            eq++;
            for (j = right; j >= 0 && t < x[j]; j--) {
                eq++;
                x[j + 1] = x[j];
                shift++;
                insert++;
            }

            x[j + 1] = t;
            insert++;
            right++;
        } else {
            eq++;

            int fake = 2 * num - 1;

            for (j = left; j <= fake && t > x[j]; j++) {
                eq++;
                x[j - 1] = x[j];
                insert++;
                shift++;
            }
            x[j - 1] = t;
            insert++;
            left--;

        }
    }
    for (j = left; j < left + num; j++) {
        arr[j - left] = x[j];
    }
    delete[] x;

}
