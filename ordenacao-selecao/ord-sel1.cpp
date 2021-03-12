#include<iostream>

using namespace std;

int main()
{
    int data[5], temp, mt, j; //mt: menor temporario
    
    for (int x = 0; x < 5; x++) {
        cout << "\nDigite um número: ";
        cin >> data[x];
    }

    for (int i = 0; i < 4; i++) {
        mt = i;
        for (j = i + 1; j < 5; j++)
            if(data[j] < data[mt])
                mt = j;
                temp = data[i];
                data[i] = data[mt];
                data[mt] = temp;
    }

    for (int x = 0; x < 5; x++)
        cout << data[x] << " ";

    cout << "\n\n";

    return 0;
}