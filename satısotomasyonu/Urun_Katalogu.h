#ifndef URUN_KATALOGU_H_INCLUDED
#define URUN_KATALOGU_H_INCLUDED

class URUNKATALOGU {

    private:
        URUN* hashTablosu[100];
        int hash(int);
    public:
        URUNKATALOGU();
        int UrunVarMi(int);
        URUN* UrunAdres(int);
        void UrunEkle(URUN *);
        /* int parametresi stok alt limittir. Parametresiz çaðýrýlýrsa tüm ürünler listelenir. */
        void UrunleriListele(int=-1);
        void tumUrunTopSatis();

        void satilmayanlariListele(char *);

        int UrunSil(int);

};

#endif // URUN_KATALOGU_H_INCLUDED
