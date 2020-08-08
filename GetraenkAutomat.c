#include<stdio.h>
int pass, a, servicwahl, c;
char auswahl, einwurf;

double b, d, rest, gesamt;
int limo = 10, cola = 10, bier = 10, kaffe = 0, run;// Getraenke Zahl initialisierung
double limost = 10, colast = 10, bierst =10, kaffest = 0;// Genraenke mus gleiche startzahl haben


int main(){

            do{ // Hier begint Do (schleife) fuer ganzen Automat.
    printf("\n\n\tGetraenk Automat (Lernen C).\n");

    do{ // Hier begint do(schleife) fuer bestehlung und bezahlung.

            printf("\n 1)Limonade 1,50 Euro \n 2)Cola 1,50 Euro \n 3)Bier 2,00 Euro \n 4)Kaffe 0,50 Euro \n Wehlen sie ihr Getraenk:  ");
            scanf("%s", &auswahl);
            fflush(stdin);
        int aus = auswahl;
        switch (aus){
        case 49: a = 150; // Im switch-case ist Getraenke auswahl und Service menu realisiert
        if (limo == 0){
            printf("\n Limo ist nicht verfuegbar\n");run =1; break;
            }
            else {printf("\n Verfuegbare Limo %d Stuek", limo); limo--; run =0; break;
            }
        case 50: a = 150;
        if (cola == 0){
            printf("\n Cola ist nicht verfuegbar\n");run =1; break;
            }
            else {printf("\n Verfuegbare Cola %d Stuek", cola);
            cola--; run =0; break;}
        case 51: a = 200;
        if (bier <= 0){
            printf("\n Bier ist nicht verfuegbar\n"); run =1; break;
            }
            else {printf("\n Verfuegbare Bier %d Stuek", bier);
            bier --; run =0; break;}
        case 52: a = 50; kaffe++; run =0;
            break;
        case 80: printf("\n Sie sind in Servise Menu"); printf("\n Um gesamte summe zu pruefen drucken sie 1: "); // Mit Passwort "P" bei Getraenke wahl, kommt man in Servise-Menu
        scanf("%d", &servicwahl); // Für verdinte geld zu pruefen soll man "1" drucken
        if (servicwahl == 1){
                double ll, cc, bb, kk;
                printf("\n Schon sind %.f Stuek Limo verkauft auf %.2f Euro", limost-limo, ll=(limost-limo)*1.5);
                printf("\n Schon sind %.f Stuek Cola verkauft auf %.2f Euro", colast-cola, cc=(colast-cola)*1.5);
                printf("\n Schon sind %.f Stuek Bier verkauft mit auf %.2f Euro", bierst-bier, bb=(bierst-bier)*2);
                printf("\n Sind %.f Stuek Kaffe verkauft auf %.2f Euro", kaffest= kaffe, kk = kaffe * 0.5);
                printf("\n Gesamt %.2fEuro \n\n", ll + cc + bb + kk); continue;
        }
        default: printf("\n Falsche auswahl"); run = 1; continue;
        }
        }while (run != 0);



    printf("\n\n - Bezahlung - \n");
    printf("\n Werfen sie bitte Geld ein. \n Taster 1 ist 10 Cent \n Taster 2 ist 20 Cent \n Taster 3 ist 50 Cent \n Taster 4 ist 1 Euro \n Taster 5 ist 2 Euro\n ");
    do{
       b = a;
       printf("\n Es fehlt noch: %.2f Euro: ", b/100);
       scanf("%c", &einwurf);
       fflush(stdin);
       int muenze = einwurf;
       switch (muenze){
            case 49: c = 10; break;
            case 50: c = 20; break;
            case 51: c = 50; break;
            case 52: c = 100; break;
            case 53: c = 200; break;
            default: printf("\n Falsche auswahl, widercholen: "); continue;
            }
        a -= c;
        }while (a > 0);
        rest = a;
        printf("\n Entnehmen sie rest %.2f Euro", -rest/100);
        printf("\n Entnehmen sie ihr Getraenk \n\n");
        }while(limo>=0 && cola>=0 && bier>=0  );
   }











