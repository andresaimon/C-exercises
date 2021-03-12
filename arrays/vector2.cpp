#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Atleta
{
    private:
        string nome;
        float altura;
        int idade;

    public:
        Atleta()
        {
            altura = 0;
            idade = 0;
        }

        ~Atleta()
        {

        }

        void set_dados()
        {
            cout << "\nDigite o nome do atleta: ";
            getline (cin, nome);
            cout << "\nDigite a altura: ";
            cin >> altura;
            cout << "\nDigite a idade: ";
            cin >> idade;
            cin.ignore();
        }

        void print_dados()
        {
            cout << "\n Nome: " << nome;
            cout << "\n Altura: " << altura;
            cout << "\n Idade: " << idade;
        }

        string ret_nome()
        {
            return nome;
        }
};

int main ()
{
    Atleta temp;
    vector <Atleta> data;
    char d;

    do {
        temp.set_dados();
        data.push_back(temp);
        cout << "\n Deseja outro (s/n)?";
        cin >> d;
        cin.ignore();
    } while (d == 's');

    for (int i = 0; i < data.size() - 1; i++) //n de qtd de elem do vector
        for (int j = data.size() - 1; j > i; j--)
            if (data[j].ret_nome() < data[j-1].ret_nome()) {
                temp = data[j];
                data[j-1] = temp;
            }
    
    for (int a = 0; a < data.size(); a++)
        data[a].print_dados();

    cout << "\n\n";
    
    return 0;
}