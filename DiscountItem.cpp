#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
 
// Kelas induk untuk menyimpan informasi dasar barang.
class Item {
public:
    string name;
    double price;
 
    // Menginisialisasi nama dan harga barang.
    Item(const string& n, double p) {
        name = n;
        price = p;
    }
 
    // Menampilkan nama dan harga asli barang.
    void showItem() {
        cout << "Item     : " << name << endl;
        cout << "Price    : Rp " << fixed << setprecision(0)
             << price << endl;
    }
};
 
// Kelas turunan yang menambahkan informasi diskon pada Item.
class DiscountedItem : public Item {
public:
    double discountPercent;
 
    // Memanggil konstruktor Item dan mengisi persentase diskon.
    DiscountedItem(const string& n, double p, double d)
        : Item(n, p) {
        discountPercent = d;
    }
 
    // Menghitung harga setelah potongan diskon.
    double priceAfterDiscount() {
        return price - (price * discountPercent / 100.0);
    }
 
    // Menampilkan data barang, diskon, dan harga akhir.
    void showDiscountedItem() {
        showItem();
        cout << "Discount : " << fixed << setprecision(0)
             << discountPercent << "%" << endl;
        cout << "Final    : Rp " << fixed << setprecision(0)
             << priceAfterDiscount() << endl;
    }
};
 
int main() {
    // Membuat dua objek barang dengan diskon berbeda.
    DiscountedItem item1("Notebook", 75000, 10);
    DiscountedItem item2("Headphone", 250000, 15);
 
    item1.showDiscountedItem();
    cout << "------------------------" << endl;
    item2.showDiscountedItem();
 
    return 0;
}
