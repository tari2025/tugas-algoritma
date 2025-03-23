#include <iostream>
usingnamespace std;

int arr[20]; // membuat array dengan panjang data 20
int n;       // membuat variable inputan

void input()
{ // procedure input
    while (true)
    {
        cout << "Masukkan jumlah data pada Array : "; // membuat inputan jumlah emlement array
        cin >> n;                                     // memanggil variable inputan n

        if (n <= 20)
        { // membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; // menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;                             // membuat jarak per baris program
    cout << "======================" << endl; // membuat tampilan susunan data element array
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;

    for (int i = 0 i < ; i++) // menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-" << (i + 1) << ": "; // memasukkan atau menginputkan nilai data n
        cin >> arr[i];                         // menyimpan nilai data n kedalam array arr
    }
}

void