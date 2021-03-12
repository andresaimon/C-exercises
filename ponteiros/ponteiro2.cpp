#include<iostream>

using namespace std;

class Estrutura
{
    public:
        int v1;
        float v2;
};

int main()
{
    Estrutura st;
    Estrutura *Pst;

    Pst = &st;
    st.v1 = 200;
    Pst -> v2 = 23.976;

    cout << "\nValor de v1: " << st.v1;
    cout << "\nValor de v2: " << Pst -> v2;

    cout << "\n\n";

    return 0;
}