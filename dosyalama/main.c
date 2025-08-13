#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
typedef struct
{
    char isim[15];
    char bolum[25];

}Ogrenci;
*/
/*
typedef struct
{
   int perfonmans[10];
   char ad[10];
   char soyad[10];


}Yarismaci;


float puanHesapla(Yarismaci *yarismaci1,int boyut)
{
    float sonuc;

    srand(time(0));
    for(int i=0;i<boyut;i++)
    {
        yarismaci1->perfonmans[i]=rand()%101;
    }

    printf("Yarismacinin aldigi puanlar:\n\n");
    for(int i=0;i<boyut;i++)
    {
        printf("%d.juri:%d\n",i+1,yarismaci1->perfonmans[i]);
    }

    Yarismaci *ara;
    ara=yarismaci1->perfonmans;

    int en_buyuk,en_kucuk;

    while(*ara!=NULL)
    {
        if(*ara<*ara+1)
        {
            en_buyuk=*ara;
        }

            *ara++;
    }

    printf("En buyuk deger:%d\nEn kucuk deger:%d",en_buyuk,en_kucuk);



    return sonuc;
}

void yazdir(Yarismaci *yarismaci)
{
    printf("Yarismacinin bilgileri:\n\nAd:%s\nSoyad:%s\n",yarismaci->ad,yarismaci->soyad);

    printf("Yarismacinin yarisma puani:%d");

}
*/
int main()
{
    /*
    FILE *dosya;

    dosya=fopen("yusuf.txt","w");

    fclose(dosya);
*/
/*
    FILE *dosya;

    char dizi[]="Yusuf";

    dosya=fopen("dizi.txt","w");

    fprintf(dosya,"Bu dosya %s'nin dosyasidir.",dizi);

    fclose(dosya);
*/
/*
    FILE *dosya;

    dosya=fopen("carpim_tablosu.txt","w");

    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            fprintf(dosya,"%dx%d=%d\n",i,j,i*j);
        }

        fprintf(dosya,"\n");
    }

    fclose(dosya);
*/
/*
    FILE *dosya;

    dosya=fopen("ogrenci.txt","a");

    Ogrenci ogrenci1;

    printf("Ogrencinin adini giriniz:");
    gets(ogrenci1.isim);

    printf("Ogrencinin bolumunu giriniz:");
    gets(ogrenci1.bolum);

    fprintf(dosya,"Ad:%s\nBolum:%s\n",ogrenci1.isim,ogrenci1.bolum);

    fprintf(dosya,"\n");

    fclose(dosya);
*/
/*
    FILE *dosya;

    dosya=fopen("ogreniyor gibiyim.txt","w");

    fputs("Deneme cart curt",dosya);

    fclose(dosya);
*/

    //fgetc()-->dosyadan tek bir karakter okur
    //fscanf()-->dosyadan bicimlendirilmis karakter dizisi okur
/*
    FILE *dosya;

    dosya=fopen("carpim_tablosu.txt","w");

    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            fprintf(dosya,"%dx%d=%d\n",i,j,i*j);
        }

        fprintf(dosya,"---------------------------------\n");
    }

    fclose(dosya);
*/

/*
    FILE *dosya;

    dosya=fopen("ogrenci.txt","w");

    char isim[10],okul[50],bolum[20];

    printf("Isim:");
    gets(isim);

    printf("Okul:");
    gets(okul);

    printf("Bolum:");
    gets(bolum);

    fprintf(dosya,"Isim:%s\nOkul:%s\nBolum:%s",isim,okul,bolum);

    fclose(dosya);
*/
/*
    FILE *dosya;

    dosya=fopen("merhaba.txt","w");

    fputs("Merhaba dunya",dosya);
    fclose(dosya);
*/

    //fgetc()-->dosyadan tek karakter okur //icine sadece pointer yazilir
    //fscanf()-->dosyadan bicimlendirilmis karakter dizisi okur //

    /*
    FILE *dosya;

    char karakter;

    dosya=fopen("deneme.txt","r");

    if(dosya!=NULL)
    {
        karakter=fgetc(dosya);

        printf("%c",karakter);
    }

    else
    {
        printf("Dosya bulunamadi ya da bos.");
    }

    fclose(dosya);
*/
/*
    FILE *dosya;

    char isim[10],soyisim[10];
    int sayi;

    if((dosya=fopen("deneme.txt","r"))!=NULL)
    {
        fscanf(dosya,"%s",&isim);
        fscanf(dosya,"%s",&soyisim);
        fscanf(dosya,"%d",&sayi);

        printf("%s %s %d",isim,soyisim,sayi);
    }

    else
    {
        printf("Dosya okunamiyor ya da dosya yok.");
        exit(0);
    }

    fclose(dosya);
*/
/*
    FILE *dosya;

    char kelime[50][20];

    int i=0;

    if((dosya=fopen("dizi.txt","r"))!=NULL)
    {
        while(!feof(dosya))
        {
            fscanf(dosya,"%s",&kelime[i]);
            printf("%s ",kelime[i]);

            i++;
        }
    }

    else
    {
        printf("Dosya okunamiyor ya da bos.");
        exit(0);
    }

    fclose(dosya);
*/
/*
    FILE *dosya;

    char numaralar[10][10],isimler[10][20];
    int notlar[10];
    int i=0;

    if((dosya=fopen("ogrenci.txt","r"))!=NULL)
    {
        while(!feof(dosya))
        {
            fscanf(dosya,"%s %s %d",&numaralar[i],&isimler[i],&notlar[i]);
            printf("%s %s %d\n",numaralar[i],isimler[i],notlar[i]);

            i++;
        }
    }

    else
    {
        printf("Dosya okunamiyor ya da dosya yok.");
        exit(0);
    }

    fclose(dosya);
*/
/*
    FILE *dosya;
    char dizi[50][30];

    int i=0;

    if((dosya=fopen("lorem.txt","r"))!=NULL)
    {
        while(!feof(dosya))
        {
            fscanf(dosya,"%s",&dizi[i]);
            printf("%s ",dizi[i]);

            i++;
        }

    }

    else
    {
        printf("Dosya okunamadi ya da dosya bos.");
        exit(1);
    }

    fclose(dosya);
*/
/*
    FILE *dosya;

    char karakter;

    if((dosya=fopen("tekerleme.txt","r"))!=NULL)
    {
        karakter=fgetc(dosya);
        while(karakter!=EOF)
        {
            printf("%c",karakter);
            karakter=fgetc(dosya);
        }
    }

    else
    {
        printf("Dosya okunamadi ya da dosya yok.");
        exit(0);
    }

    fclose(dosya);
*/
/*
    FILE *dosya;

    char cumle[50];

    int n;

    dosya=fopen("bilgi.txt","w");


    if(dosya==NULL)
    {
        printf("Dosya olusturulamadi.");
        exit(1);

    }

    else
    {
        printf("Lutfen bir cumle giriniz:");
        gets(cumle);

        printf("Lutfen cumlenin kac kere girilmesini istediginizi giriniz:");
        scanf("%d",&n);

        for(int i=0;i<n;i++)
        {
            fprintf(dosya,"satir no:%d %s\n",i+1,cumle);
        }

        fclose(dosya);
        printf("Bilgiler dosyaya yazildi.");
    }
*/
/*
    FILE *dosya;

    int n;

    char cumle[30];

    dosya=fopen("deneme.txt","w");

    if(dosya==NULL)
    {
        printf("Dosya olusturulamadi.");
    }

    else
    {
        printf("Lutfen bir cumle giriniz:");
        gets(cumle);

        printf("Kac kere?");
        scanf("%d",&n);

        for(int i=1;i<=n;i++)
        {
            fprintf(dosya,"satir:%d %s\n",i,cumle);
        }
        fclose(dosya);
        printf("Cumle dosyaya duzgunce yazildi.");

    }
*/
/*
    FILE *dosya;

    dosya=fopen("bilgi.txt","w");

    char cumle[20];

    if(dosya!=NULL)
    {
        printf("Cumle giriniz:");
        gets(cumle);

        fprintf(dosya,"%s",cumle);
        fclose(dosya);
    }

    else
    {
        printf("Dosya olusturulamadi.");
        exit(1);
    }

    char karakter;

    if((dosya=fopen("bilgi.txt","r"))!=NULL)
    {
        karakter=fgetc(dosya);

        while(!feof(dosya))
        {

            printf("%c",karakter);
            karakter=fgetc(dosya);
        }
    }

    else
    {
        printf("Dosya okunamiyor.");
        exit(1);
    }

    fclose(dosya);
*/
/*
  FILE *dosya;
  int i=1;
  char dizi[20][10];

  dosya=fopen("bilgi.txt","r");

  if(dosya==NULL)
  {
      printf("Dosya bulunamadi.");
      exit(1);
  }

  else
  {
        if((dosya=fopen("bilgi.txt","r"))==NULL)
        {
            printf("Dosya okunamiyor.");
            exit(1);
        }

        else
        {
            while(!feof(dosya))
            {
                fscanf(dosya,"%s",dizi[i]);
                printf("%s\n",dizi[i]);
                i++;
            }
            fclose(dosya);
            printf("Konsola yazdirma islemi basarili.");
        }


  }
*/
/*
    Yarismaci *yarismaci1;

    int boyut=sizeof(yarismaci1->perfonmans)/sizeof(yarismaci1->perfonmans[0]);

    puanHesapla(yarismaci1);
*/

    return 0;
}
