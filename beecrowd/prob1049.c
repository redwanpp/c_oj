//Animal

#include <stdio.h>
#include <string.h>

int main() {
    //declaring three string
    char order[20], family[20], specis[20];
    int order1, order2, family1, family2, family3, family4, specis1, specis2, specis3, specis4, specis5, specis6, specis7, specis8;
     
    //taking input
    scanf("%s %s %s", order, family, specis);

    //comparing strings
    order1 = strcmp(order, "vertebrado");
    order2 = strcmp(order, "invertebrado");

    family1 = strcmp(family, "ave");
    family2 = strcmp(family, "mamifero");
    family3 = strcmp(family, "inseto");
    family4 = strcmp(family, "anelideo");

    specis1 = strcmp(specis, "carnivoro");
    specis2 = strcmp(specis, "onivoro");
    specis3 = strcmp(specis, "onivoro");
    specis4 = strcmp(specis, "herbivoro");
    specis5 = strcmp(specis, "hematofago");
    specis6 = strcmp(specis, "herbivoro");
    specis7 = strcmp(specis, "hematofago");
    specis8 = strcmp(specis, "onivoro");
    

    // compare ande showing result
    //method 1
    if(order1 == 0 && family1 == 0 && specis1 == 0) {
        printf("aguia\n");
    }
    else if(order1 == 0 && family1 == 0 && specis2 == 0) {
        printf("pomba\n");
    }
    else if(order1 == 0 && family2 == 0 && specis3 == 0) {
        printf("homem\n");
    }
    else if(order1 == 0 && family2 == 0 && specis4 == 0) {
        printf("vaca\n");
    }
    else if(order2 == 0 && family3 == 0 && specis5 == 0) {
        printf("pulga\n");
    }
    else if(order2 == 0 && family3 == 0 && specis6 == 0) {
        printf("lagarta\n");
    }
    else if(order2 == 0 && family4 == 0 && specis7 == 0) {
        printf("sanguessuga\n");
    }
    else if(order2 == 0 && family4 == 0 && specis8 == 0) {
        printf("minhoca\n");
    }


    //method 2
    // if(order1 == 0) {
    //     if(family1 == 0) {
    //          if(specis1 == 0) {
    //             printf("aguia\n");            
    //         }
    //         else if(specis2 == 0) {
    //             printf("pomba\n");
    //         }
    //     }
    //     else if(family2 == 0){
    //         if(specis3 == 0) {
    //             printf("homen\n");
    //         }
    //         else if(specis4 == 0) {
    //             printf("vaca\n");
    //         }
    //     }
    // }

    // else if(order2 == 0) {
    //     if(family3 == 0) {
    //          if(specis5 == 0) {
    //             printf("pulga\n");                
    //         }
    //         else if(specis6 == 0) {
    //             printf("lagarta\n");
    //         }
    //     }
    //     else if(family4 == 0){
    //         if(specis7 == 0) {
    //             printf("suguessuga\n");
    //         }
    //         else if(specis8 == 0) {
    //             printf("minhoca\n");
    //         }
    //     }
    // }

    //both method are valid


    return 0;
}