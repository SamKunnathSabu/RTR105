#include<stdio.h>

int main()
 {
 int i_array_1[10]; // int lielumu masīva deklarēšana
                    // (piesaukt drīkst, bet vērtības nav zināmas)

 int i_array_2[3] = {1,2,3}; // int lielumu masīva definēšana
 int i_array_3[5] = {4,5,6}; // masīva pēdējie divi elementi būs ar 0 vērtībām
 int i_array_with_zeros[5] = {0}; // masīva vērtības ir nulles

 int i_array_2D[2][3] = {{7,8,9},     // [2 - rindu sskaits][3 - kolonu skaits]
                         {10,11,12}}; // dimensijas var būt vairākas

 printf("masīva i_array_2 adrese: %p\n",i_array_2);

 printf("masīva i_array_2 0. elementa adrese: %p\n",&i_array_2[0]);
 printf("masīva i_array_2 0. elementa vērtība: %d\n",i_array_2[0]);
 //printf("masīva i_array_2 0. elementa vērtība: %d\n",*(i_array_2));
 printf("masīva i_array_2 0. elementa vērtība: %d\n",*(i_array_2+0));

 printf("masīva i_array_2 1. elementa adrese: %p\n",&i_array_2[1]);
 printf("masīva i_array_2 1. elementa vērtība: %d\n",i_array_2[1]);
 printf("masīva i_array_2 1. elementa vērtība: %d\n",*(i_array_2+1));

 printf("masīva i_array_2 2. elementa adrese: %p\n",&i_array_2[2]);
 printf("masīva i_array_2 2. elementa vērtība: %d\n",i_array_2[2]);
 printf("masīva i_array_2 2. elementa vērtība: %d\n",*(i_array_2+2));


 printf("\n\nmasīva i_array_2D 0.2. elementa adrese: %p\n",&i_array_2D[0][2]);
 printf("masīva i_array_2D 0.2. elementa vērtība: %d\n",i_array_2D[0][2]);
 //printf("masīva i_array_2D 0.2. elementa vērtība: %d\n",*(i_array_2D+0*2+1*2));
 printf("masīva i_array_2D 0.2. elementa vērtība: %d\n",*(*(i_array_2D+0)+2));

 printf("masīva i_array_2D 1.0. elementa adrese: %p\n",&i_array_2D[1][0]);
 printf("masīva i_array_2D 1.0. elementa vērtība: %d\n",i_array_2D[1][0]);
 //printf("masīva i_array_2D 1.2. elementa vērtība: %d\n",*(i_array_2D+1*2+1*0));
 printf("masīva i_array_2D 1.2. elementa vērtība: %d\n",*(*(i_array_2D+1)+0));

 return 0;
 }
