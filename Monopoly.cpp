#include <bits/stdc++.h>

using namespace std;

int main(){
  int I,n=0,d,e,f,valor;
  char acao;
  char nome;
  char nome2;

  cin >> I;
  cin >> n;

  d=I;
  e=I;
  f=I;

  do{
    scanf("%c",&acao);

    switch(acao){
      case 'C':
        scanf("%c",&nome);
        cin >> valor;
        switch(nome){
          case 'D':
            d=d-valor;
            break;
          case 'E':
            e=e-valor;
            break;
          case 'F':
            f=f-valor;
            break;
          }
        break;

      case 'V':
        scanf("%c",&nome);
        cin >> valor;
        switch(nome){
          case 'D':
            d=d+valor;
            break;
          case 'E':
            e=e+valor;
            break;
          case 'F':
            f=f+valor;
            break;
        }
      break;

      case 'A':
        scanf("%c",&nome);
        scanf("%c",&nome2);
        cin >> valor;
        switch(nome){
          case 'D':
            if(nome2=='E'){
              d=d+valor;
              e=e-valor;
            }
            else if(nome2=='F'){
              d=d+valor;
              f=f-valor;
            }
            break;

          case 'E':
            if(nome2=='D'){
              e=e+valor;
              d=d-valor;
            }
            else if(nome2=='F'){
              e=e+valor;
              f=f-valor;
            }
              break;

            case 'F':
              if(nome2=='E'){
                f=f+valor;
                e=e-valor;
              }
              else if(nome2=='D'){
                f=f+valor;
                d=d-valor;
              }
              break;
          }
      }
    }while(n--);

    printf("%d %d %d\n",d,e,f);
  }
