#include<iostream>

using namespace std;

int main()
{
    int *p3 = new int[5];
    int *End_inicio;
    int i = 0;
    End_inicio = p3;

    for (int a = 0; a < 5; a++) {
        cout << "\nDigite um inteiro: ";
        cin >> p3[a];
    } 

    while (i < 5) {
        cout << "\n O " << i + 1 << " elemento está no endereço: " << p3 << " o conteúdo é: " << *p3;
        p3++;
        i++;
    }

    p3 = End_inicio; //p3 está sendo incrementado
    delete[]p3; //usa delete[] quando aloca com []

    cout << "\n\n";

    return 0;
}