typedef char* string;

// Estrutura para armazenar informações de um estudante
typedef struct {
    char id[16]; // ID do estudante
    char name[128]; // Nome do estudante
    float* grades; // Vetor de notas (4 notas) alocado dinamicamente
} T_STUDENT;

// Estrutura para armazenar uma lista de estudantes
typedef struct {
    int max; // Quantidade máxima de estudantes na lista
    int size; // Quantidade atual de estudantes na lista
    T_STUDENT** students; // Vetor de ponteiros para T_STUDENT
} T_STUDENT_LIST;

// Função para criar um novo estudante
T_STUDENT* create_student(string id, string name, float* grades);
// Função para criar uma nova lista de estudantes
T_STUDENT_LIST* create_student_list(int max);
// Função para coletar informações de um novo estudante
T_STUDENT* collect_student_info(T_STUDENT_LIST* list);
// Função para verificar se a lista está vazia
int is_empty(T_STUDENT_LIST* list);
// Função para verificar se a lista está cheia
int is_full(T_STUDENT_LIST* list);
// Função para buscar um estudante na lista pelo ID
int search_student(T_STUDENT_LIST* list, string id);
// Função para adicionar um estudante à lista
void add_student(T_STUDENT_LIST* list, T_STUDENT* student);
// Função para remover um estudante da lista pelo ID
void remove_student(T_STUDENT_LIST* list, string id);
// Função para liberar a memória de um estudante
void free_student(T_STUDENT* student);
// Função para liberar a memória da lista de estudantes
void free_student_list(T_STUDENT_LIST* list);
// Função para obter o tamanho da lista de estudantes
int len(T_STUDENT_LIST* students);
// Função para exibir o menu e obter a opção do usuário
int menu();