#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
 
// Kelas induk untuk menyimpan informasi dasar sebuah buku.
class Book {
public:
    string title;
    double price;
 
    // Menginisialisasi judul dan harga buku.
    Book(const string& t, double p) {
        title = t;
        price = p;
    }
 
    // Menampilkan judul dan harga buku.
    void showBook() {
        cout << "Title    : " << title << endl;
        cout << "Price    : Rp " << fixed << setprecision(0)
             << price << endl;
    }
};
 
// Kelas turunan yang menambahkan informasi khusus buku digital.
class EBook : public Book {
public:
    double fileSizeMB;
    string format;
 
    // Memanggil konstruktor Book dan mengisi data file digital.
    EBook(const string& t, double p, double fs,
          const string& fmt) : Book(t, p) {
        fileSizeMB = fs;
        format = fmt;
    }
 
    // Menampilkan informasi buku beserta ukuran dan format file.
    void showEBook() {
        showBook();
        cout << "File size: " << fixed << setprecision(1)
             << fileSizeMB << " MB" << endl;
        cout << "Format   : " << format << endl;
    }
};
 
int main() {
    // Membuat dua objek EBook dengan data yang berbeda.
    EBook ebook1("Learn C++ Basics", 90000, 2.5, "PDF");
    EBook ebook2("Algorithms Intro", 125000, 3.1, "EPUB");
 
    ebook1.showEBook();
    cout << "------------------------" << endl;
    ebook2.showEBook();
 
    return 0;
}

