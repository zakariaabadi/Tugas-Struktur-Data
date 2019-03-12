#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
char nim[17], nama [20], jenis_kelamin[7], jurusan [8] ;
int main()
{
int data[5];
int i, total, rata, tmp;

                cout<<"Isikan Data Diri Mahasiswa "<<endl;
                cout<<"<------------------------->"<<endl;
                cout<<"Isikan NIM :";gets(nim);
                cout<<"Isikan Nama Lengkap :";gets(nama);
                cout<<"Isikan Jenis Kelamin :";gets(jenis_kelamin);
                cout<<"Isikan Jurusan :";gets(jurusan);
                cout<<"<-------------------------->"<<endl;
                cout<<"Isikan Nilai Harian Mahasiswa : "<<endl;
                    total=0;
                    for(i=0; i<3; i++)
                    {
                        cout<<"Isikan Nilai ke-"<<(i+1)<<" : "; cin>>data[i];
                        total = total+data[i];
                    }
                cout<<endl;
                cout<<"<----------------------------------------------------------->"<<endl;
                cout<<"Mahasiswa bernama "<<nama<<" Memiliki nilai sebagai berikut:"<<endl;
                                for(i=0;i<3;i++){
                                cout<<"["<<(0)<<" "<<(i)<<" ] : "<< data [i]<<" "<<endl; }
                                cout<<"<-------------------------->"<<endl;
                                cout<<"Rata-rata "<<nama<<":"<<endl;
                                {
                                    rata = total / 3;
                                    cout<<"Nilai Total : "<<total<<endl;
                                    cout<<"Rata - Rata : "<<rata<<endl;
                                }


    getch();

}
