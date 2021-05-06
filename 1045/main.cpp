#include <bits/stdc++.h>

using namespace std;

bool sortDec(int i,int j){return i>j;}

int main()
{
    double side[3];
    scanf("%lf%lf%lf",&side[0],&side[1],&side[2]);

    sort(side,side+3,sortDec);

    if(side[0] >= side[1]+side[2])
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }

    if(side[0]*side[0]==side[1]*side[1]+side[2]*side[2])
    {
        printf("TRIANGULO RETANGULO\n");
    }

    if(side[0]*side[0]>side[1]*side[1]+side[2]*side[2])
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }

    if(side[0]*side[0]<side[1]*side[1]+side[2]*side[2])
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(side[0]==side[1] && side[1]==side[2])
    {
        printf("TRIANGULO EQUILATERO\n");
    }

    if((side[0]==side[1] || side[1]==side[2] || side[2]==side[0])&&!(side[0]==side[1] && side[1]==side[2]))
    {
        printf("TRIANGULO ISOSCELES\n");
    }

//    printf("%lf\n",side[0]);
//    printf("%lf\n",side[1]);
//    printf("%lf\n",side[2]);

    return 0;
}
