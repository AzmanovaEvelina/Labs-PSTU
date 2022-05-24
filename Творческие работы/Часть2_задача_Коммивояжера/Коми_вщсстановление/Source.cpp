#include <iostream>
#include <vector>
#include <queue>
#include <glut.h>
#include <sstream>

using namespace std;

template<class T>
class Graph
{
private:
    vector<int> vertex_List;
    vector<vector<T>> adjacency_matrix;
    int Size_of_matrix;
public:
    Graph();
    Graph(const int& Size_of_matrix);
    int get_Size_of_matrix() { return Size_of_matrix; }
    bool is_full() { return Size_of_matrix == vertex_List.size(); }
    bool is_empty() { return vertex_List.size() == 0; }
    void insert_vertex(const T& new_vertex);
    int get_vertex_index(const T& to_find);
    void insert_edge(const T& vertex_1, const T& vertex_2, int value = 1);
    void insert_edge_car();
    void set_size_Matrix(const int& size) { this->Size_of_matrix = size; }
    void insert_edge_helicopter();
    void insert_edge_scooter();
    int get_weight(const T& vertex_1, const T& vertex_2);
    int get_amount_edges();
    void DeleteVertex();
    void Print();
    void paint_graph();
    void paint_graph_solution();
    Graph& operator = (const Graph& graph) {
        this->vertex_List = graph.vertex_List;
        this->Size_of_matrix = graph.Size_of_matrix;
        this->adjacency_matrix = vector<vector<T>>(graph.Size_of_matrix, vector<T>(graph.Size_of_matrix));
        for (int i = 0; i < graph.Size_of_matrix; ++i)
        {
            for (int j = 0; j < graph.Size_of_matrix; ++j)
            {
                this->adjacency_matrix[i][j] = graph.adjacency_matrix[i][j];
            }
        }
        return *this;
    }
    friend Graph<int> Kommivoyazher(Graph<int>& graph, int*** matrix_solution, int** matrix_temp, int* solution);
};

int R;
int house_2;
int** matrix_temp;
int* solution;
int*** matrix_solution;

int win_1;
int win_2;

const int max_size = 10;

struct coordinat_vertex
{
    int x, y;
};
coordinat_vertex vertex_coord[10];

Graph<int> graph;
Graph<int> graph_2(7);
Graph<int> graph_solution(7);
vector<int> for_color;

void drawLine_color(int x0, int y0, int x1, int y1);
void display();


template<class T>
Graph<T>::Graph() {                                                                  // конструктор без параметров

    this->Size_of_matrix = 0;
    adjacency_matrix = vector<vector<T>>(max_size, vector<T>(max_size));
    for (int i = 0; i < this->Size_of_matrix; ++i)
    {
        for (int j = 0; j < this->Size_of_matrix; ++j)
        {
            if (i == j) {
                adjacency_matrix[i][j] = 10;
            }
            else {
                adjacency_matrix[i][j] = 0;
            }
        }
    }
}

template<class T>
Graph<T>::Graph(const int& Size_of_matrix)                                               // конструктор с параметрами
{
    this->Size_of_matrix = Size_of_matrix;
    adjacency_matrix = vector<vector<T>>(Size_of_matrix, vector<T>(Size_of_matrix));
    for (int i = 0; i < this->Size_of_matrix; ++i)
    {
        for (int j = 0; j < this->Size_of_matrix; ++j)
        {
            if (i == j) {
                adjacency_matrix[i][j] = 10;
            }
            else {
                adjacency_matrix[i][j] = 0;
            }
        }
    }
}

template<class T>
int Graph<T>::get_amount_edges()                                     // количество ребер графа
{
    if (is_empty()) return 0;
    int amount = 0;
    int size = vertex_List.size();
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (adjacency_matrix[i][j] != 0)
            {
                ++amount;
            }
        }
    }
    return amount;
}

template<class T>
int Graph<T>::get_weight(const T& vertex_1, const T& vertex_2)  // вес ребра между вершинами
{
    int index_vertex_1 = get_vertex_index(vertex_1);
    int index_vertex_2 = get_vertex_index(vertex_2);

    if (is_empty() || index_vertex_1 == -1 || index_vertex_2 == -1) {// выход если вершин нет совсем или нет одной из вершин
        cout << "Ошибка! Проверьте правильность ввода узлов графа!" << endl;
        return 0;
    }
    return adjacency_matrix[index_vertex_1][index_vertex_2];
}

template<class T>
int Graph<T>::get_vertex_index(const T& to_find) // получение индекса заданной вершины
{
    if (is_empty()) return -1;
    for (int i = 0; i < this->vertex_List.size(); i++) {
        if (this->vertex_List[i] == to_find) {
            return i;
        }
    }
    return -1;
}

template<class T>
void Graph<T>::insert_vertex(const T& new_vertex) // добавление вершины в вектор
{
    if (is_full())
    {
        cout << "Граф заполнен! Добавление новых вершин невозможно." << endl;
        return;
    }
    vertex_List.push_back(new_vertex);
}

template<class T>
void Graph<T>::DeleteVertex() {                       //  удаление вершины 
    int h = this->get_Size_of_matrix();
    this->vertex_List.pop_back();
    h--;
    this->set_size_Matrix(h);
    for (int i = 0; i < this->Size_of_matrix; ++i)
    {
        for (int j = 0; j < this->Size_of_matrix; ++j)
        {
            this->adjacency_matrix[i][j] = adjacency_matrix[i][j];
        }
    }
}

template<class T>
void Graph<T>::insert_edge(const T& vertex_1, const T& vertex_2, int value)   // вставка вершины
{
    if ((get_vertex_index(vertex_1) == -1 || get_vertex_index(vertex_2) == -1))
    {
        cout << "Ошибка! Не удается добавить ребро. " << endl;
        return;
    }

    int index_vertex_1 = get_vertex_index(vertex_1);
    int index_vertex_2 = get_vertex_index(vertex_2);

    if (adjacency_matrix[index_vertex_1][index_vertex_2] != 0)
    {
        cout << "Ребро между вершинами уже существует." << endl;
        return;
    }

    adjacency_matrix[index_vertex_1][index_vertex_2] = value;
}

template<class T>
void Graph<T>::insert_edge_car()                          // доп. возможность сократить путь между городами
{
    int from, to;
    cout << "Коммивояжер передвигается на АВТО из города "; cin >> from; cout << "  в город  "; cin >> to;
    if ((get_vertex_index(from) == -1 || get_vertex_index(to) == -1))
    {
        cout << "Ошибка! Не существует одного города или двух городов. " << endl;
        return;
    }

    int index_vertex_1 = get_vertex_index(from);
    int index_vertex_2 = get_vertex_index(to);

    adjacency_matrix[index_vertex_1][index_vertex_2] = adjacency_matrix[index_vertex_1][index_vertex_2] - 3;
    this->Print();
}

template<class T>
void Graph<T>::insert_edge_helicopter()                   // доп. возможность сократить путь между городами
{
    int from, to;
    cout << "Коммивояжер передвигается на ВЕРТОЛЕТЕ из города  "; cin >> from; cout << " в город "; cin >> to;
    if ((get_vertex_index(from) == -1 || get_vertex_index(to) == -1))
    {
        cout << "Ошибка! Не существует одного города или двух городов. " << endl;
        return;
    }

    int index_vertex_1 = get_vertex_index(from);
    int index_vertex_2 = get_vertex_index(to);

    adjacency_matrix[index_vertex_1][index_vertex_2] = adjacency_matrix[index_vertex_1][index_vertex_2] - 4;
    this->Print();
}

template<class T>
void Graph<T>::insert_edge_scooter()                                // доп. возможность сократить путь между городами
{
    int from, to;
    cout << "Коммивояжер передвигается на ЭЛЕКТРОСАМОКАТЕ из города"; cin >> from; cout << " в город  "; cin >> to;
    if ((get_vertex_index(from) == -1 || get_vertex_index(to) == -1))
    {
        cout << "Ошибка! Не существует одного города или двух городов. " << endl;
        return;
    }

    int index_vertex_1 = get_vertex_index(from);
    int index_vertex_2 = get_vertex_index(to);

    adjacency_matrix[index_vertex_1][index_vertex_2] = adjacency_matrix[index_vertex_1][index_vertex_2] - 1;
    this->Print();
}

template<class T>
void Graph<T>::Print()                              // вывод матрицы смежности
{
    if (!this->is_empty()) {
        cout << "Матрица смежности графа: " << endl;
        cout << "   ";
        for (int i = 0; i < vertex_List.size(); i++)
        {
            cout << vertex_List[i] << "  ";
        }
        cout << endl;
        for (int i = 0; i < this->vertex_List.size(); i++) {
            cout << this->vertex_List[i] << " ";
            for (int j = 0; j < this->vertex_List.size(); j++) {
                cout << " " << this->adjacency_matrix[i][j] << " ";
            }
            cout << endl;

        }
    }
    else {
        cout << "Граф не существует!  " << endl;

    }
}

Graph<int> Kommivoyazher(Graph<int>& graph, int*** matrix_solution, int** matrix_temp, int* solution) {

    int size = graph.get_Size_of_matrix();

    matrix_temp = new int* [size];

    solution = new int[size];

    matrix_solution = new int** [size];

    for (int i = 0; i <= size; i++)
    {
        matrix_temp[i] = new int[size];
    }

    for (int i = 0; i < size; i++)
    {
        matrix_solution[i] = new int* [size];
        for (int j = 0; j < size; j++)
        {
            if (graph.adjacency_matrix[i][j] == 0) {
                matrix_solution[i][j] = nullptr;
            }
            matrix_solution[i][j] = new int(graph.adjacency_matrix[i][j]);
        }
    }
    for (int l = 0; l < size; l++)    // редукция строк
    {
        for (int i = 0; i < size; i++)
        {
            int min_di = 100;
            for (int j = 0; j < size; j++)
                if (matrix_solution[i][j] && min_di > *matrix_solution[i][j])
                    min_di = *matrix_solution[i][j];
            for (int j = 0; j < size; j++)
                if (matrix_solution[i][j])
                    *matrix_solution[i][j] -= min_di;
        }
        for (int j = 0; j < size; j++)                     // редукция столбцов
        {
            int min_dj = 100;
            for (int i = 0; i < size; i++)
                if (matrix_solution[i][j] && min_dj > *matrix_solution[i][j])
                    min_dj = *matrix_solution[i][j];
            for (int i = 0; i < size; i++)
                if (matrix_solution[i][j])
                    *matrix_solution[i][j] -= min_dj;
        }

        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                matrix_temp[i][j] = 0;

        for (int i = 0; i < size; i++)              // оценка нулей
            for (int j = 0; j < size; j++)
            {
                if (matrix_solution[i][j] && !*matrix_solution[i][j])
                {
                    int min_str = 100;
                    int min_vertik = 100;

                    for (int l = 0; l < size; l++)
                        if (l != i && matrix_solution[l][j] && min_str > *matrix_solution[l][j])
                            min_str = *matrix_solution[l][j];

                    for (int l = 0; l < size; l++)
                        if (l != j && matrix_solution[i][l] && min_vertik > *matrix_solution[i][l])
                            min_vertik = *matrix_solution[i][l];

                    matrix_temp[i][j] = min_str + min_vertik;
                }
            }

        int max_weight = 0, max_i = 0, max_j = 0;            // сбор всего пути 
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                if (matrix_solution[i][j] && max_weight < matrix_temp[i][j])
                {
                    max_weight = matrix_temp[i][j];
                    max_i = i;
                    max_j = j;
                }
        solution[max_i] = max_j;

        for (int i = 0; i < size; i++)
            matrix_solution[i][max_j] = nullptr;

        for (int i = 0; i < size; i++)
            matrix_solution[max_i][i] = nullptr;

        matrix_solution[max_j][max_i] = nullptr;
    }
    //cout << "Îòðåçêè ïóòè ";
    int s = 0;
    for (int i = 0, j = 0; i < size; i++)
    {
        j = solution[i];
        //cout << i + 1 << " -> " << j + 1 << '\t';
        s += graph.adjacency_matrix[i][j];
    }
    cout << endl;
    cout << "Кратчайший путь:   ";
    int temp = 0;

    for (int l = 0; l < size;)
    {
        for (int i = 0, j = 0; i < size; i++)
        {
            if (temp == 0 || i + 1 == temp)
            {
                if (temp == 0) {
                    cout << i + 1;
                    for_color.push_back(i);
                }
                j = solution[i];
                temp = j + 1;
                if (temp > 0) {
                    cout << " -> " << temp;
                    for_color.push_back(temp - 1);
                }
                l++;
            }
        }
    }

    house_2 = s;
    cout << endl << "Время в пути: " << s<<" ч."<<endl;
    for (int i = 0; i < graph.Size_of_matrix; ++i)
    {
        for (int j = 0; j < graph.Size_of_matrix; ++j)
        {
            if (i != j) {
                graph_solution.adjacency_matrix[i][j] = graph.adjacency_matrix[i][j];
            }
            else {
                graph_solution.adjacency_matrix[i][j] = 10;
            }
        }
    }
    graph_solution.vertex_List = graph.vertex_List;           //отметка дороги в матрице смежности для визуализации на графе(ребра красного цвета)
    for (int i = 0; i < for_color.size() - 1; i++)
    {
        for (int j = i + 1; j < for_color.size() - 1; j += size - j + i)
        {
            graph_solution.adjacency_matrix[for_color[i]][for_color[j]] = -1;
        }
    }
    graph_solution.adjacency_matrix[for_color[for_color.size()-1]][for_color[0]] = -1;
    cout << endl;
    for_color.clear();
    return graph_solution;
}

template<class T>
Graph<T> create_graph(Graph<T>& graph)   // создание графа
{
    graph.set_size_Matrix(7);
    for (int i = 1; i < 8; i++) {
        graph.insert_vertex(i);
    }

    graph.insert_edge(1, 2, 6);
    graph.insert_edge(1, 3, 9);
    graph.insert_edge(1, 4, 1);
    graph.insert_edge(1, 5, 7);
    graph.insert_edge(1, 6, 2);
    graph.insert_edge(1, 7, 5);

    graph.insert_edge(2, 1, 9);
    graph.insert_edge(2, 3, 1);
    graph.insert_edge(2, 4, 6);
    graph.insert_edge(2, 5, 4);
    graph.insert_edge(2, 6, 3);
    graph.insert_edge(2, 7, 7);

    graph.insert_edge(3, 1, 2);
    graph.insert_edge(3, 2, 5);
    graph.insert_edge(3, 4, 9);
    graph.insert_edge(3, 5, 9);
    graph.insert_edge(3, 6, 8);
    graph.insert_edge(3, 7, 9);

    graph.insert_edge(4, 1, 3);
    graph.insert_edge(4, 2, 9);
    graph.insert_edge(4, 3, 7);
    graph.insert_edge(4, 5, 2);
    graph.insert_edge(4, 6, 8);
    graph.insert_edge(4, 7, 6);

    graph.insert_edge(5, 1, 8);
    graph.insert_edge(5, 2, 8);
    graph.insert_edge(5, 3, 4);
    graph.insert_edge(5, 4, 9);
    graph.insert_edge(5, 6, 3);
    graph.insert_edge(5, 7, 9);

    graph.insert_edge(6, 1, 5);
    graph.insert_edge(6, 2, 9);
    graph.insert_edge(6, 3, 1);
    graph.insert_edge(6, 4, 9);
    graph.insert_edge(6, 5, 5);
    graph.insert_edge(6, 7, 7);

    graph.insert_edge(7, 1, 2);
    graph.insert_edge(7, 2, 7);
    graph.insert_edge(7, 3, 9);
    graph.insert_edge(7, 4, 9);
    graph.insert_edge(7, 5, 8);
    graph.insert_edge(7, 6, 9);
    return graph;
}

void hours(int h_2) {                                            // подсчет разницы времени
    int house_1 = 21;
    cout << "Время в пути сократилось на  " << house_1 - h_2 << " ч." << endl;

}

void set_coordinat_vertex(int i, int n)              // установка координат для вершин графа для визуализации
{
    int R1;

    int x0 = win_1 / 2;
    int y0 = win_2 / 2;
    if (win_1 > win_2)
    {
        R = 5 * (win_2 / 13) / n;
        R1 = win_2 / 2 - R - 10;
    }
    else {
        R = 5 * (win_1 / 13) / n;
        R1 = win_1 / 2 - R - 10;
    }
    float theta = 2.0f * 3.1415926f * float(i) / float(n);
    float y1 = R1 * cos(theta) + y0;
    float x1 = R1 * sin(theta) + x0;

    vertex_coord[i].x = x1;
    vertex_coord[i].y = y1;
}

void draw_circle(int x, int y, int R)     // отрисовка вершин
{
    glColor3f(0.0, 0.7, 1.0);
    float x1, y1;
    glBegin(GL_POLYGON);            // круг
    for (int i = 0; i < 360; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(360);
        y1 = R * cos(theta) + y;
        x1 = R * sin(theta) + x;;
        glVertex2f(x1, y1);
    }
    glEnd();

    glColor3f(0.0, 0.0f, 0.0f); //окружность
    float x2, y2;
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(360);
        y2 = R * cos(theta) + y;
        x2 = R * sin(theta) + x;
        glVertex2f(x2, y2);
    }
    glEnd();
}

void draw_text_for_edge(int text_1, int text_2, int x1, int y1)
{
    GLvoid* font = GLUT_BITMAP_HELVETICA_18;
    string s = to_string(text_1);
    glRasterPos2i(x1 - 10, y1 - 10);
    for (int j = 0; j < s.length(); j++)
        glutBitmapCharacter(font, s[j]);
}

void draw_text_for_vertex(int text, int x1, int y1)   // отрисовка номеров вершин
{
    GLvoid* font = GLUT_BITMAP_HELVETICA_18;
    string s = to_string(text);
    glRasterPos2i(x1 - 5, y1 - 5);
    for (int j = 0; j < s.length(); j++)
        glutBitmapCharacter(font, s[j]);
}

void draw_vertex(int n)                      // отрисовка вершин
{
    for (int i = 0; i < n; i++) {
        draw_circle(vertex_coord[i].x, vertex_coord[i].y, R);
        draw_text_for_vertex(i + 1, vertex_coord[i].x, vertex_coord[i].y);
    }
}

void drawLine(int text, int text_2, int x0, int y0, int x1, int y1) {          // отрисовка ребер
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex2i(x0, y0);
    glVertex2i(x1, y1);
    glEnd();

    //draw_text_for_edge(text, text_2, (x0 + x1) / 2 + 15, (y0 + y1) / 2 + 15);
}

void drawLine_color(int x0, int y0, int x1, int y1) {        // отрисовка ребер при решении Коммивояжера ( дорога - красный)
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(x0, y0);
    glVertex2i(x1, y1);
    glEnd();

}

template<class T>
void Graph<T>::paint_graph()   // отрисовка графа в целом
{
    int n = vertex_List.size();
    for (int i = 0; i < n; i++)
    {
        set_coordinat_vertex(i, n);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int a = adjacency_matrix[i][j];
            int weight_2 = adjacency_matrix[j][i];
            if (a != 0|| weight_2!=0)
            {
                drawLine(a, weight_2, vertex_coord[i].x, vertex_coord[i].y, vertex_coord[j].x, vertex_coord[j].y);
            }
            if (a == -1 || weight_2 == -1) {
                
                drawLine_color(vertex_coord[i].x, vertex_coord[i].y, vertex_coord[j].x, vertex_coord[j].y);
                
            }
        }
    }
    draw_vertex(n);

}

template<class T>
void Graph<T>::paint_graph_solution()
{
    int n = vertex_List.size();
    for (int i = 0; i < n; i++)
    {
        set_coordinat_vertex(i, n);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int a = adjacency_matrix[i][j];
            int weight_2;
            if (a != 0)
            {
                drawLine(a, weight_2, vertex_coord[i].x, vertex_coord[i].y, vertex_coord[j].x, vertex_coord[j].y);
            }
            if (a == -1) {
                drawLine_color(vertex_coord[i].x, vertex_coord[i].y, vertex_coord[j].x, vertex_coord[j].y);
            }
        }
    }
    draw_vertex(n);

}

Graph<int> Graph_new()                 // создание нового графа
{

    int edge_count, first_vertex, second_vertex, weight_edge, vertex_count;
    cout << "Введите количество вершин графа: ";
    cin >> vertex_count;
    Graph<int> graph(vertex_count);
    cout << endl;
    cout << "Введите количество ребер графа: ";
    cin >> edge_count; cout << endl;
    for (int i = 1; i <= vertex_count; ++i) {
        int* vertPtr = &i;
        graph.insert_vertex(*vertPtr);
    }

    for (int i = 0; i < edge_count; ++i) {
        cout << "ИСХОДНАЯ вершина:"; cin >> first_vertex; cout << endl;
        int* first_vertex_ptr = &first_vertex;
        cout << "КОНЕЧНАЯ вершина: "; cin >> second_vertex; cout << endl;
        int* second_vertex_ptr = &second_vertex;

        cout << "Вес ребра: "; cin >> weight_edge; cout << endl;
        graph.insert_edge(*first_vertex_ptr, *second_vertex_ptr, weight_edge);
    }
    cout << endl;
    return graph;
}

void drawMenuText(string text, int x1, int y1)   // отрисовка текста кнопок
{
    GLvoid* font = GLUT_BITMAP_HELVETICA_18;
    string s = text;
    glRasterPos2i(x1 + 5, y1 - 20);
    for (int j = 0; j < s.length(); j++)
        glutBitmapCharacter(font, s[j]);
}

void drawMenu()                // отрисовка меню
{
    int __ot_1 = 60;
    int __ot_2 = 730;
    glColor3d(0.0, 1.0, 0.5);   // ïîäëîæêà
    glBegin(GL_QUADS);
    glVertex2i(__ot_1 - 10, __ot_2 - 50);
    glVertex2i(__ot_1 + 160, __ot_2 - 50);
    glVertex2i(__ot_1 + 160, __ot_2 - __ot_1 - 500);
    glVertex2i(__ot_1 - 10, __ot_2 - __ot_1 - 500);
    glEnd();

    glColor3d(1.0, 0.0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 30);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 30);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1);
    glVertex2i(__ot_1, __ot_2 - __ot_1);
    glEnd();
    glColor3d(1.0, 1.0, 1.0);
    drawMenuText("Kommivoyazher", __ot_1, __ot_2 - __ot_1 - 2);

    glColor3d(1.0, 0.0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 80);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 80);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 50);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 50);
    glEnd();
    glColor3d(1.0, 1.0, 1.0);
    drawMenuText("Matrix", __ot_1, __ot_2 - __ot_1 - 52);

    glColor3d(1.0, 0.0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 130);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 130);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 100);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 100);
    glEnd();
    glColor3d(1.0, 1.0, 1.0);
    drawMenuText("Helicopter", __ot_1, __ot_2 - __ot_1 - 102);

    glColor3d(1.0, 0.0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 180);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 180);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 150);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 150);
    glEnd();
    glColor3d(1.0, 1.0, 1.0);
    drawMenuText("Car", __ot_1, __ot_2 - __ot_1 - 152);

    glColor3d(1.0, 0.0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 230);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 230);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 200);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 200);
    glEnd();
    glColor3d(1.0, 1.0, 1.0);
    drawMenuText("Scooter", __ot_1, __ot_2 - __ot_1 - 202);

    glColor3d(1.0, 0.0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 280);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 280);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 250);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 250);
    glEnd();
    glColor3d(1.0, 1.0, 1.0);
    drawMenuText("Time", __ot_1, __ot_2 - __ot_1 - 252);

    glColor3d(1.0, 0.0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 330);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 330);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 300);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 300);
    glEnd();
    glColor3d(1.0, 1.0, 1.0);
    drawMenuText("Insert vertex", __ot_1, __ot_2 - __ot_1 - 302);

    glColor3d(1.0, 0.0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 380);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 380);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 350);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 350);
    glEnd();
    glColor3d(1.0, 1.0, 1.0);
    drawMenuText("Delete vertex", __ot_1, __ot_2 - __ot_1 - 352);

    glColor3d(1.0, 0.0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 430);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 430);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 400);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 400);
    glEnd();
    glColor3d(1.0, 1.0, 1.0);
    drawMenuText("New graph", __ot_1, __ot_2 - __ot_1 - 402);

    glColor3d(1.0, 0.0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 480);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 480);
    glVertex2i(__ot_1 + 150, __ot_2 - __ot_1 - 450);
    glVertex2i(__ot_1, __ot_2 - __ot_1 - 450);
    glEnd();
    glColor3d(1.0, 1.0, 1.0);
    drawMenuText("Clear", __ot_1, __ot_2 - __ot_1 - 452);
}

void Click_menu(int btn, int stat, int x, int y) {            // работа кнопок меню
    int __ot_1 = 60;
    int __ot_2 = 730;

    if (stat == GLUT_DOWN) {

        if (x > __ot_1 && x < __ot_1 + 150 && y >  __ot_1 && y < __ot_1 + 30)
        {
            graph = Kommivoyazher(graph, matrix_solution, matrix_temp, solution); 
        }
        if (x > __ot_1 && x < __ot_1 + 150 && y > __ot_1 + 50 && y < __ot_1 + 80)
        {
            graph.Print();        
        }
        if (x > __ot_1 && x < __ot_1 + 150 && y >  __ot_1 + 100 && y < __ot_1 + 130)
        {
            graph.insert_edge_helicopter();       
        }
        if (x > __ot_1 && x < __ot_1 + 150 && y >  __ot_1 + 150 && y < __ot_1 + 180)
        {
            graph.insert_edge_car();
        }
        if (x > __ot_1 && x < __ot_1 + 150 && y >  __ot_1 + 200 && y < __ot_1 + 230)
         {
            graph.insert_edge_scooter();
         }
        if (x > __ot_1 && x < __ot_1 + 150 && y >  __ot_1 + 250 && y < __ot_1 + 280)
        {
            hours(house_2);
        }

        if (x > __ot_1 && x < __ot_1 + 150 && y >  __ot_1 + 300 && y < __ot_1 + 330)
        {
            int first_vertex;
            int second_vertex;
            int weight_edge;
            int size_m = graph.get_Size_of_matrix();

            cout << "ИСХОДНАЯ вершина: "; cin >> first_vertex; cout << endl;
            int* firsr_vertex_ptr = &first_vertex;
            cout << "КОНЕЧНАЯ вершина: "; cin >> second_vertex; cout << endl;
            int* second_vertex_ptr = &second_vertex;

            if (first_vertex > size_m || second_vertex > size_m) {
                size_m++;
                int* vertPtr = &size_m;
                graph.set_size_Matrix(size_m);
                graph.insert_vertex(*vertPtr);
            }

            cout << "Вес ребра: "; cin >> weight_edge; cout << endl;
            graph.insert_edge(*firsr_vertex_ptr, *second_vertex_ptr, weight_edge);
        }
        if (x > __ot_1 && x < __ot_1 + 150 && y >  __ot_1 + 350 && y < __ot_1 + 380)
        {
            int count_vertex = graph.get_Size_of_matrix();
            int first_vertex;

            cout << "Введите вершину: "; cin >> first_vertex; cout << endl;
            int* first_vertex_ptr = &first_vertex;
            if (first_vertex == count_vertex)
            {
                count_vertex--;
                graph.DeleteVertex();
            }
            else cout << "Невозможно удалить вершину \n";
          
        }
        if (x > __ot_1 && x < __ot_1 + 150 && y >  __ot_1 + 400 && y < __ot_1 + 430)
        {
            graph = Graph_new();
        }
        if (x > __ot_1 && x < __ot_1 + 150 && y >  __ot_1 + 450 && y < __ot_1 + 480)
        {
            graph = graph_2;
        }
    }
    glutPostRedisplay();
}

void display()              // картинка окна, окно
{
    glShadeModel(GL_SMOOTH);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, win_1, 0, win_2);
    glViewport(0, 0, win_1, win_2);
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    graph.paint_graph();
    drawMenu();
    glutSwapBuffers();
}
int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "RU");
    create_graph(graph_2);
    create_graph(graph);
    graph.Print();
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(1350, 730);
    glutCreateWindow("Graph");
    win_1 = glutGet(GLUT_WINDOW_WIDTH);
    win_2 = glutGet(GLUT_WINDOW_HEIGHT);
    glutDisplayFunc(display);
    glutMouseFunc(Click_menu);
    glutMainLoop();
}
