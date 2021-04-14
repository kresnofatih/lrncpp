#include <iostream>
#include <string>

struct aktor{
    std::string nama;
    int umur;
};

struct film {
    std::string judul;
    std::string genre;
    int tahun;
    aktor pemeran1;
    aktor pemeran2;
};

int main(){

    aktor aktor1, aktor2;

    aktor1.nama = "RDJ";
    aktor1.umur = 56;

    aktor2.nama = "Emma Watson";
    aktor2.umur = 25;

    film film1;
    film1.judul = "Ironman";
    film1.genre = "action";
    film1.tahun = 2004;
    film1.pemeran1 = aktor1;
    film1.pemeran2 = aktor2;

    std::cout << film1.judul << std::endl;
    std::cout << film1.pemeran1.nama << std::endl;
    std::cout << film1.pemeran2.nama << std::endl;

    return 0;
}