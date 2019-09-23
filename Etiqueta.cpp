#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,c,cont=0,lin=0;
    cin >> n >> k >> c;
    int vet[n];

    for(int i=0;i<n;i++)
        cin >> vet[i];

    for(int i=0;i<n;i++){
        cont++;
        if(cont==c && vet[i]!=vet[n]){
            lin++;
            i=i-(c-1);
            cont=0;
        }
        if(cont==c && vet[i]==vet[n]){
            lin++;
            break;
        }
    }

    int matriz[lin][c],soma[lin];
    memset(matriz,0,sizeof(matriz));

    for(int i=0;i<lin;i++){
        for(int j=0;j<c;j++){
            matriz[i][j]=vet[j+i];
        }
    }

    for(int i=0;i<lin;i++){
        for(int j=0;j<c;j++){
            soma[i]=soma[i]+matriz[i][j];
        }
    }

}
