
#include <stdio.h>

//EXERCICE1//
int EXERCICE1()
{
    int a = 0 , b = 0 ;
    while (a > b) ;
    printf("Saisir l'entier a .\n") ;
    scanf("%d", &a) ;
}

//EXERCICE2//
   int EXERCICE2()
  {
    int largeurRectangle = 0 , longueurRectangle = 0 , perimetreRectangle = 0 , aireRectangle = 0 ;
    perimetreRectangle = (largeurRectangle + longueurRectangle) * 2 ;
    aireRectangle = (largeurRectangle * longueurRectangle) ;
    return 0 ;
  }


//EXERCICE3//
int EXERCICE3()
{
    int n = 0 ;
    if (n % 2 == 0 && n >= 10)
    {
        printf("n est un multiple de 3 et est supérieur ou égale à 10");
    }
        scanf("d" , &n) ;

}

//EXERCICE4//
int EXERCICE4()
{
    int age = 0 ;
    int etudiant = 0 ;
    if (age >= 0 && age < 12 )
    {
        printf("Vous bénificiez du tarif enfant à 4 euros \n ");
    }
    else if (age >= 12 && age <= 17 )
    {
        printf("Vous bénificiez du tarif jeune à 6 euros \n ");
    }
    else if (age >= 17 && age <= 27 )
    {
        printf ("Etes vous étudiant ? oui : 1 , non : 0 : \n");
        scanf("%d" , &etudiant);
        if (etudiant == 1)
        {
            printf("Vous bénificiez du tarif jeune à 6 euros \n ");
        }
        else if (etudiant == 0)
        {
            printf("Vous bénificiez du tarif plein à 9 euros \n ");
        }
    }
    else if (age >= 12 && age <= 27 )
    {
        printf("Vous bénificiez du tarif jeune à 6 euros \n ");
    }
    else if (age >= 65 )
    {
        printf("Vous bénificiez du tarif sénior à 6 euros \n ");
    }
    else
    {
        printf("Vous bénificiez du tarif plein à 9 euros \n ");
    }
}

//EXERCICE5//
int EXERCICE5()
{
    int numboisson = 0 ;
    printf("Entrez le numéro de votre boisson : \n");
    scanf("%d" , &numboisson) ;
    if ( numboisson == 1 )
    {
        printf("Vous avez choisi la boisson froide: Sprite \n ");
    }
    else if ( numboisson == 2 )
    {
        printf("Vous avez choisi la boisson foide : Coca \n ");
    }
    else if ( numboisson == 3 )
    {
        printf("Vous avez choisi la boisson froide: Vimto \n ");
    }
    else if ( numboisson == 10 )
    {
        printf(" Vous avez choisi la boisson chaude : Thé \n ");
    }
    else if ( numboisson == 11 )
    {
        printf(" Vous avez choisi la boisson chaude  : Café \n ");
    }
    else
    {
        printf(" ERREUR : La boisson choisie n'existe pas \n ");
    }
}


//EXERCICE6//
int EXERCICE6()
{
    int s=0 ;
    float moy = 0;
    int note1 = 14 , note2 = 15 , note3 = 18 ;
    for (note1 <= 20 && note1 >= 0 && note2 <= 20 && note2 >= 0 && note1 <= 20 && note2 >= 0)
    (moy = (note1 + note2 + note3) / 3) ;
}




int main()
    {
        //EXERCICE1();//
        //EXERCICE2();//
        //EXERCICE3();//
        //EXERCICE4();//
        //EXERCICCE5();//
        //EXERCICE6();//
    }





