#include <stdio.h>
#define pi 3.14
int main(){
    float x,rayon,diametre,surface,circonference;
    x=rayon;
    printf("veillez entrer le rayon");
    scanf("%f",&x);
    diametre=2*x;
    surface=pi*x*x;
    circonference=2*x*pi;
    printf("le diametre est :%0.0f cm\n",diametre);
    printf("la surface est :%0.2f\n",surface);
    printf("la circonference est :%.2f cm\n",circonference);

return 0;
}
