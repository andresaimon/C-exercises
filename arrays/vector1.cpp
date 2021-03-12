#include<iostream>
#include<vector>

using namespace std;

int main ()
{
    vector <int> data;
    int temp, n;
    char d;

    do {
        cout << "\n Digite um número: ";
        cin >> n;
        data.push_back(n);
        cout << "\n Deseja outro (s/n)";
        cin >> d;
    } while (d == 's');

    for (int i = 0; i < data.size() - 1; i++) //n de qtd de elem do vector
        for (int j = data.size() - 1; j > i; j--)
            if (data[j] < data[j-1]) {
                temp = data[j];
                data[j] = data[j-1];
                data[j-1] = temp;
            }
    
    for (int a = 0; a < data.size(); a++)
        cout << data[a] << " ";
    
    cout << "\n\n";
    
    return 0;
}