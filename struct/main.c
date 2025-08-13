#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
typedef struct
{

}Student;
*/                  //Normal struct ile tek farki structin ismi kume parantezinin sonuna gelir ve main icinde degisken tanimlarken basina struct yazilmaz

/*
typedef struct
{
    char ad[10];
    char soyad[10];
    int no;


}Ogrenci;
*/

/*
typedef struct
{

int no;
char ad[10];
char soyad[10];
int yas;


}ogrenci_bilgi;
*/
/*
typedef struct
{

char isim[10];
float x;
float y;

}Nokta;


void insert(Nokta dizi[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%s=%f,%f\n",dizi[i].isim,dizi[i].x,dizi[i].y);
    }
}
*/
/*
typedef struct
{
    char ad[15];
    int kurulus;

}Takim;

typedef struct
{
    char isim[15];
    int yas;
    Takim *takim;

}Futbolcu;
*/

/*
int main()
{

 //   Ogrenci yusuf;

//  Ogrenci yusuf={"Yusuf","Cil",12};
/*
    strcpy(yusuf.ad,"Yusuf");
    strcpy(yusuf.soyad,"Cil");
    yusuf.no=12;
*/
 //   printf("Ad: %s\nSoyad: %s\nNo: %d",yusuf.ad,yusuf.soyad,yusuf.no);

/*
 ogrenci_bilgi ogrenci1={12,"Yusuf","Cil",21};
 ogrenci_bilgi ogrenci2;

 ogrenci2=ogrenci1;

 printf("1.ogrenci:\nNo:%d\nAd:%s\nSoyad:%s\nYas:%d\n\n\n",ogrenci1.no,ogrenci1.ad,ogrenci1.soyad,ogrenci1.yas);
 printf("2.ogrenci:\nNo:%d\nAd:%s\nSoyad:%s\nYas:%d",ogrenci2.no,ogrenci2.ad,ogrenci2.soyad,ogrenci2.yas);
*/

/*
 Nokta P;

 P.x=3;
 P.y=2;

 printf("P nooktasinin koordinat eksenindeki konumu:\nx:%.3f\ty:%.3f",P.x,P.y);
*/
/*
Nokta dizi[5]={{"A",2,3},{"B",2,5},{"C",4,6},{"D",3.22,8},{"E",7,8}};

insert(dizi,5);
*/
/*
    Takim *tk;
    tk=(Takim*)malloc(sizeof(Takim));

    strcpy(tk->ad,"Besiktas");
    tk->kurulus=1903;

    Futbolcu ortasaha;
    ortasaha.yas=21;
    strcpy(ortasaha.isim,"Yusuf");

    ortasaha.takim=tk;

    printf("Bilgiler:\n\n%s %d %s",ortasaha.takim->ad,ortasaha.takim->kurulus,ortasaha.isim); //bu satir cok kritik hojam

    free(tk);

    return 0;
}
*/
