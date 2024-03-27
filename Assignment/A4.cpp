#include <iostream>
using namespace std;

int main() {
    int mat1[2][2], mat2[2][2], mat3[2][2], mat4[2][2], sum[2][2];

    cout << "Enter Elements of First Matrix: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cin >> mat1[i][j];
    }

    cout << "Enter Elements of Second Matrix: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cin >> mat2[i][j];
    }

    cout << "Enter Elements of Third Matrix: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cin >> mat3[i][j];
    }

    cout << "Enter Elements of Fourth Matrix: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cin >> mat4[i][j];
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j] + mat3[i][j] + mat4[i][j];
    }

    cout << "The sum of the four matrices is:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
