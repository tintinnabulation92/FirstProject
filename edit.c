#include <stdio.h>

int main(void)
{


printf("Welcome to CD record shop! \nPress 1 in order to show the contents already stored. Press 2 in order to add elements");
int _decision; // showing stored elements or adding new elements
char _title[20];
char _artist[20];
int _numOfTracks;
char _type[6]; // single or album
float _price;

    /*switch(_decision)
    {
    case 1:
        break;
    case 2:
        break;
    }*/

printf("\n Enter the following... ");

    printf("Enter the title:");
    scanf("%s", &_title);

    printf("\nEnter the artist");
    scanf("%s", &_artist);

    printf("\nEnter the number of tracks");
    scanf("%d", &_numOfTracks);

    printf("\nEnter the type. Type: album/single");
    scanf("%s", &_type);

    printf("\nEnter the price");
    scanf("%f", &_price);

printf("Elements of the shop. \n========================================\n1.Title: %s. \n2.Artist : %s.\n3.Number of tracks: %d\n",_title,_artist,_numOfTracks);
printf("This is a type : %s. It cost's %.2f $.\n===========================================",_type,_price);
}



