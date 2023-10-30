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
void console_user(User user[], int n, int likes[][MAX]){
  for(int i = 0; i < n; i++){
    cout << "Usuário " << i+1 << endl
    << "\tNome: " << user[i].nome << endl
    << "\tCidade: " << user[i].cidade << endl
    << "\tIdade: " << user[i].idade << endl;
    if(user[i].ego){
      cout << "\tEssa pessoa curte muito seus próprios posts" << endl;
    }
    cout << endl;
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << likes[i][j] << " ";
    }
    cout << endl;
  }
}
int main() {
  int n, likes[MAX][MAX];
  cin >> n;

  User users[n];
  
  ler_user(users, n, likes);
  console_user(users, n, likes);

  return 0;
}