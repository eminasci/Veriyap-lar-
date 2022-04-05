// Veriyapıları.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <chrono>


using namespace std;


int main()
{
    int sira, deger;
    int arr[2000];
    int* bas;
    bas = &arr[0];
    int sayac = 2000;
    int x;



    struct Arraylist;
    {    
        
        baslangic:
        cout << "1-Olustur " << endl << "2-Ekle" << endl << "3-Guncelle" << endl << "4-Sil" << endl << "5-Yazdir" << endl << "6-Bosalt"<<endl;
        cin >> x;

        switch (x)
        {
        case 1:
            void olustur();
            {   auto begin = std::chrono::high_resolution_clock::now();
                
                for
                    (int i = 0;i < 2000;i++)
                    arr[i] = i;
                
                auto end = std::chrono::high_resolution_clock::now();
                auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
                cout << "Olusturma suresi => " << elapsed.count() << " mikro-saniye" << endl;



            }
            goto baslangic;
        case 2:
            void ekle();
            {
                auto begin = std::chrono::high_resolution_clock::now();

                cout << "eklemek istediginiz sirayi giriniz:";
                cin >> sira;
                cout << "eklemek istediginiz degeri giriniz:";
                cin >> deger;
                arr[sira] = deger;
                sayac = sayac + 1;

                if (sira > 2000)
                {
                    int* arr = new int[sira];
                    for (int i = 0;sira >= i; i++);

                }
                auto end = std::chrono::high_resolution_clock::now();
                auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
                cout << "Ekleme suresi => " << elapsed.count() << " mikro-saniye" << endl;
                
            }
            goto baslangic;
         case 3:
           void guncelle();
           {
               int sira1, deger1;
               cout << "guncellemek istediginiz sirayi giriniz:";
               cin >> sira1;
               cout << "guncellemek istediginiz degeri giriniz:";
               cin >> deger1;
               arr[sira1] = deger1;
           }
           goto baslangic;
        case 4: 

           void sil();
           {
               auto begin = std::chrono::high_resolution_clock::now();
               
               int sira2;
               cout << "silmek istediginiz sirayi giriniz";
               cin >> sira2;
               arr[sira2] = NULL;
               sayac = sayac - 1;

               auto end = std::chrono::high_resolution_clock::now();
               auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
               cout << "silme suresi => " << elapsed.count() << " mikro-saniye" << endl;

           }
           goto baslangic;
        case 5:

           void yazdir();
           {
               for (int i = 0; sayac > i;i++)
                   cout << arr[i] << endl;
           }
           goto baslangic;
        case 6:
           void bosalt();
           {
               for (int i = sayac;i < 0;i--)
                   arr[i] = NULL;
           }
           goto baslangic;



        }
       

     

    
           



       


        









    }
    

}



