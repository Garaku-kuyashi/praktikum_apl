#include <iostream>

using namespace std;

// maksimal data 20
#define max 20
int pos = 3;

// struct
struct Operator
{
    string karakter;
    string deskripsi;
    string kelas;
    string branch;
    string tipe;
};
Operator op[max];
void dataawal(){
    op[0].karakter = "Eyjafjalla";
    op[0].deskripsi = "Dengan nama asli Adele Nauman, dan seorang putri dari mendiang Katia dan Magna Nauman yaitu pasangan vulcanologist yang terkenal dari Leithanien";
    op[0].kelas = "Caster";
    op[0].branch =  "Core caster";
    op[0].tipe = "Arts";
    
    op[1].karakter = "Ines";
    op[1].deskripsi = "Ines adalah tentara bayaran yang aktif selama perang kazdel,bersama dengan W dan Hoederer dalam satu regu";
    op[1].kelas = "Vanguard";
    op[1].branch = "Agent";
    op[1].tipe = "Physical";
    
    op[2].karakter = "Nymph";
    op[2].deskripsi =  "Seorang warga kazdel yang bergabung dengan Rhodes Island, memiliki keahlian dalam originium arts dan bakat alaminya sebagai djall";
    op[2].kelas = "Caster";
    op[2].branch ="Primal caster";
    op[2].tipe = "Arts";
}


bool login(string userbenar, string passbenar) {
    string username;
    string password;
    int gagal = 3;

    while (gagal > 0) {
        cout << "Masukkan username anda doktah: ";
        cin >> username;
        cout << "Masukkan password anda doktah: ";
        cin >> password; 
        if (username == userbenar && password == passbenar) {
            return true;
        }else {
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
    return false;
}

void tambahdata(Operator op[], int &pos){
    string loop;
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
                    getline(cin, op[pos].karakter);
                    cout << "Masukkan deskripsi operator: ";
                    getline(cin, op[pos].deskripsi);
                    cout << "Masukkan class operator: ";
                    getline(cin, op[pos].kelas);
                    cout << "Masukkan branch operator: ";
                    getline(cin, op[pos].branch);
                    cout << "Masukkan tipe serangan: ";
                    getline(cin, op[pos].tipe);
                    cout << "==========================================================================" << endl;
                    pos++;
                    cout << "" << endl;
                    cout << "Apakah anda ingin menambah operator lagi doktah? (y/n): ";
                    cin >> loop;
                    cin.ignore();
                }
                
            } while (loop == "y");
}

void lihatope(Operator op[], int &pos){
    string loop;
    system("cls");
            if (pos > 0) {
                cout << "Data tersimpan:\n";
                for (int a = 0; a < pos; a++) {
                    cout << a + 1 << ". Nama         : " << op[a].karakter << endl;
                    cout << "   Deskripsi    : " << op[a].deskripsi << endl;
                    cout << "   Kelas        : " << op[a].kelas << endl;
                    cout << "   Branch       : " << op[a].branch << endl;
                    cout << "   Tipe Serangan: " << op[a].tipe << endl;
                    cout << "----------------------------------" << endl;
                }
            } else {
                cout << "Data kosong\n";
            }
            cout << "Tekan enter untuk kembali: ";
            cin.get();
}

void updateope(Operator op[], int pos){
    string loop;
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
                        cout << a + 1 << ". " << op[a].karakter << endl;
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
                        getline(cin, op[y-1].karakter);
                        cout << "Update deskripsi operator menjadi: ";
                        getline(cin, op[y-1].deskripsi);
                        cout << "Update class operator menjadi: ";
                        getline(cin, op[y-1].kelas);
                        cout << "Update branch operator menjadi: ";
                        getline(cin, op[y-1].branch);
                        cout << "Update tipe serangan operator menjadi: ";
                        getline(cin, op[y-1].tipe);
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
}

void hapusope(Operator op[], int &pos){
    string loop;
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
                        cout << a + 1 << ". " << op[a].karakter << endl;
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
                            op[i-1].karakter = op[i].karakter;
                            op[i-1].deskripsi = op[i].deskripsi;
                            op[i-1].kelas = op[i].kelas;
                            op[i-1].branch = op[i].branch;
                            op[i-1].tipe = op[i].tipe;
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
}

void logout(){
    system("cls");
            cout << "======================" << endl;
            cout << "Selamat tinggal doktah"<< endl;
            cout << "======================" << endl;
}

int main(){ 
    int pilih;

    string username = "M.Fahrianor";
    string password = "2409106089";

    if (!login(username, password)) {
        return 0; // keluar dari program kalau gagal login
    }


    dataawal();

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
        if (pilih == 1)
        {
            tambahdata(op, pos);
        }else if (pilih == 2)
        {
            lihatope(op, pos);
        }else if (pilih == 3)
        {
            updateope(op, pos);
        }else if (pilih == 4)
        {
            hapusope(op, pos);
        }else if (pilih == 5)
        {
            logout();
            break;
        }
    } while (pilih != 5);
    return 0;
}