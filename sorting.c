/* program name: Sorting */
#include<stdio.h>
#include<stdlib.h>


int main(void){
    int a1 = 0,a3 = 0;
    printf("Give length of array\n");
    scanf("%i",&a1);
    int tablica[a1+1];
    int a2[a1];
    for(int i = 0;i < a1; i++){
        printf("Give a number:%i\n",i);
        scanf("%i",&tablica[i]);
    }
    tablica[a1+1] = -100;



    for(int q = 0;q<a1;q++){
        if(q+1 == a1){
            for(int i = 0; i < a1;i++){
                if(tablica[i]>0)a2[q] = tablica[i];
        }

            break;

        }
        else if(tablica[q]>tablica[q+1])a2[q] = tablica[q];
        else if(tablica[q]<tablica[q+1])a2[q] = tablica[q+1];



        for(int i = 0; i < a1;i++){
            if(tablica[i]>a2[q])a2[q] = tablica[i];
        }
        for(int i = 0;i < a1;i++){
            if(tablica[i] == a2[q])tablica[i] = 0;
        }



    }
    printf("Sorted numbers: \n");
    for(int i = 0; i < a1;i++)printf("%i\n",a2[i]);



    return 0;
}
