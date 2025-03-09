#include <iostream>

using namespace std;

int main() {

    // menu login
    string username;
    string password;
    string userbenar = "M.Fahrianor";
    string passbenar = "2409106089";
    int gagal = 3;

    while (gagal > 0) {
        cout << "Masukkan username anda: ";
        cin >> username;
        cout << "Masukkan password anda: ";
        cin >> password;

        if (username == userbenar && password == passbenar) {
            break; 
        } else {
            gagal--;
            cout << "Kesempatan kamu untuk masuk hanya tersisa " << gagal << ". Jika kamu tidak bisa masuk, maka who are you?" << endl;
        }

        if (gagal == 0) {
            cout << "Kamu gagal. Kamu diblokir dari PRTS" << endl;
            return 0;
        }
    }

    // menu utama
    int pilihan;
    while (true) {
        
        system("cls");
        cout << "Login berhasil! Selamat datang di PRTS." << endl;
        cout << "\n===== MENU UTAMA =====\n";
        cout << "" << endl;
        cout << "1. Konversi Suhu\n";
        cout << "2. Konversi Jarak\n";
        cout << "3. Konversi Waktu\n";
        cout << "4. Konversi Mata Uang\n";
        cout << "5. Keluar\n";
        cout << "" << endl;
        cout << "Tentukan pilihan anda: ";
        cin >> pilihan;

        // konversi suhu
        if (pilihan == 1)
        {
            while (true)
            {
                int subpilih;
                double suhu;

                
                cout << "" << endl;
                cout <<"\n===== KONVERSI SUHU =====\n";
                cout << "" << endl;
                cout << "1. Celsius ke Reamur\n";
                cout << "2. Celsius ke Fahrenheit\n";
                cout << "3. Celsius ke Kelvin\n";
                cout << "4. Reamur ke Celsius\n";
                cout << "5. Reamur ke Fahrenheit\n";
                cout << "6. Reamur ke Kelvin\n";
                cout << "7. Fahrenheit ke Celsius\n";
                cout << "8. Fahrenheit ke Reaumr\n";
                cout << "9. Fahrenheit ke Kelvin\n";
                cout << "10. Kelvin ke Celsius\n";
                cout << "11. Kelvin ke Reaumr\n";
                cout << "12. Kelvin ke Fahrenheit\n";
                cout << "13. Kembali\n";
                cout << "" << endl;
                cout << "Silahkan pilih apa yang mau dihitung: \n";
                cin >> subpilih;

                if (subpilih == 13) {
                    cout << "Kembali ke menu utama...\n";
                    break;  
                }

                system("cls");
                cout << "===========================================" << endl;
                cout << "masukkan nilai suhu yang ingin dikonversi: ";
                cin >> suhu;
                cout << "===========================================" << endl;
                cout << "" << endl;

                if (subpilih == 1)
                {
                    cout << "==================================================================================" << endl;
                    cout << "hasil dari " << suhu << " yang dikonversi ke Reamur adalah " << suhu * 4/5 << "R" << endl;
                    cout << "==================================================================================" << endl; 
                }else if (subpilih == 2)
                {
                    cout << "==============================================================================================" << endl;
                    cout << "hasil dari " << suhu << " yang dikonversi ke Fahrenheit adalah " << (suhu * 9 / 5) + 32 << "F" << endl;
                    cout << "==============================================================================================" << endl; 
                }else if (subpilih == 3)
                { 
                    cout << "====================================================================================" << endl;
                    cout << "hasil dari " << suhu << " yang dikonversi ke Kelvin adalah " << suhu + 273.15 << "K" << endl;
                    cout << "====================================================================================" << endl;
                }else if (subpilih == 4)
                {
                    cout << "====================================================================================" << endl;
                    cout << "hasil dari " << suhu << " yang dikonversi ke Celsius adalah " << suhu * 5 / 4 << "C" << endl;
                    cout << "====================================================================================" << endl;
                }else if (subpilih == 5)
                { 
                    cout << "==============================================================================================" << endl;
                    cout << "hasil dari " << suhu << " yang dikonversi ke Fahrenheit adalah " << (suhu * 9 / 4) + 32 << "F" << endl;
                    cout << "==============================================================================================" << endl;
                }else if (subpilih == 6)
                {
                    cout << "==============================================================================================" << endl;
                    cout << "hasil dari " << suhu << " yang dikonversi ke Kelvin adalah " << (suhu * 5 / 4) + 273.15 << "K" << endl;
                    cout << "==============================================================================================" << endl;
                }else if (subpilih == 7)
                {  
                    cout << "===========================================================================================" << endl;
                    cout << "hasil dari " << suhu << " yang dikonversi ke Celsius adalah " << (suhu - 32) * 5 / 9 << "C" << endl;
                    cout << "===========================================================================================" << endl;
                }else if (subpilih == 8)
                { 
                    cout << "===========================================================================================" << endl;
                    cout << "hasil dari " << suhu << " yang dikonversi ke Reamur adalah " << (suhu - 32) * 4 / 9 << "R" << endl;
                    cout << "===========================================================================================" << endl;
                }else if (subpilih == 9)
                { 
                    cout << "====================================================================================================" << endl;
                    cout << "hasil dari " << suhu << " yang dikonversi ke Kelvin adalah " << (suhu - 32) * 5 / 9 + 273.15 << "k" << endl;
                    cout << "====================================================================================================" << endl;
                }else if (subpilih == 10)
                {
                    cout << "=====================================================================================" << endl;
                    cout << "hasil dari " << suhu << " yang dikonversi ke celsius adalah " << suhu - 273.15 << "C" << endl;
                    cout << "=====================================================================================" << endl;
                }else if (subpilih == 11)
                {
                    cout << "===============================================================================================" << endl;
                    cout << "hasil dari " << suhu << " yang dikonversi ke Reamur adalah " << (suhu - 273.15) * 4 / 5 << "R" << endl;
                    cout << "===============================================================================================" << endl;
                }else if (subpilih == 12)
                {
                    cout << "=======================================================================================================" << endl;
                    cout << "hasil dari " << suhu << " yang dikonversi ke Fahrenheit adalah" << (suhu - 273.15) * 9 / 5 + 32 << "F" << endl;
                    cout << "=======================================================================================================" << endl;
                }
            }
            
        //konversi jarak
        }else if (pilihan == 2)
        {
            while (true)
            {
                int subpilih;
                double jarak;

                cout << "" << endl;                
                cout << "\n===== KONVERSI JARAK =====\n";
                cout << "" << endl;
                cout << "1. kilometer ke meter\n";
                cout << "2. kilometer ke centimeter\n";
                cout << "3. meter ke kilometer\n";
                cout << "4. meter ke centimeter\n";
                cout << "5. centimeter ke kilometer\n";
                cout << "6. centimeter ke meter\n";
                cout << "7. kembali\n";
                cout << "" << endl;
                cout << "Silahkan pilih apa yang mau dihitung: \n";
                cin >> subpilih;

                if (subpilih == 7)
                {
                    cout << "kembali ke menu utama \n";
                    break;
                }
                
                system("cls");
                cout << "============================================" << endl;
                cout << "masukkan nilai jarak yang ingin dikonversi: ";
                cin >> jarak;
                cout << "============================================" << endl;
                cout << "" << endl;


                if (subpilih == 1)
                {
                    cout << "=================================================================================" << endl;
                    cout << "hasil dari " << jarak << " yang dikonversi ke meter adalah " << jarak*1000 << "m" << endl; 
                    cout << "=================================================================================" << endl;
                }else if (subpilih == 2)
                {
                    cout << "========================================================================================" << endl;
                    cout << "hasil dari " << jarak << " yang dikonversi ke centimeter adalah " << jarak*100000 << "cm" << endl;
                    cout << "========================================================================================" << endl;
                }else if (subpilih == 3)
                {
                    cout << "=====================================================================================" << endl;
                    cout << "hasil dari " << jarak << " yang dikonversi ke kilometer adalah " << jarak/1000 << "km" << endl;
                    cout << "=====================================================================================" << endl;
                }else if (subpilih == 4)
                {
                    cout << "=====================================================================================" << endl;
                    cout << "hasil dari " << jarak << " yang dikonversi ke centimeter adalah " << jarak*100 << "cm" << endl;
                    cout << "=====================================================================================" << endl;
                }else if (subpilih == 5)
                {
                    cout << "=======================================================================================" << endl;
                    cout << "hasil dari " << jarak << " yang dikonversi ke kilometer adalah " << jarak/100000 << "km" << endl;
                    cout << "=======================================================================================" << endl;
                }else if (subpilih == 6)
                {
                    cout << "===============================================================================" << endl;
                    cout << "hasil dari " << jarak << " yang dikonversi ke meter adalah " << jarak/100 << "m" << endl;
                    cout << "===============================================================================" << endl;
                }
            }
             
        //konversi waktu
        }else if (pilihan == 3)
        {
            while (true)
            {
                int subpilih;
                double waktu;

                cout << "" << endl;
                cout << "\n===== KONVERSI WAKTU =====\n";
                cout << "" << endl;
                cout << "1. jam ke menit\n";
                cout << "2. jam ke detik\n";
                cout << "3. menit ke jam\n";
                cout << "4. menit ke detik\n";
                cout << "5. detik ke jam\n";
                cout << "6. detik ke menit\n";
                cout << "7. kembali\n";
                cout << "" << endl;
                cout << "Silahkan pilih apa yang mau dihitung: ";
                cin >> subpilih;

                if (subpilih == 7)
                {
                    cout << "kembali ke menu utama \n";
                    break;
                }

                system("cls");
                cout << "===========================================" << endl;
                cout << "masukkan nilai waktu yang ingin dikonversi: ";
                cin >> waktu;
                cout << "===========================================" << endl;
                cout << "" << endl;

                if (subpilih == 1)
                {
                    cout << "===================================================================================" << endl;
                    cout << "hasil dari " << waktu << " yang dikonversi ke menit adalah " << waktu*60 << " menit" << endl;
                    cout << "===================================================================================" << endl;
                }else if (subpilih == 2)
                {
                    cout << "=====================================================================================" << endl;
                    cout << "hasil dari " << waktu << " yang dikonversi ke detik adalah " << waktu*3600 << " detik" << endl;
                    cout << "=====================================================================================" << endl;
                }else if (subpilih == 3)
                {
                    cout << "=================================================================================" << endl;
                    cout << "hasil dari " << waktu << " yang dikonversi ke jam adalah " << waktu/60 << " jam" << endl;
                    cout << "=================================================================================" << endl;
                }else if (subpilih == 4)
                {
                    cout << "===================================================================================" << endl;
                    cout << "hasil dari " << waktu << " yang dikonversi ke detik adalah " << waktu*60 << " detik" << endl;
                    cout << "===================================================================================" << endl;
                }else if (subpilih == 5)
                {
                    cout << "=================================================================================" << endl;
                    cout << "hasil dari " << waktu << " yang dikonversi ke jam adalah " << waktu/3600 << " jam" << endl;
                    cout << "=================================================================================" << endl;
                }else if (subpilih == 6)
                {
                    cout << "=================================================================================" << endl;
                    cout << "hasil dari " << waktu << " yang dikonversi ke menit adalah " << waktu/60 << " menit" << endl;
                    cout << "=================================================================================" << endl;
                }
            }
        
        //konversi mata uang
        }else if (pilihan == 4)
        {
            while (true)
            {
                int subpilih;
                double uang;

                cout << "" << endl;                
                cout << "\n===== KONVERSI MATA UANG =====\n";
                cout << "" << endl;
                cout << "1. Rupiah ke Dolar AS\n";
                cout << "2. Rupiah ke Euro\n";
                cout << "3. Dolar AS ke Rupiah\n";
                cout << "4. Dolar AS ke Euro\n";
                cout << "5. Euro ke Rupiah\n";
                cout << "6. Euro ke Dolar AS\n";
                cout << "7. Kembali\n";
                cout << "" << endl;
                cout << "Silahkan pilih apa yang mau dihitung: \n";
                cin >> subpilih;

                if (subpilih == 7)
                {
                    cout << "kembali ke menu utama \n";
                    break;
                }

                system("cls");
                cout << "===========================================" << endl;
                cout << "masukkan nilai uang yang ingin dikonversi: ";
                cin >> uang;
                cout << "===========================================" << endl;
                cout << "" << endl;

                if (subpilih == 1)
                {
                    cout << "====================================================================================" << endl;
                    cout << "hasil dari " << uang << " yang dikonversi ke dolar AS adalah " << "$" << uang/16300 << endl;
                    cout << "====================================================================================" << endl;
                }else if (subpilih == 2)
                {
                    cout << "====================================================================================" << endl;
                    cout << "hasil dari " << uang << " yang dikonversi ke Euro adalah "  << uang/17650 << " Euro" << endl;
                    cout << "====================================================================================" << endl;
                }else if (subpilih == 3)
                {
                    cout << "===================================================================================" << endl;
                    cout << "hasil dari " << uang << " yang dikonversi ke Rupiah adalah " << "RP." << uang*16300 << endl;
                    cout << "===================================================================================" << endl;
                }else if (subpilih == 4)
                {
                    cout << "===================================================================================" << endl;
                    cout << "hasil dari " << uang << " yang dikonversi ke Euro adalah "  << uang*0.92 << "Euro" << endl;
                    cout << "===================================================================================" << endl;
                }else if (subpilih == 5)
                {
                    cout << "====================================================================================" << endl;
                    cout << "hasil dari " << uang << " yang dikonversi ke Rupiah adalah " << "RP." << uang*17650 << endl;
                    cout << "====================================================================================" << endl;
                }else if (subpilih == 6)
                {
                    cout << "====================================================================================" << endl;
                    cout << "hasil dari " << uang << " yang dikonversi ke Dolar AS adalah "  << "$" << uang*1.08  << endl;
                    cout << "====================================================================================" << endl;
                }
            }
        
        //log out
        }else if (pilihan == 5)
        {
            cout << "anda telah log out\n";
            break;
        }else {
            cout << "tidak ada dalam pilihan" << endl;
        }        
    }

    return 0;
}
