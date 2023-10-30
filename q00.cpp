#include <iostream>

using namespace std;

const int MAX = 10;
const int SMAX = 21;

struct Pessoa
{
    char nome[SMAX]; 
    char cidade[SMAX];
    int idade;
};


void lerdados(Pessoa v[], int &n){
    int i;

     for (i = 0 ; i < n; i++)
     {
        cin.ignore();
        cin.getline(v[i].nome, SMAX);
        cin.getline(v[i].cidade, SMAX);
        cin >> v[i].idade;

    }
}

void imprime(Pessoa v[], int &n){
    int i;

        for (i = 0 ; i < n; i++)
    {
        cout << "Usuário" << i+1 << endl;
        cout << "\tNome: " <<v[i].nome << endl;
        cout << "\tCidade: " <<v[i].cidade << endl;
        cout << "\tIdade: " <<v[i].idade << endl;
        cout << "pessoa" << "\n";
        cout << v[i].idade;
    }
}

int main(){
    int n;
    Pessoa v[MAX];

    cin >> n;

    lerdados(v, n);
    imprime(v, n);


    
}
