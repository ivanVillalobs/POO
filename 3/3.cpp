#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int num = 1, anterior = 0, aux;
    for (int i = 0; i < 20; i++) {
        cout << " " << num << endl;
        aux = num;
        num += anterior;
        anterior = aux;
    }    
    cout << "\n\n"<<endl;    
    system("pause");
    return 0;
}

