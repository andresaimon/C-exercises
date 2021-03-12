#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Aluno
{
    private:
        string nome, endereco, ra;
        int idade;

    public:
        Aluno()
        {
            idade = 0;
        }

        ~Aluno()
        {

        }

        void set_dados()
        {
            cout << "\nDigite o nome: ";
            getline(cin, nome);
            cout << "\nDigite o endereço: ";
            getline(cin, endereco);
            cout << "\nDigite o RA: ";
            getline(cin, ra);
            cout << "\nDigite a idade: ";
            cin >> idade;
            cin.ignore();
        }

        void print_dados()
        {
            cout << "\nNome: " << nome;
            cout << "\nEndereço: " << endereco;
            cout << "\nR.A.: " << ra;
            cout << "\nIdade: " << idade;
        }

        string ret_nome()
        {
            return nome;
        }

        int ret_idade()
        {
            return idade;
        }

        string ret_ra()
        {
            return ra;
        }
};

int main()
{
    Aluno temp;
    vector<Aluno> E1;

    char d;
    int op, ce;

    do {
        cout << "\n<1> Cadastro ";
        cout << "\n<2> Listagem geral ";
        cout << "\n<3> Apagar aluno ";
        cout << "\n<4> Inserir aluno em uma determinada posição ";
        cout << "\n Digite sua opção: ";

        cin >> op;
        cin.ignore();

        switch (op)
        {
            case 1:
                do {
                    temp.set_dados();
                    E1.push_back(temp);

                    cout << "\nDeseja cadastrar outro? ";
                    cin >> d;
                    cin.ignore();
                } while (d == 's' or d == 's');
                break;

            case 2:
                for(int a = 0; a < E1.size(); a++)
                    E1.at(a).print_dados();
                break;

            case 3:
                do {
                    for (int p = 0; p < E1.size(); p++)
                        cout << "\nDigite o código a excluir: ";
                        cin >> ce;
                        ce = ce - 1;

                        if (ce < E1.size())
                            E1.erase(E1.begin() + ce);

                        else
                            cout << "\nCódigo inválido!";

                        cout << "\nDeseja excluir outro? ";
                        cin >> d;
                } while (d == 's');
                break;

            case 4:
                do {
                    for (int p = 0; p < E1.size(); p++)
                        cout << "\n " << p + 1 << "\t " << E1.at(p).ret_nome();

                    cout << "\nDigite a posição a inserir: ";
                    cin >> ce;
                    cin.ignore();
                    ce = ce - 1;

                    if (ce < E1.size()) {
                        temp.set_dados();
                        E1.insert(E1.begin() + ce, temp);
                    }

                    else
                        cout << "\nPosição inválida!";

                    cout << "\nDeseja inserir em outra posição? ";
                    cin >> d;
                    cin.ignore();
                } while ( d == 's');
                break;

            default:
                cout << "\nOpção inválida! ";
                break;
        }

        cout << "\nDeseja voltar para o menu principal? ";
        cin >> d;
    } while (d == 's');

    cout << "\n\n";

    return 0;
}