#include <iostream>
using namespace std;
int main (){
    int xie, yie, xsd, ysd, x, y, menorx, menory;
    cin >> xie;
    cin >> yie;
    cin >> xsd;
    cin >> ysd;
    cin >> x;
    cin >> y;
    if (xsd<xie){
        menorx=xsd;
        xsd=xie;
        xie=menorx;
    }
    if (ysd<yie){
        menory=ysd;
        ysd=yie;
        yie=menory;
    }
    if ((xie!=xsd) && (yie!=ysd)){
        if ((x>xie) && (x<xsd) && (y>yie) && (y<ysd)){
            cout<<"O ponto est� dentro do ret�ngulo";
        }else if (((x==xie) && (y==yie)) || ((x==xsd) && (y==ysd)) || ((x>xie) || (x<xsd) && (y==yie) || (y==ysd)) || ((y>yie) || (y<ysd) && (x==xie) || (x=xsd))){
            cout<<"o ponto est� na borda do tri�ngulo";
        }else if (((x<xie) && (y<yie)) || ((x>xsd) && (y>ysd))){
            cout<<"o ponto est� fora do ret�ngulo";
    }
    } else
        cout<< "os pontos s�o  irregulares";
   std::cout << "\n >>> Normal ... \n\n";
	//return EXIT_SUCCESS;

}
