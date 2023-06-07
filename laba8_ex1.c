#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define grv 398600.4

long double formula();

int main(){
    formula();
    return 0;
}

long double formula(){
    FILE * hw8;
    hw8 = fopen("hw8.txt", "wt");
    int N = 6000;
    int T = 2;
    int dep[N][T];
    int dep1[N][T];
    double pi = 3.1415926535;
    double i = 63.4 * (pi / 180.0); // радианы
    double Y = 398600.4; // км^3/c^2
    double  We = 7.2921159 * pow(10, -5); // рад/c
    int Ra = 45000;// км
    double Rp = ((pow((We),2) * pow(Ra, 4) * (pow(cos(i), 2))) / ((2 * Y) - (pow((We), 2) * pow(Ra, 3) * (pow(cos(i), 2)))));
    for(int Ra = 0; Ra <= 60000; Ra += 10){
    double x = (2 * Y * Rp)/(Ra * (Ra + Rp));
    double Va = sqrt(x);
    // printf("Va = %lf\n", Va);
    dep[N][0] = Va;
    double Vw = (We * Ra * cos(i));
    // printf("Vw = %lf\n", Vw);
    dep[N][1] = Vw;
    // printf("dep[%d] = %lf\n"" dep1[%d] = %lf\n", Ra, Va, Ra, Vw);
    fprintf(hw8, "%.12lf %.12lf %d\n", Va, Vw, Ra);
    }
    fclose(hw8);
    FILE *hw8_1;
    hw8_1 = fopen("hw8_1.txt", "wt");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < T; j++){
            if(dep[i][j] || dep[i][j]){
                dep1[i][j] = 1;
            }
            else{
                dep1[i][j]= 0;
            }
        printf("%d\n", dep1[i][j]);
        fprintf(hw8_1, "%d %d\n", dep1[i][0], dep1[i][1]);}
        printf("\n");
            }
            fclose(hw8_1);
        }

