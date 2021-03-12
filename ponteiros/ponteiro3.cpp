#include<iostream>
#include<string>

using namespace std;

class Aluno
{
    private:
        string nome;
        int idade;
        float n1, n2, n3;

    public:
        void set_dados()
        {
            cout << "\nDigite o nome: ";
            getline(cin, nome);
            cout << "\nDigite a idade: ";
            cin >> idade;
            cout << "\n Digite a nota 1: ";
            cin >> n1;
            cout << "\n Digite a nota 2: ";
            cin >> n2;
            cout << "\n Digite a nota 3: ";
            cin >> n3;
            cin.ignore();
        }

        void print_dados()
        {
            cout << "\nNome: " << nome;
            cout << "\nIdade: " << idade;
            cout << "\nNota 1: " << n1;
            cout << "\nNota 2: " << n2;
            cout << "\nNota 3: " << n3;
        }

        float ret_media()
        {
            return (n1 + n2 + n3) / 3;
        }
};

int main()
{
    Aluno *temp = new Aluno[3];
    Aluno *end_inicio = temp;
    
    for (int i = 0; i < 3; i++) {
        temp -> set_dados();
        temp ++;
    }

    temp = end_inicio;

    for (int i = 0; i < 3; i++) {
        cout << "\nO " << i + 1 << " Aluno está no endereço: " << temp;
        temp -> print_dados();
        cout << "\nSua média foi de: " << temp -> ret_media();
        temp++;
    }

    temp = end_inicio;
    temp[0].print_dados();
    delete[]temp;

    cout << "\n\n";

    return 0;
}