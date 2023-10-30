#include <iostream>

using namespace std;

const int SMAX = 31;
const int MAX = 40;

struct User{
  char nome[SMAX];
  char cidade[SMAX];
  int idade;
  bool ego = false;
};

void ler_user(User user[], int n, int likes[][MAX]){
  for(int i = 0; i < n; i++){
    cin.ignore();
    cin.getline(user[i].nome, SMAX);
    cin.getline(user[i].cidade, SMAX);
    cin >> user[i].idade;
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> likes[i][j];
      if((i == j) && (likes[i][j] >= 7)){
        user[i].ego = true;
      }
    }
  }

}
void console_user(User user[], int n, int likes[][MAX], int indice){
    int conta = 0;
  for(int i = 0; i < n; i++){
    cout << "Nome: " << user[i].nome << endl;
    cout << "Cidade: " << user[i].cidade << endl;
    cout << "Idade: " << user[i].idade << endl;
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << likes[i][j] << " ";
    }
    cout << endl;
  }

        
    for(int j = 0; j < n; j++){
        if(likes[indice][j] > -1){
            conta += likes[indice][j];
            }
    }

    cout << "Curtidas dadas por" << user[indice].nome << ": " << conta;


}
int main() {
    int n, likes[MAX][MAX], indice;
    cin >> n;

    User users[n];
    
    ler_user(users, n, likes);
    
	cin >> indice;
    console_user(users, n, likes, indice);

    return 0;
}