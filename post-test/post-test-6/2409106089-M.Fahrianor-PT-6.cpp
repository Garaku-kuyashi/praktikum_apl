#include <iostream>
#include <iomanip> // << tambahan
using namespace std;
// maksimal data 20
#define max 20
int pos = 8;

// struct
struct Operator
{
    int kode;
    string karakter;
    string deskripsi;
    string kelas;
    string branch;
    string tipe;
};
Operator op[max];
Operator temp[max];
void dataawal(){
    op[0].kode = 215;
    op[0].karakter = "Eyjafjalla";
    op[0].deskripsi = "Nama asli Adele Nauman";
    op[0].kelas = "Caster";
    op[0].branch =  "Core caster";
    op[0].tipe = "Arts";
    
    op[1].kode = 02;
    op[1].karakter = "Ines";
    op[1].deskripsi = "Ines adalah tentara bayaran";
    op[1].kelas = "Vanguard";
    op[1].branch = "Agent";
    op[1].tipe = "Physical";
    
    op[2].kode = 182;
    op[2].karakter = "Nymph";
    op[2].deskripsi =  "Seorang warga kazdel";
    op[2].kelas = "Caster";
    op[2].branch ="Primal caster";
    op[2].tipe = "Arts";

    op[3].kode = 003;
    op[3].karakter = "Kal'tsit";
    op[3].deskripsi =  "Kepala medis rhodes";
    op[3].kelas = "Medic";
    op[3].branch ="Medic";
    op[3].tipe = "Arts";

    op[4].kode = 143;
    op[4].karakter = "Cantabile";
    op[4].deskripsi =  "Seorang assassin bolivar";
    op[4].kelas = "Vanguard";
    op[4].branch ="Agent";
    op[4].tipe = "Physical";

    op[5].kode = 22;
    op[5].karakter = "Virtuosa";
    op[5].deskripsi =  "Kriminal laterano";
    op[5].kelas = "Supporter";
    op[5].branch ="Ritualist";
    op[5].tipe = "Arts";

    op[6].kode = 20;
    op[6].karakter = "Qiubai";
    op[6].deskripsi =  "Petualang dari Yan";
    op[6].kelas = "Guard";
    op[6].branch ="Lord";
    op[6].tipe = "Physical";

    op[7].kode =117;
    op[7].karakter = "Weedy";
    op[7].deskripsi =  "Operator original";
    op[7].kelas = "Specialist";
    op[7].branch ="Push Stroker";
    op[7].tipe = "Arts";
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

void tambahdata(Operator *op, int *pos){
    string loop;
    system("cls");
            do
            {
                if (*pos >= max)
                {
                    system("cls");
                    cout << "========================" << endl;
                    cout << "Data sudah max doktah\n";
                    cout << "========================" << endl;
                    cout << "" << endl;
                    cout << "Tekan enter untuk kembali: ";
                    cin.get();
                    break;
                }else if (*pos < max){
                    system("cls");
                    cout << "==========================================================================" << endl;
                    cout << "Masukkan kode operator: ";
                    cin >> op[*pos].kode;
                    cin.ignore();
                    cout << "Masukkan nama operator: ";
                    getline(cin, op[*pos].karakter);
                    cout << "Masukkan deskripsi operator: ";
                    getline(cin, op[*pos].deskripsi);
                    cout << "Masukkan class operator: ";
                    getline(cin, op[*pos].kelas);
                    cout << "Masukkan branch operator: ";
                    getline(cin, op[*pos].branch);
                    cout << "Masukkan tipe serangan: ";
                    getline(cin, op[*pos].tipe);
                    cout << "==========================================================================" << endl;
                    (*pos)++;
                    cout << "" << endl;
                    cout << "Apakah anda ingin menambah operator lagi doktah? (y/n): ";
                    cin >> loop;
                    cin.ignore();
                }
                
            } while (loop == "y");
}

void lihatope(Operator *op, int *pos) {
    system("cls");
    if (*pos > 0) {
        cout << "Data Operator Tersimpan:\n\n";
    
        cout << "+====+=======+==============+=============================+===============+================+===============+\n";
        cout << "| No | Kode  | Nama         | Deskripsi                   | Kelas         | Branch         | Tipe          |\n";
        cout << "+====+=======+==============+=============================+===============+================+===============+\n";
        
        for (int a = 0; a < *pos; a++) {
            cout << "| " << setw(2) << a + 1 << " ";
            cout << "| " << setw(6) << left << to_string(op[a].kode).substr(0, 6);
            cout << "| " << setw(13) << left << op[a].karakter.substr(0,13);
            cout << "| " << setw(28) << left << op[a].deskripsi.substr(0,28);
            cout << "| " << setw(14) << left << op[a].kelas.substr(0,14);
            cout << "| " << setw(15) << left << op[a].branch.substr(0,15);
            cout << "| " << setw(14) << left << op[a].tipe.substr(0,14) << "|\n";
        }
        
        cout << "+====+=======+==============+=============================+===============+================+===============+\n";
    } else {
        cout << "Data kosong\n";
    }
    cout << "Tekan enter untuk kembali: ";
    cin.get();
}


void updateope(Operator *op, int *pos){
    string loop;
    if (*pos > 0)
            {
                int y;
                do
                {
                    system("cls");
                    cout << "================================" << endl;
                    cout << "Daftar Operator yang Tersimpan:\n";
                    cout << "================================" << endl;
                    for (int a = 0; a < *pos; a++) {
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
                    } else if(y > 0 && y <= *pos)
                    {
                        system("cls");
                        cout << "==========================================================================" << endl;
                        cout << "update kode operator: ";
                        cin >> op[y-1].kode; 
                        cin.ignore();
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

void hapusope(Operator *op, int *pos){
    string loop;
    if (*pos > 0)
            {
                int x;
                
                do
                {
                    system("cls");
                    cout << "================================" << endl;
                    cout << "Daftar Operator yang Tersimpan:\n";
                    cout << "================================" << endl;
                    for (int a = 0; a < *pos; a++) {
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
                    }else if (x > 0 && x <= *pos)
                    {
                        for (int i = x; i < *pos; i++)
                        {
                            op[i-1].kode = op[i].kode; 
                            op[i-1].karakter = op[i].karakter;
                            op[i-1].deskripsi = op[i].deskripsi;
                            op[i-1].kelas = op[i].kelas;
                            op[i-1].branch = op[i].branch;
                            op[i-1].tipe = op[i].tipe;
                        }
                        (*pos)--;
                        
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

// Fungsi untuk bubble sort data berdasarkan kode operator
void lihatope_bubble(Operator *op, int *pos){
    if (*pos > 0) {
        for (int i = 0; i < *pos; i++) {
            temp[i] = op[i];
        }

        for (int i = 0; i < *pos - 1; i++) {
            for (int j = 0; j < *pos - i - 1; j++) {
                if (temp[j].kode < temp[j+1].kode) {
                    Operator t = temp[j];
                    temp[j] = temp[j+1];
                    temp[j+1] = t;
                }
            }
        }

        system("cls");
        cout << "Data Operator Tersimpan (Sudah Diurutkan Berdasarkan Kode):\n\n";
        
        cout << "+====+=======+==============+=============================+===============+================+===============+\n";
        cout << "| No | Kode  | Nama         | Deskripsi                   | Kelas         | Branch         | Tipe          |\n";
        cout << "+====+=======+==============+=============================+===============+================+===============+\n";
        
        for (int a = 0; a < *pos; a++) {
            cout << "| " << setw(2) << a + 1 << " ";
            cout << "| " << setw(6) << left << to_string(temp[a].kode).substr(0, 6);
            cout << "| " << setw(13) << left << temp[a].karakter.substr(0,13);
            cout << "| " << setw(28) << left << temp[a].deskripsi.substr(0,28);
            cout << "| " << setw(14) << left << temp[a].kelas.substr(0,14);
            cout << "| " << setw(15) << left << temp[a].branch.substr(0,15);
            cout << "| " << setw(14) << left << temp[a].tipe.substr(0,14) << "|\n";
        }
        
        cout << "+====+=======+==============+=============================+===============+================+===============+\n";
    } else {
        cout << "Data kosong\n";
    }
    cout << "Tekan enter untuk kembali: ";
    cin.get();
}

void lihatope_selectionsort(Operator *op, int *pos) {
    if (*pos > 0) {
        for (int i = 0; i < *pos; i++) {
            temp[i] = op[i];
        }

        for (int i = 0; i < *pos - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < *pos; j++) {
                if (temp[j].kelas < temp[minIndex].kelas) {
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                Operator t = temp[i];
                temp[i] = temp[minIndex];
                temp[minIndex] = t;
            }
        }

        system("cls");
        cout << "Data Operator Tersimpan (Sudah Diurutkan Berdasarkan Kelas - Selection Sort):\n\n";
        
        cout << "+====+=======+==============+=============================+===============+================+===============+\n";
        cout << "| No | Kode  | Nama         | Deskripsi                   | Kelas         | Branch         | Tipe          |\n";
        cout << "+====+=======+==============+=============================+===============+================+===============+\n";
        
        for (int a = 0; a < *pos; a++) {
            cout << "| " << setw(2) << a + 1 << " ";
            cout << "| " << setw(6) << left << to_string(temp[a].kode).substr(0, 6);
            cout << "| " << setw(13) << left << temp[a].karakter.substr(0,13);
            cout << "| " << setw(28) << left << temp[a].deskripsi.substr(0,28);
            cout << "| " << setw(14) << left << temp[a].kelas.substr(0,14);
            cout << "| " << setw(15) << left << temp[a].branch.substr(0,15);
            cout << "| " << setw(14) << left << temp[a].tipe.substr(0,14) << "|\n";
        }
        
        cout << "+====+=======+==============+=============================+===============+================+===============+\n";
    } else {
        cout << "Data kosong\n";
    }
    cout << "Tekan enter untuk kembali: ";
    cin.get();
}

void lihatope_insertionSort(Operator *op, int *pos) {
    if (*pos > 0) {
        for (int i = 0; i < *pos; i++) {
            temp[i] = op[i];
        }

        for (int i = 1; i < *pos; i++) {
            Operator key = temp[i];
            int j = i - 1;
            
            while (j >= 0 && temp[j].tipe > key.tipe) {
                temp[j + 1] = temp[j];
                j = j - 1;
            }
            temp[j + 1] = key;
        }

        system("cls");
        cout << "Data Operator Tersimpan (Sudah Diurutkan Berdasarkan Tipe - Insertion Sort):\n\n";
        
        cout << "+====+=======+==============+=============================+===============+================+===============+\n";
        cout << "| No | Kode  | Nama         | Deskripsi                   | Kelas         | Branch         | Tipe          |\n";
        cout << "+====+=======+==============+=============================+===============+================+===============+\n";
        
        for (int a = 0; a < *pos; a++) {
            cout << "| " << setw(2) << a + 1 << " ";
            cout << "| " << setw(6) << left << to_string(temp[a].kode).substr(0, 6);
            cout << "| " << setw(13) << left << temp[a].karakter.substr(0,13);
            cout << "| " << setw(28) << left << temp[a].deskripsi.substr(0,28);
            cout << "| " << setw(14) << left << temp[a].kelas.substr(0,14);
            cout << "| " << setw(15) << left << temp[a].branch.substr(0,15);
            cout << "| " << setw(14) << left << temp[a].tipe.substr(0,14) << "|\n";
        }
        
        cout << "+====+=======+==============+=============================+===============+================+===============+\n";
    } else {
        cout << "Data kosong\n";
    }
    cout << "Tekan enter untuk kembali: ";
    cin.get();
}


void logout(){
    system("cls");
            cout << "======================" << endl;
            cout << "Selamat tinggal doktah"<< endl;
            cout << "======================" << endl;
}

int main(){ 
    int pilih;
    int pilihlihat;

    string username = "M.Fahrianor";
    string password = "2409106089";

    if (!login(username, password)) {
        return 0; 
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
    cout << "Silahkan dipilih doktah: ";
    cin >> pilih;
    cin.ignore();
    if (pilih == 1)
    {
        tambahdata(op, &pos);
    }
    else if (pilih == 2)
    {
        do
        {
        system("cls");
        cout << "=========================================================" << endl;
        cout << "Selamat datang doktah apa yang akan anda lakukan hari ini" << endl;
        cout << "=========================================================" << endl;
        cout << "" << endl;
        cout << "=========================================================" << endl;
        cout << "1. Lihat data asli\n";
        cout << "2. Lihat data berdasarkan kelas operator(selection sort)\n";
        cout << "3. Lihat data berdasarkan kode operator(bubble sort)\n";
        cout << "4. Lihat data berdasarkan tipe operator(insertion sort)\n";
        cout << "5. kembali\n";
        cout << "=========================================================" << endl;
        cout << "" << endl;
        cout << "Silahkan dipilih doktah: ";
        cin >> pilihlihat;
        cin.ignore();
        if (pilihlihat == 1)
        {
            lihatope(op, &pos);
        }else if (pilihlihat == 2)
        {
            lihatope_selectionsort(op, &pos);
        }else if (pilihlihat == 3)
        {
            lihatope_bubble(op, &pos);
        }else if (pilihlihat == 4)
        {
            lihatope_insertionSort(op, &pos);
        }
        } while (pilihlihat != 5 );  
    }
    else if (pilih == 3)
    {
        updateope(op, &pos);
    }
    else if (pilih == 4)
    {
        hapusope(op, &pos);
    }
    else if (pilih == 5)
    {
        logout();
        break;
    }
    
} while (pilih != 8);
    return 0;
}