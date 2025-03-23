#include <iostream>

using namespace std;

struct Mahasiswa{
    string nama;
    string nim;
};

int main(){

    Mahasiswa mhs[100];

    for (int i = 0; i < 3; i++)
    {
        cout << "masukkan nama";
        cin >> mhs[i].nama;
        cout << "masukkan nuim";
        cin >> mhs[i].nim;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << mhs[i].nama << endl;
        cout << mhs[i].nim << endl;
    }
    
    
    // mhs[0].nama = "furina";
    // mhs[0].nim = "123";

    // mhs[1].nama = "ines";
    // mhs[1].nim = "222"

    // for (int i = 0; i < 2; i++)
    // {
    //     cout << mhs[i].nama << endl;

    // }

    // for (int i = 0; i < 2; i++)
    // {
    //     /* code */
    //     cout << mhs[i].nama << endl;
    // }
    
    

    // // 1
    // struct Mahasiswa {
    //     string nama;
    //     int nim;
    // };

    // Mahasiswa      mahasiswa;

    // mahasiswa{"ines", 22222}
    // mahasiswa.nama = "furina";
    // mahasiswa.nim = 444;
    // cout << mahasiswa.nama << endl;
    // cout << mahasiswa.nim;



    // nested struct
    // struct Nilai
    // {
    //     /* data */
    //     int uts;
    //     int uas;
    // };

    // struct Data
    // {
    //     /* data */
    //     string nama;
    //     int nim;
    // };
    
    

    // // nested ditaruh di bawah struc lainnya
    // struct Mahasiswa {
    //     Data data;
    //     Nilai nilai;
    
    // };

    // // akses nested
    // Mahasiswa mhs;
    // // stryc utaman         //data    //nama variabel    //hasil
    // mhs.                   data.      nama =            "eyja";
    // mhs.nilai.uts = 100;

    // cout << mhs.data.nama << endl;
    // cout << mhs.nilai.uts << endl;

}