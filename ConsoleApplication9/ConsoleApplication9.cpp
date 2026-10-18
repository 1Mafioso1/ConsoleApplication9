#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Завдання 1
//void fillArr(int* arr, int size) {
//    for (int i = 0; i < size; ++i) {
//        arr[i] = rand() % 100;
//    }
//}
//
//void printArr(int* arr, int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << ' ';
//    }
//    cout << '\n';
//}

//Завдання 2
//int* mergeArr(int* A, int M, int* B, int N) {
//    int* C = new int[M + N];
//
//    for (int i = 0; i < M; ++i) {
//        C[i] = A[i];
//    }
//
//    for (int i = 0; i < N; ++i) {
//        C[M + i] = B[i];
//    }
//
//    return C;
//}

//Завдання 3
//int* mergeUnique(int* A, int M, int* B, int N, int& size) {
//    int* C = new int[M + N];
//    size = 0;
//
//    for (int i = 0; i < M; ++i) {
//        bool found = false;
//
//        for (int j = 0; j < size; ++j) {
//            if (C[j] == A[i]) {
//                found = true;
//                break;
//            }
//        }
//
//        if (!found) {
//            C[size++] = A[i];
//        }
//    }
//
//    for (int i = 0; i < N; ++i) {
//        bool found = false;
//
//        for (int j = 0; j < size; ++j) {
//            if (C[j] == B[i]) {
//                found = true;
//                break;
//            }
//        }
//
//        if (!found) {
//            C[size++] = B[i];
//        }
//    }
//
//    return C;
//}

//Завдання 4
//int* removeNumbers(int* arr, int size, int choice, int& newSize) {
//    int* result = new int[size];
//    newSize = 0;
//
//    for (int i = 0; i < size; ++i) {
//        if ((choice == 1 && arr[i] % 2 == 0) ||
//            (choice == 2 && arr[i] % 2 != 0)) {
//            result[newSize++] = arr[i];
//        }
//    }
//
//    return result;
//}

int main() {
    //srand(time(0));

    ////Завдання 1
    //int size;
    //cin >> size;

    //int* arr = new int[size];
    //fillArr(arr, size);
    //printArr(arr, size);
    //delete[] arr;

    //Завдання 2
    //int M, N;
    //cin >> M >> N;

    //int* A = new int[M];
    //int* B = new int[N];

    //for (int i = 0; i < M; ++i) {
    //    cin >> A[i];
    //}

    //for (int i = 0; i < N; ++i) {
    //    cin >> B[i];
    //}

    //int* C = mergeArr(A, M, B, N);
    //printArr(C, M + N);

    //delete[] A;
    //delete[] B;
    //delete[] C;

    //Завдання 3
    //cin >> M >> N;

    //A = new int[M];
    //B = new int[N];

    //for (int i = 0; i < M; ++i) {
    //    cin >> A[i];
    //}

    //for (int i = 0; i < N; ++i) {
    //    cin >> B[i];
    //}

    //int uniqueSize;
    //C = mergeUnique(A, M, B, N, uniqueSize);
    //printArr(C, uniqueSize);

    //delete[] A;
    //delete[] B;
    //delete[] C;

    //Завдання 4
    //cin >> size;

    //arr = new int[size];

    //for (int i = 0; i < size; ++i) {
    //    cin >> arr[i];
    //}

    //int choice;
    //cin >> choice;

    //int newSize;
    //int* result = removeNumbers(arr, size, choice, newSize);
    //printArr(result, newSize);

    //delete[] arr;
    //delete[] result;

    //return 0;
}