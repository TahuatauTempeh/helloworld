#include <stdio.h>
#include "gelas.h"

void isiPenuh(Gelas* g) {
    g->isi = g->kapasitas;
}

void kosongkan(Gelas* g) {
    g->isi = 0;
}

void isiDengan(Gelas* g, int volume) {
    if (g->isi + volume > g->kapasitas) {
        g->isi = g->kapasitas;
    } else {
        g->isi += volume;
    }
}

void tuangKe(Gelas* dari, Gelas* ke) {
    int ruangKosong = ke->kapasitas - ke->isi;
    int jumlahTuang = (dari->isi < ruangKosong) ? dari->isi : ruangKosong;

    dari->isi -= jumlahTuang;
    ke->isi += jumlahTuang;
}

void tampilkanStatus(const Gelas* g) {
    printf("Kapasitas: %d ml, Isi saat ini: %d ml\n", g->kapasitas, g->isi);
}
