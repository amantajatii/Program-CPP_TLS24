#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double HARGA_PER_LITER_BIO_SOLAR = 6800.00; //Harga per liter bio solar dalam satuan mata uang IDR

    double UangPengguna;

    cout << "masukkan jumlah uang yang dimiliki (IDR): "; //Untuk meminta pengguna untuk menginput uang yang dimiliki
    cin >> UangPengguna;

    if (UangPengguna < 0)
    {
        cout << "jumlah uang yang dimiliki harus lebih besar atau sama dengan 0" << endl; //jika pengguna menginput uang yang tidak valid atau kurang dari sama dengan 0
        return 1;
    }
    
    double JumlahBioSolar = UangPengguna / HARGA_PER_LITER_BIO_SOLAR; //Rumus menghitung bio solar yang bisa didapat

    //tampilkan hasil
    cout << fixed << setprecision(2); //Agar bilangan desimal tidak terlalu banyak
    cout << "dengan uang sebesar " << UangPengguna << " rupiah, anda bisa membeli " << JumlahBioSolar << " liter bahan bakar bio solar" << endl; 

    return 0;
}