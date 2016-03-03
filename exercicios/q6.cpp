#include <iostream>
using namespace std;
int maiores (const int* const vet, const int n, const int x, int *c);
    int i;
    for (i=0; i < n ; i++){
        if (vet[i]>x){
           *c++;
        }
    }
int main(){
    int vet[]={2, 3, 4, 5, 6};
    int n,x, c;
    n = sizeof(vet);
    cin >> x;
    maiores(vet,n,x, &c);
    cout<<c;
}
