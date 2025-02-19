
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

void izdelaj(char** nizi, int indeks, const char* niz) {
    nizi[indeks] = malloc((strlen(niz) + 1) * sizeof(char));
    strcpy(nizi[indeks], niz);
}

int main() {
    int n = 101;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "6Exm3AzVpw9DBOzgh20or6UF_T9yXFei50RHCmUM7nGZBQD4SKwiOF1rhMv5IdqpJ5jdHKG9S2");
    izdelaj(nizi, 1, "HPJWDK2EhzTEoQrid3te2r9vlhzkIwgh8MmjUiYQgpAgCR");
    izdelaj(nizi, 2, "UUNMpaI8nb28L4dop8RYU5G6rW0ZB3W_AI5pqAivhSN3xMjGliwKN0GDelB1BdWXycMENUvLB");
    nizi[3] = nizi[0];
    izdelaj(nizi, 4, "Y__p6OZeamL6MtYM7lk_WY_YHnDFV7c0iI_FT_2u5lrrd9mJsWowuMi1Wsm_");
    nizi[5] = nizi[0];
    nizi[6] = nizi[2];
    izdelaj(nizi, 7, "7");
    izdelaj(nizi, 8, "QtclGZHFfI3GMJiysY_hPhhlrqGDgbpluZXC");
    nizi[9] = nizi[6];
    nizi[10] = nizi[0];
    izdelaj(nizi, 11, "z8dLN2ySMoEm7aRyOAgVbpW7r9DZBvrp19qLfaoX09HgU_sMlKxBIQY1nyYMJIPsgVTx07");
    nizi[12] = nizi[3];
    nizi[13] = nizi[7];
    nizi[14] = nizi[13];
    izdelaj(nizi, 15, "Eplu_S1hh8FuUAtf1yerRrMx319Ip2ddm4PxIkYpYXw9QTLqpR4B1ipu90XqLLr37sMaBM5aRW9PkJBthxewRvkKLy4OXEA");
    nizi[16] = nizi[3];
    izdelaj(nizi, 17, "gVzbIxUmbwhNan7X8AB31cVl_gdfPn2jVpfmhqWHq_LyEkDWXmaNA7iRTMWwmXNab0B_pck0yzzwOLqg1H8YVdB1FXzRDCPixMXb");
    nizi[18] = nizi[13];
    nizi[19] = nizi[5];
    izdelaj(nizi, 20, "WI24diB5u8I99J0V2dqDGI2dYB102k4L_e_tVHm7OA4P");
    izdelaj(nizi, 21, "5I07oWWjx1XzCSugW0AJZSEDiOvMJDqTxQJgsqw4fjSiCR3yTozw");
    izdelaj(nizi, 22, "_3B6J05NZqpooQieS8XGKGdph0ewPXC0NxfhizHg6xuw2kWSyr");
    izdelaj(nizi, 23, "KovgLvy8W_feCxHFlQ2BQmXLo5zxjwotTK9UGVhvpHbqyX_3hmlQ0_lNgZTjOoO2");
    izdelaj(nizi, 24, "BQ6uWLnHAyytO2LZ6gKMHhMEkUC5RJJPQI0lL5tLy1o9Bg2Hjy82VONfm");
    nizi[25] = nizi[5];
    nizi[26] = nizi[13];
    izdelaj(nizi, 27, "Kp7wBVesTu0URevYTI7YTj5sHfQBQJLYvmNu1g6P6NTqb4jx8EZeE_QQwPZjNXZeRffcptq");
    izdelaj(nizi, 28, "eUl6dWp8mW6Y28M_BVGtRNff05fgiTuKwM9XEbOFz9kYYBPkIhWhZsfO8pAhNqhqzb");
    nizi[29] = nizi[24];
    nizi[30] = nizi[6];
    izdelaj(nizi, 31, "rGySsU3wD7");
    nizi[32] = nizi[6];
    izdelaj(nizi, 33, "rXligr10zUJyZeIOsuHbxcUU2r0A8sZe28vVME0EuSaxoQJB9YG3qU4ssDhdYMwRqSrPr88B21CikN2gLGJvvwG0");
    izdelaj(nizi, 34, "IZuC2RVrARKIz3UYtxz57KtAJPzYejlQTlffR2kH");
    izdelaj(nizi, 35, "7EtEMpp4San3kHXB7tCW7RHdLnCdVz3DyuJixeYC11WZDauUE6sxDG_IB1peAurwNrQg");
    izdelaj(nizi, 36, "gWqTPWHwT4IMuJEes3qTJcd7Jzd4zmXkp1J_omu1j3hJ");
    izdelaj(nizi, 37, "EUHwlVeKq");
    nizi[38] = nizi[14];
    izdelaj(nizi, 39, "V1VszohXC3CmGQ5brAc4Oz7EAvEsv4J_jgIxtERBI6R7L_E");
    izdelaj(nizi, 40, "VbGTUypc6bz6w");
    izdelaj(nizi, 41, "ksOPHr0dnbdDYUcRdfgOMKdJ6njkWMTAYUDBGsOsTA03u4sTdOzT2_a6wIRhH20UCCqZy68Kr");
    izdelaj(nizi, 42, "E8KRcIGVOPZp_oLzHhgSBgYAy7BDvp5vfjULWfF7Pk3LoKt7zCAHjTzvWYaKHQqHngU6sZX5Krp8OQvesSbOQdq3h");
    izdelaj(nizi, 43, "t5ctRi6WIzzRUfJI3qM0jxpNny3ZfSfkRajVR4FPbdI0gl");
    izdelaj(nizi, 44, "By41i0BO5AoH");
    izdelaj(nizi, 45, "91QE5845aCH18LslstFscxPkHOSpVOZRz8y3gkBf2BWNYLNIemB_yUARb1oD");
    nizi[46] = nizi[29];
    nizi[47] = nizi[1];
    izdelaj(nizi, 48, "Kt3kSoIC3XdMjfVzTFTfOB7IkFZZ0H4yMs");
    izdelaj(nizi, 49, "IJj8mk5fsOEKExNf9gt0vlv05fsgLyCcrL0NbtPq");
    izdelaj(nizi, 50, "XAF5KBjum9pfHrSEk9EkqjcFWWS87nqu");
    izdelaj(nizi, 51, "nym8IBi2uQlNL3SIxpxoZ3IzqwTtspABiCpssNewhPal7qOa8t5bObP6JJZMAL5Lk8Uqom1WE60P6qbXkZRzIMgRx43BqyX");
    izdelaj(nizi, 52, "Rdq4g37Wf0zCfmwC2g7cocWUbCbD0irg2DbonglzgqCnYAV_EqoERVTwM0PTt");
    izdelaj(nizi, 53, "9RLFKXhewFiyNOaULO6YByZia0r75APuFt7nGye5Kh96h3jAavOpLFdmCaHJSO74R");
    izdelaj(nizi, 54, "oip74E_gY3LEZvodCYatZF9aui6G2iP7vdorgqG56teaPX_inLAB3b");
    nizi[55] = nizi[48];
    izdelaj(nizi, 56, "gdm4oQMUBgFRWwbCOhYwtvEWtrxjQqqvNrTB3EO5");
    nizi[57] = nizi[11];
    nizi[58] = nizi[28];
    izdelaj(nizi, 59, "X9Uky9vZgxQpIr5Ik0Fo0EKsJaNxUnXoLYJ56s7xmh31lViNWghHzmyHlLAsvf");
    nizi[60] = nizi[51];
    nizi[61] = nizi[2];
    izdelaj(nizi, 62, "Wd74Yjv5uoAHv5_rmqV53dYEiMK1GH7knPc9uWB");
    izdelaj(nizi, 63, "xQxw9CFsIB8Bp");
    nizi[64] = nizi[23];
    nizi[65] = nizi[50];
    nizi[66] = nizi[46];
    izdelaj(nizi, 67, "yuAkgfdn8kfG2");
    izdelaj(nizi, 68, "eqc4pIjxq626g7KRktltyIscAYVla7USGlr");
    izdelaj(nizi, 69, "0Dh9XQ4FMjn7KTuU7CFcn_p1Std88lzQVxTts_kmC92hEJDWWou8MQFrX0w7cLjHAK6KFOdfbliwZ5pnIJNbUIz");
    izdelaj(nizi, 70, "fOzxF1AcKu");
    nizi[71] = nizi[66];
    nizi[72] = nizi[30];
    izdelaj(nizi, 73, "P5txcwGLOp6F1");
    nizi[74] = nizi[31];
    izdelaj(nizi, 75, "bQG5SWNScZKLmK7OI1YVbJ_yYB");
    nizi[76] = nizi[25];
    izdelaj(nizi, 77, "6fbtj24KLOKPqNkHiLSywoHJJg3iO1RX_cVVMFW8w_yyJYWFKu9Ko_LAgicZt9dvkT97n");
    izdelaj(nizi, 78, "mMbp4GU1wxueZL8hh5yUtQPt");
    izdelaj(nizi, 79, "dKuAE8oN5u4OcI5N4K15xNwRoRU3GUNz25teqwh8Bw__pVkoaX1Csfjt");
    izdelaj(nizi, 80, "fHrJGY8Solos1zV5DLyQ6pnc1FOcKyI9lLFtEKUqNO7E9zoD5YV5Hg4qPaiCycUFibvhKNMwoubq4CgsKL6");
    nizi[81] = nizi[39];
    izdelaj(nizi, 82, "y_k1KzMxGqGiBcJCG9");
    izdelaj(nizi, 83, "IDDuoIhsbgmk8uJOcci8objX_LAd7iFgpxZuVZ");
    nizi[84] = nizi[6];
    nizi[85] = nizi[29];
    izdelaj(nizi, 86, "lKxjtoAEjqIKFdXzO8o");
    izdelaj(nizi, 87, "DVIgKDdyKnacqEtSJUF32Y_IKdr12y1fYN_Ight52f1ge1TCTubY6U4AyIQ8gu9ZdgXXq61MKx1RmMRJOI7v8wliKH16");
    nizi[88] = nizi[57];
    izdelaj(nizi, 89, "ynHdh9380ngncTGjRCQiBHBhojAD2XVkJlfy8oTxrWYCpbYkjQloQKt885UicrOdkKRCvcAGINomr8yyEHZrNlurYtkq6Ny0iqHC");
    izdelaj(nizi, 90, "YyjmYl1h5WI3xGCQScKY4zWGE9XKeVrN694CHzL1EXImkx3q8wD3ZLL906LrY1CUHTKru8gWpY8mHlhYQGdAb44YZ");
    izdelaj(nizi, 91, "XEhYpKYDGZEdDp4vmKhRenDFXtnZHl0owi5tvwodXb7R3WjeyJMd8sAssq6txBJDKvXrBkvCIP6PRRG3pM_55sm3K");
    nizi[92] = nizi[41];
    izdelaj(nizi, 93, "mpWVIPti_FwX8791csFVK_HU7Ol9urliCROIuoP8LzpZb4Hx0Hh8Ge2k0xDVHb8r_aICkY8rNWizMzTbexiCAtL4hQCwfM6X6");
    nizi[94] = nizi[75];
    izdelaj(nizi, 95, "G5BPfaZDhEXGcyUM8");
    nizi[96] = nizi[87];
    nizi[97] = nizi[20];
    izdelaj(nizi, 98, "L78_ma89tZfaftdg");
    izdelaj(nizi, 99, "ICdzfM6n2K7elgdNFcoUmNe04s7hFk2azgoEgfTB1qTNvhRKOJBCzTWoKT1G9uYrn6jNc");
    nizi[100] = nizi[31];

    char** niziKopija = malloc((n + 1) * sizeof(char*));
    memcpy(niziKopija, nizi, (n + 1) * sizeof(char*));

    razbohoti(nizi);

    for (int i = 0; i < n; i++) {
        printf("%d", nizi[i] == niziKopija[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("<%s>\n", nizi[i]);
        free(nizi[i]);
    }

    free(nizi);
    free(niziKopija);

    printf("-----\n");

    return 0;
}
