#include <iostream>
using namespace std;
int main (){
	int x, x1=0, x2=0, x3=0, x4=0, qtd=0;
	cout << " Entre com valores inteiros ( Ctrl + d p / encerrar ): " << endl ;
	while ( cin >> x ) {
		if (x>=0 && x<25){
			x1++;
		} else if (x>=25 && x<50){
			x2++;
		} else if (x>=50 && x<75){
			x3++;
		} else if (x>=75 && x<=100){
			x4++;
		} else if (x<0 || x>100){
			cout << " Esse número não está em nenhum intervalo ";
		}
    }
    qtd=x1+x2+x3+x4;
	std::cout << " >>> Existem " << static_cast<float> ((x1)/qtd)*100 << " Números no 1º intervalo," << static_cast<float> ((x2)/qtd)*100 << " Números no 2º intervalo," << static_cast<float> ((x3)/qtd)*100 << " Números no 3º intervalo,"<< ((x4)/qtd)*100 << " Números no 4º intervalo";
	std::cout << "\n >>> Normal ... \n\n";
	return EXIT_SUCCESS;

}
