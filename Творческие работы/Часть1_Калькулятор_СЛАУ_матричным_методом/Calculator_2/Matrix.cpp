#include"Matrix.h"
using namespace System;
using namespace System::Windows::Forms;
Matrix::Matrix() {
    size_Matrix_n = 0;
    size_Matrix_m = 0;
    matrix = new float* [size_Matrix_n];
    for (int i = 0; i < size_Matrix_n; i++) {
        matrix[i] = new float[size_Matrix_m];
    }
}
Matrix::Matrix(int size_matrix_N, int size_matrix_M) {
    size_Matrix_n = size_matrix_N;
    size_Matrix_m = size_matrix_M;
    matrix = new float* [size_Matrix_n];
    for (int i = 0; i < size_Matrix_n; i++) {
        matrix[i] = new float[size_Matrix_m];
    }

}
Matrix::Matrix(int size_matrix_N, int size_matrix_M, float** Matrix) {
    size_Matrix_n = size_matrix_N;
    size_Matrix_m = size_matrix_M;
    matrix = new float* [size_Matrix_n];
    for (int i = 0; i < size_Matrix_n; i++) {
        matrix[i] = new float[size_Matrix_m];
    }
    for (int i = 0; i < size_Matrix_n; i++) {
        for (int j = 0; j < size_Matrix_m; j++) {
            matrix[i][j] = Matrix[i][j];
        }
    }
}
Matrix::Matrix(const Matrix& to_copy) {
    this->size_Matrix_n = to_copy.size_Matrix_n;
    this->size_Matrix_m = to_copy.size_Matrix_m;
    this->matrix = to_copy.matrix;
}

Matrix::~Matrix() {
    for (int i = 0; i < size_Matrix_n; i++) {
        delete[] matrix[i];
    }
    delete[]matrix;
}
int Matrix::get_size_Matrix_n() {
    return size_Matrix_n;
}
int Matrix::get_size_Matrix_m() {
    return size_Matrix_m;
}
float** Matrix::get_Matrix() {
    return matrix;
}
void Matrix::set_Matrix(float** Matrix) {
    for (int i = 0; i < size_Matrix_n; i++) {
        for (int j = 0; j < size_Matrix_m; j++) {
            matrix[i][j] = Matrix[i][j];
        }
    }
}
void Matrix::set_Matrix_2() {
    for (int i = 0; i < this->size_Matrix_n; i++) {
        for (int j = 0; j < this->size_Matrix_m; j++) {
            //cin >> this->matrix[i][j];
        }
    }
}
void Matrix::set_size_Matrix(int size_matrix_N, int size_matrix_M) {
    size_Matrix_n = size_matrix_N;
    size_Matrix_m = size_matrix_M;
    matrix = new float* [size_Matrix_n];
    for (int i = 0; i < size_Matrix_n; i++) {
        matrix[i] = new float[size_Matrix_m];
    }

    for (int i = 0; i < size_Matrix_n; i++) {
        for (int j = 0; j < size_Matrix_m; j++) {
            matrix[i][j] = 0;
        }

    }
}
void Matrix::create_Matrix() {
    srand(time(NULL));
    for (int i = 0; i < size_Matrix_n; i++) {
        for (int j = 0; j < size_Matrix_m; j++) {
            matrix[i][j] = rand() % 10;
        }

    }
}
void Matrix::print_Matrix() {

    for (int i = 0; i < size_Matrix_n; i++) {
        for (int j = 0; j < size_Matrix_m; j++) {
           // cout << matrix[i][j] << " ";
        }
        //cout << endl;

    }
}

void Matrix::Minor(Matrix* temp_matrix, int indRow, int indCol) {
    int ki = 0;
    for (int i = 0; i < this->size_Matrix_n; i++) {
        if (i != indRow) {
            for (int j = 0, kj = 0; j < this->size_Matrix_m; j++) {
                if (j != indCol) {
                    temp_matrix->matrix[ki][kj] = this->matrix[i][j];
                    kj++;
                }
            }
            ki++;
        }
    }
}
float Matrix::Determinant() {
    float temp = 0;   
    int k = 1;      
    if (this->size_Matrix_n < 1) {
        MessageBox::Show("Не верный размер матрицы!", "Ошибка!"); 
        return 0;
    }
    else if (this->size_Matrix_n == 1)
        temp = matrix[0][0];
    else if (this->size_Matrix_n == 2)
        temp = this->matrix[0][0] * this->matrix[1][1] - this->matrix[1][0] * this->matrix[0][1];
    else {
        for (int i = 0; i < this->size_Matrix_n; i++) {
            int m = this->size_Matrix_n - 1;
            Matrix temp_matrix(m, m);
            this->Minor(&temp_matrix, 0, i);
            temp = temp + k * matrix[0][i] * temp_matrix.Determinant();
            k = -k;
        }
    }
    return temp;
}
void Matrix::union_Matrix() {
    Matrix union_matrix(this->size_Matrix_n, this->size_Matrix_m);
    float temp = 0;
    for (int i = 0; i < this->size_Matrix_n; i++) {
        for (int j = 0, kj = 0; j < this->size_Matrix_m; j++) {
            int m = this->size_Matrix_n - 1;
            Matrix temp_matrix(m, m);
            this->Minor(&temp_matrix, i, j);
            temp = temp_matrix.Determinant() * pow(-1, i + j);
            union_matrix.matrix[i][j] = temp;
        }
    }
    this->set_Matrix(union_matrix.matrix);
}
void Matrix::Transposition_Matrix() {
    Matrix transposition_matrix(this->size_Matrix_n, this->size_Matrix_m);
    for (int i = 0; i < this->size_Matrix_n; i++) {
        for (int j = 0; j < this->size_Matrix_m; j++) {
            transposition_matrix.matrix[j][i] = this->matrix[i][j];
        }
    }
    this->set_Matrix(transposition_matrix.matrix);
}
void Matrix::inverse_Matrix(float det_matrix) {
    float det = det_matrix;
    Matrix inverse_matrix(this->size_Matrix_n, this->size_Matrix_m);
    for (int i = 0; i < this->size_Matrix_n; i++) {
        for (int j = 0; j < this->size_Matrix_n; j++) {
            inverse_matrix.matrix[i][j] = (this->matrix[i][j] / det);
        }
    }
    this->set_Matrix(inverse_matrix.matrix);
}
void Matrix::solution_x(Matrix& x) {
    float result = 0;
    Matrix solution_matr(this->size_Matrix_n, x.size_Matrix_m);
    for (int i = 0; i < this->size_Matrix_n; i++) {
        for (int j = 0; j < this->size_Matrix_m; j++) {
            result += this->matrix[i][j] * x.matrix[j][0];
        }
        solution_matr.matrix[i][0] = result;
        result = 0;
    }
    x.set_Matrix(solution_matr.matrix);
}
void Matrix::Reading_matrix(std::string filename) {
    std::ifstream reading(filename);
    if (reading) {
        for (int i = 0; i < size_Matrix_n; i++) {
            for (int j = 0; j < size_Matrix_m; j++) {
                reading >> matrix[i][j];
            }

        }
    }
    else {
        MessageBox::Show("Ошибка открытия файла!", "Внимание!");
    }

    reading.close();

}
