#include <iostream>
using namespace std;
int interseccao (int *x, int *y, int *larg, int *alt, int *x1,int *y1,int *larg1, int *alt1);
int main (){
    int x1, y1, larg1, alt1, x2, y2, larg2, alt2, xi,yi,largi,alti;
    cin >> x1;
    cin >> y1;
    cin >> larg1;
    cin >> alt1;
    cin >> x2;
    cin >> y2;
    cin >> larg2;
    cin >> alt2;
    if (((x2<=x1+larg1) && (x2>=x1)) && ((y2<=y1+alt1) && (y2>=y1)) || (x1>=x2+larg2) && (y1>=y2+alt2)){
            if (x1<x2){
                xi=x2;
            } else
                xi=x1;
            if (y1<y2){
                yi=y2;
            }else
                yi=y1;
             if (x1<x2){
                largi=x1+larg1;
            } else
                largi=x2+larg2;
            if (y1<y2){
                alti=y1+alt1;
            }else
                alti=y2+alt2;
        cout<<xi;
        cout<<yi;
        cout<<largi;
        cout<<alti;
    } else {
        cout<<"Os retângulos não tem intersecção";
    }
   /* if (ysd<yie){
        menory=ysd;
        ysd=yie;
        yie=menory;
    }
    if ((xie!=xsd) && (yie!=ysd)){
        if ((x>xie) && (x<xsd) && (y>yie) && (y<ysd)){
            cout<<"O ponto está dentro do retângulo";
        }else if (((x==xie) && (y==yie)) || ((x==xsd) && (y==ysd)) || ((x>xie) || (x<xsd) && (y==yie) || (y==ysd)) || ((y>yie) || (y<ysd) && (x==xie) || (x=xsd))){
            cout<<"o ponto está na borda do triângulo";
        }else if (((x<xie) && (y<yie)) || ((x>xsd) && (y>ysd))){
            cout<<"o ponto está fora do retângulo";
    }
    } else
        cout<< "os pontos são  irregulares";
        */
   std::cout << "\n >>> Normal ... \n\n";
	//return EXIT_SUCCESS;

}
