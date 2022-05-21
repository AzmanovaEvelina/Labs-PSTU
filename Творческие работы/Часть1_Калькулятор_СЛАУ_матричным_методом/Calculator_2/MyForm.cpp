#include "MyForm.h"
#include"Matrix.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array <String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Calculator2::MyForm form;
	Application::Run(% form);
}

float det_matrix_1;
int matrix_size_n, matrix_size_m;
Matrix matrix_1, matrix_b,union_matrix, transposition_matrix,inverse_matrix, matrix_x;

System::Void Calculator2::MyForm::обПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Калькулятор находит решение  системы n линейных уравнений с n неизвестными методом обратной матрицы ", "Справка");
	return System::Void();
}
System::Void Calculator2::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}
System::Void Calculator2::MyForm::button1_set_matr_Click(System::Object^ sender, System::EventArgs^ e)
{
	matrix_size_n = Convert::ToInt32(numericUpDown1_size_n_m->Value);
	matrix_size_m = Convert::ToInt32(numericUpDown1_size_n_m->Value);

	matrix_1.set_size_Matrix(matrix_size_n, matrix_size_m);

	dataGridView1_matr_1->RowCount = matrix_size_n;
	dataGridView1_matr_1->ColumnCount = matrix_size_m;

	Show_Matrix_1();

	dataGridView1_matr_1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1_matr_1->AutoResizeColumns();

	return System::Void();
}
System::Void Calculator2::MyForm::button1_solution_Click(System::Object^ sender, System::EventArgs^ e)
{
	union_matrix = matrix_1;

	matrix_size_n = Convert::ToInt32(numericUpDown1_size_n_m->Value);
	matrix_size_m = Convert::ToInt32(numericUpDown1_size_n_m->Value);

	dataGridView3_matr_trans->RowCount = matrix_size_n;
	dataGridView3_matr_trans->ColumnCount = matrix_size_m;

	union_matrix.union_Matrix();

	Show_union_transposition_Matrix();

	dataGridView3_matr_trans->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView3_matr_trans->AutoResizeColumns();


	dataGridView1_inverse_matr->RowCount = matrix_size_n;
	dataGridView1_inverse_matr->ColumnCount = matrix_size_m;

	textBox1_det_for_inverse->Text = Convert::ToString(det_matrix_1);

	transposition_matrix = union_matrix;
	transposition_matrix.Transposition_Matrix();

	Show_invers_Matrix();

	dataGridView1_inverse_matr->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1_inverse_matr->AutoResizeColumns();

	dataGridView1_b_for_solution->RowCount = matrix_size_n;
	dataGridView1_b_for_solution->ColumnCount = 1;

	Show_Matrix_b_for_solution();

	dataGridView1_b_for_solution->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1_b_for_solution->AutoResizeColumns();

	inverse_matrix = transposition_matrix;
	inverse_matrix.inverse_Matrix(det_matrix_1);
	matrix_x = matrix_b;
	inverse_matrix.solution_x(matrix_x);

	dataGridView1_solution_x->RowCount = matrix_size_n;
	dataGridView1_solution_x->ColumnCount = 1;

	Show_Matrix_for_solution();

	dataGridView1_solution_x->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1_solution_x->AutoResizeColumns();


	return System::Void();
}

System::Void Calculator2::MyForm::button1_set_b_Click(System::Object^ sender, System::EventArgs^ e)
{
	matrix_size_n = Convert::ToInt32(numericUpDown1_size_n_m->Value);
	matrix_size_m = 1;

	matrix_b.set_size_Matrix(matrix_size_n, matrix_size_m);

	dataGridView2_matr_b->RowCount = matrix_size_n;
	dataGridView2_matr_b->ColumnCount = matrix_size_m;

	Show_Matrix_b();

	dataGridView2_matr_b->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView2_matr_b->AutoResizeColumns();

	return System::Void();
}

System::Void Calculator2::MyForm::button1_det_Click(System::Object^ sender, System::EventArgs^ e)
{
	det_matrix_1 = matrix_1.Determinant();
	textBox1_det->Text = Convert::ToString(det_matrix_1);
	return System::Void();
}

System::Void Calculator2::MyForm::button1_solution_inverse_b_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
System::Void Calculator2::MyForm::button1_file_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox1_file->Text == " ") {
		MessageBox::Show("Введите название файла!", "Внимание!");
		return;
	}
	std::string filename;
	Convert_String_to_string(textBox1_file->Text, filename);

	matrix_size_n = Convert::ToInt32(numericUpDown1_size_n_m->Value);
	matrix_size_m = Convert::ToInt32(numericUpDown1_size_n_m->Value);

	matrix_1.set_size_Matrix(matrix_size_n, matrix_size_n);

	dataGridView1_matr_1->RowCount = matrix_size_n;
	dataGridView1_matr_1->ColumnCount = matrix_size_m;

	matrix_1.Reading_matrix(filename);
	Show_Matrix_1();

	dataGridView1_matr_1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1_matr_1->AutoResizeColumns();

	return System::Void();
}
System::Void Calculator2::MyForm::button1_file_b_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox1_b->Text == " ") {
		MessageBox::Show("Введите название файла!", "Внимание!");
		return;
	}
	std::string filename;
	Convert_String_to_string(textBox1_b->Text, filename);

	matrix_size_n = Convert::ToInt32(numericUpDown1_size_n_m->Value);
	matrix_size_m = 1;

	matrix_b.set_size_Matrix(matrix_size_n, matrix_size_m);

	dataGridView2_matr_b->RowCount = matrix_size_n;
	dataGridView2_matr_b->ColumnCount = matrix_size_m;

	matrix_b.Reading_matrix(filename);
	Show_Matrix_b();

	dataGridView2_matr_b->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView2_matr_b->AutoResizeColumns();

	return System::Void();

}
void Calculator2::MyForm::Show_Matrix_1() {
	for (int i = 0; i < matrix_1.get_size_Matrix_n(); i++) {
		for (int j = 0; j < matrix_1.get_size_Matrix_m(); j++) {
			dataGridView1_matr_1->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
			dataGridView1_matr_1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			dataGridView1_matr_1->Rows[i]->Cells[j]->Value = matrix_1.get_Matrix()[i][j];
		}
	}
}

void Calculator2::MyForm::Show_Matrix_b()
{
	for (int i = 0; i < matrix_b.get_size_Matrix_n(); i++) {
		dataGridView2_matr_b->Columns[0]->HeaderCell->Value = Convert::ToString(1);
		dataGridView2_matr_b->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
		dataGridView2_matr_b->Rows[i]->Cells[0]->Value = matrix_b.get_Matrix()[i][0];
	}
	
}

void Calculator2::MyForm::Show_union_transposition_Matrix()
{
	for (int i = 0; i < union_matrix.get_size_Matrix_n(); i++) {
		for (int j = 0; j < union_matrix.get_size_Matrix_m(); j++) {
			dataGridView3_matr_trans->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
			dataGridView3_matr_trans->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			dataGridView3_matr_trans->Rows[i]->Cells[j]->Value = union_matrix.get_Matrix()[i][j];
		}
	}
	
}

void Calculator2::MyForm::Show_invers_Matrix()
{
	for (int i = 0; i < transposition_matrix.get_size_Matrix_n(); i++) {
		for (int j = 0; j < transposition_matrix.get_size_Matrix_m(); j++) {
			dataGridView1_inverse_matr->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
			dataGridView1_inverse_matr->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			dataGridView1_inverse_matr->Rows[i]->Cells[j]->Value = transposition_matrix.get_Matrix()[i][j];
		}
	}
}
void Calculator2::MyForm::Show_Matrix_b_for_solution() {

	for (int i = 0; i < matrix_b.get_size_Matrix_n(); i++) {
		dataGridView1_b_for_solution->Columns[0]->HeaderCell->Value = Convert::ToString(1);
		dataGridView1_b_for_solution->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
		dataGridView1_b_for_solution->Rows[i]->Cells[0]->Value = matrix_b.get_Matrix()[i][0];
	}

}
void Calculator2::MyForm::Show_Matrix_for_solution()
{
	for (int i = 0; i < matrix_x.get_size_Matrix_n(); i++) {
		dataGridView1_solution_x->Columns[0]->HeaderCell->Value = Convert::ToString(1);
		dataGridView1_solution_x->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
		dataGridView1_solution_x->Rows[i]->Cells[0]->Value = matrix_x.get_Matrix()[i][0];
	}
}

