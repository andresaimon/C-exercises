#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> data;
    int temp, mt, j, n; //mt: menor temporario
    char d;

    do {
        cout << "\nDigite um número: ";
        cin >> n;
        data.push_back(n);
        cout << "Deseja outro?";
        cin >> d;
    } while (d == 's');

    for (int i = 0; i < data.size(); i++) {
        mt = i;
        for (j = i + 1; j < data.size(); j++)
            if(data[j] < data[mt])
                mt = j;
                temp = data[i];
                data[i] = data[mt];
                data[mt] = temp;
    }

    for (int x = 0; x < data.size(); x++)
        cout << data[x] << " ";

    cout << "\n\n";

    return 0;
}