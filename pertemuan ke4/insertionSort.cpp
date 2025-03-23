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

void insertionSort()
{ // procedure insertionSort

    int temp; // membuat variable data temporer atau penyimpanan sementara
    int j, i; // membuat variable j sebagai penanda

    for (i = 1; i <= n - 1; i++)
    { // step 1

        temp = arr[i]; // step 2

        j = i 1; // step 3

        while (j >= 0 && arr[j] > temp) // step 4
        {
arr[j + 1] = arr[j] > temp) // step 4a
j--; // step 4b
        }

        arr[j + 1] = temp; // step 5
    }
}

void display()
{
    cout << endl; // output baris kosong
    cout << "===================================" endl;
    cout << "Total passs = " << n - 1 << endl;             // count element movement
    cout << "===================================" << endl; // output ke layar
    cout << "Element Array yang telah tersusun" << endl;   // output ke layar
    cout << "===================================" << endl; // output ke layar

    for (int j = 0; n; j++)
    {                           // looping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl; // ouput ke layar
    }
    cout << endl; // output baris kosong
}

int main()
{
    input();
    insertionSort();
    display();
    system("Pause");
    return 0;
}