#include <iostream>
#include<conio.h>
#include<stdio.h>


using namespace std;

    float Hmakan[100],Hminum[100];
    char pesan,BackSeller;
    int barang,resto,paket,bayar,backs;
    int Pesanan[2],banyak[100],Harga[100];
    int jumlah1,jumlah2,jumlah3,total;
    string nama,toko,kembali,alamat,alamatR;
    string makan[100],minum[100];



void buyer(){
        cout<<endl;
        cout<<" Mau Makan / Minum Apa Hari ini "<<nama<<endl<<endl;

}
void RM_Sejahtera(){
        MenuSejahtera:
        cout<<"\t \t \t \t   RM.Sejahtera  "<<endl;
        cout<<"\t \t \t \t DAFTAR MENU"<<endl;
        cout<<"\t----------------------------------------------------------------"<<endl;
        cout<<"\t 1.Best Seller \t \t \t \t Rp 20.000"<<endl;
        cout<<"\t   (Nasi + Ayam + tahu + tempe + asin cumi + sambel + teh Manis)"<<endl<<endl;
        cout<<"\t 2.Paket Hemat \t \t \t \t Rp 12.000"<<endl;
        cout<<"\t   (Nasi + Ayam + Tahu + tempe + sambel + teh manis)"<<endl<<endl;
        cout<<"\t 3.Paket Keluarga 4 orang \t \t Rp 60.000 "<<endl;
        cout<<"\t   (Nasi 1 bakul + Ayam 1 Ekor + Tahu 4 + Tempe 4 + Asin Cumi + Sambel + Teh Manis)"<<endl<<endl;
        cout<<"\t Untuk kembali memilih restoran silahkan input angka 0 input 0 lagi dan lanjutkan program"<<endl<<endl;
        cout<<"Silahkan Pilih  : ";
        cin>>paket;
        cout<<endl;

        switch(paket){
        case 1:
            cout<<"Berapa Banyak : ";
            cin>>banyak[1];
            cout<<endl;
            Harga[1]=20000;
            jumlah1=Harga[1]*banyak[1];
            cout<<"Total Nya : "<<jumlah1<<endl;
            break;

        break;
        case 2:
            cout<<"Berapa banyak : ";
            cin>>banyak[2];
            cout<<endl;
            Harga[2]=12000;
            jumlah2=Harga[2]*banyak[2];
            cout<<"Total Nya : "<<jumlah2<<endl;
            break;
        break;
        case 3:
            cout<<"Berapa banyak : ";
            cin>>banyak[3];
            cout<<endl;
            Harga[3]=60000;
            jumlah3=Harga[3]*banyak[3];
            cout<<"Total Nya : "<<jumlah3<<endl;
            break;


        default :
            cout<<endl;
            cout<<"Maaf Pilihan tidak tersedia"<<endl<<endl;
        }


        total=jumlah1+jumlah2+jumlah3;
        cout<<"Apakah mau Memesan Lagi (Y/N) : ";
        cin>>pesan;
        cout<<endl<<endl;
    if(pesan=='N'||pesan=='n'){
        cout<<"Total Pembayaran yaitu Rp:"<<total<<endl<<endl;
        cout<<"1.Bayar Ditempat"<<endl;
        cout<<"2.Via Transfer/E-Wallet"<<endl;
        cout<<"Pilih Pembayaran : ";
        cin>>bayar;
        cout<<endl;

        switch(bayar){
        case 1:
            cout<<"             Pembayaran COD"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Pesanan Anda Akan Dikirim ke "<<alamatR<<endl;
            cout<<"Dengan Biaya Total : Rp "<<total<<endl;
            cout<<"Dengan Sistem Pembayaran Ditempat, have A nice day "<<nama<<endl<<endl;
            break;
        break;
        case 2:
            cout<<"             Pembayaran Virtual"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Kode Virtual 0088811525 "<<endl;
            cout<<"Dengan Biaya Total : Rp "<<total<<endl;
            cout<<"Setelah beres membayar pesanan anda akan dikirim ke "<<alamatR<<endl<<endl;
            break;

        default :
           cout<<endl;
           cout<<"Maaf Pilihan tidak tersedia"<<endl<<endl;
            }

    }else if (pesan=='Y'||pesan=='y') {
        goto MenuSejahtera;
    }else {
        cout<<"anda salah menginput"<<endl;
        }


}
void RM_Sentosa(){

        MenuSentosa:
        cout<<"\t \t \t \t RM.Sentosa "<<endl;
        cout<<"\t \t \t \t DAFTAR MENU"<<endl;
        cout<<"\t----------------------------------------------------------------"<<endl;
        cout<<"\t 1.Paket Favorit \t \t \t  Rp 15.000"<<endl;
        cout<<"\t (Nasi + Ayam + Saus + teh Manis)"<<endl<<endl;
        cout<<"\t 2.Paket Hemat \t \t \t \t  Rp 13.500"<<endl;
        cout<<"\t (Nasi Goreng + Ayam + Telur + teh manis)"<<endl<<endl;
        cout<<"\t 3.Paket Special \t \t \t  Rp 20.000 "<<endl;
        cout<<"\t (Nasi + Sambal + Jamur Crispy + Ayam Goreng + Telur + Teh Manis)"<<endl<<endl;
        cout<<"\t Untuk kembali memilih restoran silahkan input angka 0 input 0 lagi dan lanjutkan program"<<endl<<endl;
        cout<<"Silahkan Pilih : ";
        cin>>paket;
        cout<<endl;

         switch(paket){
        case 1:
            cout<<"Berapa Banyak : ";
            cin>>banyak[1];
            cout<<endl;
            Harga[1]=15000;
            jumlah1=Harga[1]*banyak[1];
            cout<<"Total Nya : "<<jumlah1<<endl;
            break;

        break;
        case 2:
            cout<<"Berapa banyak : ";
            cin>>banyak[2];
            cout<<endl;
            Harga[2]=13500;
            jumlah2=Harga[2]*banyak[2];
            cout<<"Total Nya : "<<jumlah2<<endl;
            break;
        break;
        case 3:
            cout<<"Berapa banyak : ";
            cin>>banyak[3];
            cout<<endl;
            Harga[3]=20000;
            jumlah3=Harga[3]*banyak[3];
            cout<<"Total Nya : "<<jumlah3<<endl;
            break;


        default :
            cout<<endl;
            cout<<"Maaf Pilihan tidak tersedia"<<endl<<endl;
        }


        total=jumlah1+jumlah2+jumlah3;
        cout<<"Apakah mau Memesan Lagi (Y/N) : ";
        cin>>pesan;
        cout<<endl<<endl;
        if(pesan=='N'||pesan=='n'){
        cout<<"Total Pembayaran yaitu Rp:"<<total<<endl<<endl;
        cout<<"1.Bayar Ditempat"<<endl;
        cout<<"2.Via Transfer/E-Wallet"<<endl;
        cout<<"Pilih Pembayaran : ";
        cin>>bayar;
        cout<<endl;

        switch(bayar){
        case 1:
            cout<<"             Pembayaran COD"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Pesanan Anda Akan Dikirim ke "<<alamatR<<endl;
            cout<<"Dengan Biaya Total : Rp "<<total<<endl;
            cout<<"Dengan Sistem Pembayaran Ditempat, have A nice day "<<nama<<endl<<endl;
            break;
        break;
        case 2:
            cout<<"             Pembayaran Virtual"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Kode Virtual 0088811525 "<<endl;
            cout<<"Dengan Biaya Total : Rp "<<total<<endl;
            cout<<"Setelah beres membayar pesanan anda akan dikirim ke "<<alamatR<<endl<<endl;
            break;

        default :
           cout<<endl;
           cout<<"Maaf Pilihan tidak tersedia"<<endl<<endl;
            }

    }else if (pesan=='Y'||pesan=='y') {
        goto MenuSentosa;
    }else {
        cout<<"anda salah menginput"<<endl;
        }
}

void RM_Jayapura(){

    MenuJayapura:
        cout<<"\t \t \t \t RM.Jayapura "<<endl;
        cout<<"\t \t \t \t DAFTAR MENU"<<endl;
        cout<<"\t----------------------------------------------------------------"<<endl;
        cout<<"\t 1.Paket Regular \t \t \t \t Rp 15.000"<<endl;
        cout<<"\t (Nasi + Ayam Balado + Tahu + teh Manis)"<<endl<<endl;
        cout<<"\t 2.Paket Murah \t \t \t \t \t Rp 10.000"<<endl;
        cout<<"\t (Nasi + Ayam Bakar / Goreng + Sambal + Lalaban + teh manis)"<<endl<<endl;
        cout<<"\t 3.Paket Jumbo \t \t \t \t \t Rp 40.000 "<<endl;
        cout<<"\t (Nasi 4 porsi + Sambal + Ayam Goreng / bakar 1 ekor + Lalaban + 4 Teh Manis)"<<endl<<endl;
        cout<<"\t Untuk kembali memilih restoran silahkan input angka 0 input 0 lagi dan lanjutkan program"<<endl<<endl;
        cout<<"Silahkan Pilih : ";
        cin>>paket;
        cout<<endl;
          switch(paket){
        case 1:
            cout<<"Berapa Banyak : ";
            cin>>banyak[1];
            cout<<endl;
            Harga[1]=15000;
            jumlah1=Harga[1]*banyak[1];
            cout<<"Total Nya : "<<jumlah1<<endl;
            break;

        break;
        case 2:
            cout<<"Berapa banyak : ";
            cin>>banyak[2];
            cout<<endl;
            Harga[2]=10000;
            jumlah2=Harga[2]*banyak[2];
            cout<<"Total Nya : "<<jumlah2<<endl;
            break;
        break;
        case 3:
            cout<<"Berapa banyak : ";
            cin>>banyak[3];
            cout<<endl;
            Harga[3]=40000;
            jumlah3=Harga[3]*banyak[3];
            cout<<"Total Nya : "<<jumlah3<<endl;
            break;


        default :
            cout<<endl;
            cout<<"Maaf Pilihan tidak tersedia"<<endl<<endl;
        }


        total=jumlah1+jumlah2+jumlah3;
        cout<<"Apakah mau Memesan Lagi (Y/N) : ";
        cin>>pesan;
        cout<<endl<<endl;
        if(pesan=='N'||pesan=='n'){
        cout<<"Total Pembayaran yaitu Rp:"<<total<<endl<<endl;
        cout<<"1.Bayar Ditempat"<<endl;
        cout<<"2.Via Transfer/E-Wallet"<<endl;
        cout<<"Pilih Pembayaran : ";
        cin>>bayar;
        cout<<endl;

        switch(bayar){
        case 1:
            cout<<"             Pembayaran COD"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Pesanan Anda Akan Dikirim ke "<<alamatR<<endl;
            cout<<"Dengan Biaya Total : Rp "<<total<<endl;
            cout<<"Dengan Sistem Pembayaran Ditempat, have A nice day "<<nama<<endl<<endl;
            break;
        break;
        case 2:
            cout<<"             Pembayaran Virtual"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Kode Virtual 0088811525 "<<endl;
            cout<<"Dengan Biaya Total : Rp "<<total<<endl;
            cout<<"Setelah beres membayar pesanan anda akan dikirim ke "<<alamatR<<endl<<endl;
            break;

        default :
           cout<<endl;
           cout<<"Maaf Pilihan tidak tersedia"<<endl<<endl;
            }

    }else if (pesan=='Y'||pesan=='y') {
        goto MenuJayapura;
    }else {
        cout<<"anda salah menginput"<<endl;
        }

}
void RM_MasaKini(){

       MenuMasaKini:
        cout<<"\t \t \t \t RM.Masa Kini "<<endl;
        cout<<"\t \t \t \t DAFTAR MENU"<<endl;
        cout<<"\t----------------------------------------------------------------"<<endl;
        cout<<"\t 1.Paket Terlaris \t \t \t \t Rp 20.000"<<endl;
        cout<<"\t (Nasi + Ayam Crispy + Saus Asam Manis + teh Manis)"<<endl<<endl;
        cout<<"\t 2.Paket Seafood \t \t \t \t Rp 20.000"<<endl;
        cout<<"\t (Nasi + Cumi Crispy & Udang Crispy Saus Tiram + teh manis)"<<endl<<endl;
        cout<<"\t 3.Paket Istimewa \t \t \t \t Rp 40.000 "<<endl;
        cout<<"\t (Nasi 2 Porsi + Ikan Gurame Jumbo Crispy Saus Tiram / Asam Manis 1 Ekor + 2 Teh Manis)"<<endl<<endl;
        cout<<"\t Untuk kembali memilih restoran silahkan input angka 0 input 0 lagi dan lanjutkan program"<<endl<<endl;
        cout<<"Silahkan Pilih : ";
        cin>>paket;
        cout<<endl;
          switch(paket){
        case 1:
            cout<<"Berapa Banyak : ";
            cin>>banyak[1];
            cout<<endl;
            Harga[1]=20000;
            jumlah1=Harga[1]*banyak[1];
            cout<<"Total Nya : "<<jumlah1<<endl;
            break;

        break;
        case 2:
            cout<<"Berapa banyak : ";
            cin>>banyak[2];
            cout<<endl;
            Harga[2]=20000;
            jumlah2=Harga[2]*banyak[2];
            cout<<"Total Nya : "<<jumlah2<<endl;
            break;
        break;
        case 3:
            cout<<"Berapa banyak : ";
            cin>>banyak[3];
            cout<<endl;
            Harga[3]=40000;
            jumlah3=Harga[3]*banyak[3];
            cout<<"Total Nya : "<<jumlah3<<endl;
            break;


        default :
            cout<<endl;
            cout<<"Maaf Pilihan tidak tersedia"<<endl<<endl;
        }


        total=jumlah1+jumlah2+jumlah3;
        cout<<"Apakah mau Memesan Lagi (Y/N) : ";
        cin>>pesan;
        cout<<endl<<endl;
        if(pesan=='N'||pesan=='n'){
        cout<<"Total Pembayaran yaitu Rp:"<<total<<endl<<endl;
        cout<<"1.Bayar Ditempat"<<endl;
        cout<<"2.Via Transfer/E-Wallet"<<endl;
        cout<<"Pilih Pembayaran : ";
        cin>>bayar;
        cout<<endl;

        switch(bayar){
        case 1:
            cout<<"             Pembayaran COD"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Pesanan Anda Akan Dikirim ke "<<alamatR<<endl;
            cout<<"Dengan Biaya Total : Rp "<<total<<endl;
            cout<<"Dengan Sistem Pembayaran Ditempat, have A nice day "<<nama<<endl<<endl;
            break;
        break;
        case 2:
            cout<<"             Pembayaran Virtual"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Kode Virtual 0088811525 "<<endl;
            cout<<"Dengan Biaya Total : Rp "<<total<<endl;
            cout<<"Setelah beres membayar pesanan anda akan dikirim ke "<<alamatR<<endl<<endl;
            break;

        default :
           cout<<endl;
           cout<<"Maaf Pilihan tidak tersedia"<<endl<<endl;
            }

    }else if (pesan=='Y'||pesan=='y') {
        goto MenuMasaKini;
    }else {
        cout<<"anda salah menginput"<<endl;
        }

}
void RM_Kejawen(){
    MenuKejawen:
        cout<<"\t \t \t \t RM.Kejawen "<<endl;
        cout<<"\t \t \t \t DAFTAR MENU"<<endl;
        cout<<"\t----------------------------------------------------------------"<<endl;
        cout<<"\t 1.Paket Ayam \t \t \t \t \t Rp 15.000"<<endl;
        cout<<"\t (Nasi + Ayam Goreng / Bakar + Sambal + Lalaban + teh Manis)"<<endl<<endl;
        cout<<"\t 2.Paket Ikan \t \t \t \t \t Rp 15.000"<<endl;
        cout<<"\t (Nasi + Nila Goreng / Bakar + Sambal + Lalaban + teh manis)"<<endl<<endl;
        cout<<"\t 3.Paket Komplit \t \t \t \t Rp 30.000 "<<endl;
        cout<<"\t (Nasi + Ayam / Nila Goreng / Bakar + Sambal + Telur + Teh Manis)"<<endl<<endl;
        cout<<"\t Untuk kembali memilih restoran silahkan input angka 0 input 0 lagi dan lanjutkan program"<<endl<<endl;
        cout<<"Silahkan Pilih : ";
        cin>>paket;
        cout<<endl;
             switch(paket){
        case 1:
            cout<<"Berapa Banyak : ";
            cin>>banyak[1];
            cout<<endl;
            Harga[1]=15000;
            jumlah1=Harga[1]*banyak[1];
            cout<<"Total Nya : "<<jumlah1<<endl;
            break;

        break;
        case 2:
            cout<<"Berapa banyak : ";
            cin>>banyak[2];
            cout<<endl;
            Harga[2]=15000;
            jumlah2=Harga[2]*banyak[2];
            cout<<"Total Nya : "<<jumlah2<<endl;
            break;
        break;
        case 3:
            cout<<"Berapa banyak : ";
            cin>>banyak[3];
            cout<<endl;
            Harga[3]=30000;
            jumlah3=Harga[3]*banyak[3];
            cout<<"Total Nya : "<<jumlah3<<endl;
            break;


        default :
            cout<<endl;
            cout<<"Maaf Pilihan tidak tersedia"<<endl<<endl;
        }


        total=jumlah1+jumlah2+jumlah3;
        cout<<"Apakah mau Memesan Lagi (Y/N) : ";
        cin>>pesan;
        cout<<endl<<endl;
        if(pesan=='N'||pesan=='n'){
        cout<<"Total Pembayaran yaitu Rp:"<<total<<endl<<endl;
        cout<<"1.Bayar Ditempat"<<endl;
        cout<<"2.Via Transfer/E-Wallet"<<endl;
        cout<<"Pilih Pembayaran : ";
        cin>>bayar;
        cout<<endl;

        switch(bayar){
        case 1:
            cout<<"             Pembayaran COD"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Pesanan Anda Akan Dikirim ke "<<alamatR<<endl;
            cout<<"Dengan Biaya Total : Rp "<<total<<endl;
            cout<<"Dengan Sistem Pembayaran Ditempat, have A nice day "<<nama<<endl<<endl;
            break;
        break;
        case 2:
            cout<<"             Pembayaran Virtual"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Kode Virtual 0088811525 "<<endl;
            cout<<"Dengan Biaya Total : Rp "<<total<<endl;
            cout<<"Setelah beres membayar pesanan anda akan dikirim ke "<<alamatR<<endl<<endl;
            break;

        default :
           cout<<endl;
           cout<<"Maaf Pilihan tidak tersedia"<<endl<<endl;
            }

    }else if (pesan=='Y'||pesan=='y') {
        goto MenuKejawen;
    }else {
        cout<<"anda salah menginput"<<endl;
        }

}

void Seller(){
    SELLING:
        cout<<"\t -==SELLER==-"<<endl;
        cout<<"\t ------------"<<endl;
        cout<<" 1.Nama Toko :";
        cin>>toko;
        cout<<" 2.Berapa Banyak Makanan yang anda jual : ";
        cin>>Pesanan[1];
            for (int i = 0; i < Pesanan[1]; i++) {
            cout << "  Makanan ke -" << i + 1 << " = " ;
            cin >> makan[i];
            makan[i];
            cout<<"  Harga makanan ke -"<<i+1<<" = ";
            cin>>Hmakan[i];
            Hmakan[i];

            }
        cout<<" 3.Berapa Banyak Minuman yang anda jual : ";
        cin>>Pesanan[2];
            for (int i=0; i<Pesanan[2]; i++){
            cout<<"  Minuman ke-"<<i+1<<" = ";
            cin>>minum[i];
            minum[i];
            cout<<"  Harga Minuman ke -"<<i+1<<" = ";
            cin>>Hminum[i];
            Hminum[i];

            }cout<<endl<<endl;


        cout<<"\t ======"<<toko<<"======"<<endl;
        cout<<"\t ----------------------"<<endl<<endl;
        cout<<"\t DAFTAR MENU ANDA YAITU "<<endl<<endl;
        for (int i=0; i<Pesanan[1]; i++){
            cout<<"Nama Makanan :"<<makan[i]<<"\t \t Dengan harga : Rp "<<Hmakan[i]<<endl;

        }
        for (int i=0; i<Pesanan[2]; i++){
            cout<<"Nama Minuman :"<<minum[i]<<"\t \t Dengan harga : Rp "<<Hminum[i]<<endl;
        }

        cout<<endl;
        cout<<"Apakah Data Anda Sudah Benar ? (Y/N) : ";
        cin>>BackSeller;
        cout<<endl;
        if(BackSeller=='N'||BackSeller=='n'){
            goto SELLING;
        }else if (BackSeller=='Y'||BackSeller=='y'){
        cout<<"Data Anda Sedang di proses,Akan kami kirim email ke "<<alamat<<" untuk lebih lanjut "<<endl<<endl;
        }else {
        cout<<"Maaf Anda Salah Input"<<endl;
        }

}


int main(){



    cout << "\t=============="<<endl;
    cout << "\t|Market Place|"<<endl;
    cout << "\t|  A2 Food   |"<<endl;
    cout << "\t=============="<<endl;
    cout<<endl;


    cout<<"\t=Selamat Datang="<<endl<<endl;
    cout<<" Masukan email  : ";
    cin>>alamat;
    cout<<" Masukan Nama   : ";
    cin>>nama;
    cout<<" Masukan Alamat : ";
    cin>>alamatR;
    cout<<endl;
    do{
    system("cls");
    cout<<endl;
    cout<<" Hallo Mr/Ms "<<nama<<endl;
    cout<<" --------------------------"<<endl;
    cout<<" 1.Mau Beli Makan atau Minum"<<endl;
    cout<<" 2.Mau Daftar Berjualan"<<endl;
    cout<<" silahkan pilih : ";
    cin>>barang;
    cout<<endl;

        system("cls");
    switch (barang){

        case 1: buyer();

                cout<<"\t \t \t \t-===Daftar Restoran===-"<<endl;
                cout<<"\t----------------------------------------------------------------"<<endl;
                cout<<"\t \t \t \t     1.RM Sejahtera"<<endl;
                cout<<"\t \t \t \t     2.RM Sentosa  "<<endl;
                cout<<"\t \t \t \t     3.RM Jayapura "<<endl;
                cout<<"\t \t \t \t     4.RM Masakini "<<endl;
                cout<<"\t \t \t \t     5.RM Kejawen  "<<endl;
                cout<<"\t----------------------------------------------------------------"<<endl;
                cout<<" Silahkan pilih restoran : ";
                cin>>resto;
                cout<<endl;
            system("cls");
                switch(resto){
                    case 1:RM_Sejahtera();
                    break;
                    case 2:RM_Sentosa();
                    break;
                    case 3:RM_Jayapura();
                    break;
                    case 4:RM_MasaKini();
                    break;
                    case 5:RM_Kejawen();
                    break;


                    default:
                        cout<<endl;
                        cout<<"Maaf Pilihan tidak tersedia"<<endl<<endl;
                    }
            break;
        case 2: Seller();

            break;


                default :
                    cout<<endl;
                    cout<<"Maaf Pilihan tidak tersedia"<<endl<<endl;
                }

        cout<<"apakah ingin menjalankan program kembali (ya/tidak) lalu enter 2x ? ";
        cin>>kembali;
        cout<<endl;
        getch();
    }while (kembali=="ya");
   getch();
   return 0;


}
