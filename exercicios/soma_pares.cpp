#include <iostream>
using namespace std;
int main (){
	int n, m, soma, contador=1;
	cout << " Entre com os pares ( Ctrl + d p / encerrar ): " << endl ;
	while ( n!=0 ) {
    cin >> m;
    cin >> n;
    soma = m;
	    while (contador < n){
             soma = soma +contador+ m;
             contador++;
	    }
    cout << soma;
    contador=1;
    }
    std::cout << "\n >>> Normal ... \n\n";
	//return EXIT_SUCCESS;

}
