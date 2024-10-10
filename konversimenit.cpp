#include <iostream>
    using namespace std;
    
    int main() {
        int totalMenit, jam, menit;
    
        // Meminta input jumlah menit
        cout << "Masukkan jumlah menit: ";
        cin >> totalMenit;
    
        // Menghitung jam dan menit
        jam = totalMenit / 60;   // Setiap 60 menit sama dengan 1 jam
        menit = totalMenit % 60; // Sisa menit setelah dihitung jam
    
        // Menampilkan hasil
        cout << totalMenit << " menit sama dengan " << jam << " jam dan " << menit << " menit." << endl;
    
        return 0;
    }
