
#include "Matrix.h"
int main() {
    setlocale(LC_ALL, "RU");
    int size;
    cout << "размер:"; cin >> size;
    cout << endl;
    Matrix Matrix_1(size, size);
    cout << "введите матрицу" << endl;
    Matrix_1.set_Matrix_2();
    //Matrix_1.create_Matrix();
    cout << "матрица" << endl;
    Matrix_1.print_Matrix();
    Matrix b(3, 1);
    b.set_Matrix_2();
    cout <<endl<< "матрица b " << endl;
    b.print_Matrix();
    float det_mat_1 = Matrix_1.Determinant();
    cout << " Определитель " << det_mat_1 <<endl;
    cout << "союзная матрица: " << endl;
    //Matrix union_1(size, size);
    Matrix union_1 = Matrix_1;
    union_1.union_Matrix();
    union_1.print_Matrix();
    Matrix trans = union_1;
    trans.Transposition_Matrix();
    trans.print_Matrix();
    Matrix inverse = trans;
    inverse.inverse_Matrix(det_mat_1);
    inverse.print_Matrix();
    //Matrix solution_x = trans;
    inverse.solution_x(b);
    b.print_Matrix();
    //b.inverse_Matrix(det_mat_1);
   /// b.print_Matrix();
    
}