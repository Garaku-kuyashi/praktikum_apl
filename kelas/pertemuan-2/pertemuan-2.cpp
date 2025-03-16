//array

#include <iostream>

using namespace std;

#define MAX_BUAH 100 // Ukuran maksimum array buah
int panjang = 0; // Jumlah elemen saat ini
string buah[MAX_BUAH]; // Array dengan ukuran tetap
int pilihan, index;

int main(){

    // string nama[] = {"andi" , "budi", "caca", "deni", "euis"};


    // string nama[4][5] = {

    //     {"andi" , "infor", "123", "deni"},
    //     {"andi" , "budi", "caca", "deni"},
    //     {"andi" , "budi", "caca", "deni"},
    //     {"andi" , "budi", "caca", "deni"}
    // };

    // cout << nama [0] [3] << endl;
    // cout << nama [3] [1] << endl;
    // cout << sizeof(nama)/ sizeof(string) << endl;

    // int panjang =sizeof(nama) / sizeof(nama[0]);
    // cout << sizeof(nama) / sizeof(nama[0])<< endl;
    // cout << nama[0] << endl;
    // cout << nama[-5] << endl;
    // cout << sizeof(nama) / sizeof(string)<< endl;
    // cout << sizeof(string) << endl;

    // for( int i = 0; i < panjang; i++){
    //     cout << nama[i] << endl;
    // }

    // for (int x : nama){
    //     cout << x << endl;
    // }


//tiga dimensi

// int arr[3][3][3] = {
//     {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
//     },
//     {
//     {10, 11, 12},
//     {13, 14, 15},
//     {16, 17, 18}
//     },
//     {
//     {19, 20, 21},
//     {22, 23, 24},
//     {25, 26, 27}
//     }
//     };
//     cout << arr[1][2][1] << endl;


//crud 1 dimensi

while (true)
{
    cout << "Menu Program" << endl;
    cout << "1. Tampilkan Buah" << endl;
    cout << "2. Tambah Buah" << endl;
    cout << "3. Ubah Buah" << endl;
    cout << "4. Hapus Buah" << endl;
    cout << "5. Keluar" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;

    if (pilihan == 1)
    {
        
        if (panjang > 0)
        {
            for (int i = 0; i < panjang; i++) {
                cout << "Buah ke-" << i + 1 << ": " << buah[i] << endl;
        }
        

    }else if (pilihan == 2)
    {
        if (panjang < MAX_BUAH) {
            cout << "Masukkan nama buah: ";
            cin.ignore();
            getline(cin, buah[panjang]);
            panjang++;
            cout << "Buah berhasil ditambahkan" << endl;
            } else {
            cout << "Kapasitas penuh! Tidak bisa menambah buah lagi."
            << endl;
            }
    }else if (pilihan == 3)
    {
        if (panjang > 0)
        {
            for (int i = 0; i < panjang; i++) {
                cout << "Buah ke-" << i + 1 << ": " << buah[i] << endl;
                }
                cout << "Masukkan nomor buah yang akan dihapus: ";
                cin >> index;
                if (index > 0 && index <= panjang) {
                for (int i = index - 1; i < panjang - 1; i++) {
                buah[i] = buah[i + 1]; // Ngegeser elemen ke kiri kek nimpa jadinya
                }
                panjang--;
                cout << "Buah berhasil dihapus" << endl;
                } else {
                cout << "Nomor buah tidak valid" << endl;
                }
        }
        
    }
    
    
    

}


    return 0;
}