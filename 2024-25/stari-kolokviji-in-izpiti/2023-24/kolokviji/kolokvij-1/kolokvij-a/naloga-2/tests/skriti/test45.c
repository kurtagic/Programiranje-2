
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
    int n = 159;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "1ZSor8MksQ0ZV584uRiaKmU74Gpz7ivNeXb7D6j");
    izdelaj(nizi, 1, "1ZSor8MksQ0ZV584uRiaKmU74Gpz7ivNeXb7D6j");
    izdelaj(nizi, 2, "xzmZqspLoA0MQb5Cv8pUzsiXYdd4F5B9KhKQEzvDzI");
    izdelaj(nizi, 3, "xzmZqspLoA0MQb5Cv8pUzsiXYdd4F5B9KhKQEzvDzI");
    izdelaj(nizi, 4, "vc5xA_xJgE7nJ0SZiVz_sQ2SF9s2hTa");
    izdelaj(nizi, 5, "xzmZqspLoA0MQb5Cv8pUzsiXYdd4F5B9KhKQEzvDzI");
    izdelaj(nizi, 6, "3qbzR21IyQL4g");
    izdelaj(nizi, 7, "1ZSor8MksQ0ZV584uRiaKmU74Gpz7ivNeXb7D6j");
    izdelaj(nizi, 8, "xzmZqspLoA0MQb5Cv8pUzsiXYdd4F5B9KhKQEzvDzI");
    izdelaj(nizi, 9, "xzmZqspLoA0MQb5Cv8pUzsiXYdd4F5B9KhKQEzvDzI");
    izdelaj(nizi, 10, "h40Ulhi4KYLSMFNAg5fhj4PGxLEqXUrw8IVGP3W2");
    izdelaj(nizi, 11, "vBgMqJvCDMl4ywQKvHRd4cH7jyvxfsnje9u78dDqsdN4v8FvQQKKkh7vUB9D2Ogyth");
    izdelaj(nizi, 12, "gX8VlyIk4dNmJvNEaM");
    izdelaj(nizi, 13, "zV8Yx4y4UR_dkPgsv7r6Wgpirzj18aOS9hcOQmkvwnISjdW5G31GKubAUQurwefBPhighFzOOmxBi6ntIpa1fj94z3ceRCEQt0");
    izdelaj(nizi, 14, "3qbzR21IyQL4g");
    izdelaj(nizi, 15, "xzmZqspLoA0MQb5Cv8pUzsiXYdd4F5B9KhKQEzvDzI");
    izdelaj(nizi, 16, "xzmZqspLoA0MQb5Cv8pUzsiXYdd4F5B9KhKQEzvDzI");
    izdelaj(nizi, 17, "d9H07pVrSt_P9qcCq7IL2rTekDyVuhP8DbaYpVKA7StHExT9GuO0");
    izdelaj(nizi, 18, "6E73VlmPh6JxqjQQ9gcxdsK3s_cAlyY4MP3Is0EhHuXkdxokJb_o9oUFpJAt260puyQg4m1jx44wiIE2bYCFPd6Wd0eFc");
    izdelaj(nizi, 19, "qxxncR");
    izdelaj(nizi, 20, "3V7wtAqr7w8H1WtM44kcFblid");
    izdelaj(nizi, 21, "Op1N1v7pb6");
    izdelaj(nizi, 22, "3V7wtAqr7w8H1WtM44kcFblid");
    izdelaj(nizi, 23, "IBHcYzF1tqXqENuHWZwT9GbsYuo4QK32r");
    izdelaj(nizi, 24, "9n42");
    izdelaj(nizi, 25, "Op1N1v7pb6");
    izdelaj(nizi, 26, "Op1N1v7pb6");
    izdelaj(nizi, 27, "Op1N1v7pb6");
    izdelaj(nizi, 28, "AFR40nzUqFLzyHJcHsRl_Dxx37EP");
    izdelaj(nizi, 29, "6fZiUQCMdQ0naG80F0ZvMDdbFh91wJf7VqHNKHeAmv4JFJ5kCoAzPDiMoAUbuGyDuMADWbry28hNq0GFIVM");
    izdelaj(nizi, 30, "l2BxFm0cQHI9GWW5y8mK99m1VkZhDabYBKBnp");
    izdelaj(nizi, 31, "9NicZGhohzNpK_eGPd_Bp8");
    izdelaj(nizi, 32, "La0CcNbvESZOAAqVYZzoC5S0q0KJF");
    izdelaj(nizi, 33, "ZZ5co0fbZwywTgwy4vjGFOkUtuHZtBH9u22Y_k5CO1768DskxKpfpWpYXdxuEdxn_wm10rX9mGFTRxQ6ke4sAB");
    izdelaj(nizi, 34, "TpjAOXC0oxiyifSYSp_pGYXgZgbegdGcJ2dFsvKSoY5LgwRK9R0PLh6vOjsT4WMYWS7A2vpig6cZLdkhGmpIci8Tnq");
    izdelaj(nizi, 35, "xzmZqspLoA0MQb5Cv8pUzsiXYdd4F5B9KhKQEzvDzI");
    izdelaj(nizi, 36, "xzmZqspLoA0MQb5Cv8pUzsiXYdd4F5B9KhKQEzvDzI");
    izdelaj(nizi, 37, "gkXgorOjzNA_QT_t1KXZmHHeHHwABHuGT967ZLVSG_CTkH8glRMWm2sYh8j0yTtYKjeLSYzYAaFAUwYVdM");
    izdelaj(nizi, 38, "3qbzR21IyQL4g");
    izdelaj(nizi, 39, "vqOplEIMQEHFVUwpNlAiR_HG5pdTMbSN23r4DygxLaGBVZ48RnoDFPhX3AR6bsn6q5i0mbp");
    izdelaj(nizi, 40, "egL3");
    izdelaj(nizi, 41, "paudanplq7ysDh8ZTjaUO4zG2_CiN56Ng6kuWOx859hN3fZPVDa1KUZRRm24ZvTpckYhwyzA6_7md2sKX");
    izdelaj(nizi, 42, "1QS5_I_vKSb4MljDuV7mt7dMqVOjpkl");
    izdelaj(nizi, 43, "9Ykwi9T");
    izdelaj(nizi, 44, "H3_Ju9x9sgQ3G");
    izdelaj(nizi, 45, "kssbK4LqpZPTPsUhp10SomNlaCT5phTo6WN4RBFHTmfD7po42FIMwchFXLb3QmdjNUDYGs356HjfU8G8n9fx802q");
    izdelaj(nizi, 46, "xzmZqspLoA0MQb5Cv8pUzsiXYdd4F5B9KhKQEzvDzI");
    izdelaj(nizi, 47, "0F3SPmypokAulXOa0DoIygWupbJpR7CYwu975ZQsY9L8mzpXkQxXFBMntkSnVviE");
    izdelaj(nizi, 48, "AFR40nzUqFLzyHJcHsRl_Dxx37EP");
    izdelaj(nizi, 49, "egL3");
    izdelaj(nizi, 50, "paudanplq7ysDh8ZTjaUO4zG2_CiN56Ng6kuWOx859hN3fZPVDa1KUZRRm24ZvTpckYhwyzA6_7md2sKX");
    izdelaj(nizi, 51, "9Ykwi9T");
    izdelaj(nizi, 52, "gkXgorOjzNA_QT_t1KXZmHHeHHwABHuGT967ZLVSG_CTkH8glRMWm2sYh8j0yTtYKjeLSYzYAaFAUwYVdM");
    izdelaj(nizi, 53, "3qbzR21IyQL4g");
    izdelaj(nizi, 54, "xzmZqspLoA0MQb5Cv8pUzsiXYdd4F5B9KhKQEzvDzI");
    izdelaj(nizi, 55, "aqqxqQwZUwOrf5Wi_fk457TuOItHYtBHMjzSW3xcdxpBuPlwtWg");
    izdelaj(nizi, 56, "1QS5_I_vKSb4MljDuV7mt7dMqVOjpkl");
    izdelaj(nizi, 57, "9WzCuDT3b0sGq");
    izdelaj(nizi, 58, "_m4cFsboeZFOvDFr_ldLm");
    izdelaj(nizi, 59, "Op1N1v7pb6");
    izdelaj(nizi, 60, "oKS9yBrq3vfMEoBeIymiRBYmrIlAjFph");
    izdelaj(nizi, 61, "3PKjWjEQdxbwrcj1EH9LoWgAinXIHQ3acCymuU1nE_");
    izdelaj(nizi, 62, "6E73VlmPh6JxqjQQ9gcxdsK3s_cAlyY4MP3Is0EhHuXkdxokJb_o9oUFpJAt260puyQg4m1jx44wiIE2bYCFPd6Wd0eFc");
    izdelaj(nizi, 63, "gkXgorOjzNA_QT_t1KXZmHHeHHwABHuGT967ZLVSG_CTkH8glRMWm2sYh8j0yTtYKjeLSYzYAaFAUwYVdM");
    izdelaj(nizi, 64, "IbsuuGMh7u8wuJtzy8QU_mlyfmVQq4T90hCsMvLModf3hn002oQcnvWEsMY");
    izdelaj(nizi, 65, "KKiAZC");
    izdelaj(nizi, 66, "H3_Ju9x9sgQ3G");
    izdelaj(nizi, 67, "snkkOqeWB9KJfVyIjXF2ZtdnwmMQ");
    izdelaj(nizi, 68, "CToX0maC85");
    izdelaj(nizi, 69, "s5oCwmft02S0yEfxmsVDDYdM");
    izdelaj(nizi, 70, "snkkOqeWB9KJfVyIjXF2ZtdnwmMQ");
    izdelaj(nizi, 71, "c3yGwbCw0kXjwaxj42BQf9ULnRKYmjqTm3wHx8qUBNeZoOA23z4g7KEtNj1lqY1d1n6Z3diWhdtUYOUE2xvj20I");
    izdelaj(nizi, 72, "sDMCCQawx92e8EewW3OheWRB0");
    izdelaj(nizi, 73, "ZZ5co0fbZwywTgwy4vjGFOkUtuHZtBH9u22Y_k5CO1768DskxKpfpWpYXdxuEdxn_wm10rX9mGFTRxQ6ke4sAB");
    izdelaj(nizi, 74, "snkkOqeWB9KJfVyIjXF2ZtdnwmMQ");
    izdelaj(nizi, 75, "vc5xA_xJgE7nJ0SZiVz_sQ2SF9s2hTa");
    izdelaj(nizi, 76, "TpjAOXC0oxiyifSYSp_pGYXgZgbegdGcJ2dFsvKSoY5LgwRK9R0PLh6vOjsT4WMYWS7A2vpig6cZLdkhGmpIci8Tnq");
    izdelaj(nizi, 77, "xJmDcIAr3loTA7XRwgs958Xs_x26W3AWeLgGAn");
    izdelaj(nizi, 78, "Rh_ddZd709Vravr");
    izdelaj(nizi, 79, "jp");
    izdelaj(nizi, 80, "aqqxqQwZUwOrf5Wi_fk457TuOItHYtBHMjzSW3xcdxpBuPlwtWg");
    izdelaj(nizi, 81, "1ZSor8MksQ0ZV584uRiaKmU74Gpz7ivNeXb7D6j");
    izdelaj(nizi, 82, "9WzCuDT3b0sGq");
    izdelaj(nizi, 83, "xzmZqspLoA0MQb5Cv8pUzsiXYdd4F5B9KhKQEzvDzI");
    izdelaj(nizi, 84, "VahfkrsmuD0RfjvncXAQUr2bpDTZ5nXxYTEUUd9muG7ZIxlNo6VHur8mgbWw0FfsWrEBrNjab4zPMN1_lM");
    izdelaj(nizi, 85, "44Wj3ctFs0Lw4");
    izdelaj(nizi, 86, "Op1N1v7pb6");
    izdelaj(nizi, 87, "9WzCuDT3b0sGq");
    izdelaj(nizi, 88, "lElh6RTSa_S7vUlHJLI4kmArcupVv_TyurzsaBby_j5r7JU97B");
    izdelaj(nizi, 89, "Op1N1v7pb6");
    izdelaj(nizi, 90, "zV8Yx4y4UR_dkPgsv7r6Wgpirzj18aOS9hcOQmkvwnISjdW5G31GKubAUQurwefBPhighFzOOmxBi6ntIpa1fj94z3ceRCEQt0");
    izdelaj(nizi, 91, "0F3SPmypokAulXOa0DoIygWupbJpR7CYwu975ZQsY9L8mzpXkQxXFBMntkSnVviE");
    izdelaj(nizi, 92, "fdVIMTxRt5T");
    izdelaj(nizi, 93, "vU61g25Dnj");
    izdelaj(nizi, 94, "Y");
    izdelaj(nizi, 95, "0F3SPmypokAulXOa0DoIygWupbJpR7CYwu975ZQsY9L8mzpXkQxXFBMntkSnVviE");
    izdelaj(nizi, 96, "tNYAz_fHNFS0sldhgrkxR0kgJGI9yKldu1Zbos0bMk3lrnKVSFffBt9iLQVjuARzokXpqqyaYinDrgMgmUmJ");
    izdelaj(nizi, 97, "ndmrMacABCwo_9RUyXhJZiNtZyMVlUAw7lddvRcxPHK05dahPAEi23nLmzyHtt92hnLWyno");
    izdelaj(nizi, 98, "JSKfGQbJjq_E0I5dQxzrDkxzRHaM9dmExphIiu1cX9DPMi3Ln0ot3jWaKjL94dMOKDuOAB5TKj00shlzk");
    izdelaj(nizi, 99, "La0CcNbvESZOAAqVYZzoC5S0q0KJF");
    izdelaj(nizi, 100, "1QS5_I_vKSb4MljDuV7mt7dMqVOjpkl");
    izdelaj(nizi, 101, "TpjAOXC0oxiyifSYSp_pGYXgZgbegdGcJ2dFsvKSoY5LgwRK9R0PLh6vOjsT4WMYWS7A2vpig6cZLdkhGmpIci8Tnq");
    izdelaj(nizi, 102, "1ZSor8MksQ0ZV584uRiaKmU74Gpz7ivNeXb7D6j");
    izdelaj(nizi, 103, "QU06PDxl_eZlCSoaO_eH6LLNWBaVTNzoCCfCBIHwQm6nPytjGI3tgmC9ZB_ZImN7U6V_l");
    izdelaj(nizi, 104, "1ZSor8MksQ0ZV584uRiaKmU74Gpz7ivNeXb7D6j");
    izdelaj(nizi, 105, "xzmZqspLoA0MQb5Cv8pUzsiXYdd4F5B9KhKQEzvDzI");
    izdelaj(nizi, 106, "IbFpMrNbd_tbLtuEy0W1pgvK_eG_VrsM4sK_byi");
    izdelaj(nizi, 107, "AFR40nzUqFLzyHJcHsRl_Dxx37EP");
    izdelaj(nizi, 108, "xQVNca4B0Z42OWAfRmwC");
    izdelaj(nizi, 109, "6E73VlmPh6JxqjQQ9gcxdsK3s_cAlyY4MP3Is0EhHuXkdxokJb_o9oUFpJAt260puyQg4m1jx44wiIE2bYCFPd6Wd0eFc");
    izdelaj(nizi, 110, "ZZaU8oA9KLYYH0JBZMu7iz0pG");
    izdelaj(nizi, 111, "Op1N1v7pb6");
    izdelaj(nizi, 112, "gW9C");
    izdelaj(nizi, 113, "sDMCCQawx92e8EewW3OheWRB0");
    izdelaj(nizi, 114, "eweZG41cCRjBBZ5BN8GL3Yx_BVAuLLq6gQyVaehlaZEhg3");
    izdelaj(nizi, 115, "3qbzR21IyQL4g");
    izdelaj(nizi, 116, "Cl1UUTExFHIqoBm67O9FDRg7FvWEtKQaxwQLcnrtgdYiioBnvvucBllgN7Jhjz4HThm4N4nMAzvJjTiVpkBXn");
    izdelaj(nizi, 117, "BKZ_P6hFZI3O43us327HD5aqRZZ9Qj5rM");
    izdelaj(nizi, 118, "DSujOTQXsM1kc9QNmrV5hkeh_QpRsOaVvoCSA9etnmvUttrTZdrq7Um");
    izdelaj(nizi, 119, "9NicZGhohzNpK_eGPd_Bp8");
    izdelaj(nizi, 120, "xzmZqspLoA0MQb5Cv8pUzsiXYdd4F5B9KhKQEzvDzI");
    izdelaj(nizi, 121, "AFR40nzUqFLzyHJcHsRl_Dxx37EP");
    izdelaj(nizi, 122, "vqOplEIMQEHFVUwpNlAiR_HG5pdTMbSN23r4DygxLaGBVZ48RnoDFPhX3AR6bsn6q5i0mbp");
    izdelaj(nizi, 123, "XjssOSv7hE74xo4xSjrK2EHv4v3tCPaFQ6RabpjzA_Y1CuT67fCEhnOceiQW4Yj8wQln51XrTL5Yz0R");
    izdelaj(nizi, 124, "egL3");
    izdelaj(nizi, 125, "9WzCuDT3b0sGq");
    izdelaj(nizi, 126, "Y");
    izdelaj(nizi, 127, "m0Skrh7MOqUnQ0hFp9KScYuKVs25KimP5uhDMwFMCZ6pIM");
    izdelaj(nizi, 128, "D9KCnIZizT1Xda6HOdtsrrmjIRfL7ki4ZcQSg8dNGa_SKg7IyEunnlOi5H");
    izdelaj(nizi, 129, "6E73VlmPh6JxqjQQ9gcxdsK3s_cAlyY4MP3Is0EhHuXkdxokJb_o9oUFpJAt260puyQg4m1jx44wiIE2bYCFPd6Wd0eFc");
    izdelaj(nizi, 130, "xdevaQWx64xlMf7bN0VToITWGNmrNke513WV02Lqc14618KqjpXEEATg3XI38zxz");
    izdelaj(nizi, 131, "44Wj3ctFs0Lw4");
    izdelaj(nizi, 132, "IVoEcUbBaIPcx8ALh4mEz082e6F4LmMc4gDFJ4OGYxFZ1IhCVugby8qh5Yse1iLUV");
    izdelaj(nizi, 133, "9WzCuDT3b0sGq");
    izdelaj(nizi, 134, "aozxoWPl3BVI5I0LUU_dJMmJHOP9GWAn46cPDYcf7LJ5SnHPmLgS9EJl7_HB3vH25O");
    izdelaj(nizi, 135, "hstka0ijOuUNo");
    izdelaj(nizi, 136, "tnPuQJu91CcHcJWkfADkdUKV6Ov0dO6SWqYK0KCXkKg_DrPj_PATRrbcSl62TduvQ6HaQzD33y8");
    izdelaj(nizi, 137, "H8yP6TQx235yJoBt9_irfcNEyLIcrlI5hzQ2f0EaP1SXH7HpHGF_xHXftgJFyrN4gynFqm6bZovvcvnC");
    izdelaj(nizi, 138, "66G8HjaMnyjYe85vBMrXTAvM3HaY9al1AhHeXqiK5TWryzj8A0pDYtcSx0sQR9MTbkjal4IW8EIICiLdvagg");
    izdelaj(nizi, 139, "fjpg2Q");
    izdelaj(nizi, 140, "0F3SPmypokAulXOa0DoIygWupbJpR7CYwu975ZQsY9L8mzpXkQxXFBMntkSnVviE");
    izdelaj(nizi, 141, "9dVxtU9PC0mA64g23V_25lTzucLjC_9QttkVombVlfScadf4l0FYAZ0jzwf7fLcR9Wbp");
    izdelaj(nizi, 142, "3qbzR21IyQL4g");
    izdelaj(nizi, 143, "Rs2g9F0_E9mUVzim7Ajk5_z5A4A");
    izdelaj(nizi, 144, "paudanplq7ysDh8ZTjaUO4zG2_CiN56Ng6kuWOx859hN3fZPVDa1KUZRRm24ZvTpckYhwyzA6_7md2sKX");
    izdelaj(nizi, 145, "J0gwxe8DveFYo3OSwIQjFb_ZPg1ZjsRcYLivI29k2g1IfF4l1M9t6yHsT5hyLZt6g");
    izdelaj(nizi, 146, "66G8HjaMnyjYe85vBMrXTAvM3HaY9al1AhHeXqiK5TWryzj8A0pDYtcSx0sQR9MTbkjal4IW8EIICiLdvagg");
    izdelaj(nizi, 147, "3qbzR21IyQL4g");
    izdelaj(nizi, 148, "C4S8GXptlQ7LIbaD05kSME7UoObrOBIXSuSY1GRzKn7UhQLP1mq1bOR1PjEvJdGFYbnsXrf4rndUlRQ64sIRey7tKBK4gSM");
    izdelaj(nizi, 149, "WeJorCXdfhznIEmKSrztazuNmlJ9D0ad11V6QzZKDmLdBqKAhaURRHiM27hwTRnd");
    izdelaj(nizi, 150, "9WzCuDT3b0sGq");
    izdelaj(nizi, 151, "qmsCXrPZJrJ94oti5SF0HWqiQ0LimHYrVjVbY8nKuJQpXne");
    izdelaj(nizi, 152, "3PKjWjEQdxbwrcj1EH9LoWgAinXIHQ3acCymuU1nE_");
    izdelaj(nizi, 153, "GMerAzeC");
    izdelaj(nizi, 154, "IKwbYSxYvLjnVUup69mW3SWXmZHV4VS1CFNkjQbzofwBj37UvPpzrBkV02xsdiHVkY9QM92Q31fwrDQVGRCfAoZb6DX4sqJUY");
    izdelaj(nizi, 155, "fdVIMTxRt5T");
    izdelaj(nizi, 156, "3qbzR21IyQL4g");
    izdelaj(nizi, 157, "_m4cFsboeZFOvDFr_ldLm");
    izdelaj(nizi, 158, "hstka0ijOuUNo");

    char** niziKopija = malloc((n + 1) * sizeof(char*));
    memcpy(niziKopija, nizi, (n + 1) * sizeof(char*));

    racionaliziraj(nizi);

    for (int i = 0; i < n; i++) {
        printf("%d", nizi[i] == niziKopija[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("<%s>\n", nizi[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        if (nizi[i] == niziKopija[i]) {
            free(nizi[i]);
        }
    }

    free(nizi);
    free(niziKopija);

    printf("-----\n");

    return 0;
}
