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
			cout << " Esse n�mero n�o est� em nenhum intervalo ";
		}
    }
    qtd=x1+x2+x3+x4;
	std::cout << " >>> Existem " << static_cast<float> ((x1)/qtd)*100 << " N�meros no 1� intervalo," << static_cast<float> ((x2)/qtd)*100 << " N�meros no 2� intervalo," << static_cast<float> ((x3)/qtd)*100 << " N�meros no 3� intervalo,"<< ((x4)/qtd)*100 << " N�meros no 4� intervalo";
	std::cout << "\n >>> Normal ... \n\n";
	return EXIT_SUCCESS;

}
