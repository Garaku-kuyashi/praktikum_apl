#include <iostream>

using namespace std;

// maksimal data 20
#define max 20

int main(){
    // variabl array
    int pos = 3;
    int pilih;
    string karakter[max] = {"Eyjafjalla", "Ines", "Nymph" };
    string deskripsi[max] = {"Dengan nama asli Adele Nauman, dan seorang putri dari mendiang Katia dan Magna Nauman yaitu pasangan vulcanologist yang terkenal dari Leithanien",
        "Ines adalah tentara bayaran yang aktif selama perang kazdel,bersama dengan W dan Hoederer dalam satu regu ",
        "Seorang warga kazdel yang bergabung dengan Rhodes Island, memiliki keahlian dalam originium arts dan bakat alaminya sebagai djall"};
    string kelas[max] = {"Caster", "Vanguard","Caster"};
    string branch[max] = {"Core caster","Agent","Primal caster"};
    string tipe[max] = {"Arts","Pyshical","Arts"};
    string loop;

    // proses login
    string username;
    string password;
    string userbenar = "M.Fahrianor";
    string passbenar = "2409106089";
    int gagal = 3;

    while (gagal > 0) {
        cout << "Masukkan username anda doktah: ";
        cin >> username;
        cout << "Masukkan password anda doktah: ";
        cin >> password;
        
        if (username == userbenar && password == passbenar) {
            break; 
        } else {
            gagal--;
            cout << "" << endl;
            cout << "Kesempatan kamu untuk masuk hanya tersisa " << gagal << ". Jika kamu gagal login maka kamu bukanlah doktah" << endl;
        }
        
        if (gagal == 0) {
            system("cls");
            cout << "===================================" << endl;
            cout << "Kamu gagal. Kamu diblokir dari PRTS" << endl;
            cout << "===================================" << endl;
            return 0;
        }
    }

    // menu utama
    do
    {
        system("cls");
        cout << "=========================================================" << endl;
        cout << "Selamat datang doktah apa yang akan anda lakukan hari ini" << endl;
        cout << "=========================================================" << endl;
        cout << "" << endl;
        cout << "==========================" << endl;
        cout << "1. Tambah data operator\n";
        cout << "2. Lihat data operator\n";
        cout << "3. Update data operator\n";
        cout << "4. Hapus data operator\n";
        cout << "5. Keluar" << endl;
        cout << "==========================" << endl;
        cout << "" << endl;
        cout << "Siahkan dipilih doktah: ";
        cin >> pilih;
        cin.ignore();

        // proses tambah data
        if (pilih == 1)
        {
            system("cls");
            do
            {
                if (pos >= max)
                {
                    system("cls");
                    cout << "========================" << endl;
                    cout << "Data sudah max doktah\n";
                    cout << "========================" << endl;
                    cout << "" << endl;
                    cout << "Tekan enter untuk kembali: ";
                    cin.get();
                    break;
                    
                }else if (pos < max){
                    system("cls");
                    cout << "==========================================================================" << endl;
                    cout << "Masukkan nama operator: ";
                    getline(cin, karakter[pos]);
                    cout << "Masukkan deskripsi operator: ";
                    getline(cin, deskripsi[pos]);
                    cout << "Masukkan class operator: ";
                    getline(cin, kelas[pos]);
                    cout << "Masukkan branch operator: ";
                    getline(cin, branch[pos]);
                    cout << "Masukkan tipe serangan: ";
                    getline(cin, tipe[pos]);
                    cout << "==========================================================================" << endl;

                    pos++;
                    cout << "" << endl;
                    cout << "Apakah anda ingin menambah operator lagi doktah? (y/n): ";
                    cin >> loop;
                    cin.ignore();
                }
                
            } while (loop == "y");
            
        // proses lihat data
        }else if (pilih == 2) {
            system("cls");
            if (pos > 0) {
                cout << "Data tersimpan:\n";
                for (int a = 0; a < pos; a++) {
                    cout << a + 1 << ". Nama         : " << karakter[a] << endl;
                    cout << "   Deskripsi    : " << deskripsi[a] << endl;
                    cout << "   Kelas        : " << kelas[a] << endl;
                    cout << "   Branch       : " << branch[a] << endl;
                    cout << "   Tipe Serangan: " << tipe[a] << endl;
                    cout << "----------------------------------" << endl;
                }
            } else {
                cout << "Data kosong\n";
            }
            cout << "Tekan enter untuk kembali: ";
            cin.get();
            
        // proses update data
        }else if (pilih == 3)
        {
            if (pos > 0)
            {
                int y;
                
                do
                {
                    system("cls");
                    cout << "================================" << endl;
                    cout << "Daftar Operator yang Tersimpan:\n";
                    cout << "================================" << endl;
                    for (int a = 0; a < pos; a++) {
                        cout << a + 1 << ". " << karakter[a] << endl;
                    }
                    
                    cout << "===========================================" << endl;
                    cout << "Tekan 0 jika ingin kembali ke menu utama" << endl;
                    cout << "===========================================" << endl;
                    cout << "" << endl;
                    cout << "\nMasukkan nomor operator yang ingin diupdate: ";
                    cin >> y;
                    cin.ignore();

                    if (y == 0 )
                    {
                        cout << "Kita kembali ke menu utama doktah\n";
                        break;
                    } else if(y > 0 && y <= pos)
                    {
                        system("cls");
                        cout << "==========================================================================" << endl;
                        cout << "Update nama operator menjadi: ";
                        getline(cin, karakter[y-1]);
                        cout << "Update deskripsi operator menjadi: ";
                        getline(cin, deskripsi[y-1]);
                        cout << "Update class operator menjadi: ";
                        getline(cin, kelas[y-1]);
                        cout << "Update branch operator menjadi: ";
                        getline(cin, branch[y-1]);
                        cout << "Update tipe serangan operator menjadi: ";
                        getline(cin, tipe[y-1]);
                        cout << "Data operator berhasil di update silahkan lihat pada bagian lihat data\n";
                        cout << "==========================================================================" << endl;
                    }else {
                        cout << "=================================================================" << endl;
                        cout << "Data operator tidak ada mohon untuk memasukkan nomor yang benar" << endl;
                        cout << "=================================================================" << endl;
                    }
                    cout << "" << endl;
                    cout << "Apakah doktah ingin update operator lagi? (y/n): ";
                    cin >> loop;
                } while (loop == "y");   
            }
            
        //proses hapus data 
        }else if (pilih == 4)
        {
            if (pos > 0)
            {
                int x;
                
                do
                {
                    system("cls");
                    cout << "================================" << endl;
                    cout << "Daftar Operator yang Tersimpan:\n";
                    cout << "================================" << endl;
                    for (int a = 0; a < pos; a++) {
                        cout << a + 1 << ". " << karakter[a] << endl;
                    }
                    
                    cout << "===========================================" << endl;
                    cout << "Tekan 0 jika ingin kembali ke menu utama" << endl;
                    cout << "===========================================" << endl;
                    cout << "" << endl;
                    cout << "\nMasukkan nomor operator yang ingin dihapus: ";
                    cin >> x;
                    cin.ignore();
                    
                    if (x == 0)
                    {
                        cout << "Kita kembali ke menu utama doktah\n";
                        break;
                    }else if (x > 0 && x <= pos)
                    {
                        for (int i = x; i < pos; i++)
                        {
                            karakter[i-1] = karakter[i];
                            deskripsi[i-1] = deskripsi[i];
                            kelas[i-1] = kelas[i];
                            branch[i-1] = branch[i];
                            tipe[i-1] = tipe[i];
                        }
                        pos--;
                        
                        system("cls");
                        cout << "===============================" << endl;
                        cout << "Data operator berhasil dihapus" << endl;
                        cout << "===============================" << endl;
                        
                    }else{
                        cout << "=================================================================" << endl;
                        cout << "Data operator tidak ada mohon untuk memasukkan nomor yang benar"<< endl;
                        cout << "=================================================================" << endl;
                    }
                    cout << "" << endl;
                    cout << "Apakah doktah ingin menghapus lagi operator lagi? (y/n): ";
                    cin >> loop;
                } while (loop == "y");   
            } 
        
        //proses log out
        }else if (pilih == 5)
        {
            system("cls");
            cout << "======================" << endl;
            cout << "Selamat tinggal doktah"<< endl;
            cout << "======================" << endl;
            break;
        }   
    } while (pilih != 5);
    return 0;
}