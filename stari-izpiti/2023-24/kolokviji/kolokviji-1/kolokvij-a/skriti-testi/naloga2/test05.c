
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
    int n = 245;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 1, "f_Z1lQJpZHRI5NadY0mmv1ioA_EcswyIU6Iw70QUP3b9J9iCiEGvyLazSbXoVt97gJkS5biiWicSBDrSunYzsXq");
    izdelaj(nizi, 2, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 3, "f_Z1lQJpZHRI5NadY0mmv1ioA_EcswyIU6Iw70QUP3b9J9iCiEGvyLazSbXoVt97gJkS5biiWicSBDrSunYzsXq");
    izdelaj(nizi, 4, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 5, "XAo4I2zPBwaLJep70ON2D0vwMCupsNUD");
    izdelaj(nizi, 6, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 7, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 8, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 9, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 10, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 11, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 12, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 13, "fusLYHWt8XDXRgmtA7jebgTlJ5CON6OIMIfji76x70OkabQGXVQ4PzB");
    izdelaj(nizi, 14, "_du");
    izdelaj(nizi, 15, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 16, "pL8VhPYExgfCcTlubb1D4V8x5tRaVNLPwAQhqiDAXhBkiw1Gjwk1DI4pi");
    izdelaj(nizi, 17, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 18, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 19, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 20, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 21, "P9zca3vtbuDV0omFMTdZClfF2qo3Mc1da");
    izdelaj(nizi, 22, "XAo4I2zPBwaLJep70ON2D0vwMCupsNUD");
    izdelaj(nizi, 23, "_du");
    izdelaj(nizi, 24, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 25, "pL8VhPYExgfCcTlubb1D4V8x5tRaVNLPwAQhqiDAXhBkiw1Gjwk1DI4pi");
    izdelaj(nizi, 26, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 27, "6EFapbYoLjBReY65kKaz929fcJJdL3Spbe2loeqPtdOsz9n_bWVj7o46L9QJJiVudLHiwoT");
    izdelaj(nizi, 28, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 29, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 30, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 31, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 32, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 33, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 34, "pL8VhPYExgfCcTlubb1D4V8x5tRaVNLPwAQhqiDAXhBkiw1Gjwk1DI4pi");
    izdelaj(nizi, 35, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 36, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 37, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 38, "k7rOrm7mjeXdmSNCIWmy1LrzNbi3nyOnA4_PXe4tlt8Un1DwnPJZSQHuQqGE5yYWugTyowmHC5Jki");
    izdelaj(nizi, 39, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 40, "vhJV5o1E27M5JvJwbCu7s23vmc2Q4tRB067ewxFp6Kz");
    izdelaj(nizi, 41, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 42, "7rSR9Rt0yR");
    izdelaj(nizi, 43, "MUhRj0ef7a4fLf8zX09elNR9fw0LQF");
    izdelaj(nizi, 44, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 45, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 46, "2HOz1rTTmdvTjPtYrJIMTQbpEokut1gXDzXnhU1Ick5OKz7WkgqV0A3dNl");
    izdelaj(nizi, 47, "ZSOlUEUe_xbietxpGVgsT8ELh_nz8G3GtCCaSUF7a3anVjNaOHwPFEk3PxuRoGEHnm58CSF6TagA6YKTq");
    izdelaj(nizi, 48, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 49, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 50, "lav5IQp69wSiiTCBh5qsihRUU3ajLVee38Wr1BQsfZ7UneTdHVqtYTPOe_HpZqP0oh");
    izdelaj(nizi, 51, "_du");
    izdelaj(nizi, 52, "ZSOlUEUe_xbietxpGVgsT8ELh_nz8G3GtCCaSUF7a3anVjNaOHwPFEk3PxuRoGEHnm58CSF6TagA6YKTq");
    izdelaj(nizi, 53, "ZYSEXrKB8LktltQijrP93lkUTQCkkebcMbj3z4vEDKSZWswWDUFdI4NfE1__L9R6yWsosPNRxBq");
    izdelaj(nizi, 54, "ZYSEXrKB8LktltQijrP93lkUTQCkkebcMbj3z4vEDKSZWswWDUFdI4NfE1__L9R6yWsosPNRxBq");
    izdelaj(nizi, 55, "gml4nlZdIBQrMYZLZn0Yw0oXXae2oU_dFZmejhDy77NUXHKq6wmqwctEkmI1_wdKQxWQGVV1Dl");
    izdelaj(nizi, 56, "fusLYHWt8XDXRgmtA7jebgTlJ5CON6OIMIfji76x70OkabQGXVQ4PzB");
    izdelaj(nizi, 57, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 58, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 59, "D8LS_NrioKp");
    izdelaj(nizi, 60, "FINPtS4tm7qIHU7HtjOPhZnMwAsnq28UzJI1JM2VGZE_QcA6KVhhetnAcIwTxQMdO6tZ61Qdopa8nkM6");
    izdelaj(nizi, 61, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 62, "NOSht08JtGEA02GaRAW1ttS5AwXN3sf6JuqihJ1gFI7dvpBrqeeUmogIbyrPe5fiN8kfL2aw4aWpaxogvRuif46CckN9O");
    izdelaj(nizi, 63, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 64, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 65, "TzzTNCNQjtiS6BmemRxgpUBGSw9Ea3_sIiwkvqW0");
    izdelaj(nizi, 66, "yzzwvXSgrMC78L3iBlYnN");
    izdelaj(nizi, 67, "pL8VhPYExgfCcTlubb1D4V8x5tRaVNLPwAQhqiDAXhBkiw1Gjwk1DI4pi");
    izdelaj(nizi, 68, "6EFapbYoLjBReY65kKaz929fcJJdL3Spbe2loeqPtdOsz9n_bWVj7o46L9QJJiVudLHiwoT");
    izdelaj(nizi, 69, "P9zca3vtbuDV0omFMTdZClfF2qo3Mc1da");
    izdelaj(nizi, 70, "iEBx3105FMXo8MxO4YOA6px5wHceLMUUDDMoHD1oVuxMlEW8zbsG2bjH");
    izdelaj(nizi, 71, "gou16_eadBmpdByOU");
    izdelaj(nizi, 72, "C7ocYeK9RGvGkkim_r1w");
    izdelaj(nizi, 73, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 74, "fWX8Hb_z");
    izdelaj(nizi, 75, "0VU");
    izdelaj(nizi, 76, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 77, "2HOz1rTTmdvTjPtYrJIMTQbpEokut1gXDzXnhU1Ick5OKz7WkgqV0A3dNl");
    izdelaj(nizi, 78, "4r3HlD06au6jmGh8ACqOzxYp2Zx6Wbe86DdxaitHhBt21p2QS7PLhjTI6CnFGxjQtzAywo1rlSSXSkEp");
    izdelaj(nizi, 79, "UlVOOfuY_p");
    izdelaj(nizi, 80, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 81, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 82, "jKARglOp7Kcu71Q06_No3AsTr3_qcWOKTapF50J6frQRGq0Loal1Slse6E5bcGW0_NT4hKHMqIh9gF");
    izdelaj(nizi, 83, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 84, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 85, "wxHcR17ZlmNylAuVfssO3LwKDyX9GP");
    izdelaj(nizi, 86, "pL8VhPYExgfCcTlubb1D4V8x5tRaVNLPwAQhqiDAXhBkiw1Gjwk1DI4pi");
    izdelaj(nizi, 87, "IejqpbtfFrRDeS3MMXR5G4YLwr4dcCtQnmI1IumX_Cn7HlhWtj0Q9vGrXkhPSuPjzpuly05N");
    izdelaj(nizi, 88, "pL8VhPYExgfCcTlubb1D4V8x5tRaVNLPwAQhqiDAXhBkiw1Gjwk1DI4pi");
    izdelaj(nizi, 89, "fusLYHWt8XDXRgmtA7jebgTlJ5CON6OIMIfji76x70OkabQGXVQ4PzB");
    izdelaj(nizi, 90, "6EFapbYoLjBReY65kKaz929fcJJdL3Spbe2loeqPtdOsz9n_bWVj7o46L9QJJiVudLHiwoT");
    izdelaj(nizi, 91, "fusLYHWt8XDXRgmtA7jebgTlJ5CON6OIMIfji76x70OkabQGXVQ4PzB");
    izdelaj(nizi, 92, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 93, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 94, "gml4nlZdIBQrMYZLZn0Yw0oXXae2oU_dFZmejhDy77NUXHKq6wmqwctEkmI1_wdKQxWQGVV1Dl");
    izdelaj(nizi, 95, "2HOz1rTTmdvTjPtYrJIMTQbpEokut1gXDzXnhU1Ick5OKz7WkgqV0A3dNl");
    izdelaj(nizi, 96, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 97, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 98, "bJMGKWwUQ0lkNonEsF60CYNGhWeGYWoGrQttiyOk");
    izdelaj(nizi, 99, "gml4nlZdIBQrMYZLZn0Yw0oXXae2oU_dFZmejhDy77NUXHKq6wmqwctEkmI1_wdKQxWQGVV1Dl");
    izdelaj(nizi, 100, "GT7AHJ7t35u7SIDRWvWVw9IMowFBNx");
    izdelaj(nizi, 101, "eCntAWr3ZDZht4L8qFEVQ7JeaI5ZVii30I82T3RHaeUInADhr5aTKcbtGSaTjXmOCwlt5OXIBUE74A_R7RFfNXDkHLRf");
    izdelaj(nizi, 102, "P9zca3vtbuDV0omFMTdZClfF2qo3Mc1da");
    izdelaj(nizi, 103, "oIMDA_NpJF");
    izdelaj(nizi, 104, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 105, "coCOFXq_J1BiCPwo1t1Yq2Bk3pWTownrFbUhmozV0hI0HcbW4R6qBoUIwQHi3IB4");
    izdelaj(nizi, 106, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 107, "f_Z1lQJpZHRI5NadY0mmv1ioA_EcswyIU6Iw70QUP3b9J9iCiEGvyLazSbXoVt97gJkS5biiWicSBDrSunYzsXq");
    izdelaj(nizi, 108, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 109, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 110, "hWrNJRwmboD8TN02BSIZDT1iH40QE50jsuIsbhRfZ9ASUMXmvEP4L1rF3tC_dsXHlseAHDwlWvLNp5Butvy6");
    izdelaj(nizi, 111, "ZYSEXrKB8LktltQijrP93lkUTQCkkebcMbj3z4vEDKSZWswWDUFdI4NfE1__L9R6yWsosPNRxBq");
    izdelaj(nizi, 112, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 113, "pL8VhPYExgfCcTlubb1D4V8x5tRaVNLPwAQhqiDAXhBkiw1Gjwk1DI4pi");
    izdelaj(nizi, 114, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 115, "W2U");
    izdelaj(nizi, 116, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 117, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 118, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 119, "fznECp6__KXCFfauG8o9kjMFqOsWZFaDZ_RKhYA4vk10T6la_SY8IGheftza4LVThapyMcx1euBMm");
    izdelaj(nizi, 120, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 121, "gP_Rnbd81CYfnv0uNRNo2gg0umGI2F7eRFIQGScZDZ2HW");
    izdelaj(nizi, 122, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 123, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 124, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 125, "pBkY0gusskU5G_pB8rU4LiOoN2myfPnrxcdBXK86U9cA_jeF1e3jigQxFHGXs4xbSFVcdPOOm3Fe");
    izdelaj(nizi, 126, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 127, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 128, "NOSht08JtGEA02GaRAW1ttS5AwXN3sf6JuqihJ1gFI7dvpBrqeeUmogIbyrPe5fiN8kfL2aw4aWpaxogvRuif46CckN9O");
    izdelaj(nizi, 129, "Z4M348ZClR7HhGFaIX8hI1HOQ10rZ1B5Cfv8qrMcGiCJMUCsrBpx7gzs");
    izdelaj(nizi, 130, "my45S2FnIohAvJmk2SCXOLjoOA1Le8hWlCOr2qI1Gve5f3r5ZHS3FRTL");
    izdelaj(nizi, 131, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 132, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 133, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 134, "GepC34Ew6XRFekrzbivSnm2Qk7IuQYrRYu21irIJ");
    izdelaj(nizi, 135, "3e0mx6Aa6d6XZlUZj5QNghW3FpZyoOaHZCo19xh6h4xWiTVy");
    izdelaj(nizi, 136, "jKARglOp7Kcu71Q06_No3AsTr3_qcWOKTapF50J6frQRGq0Loal1Slse6E5bcGW0_NT4hKHMqIh9gF");
    izdelaj(nizi, 137, "oIMDA_NpJF");
    izdelaj(nizi, 138, "GepC34Ew6XRFekrzbivSnm2Qk7IuQYrRYu21irIJ");
    izdelaj(nizi, 139, "_du");
    izdelaj(nizi, 140, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 141, "yzzwvXSgrMC78L3iBlYnN");
    izdelaj(nizi, 142, "k7rOrm7mjeXdmSNCIWmy1LrzNbi3nyOnA4_PXe4tlt8Un1DwnPJZSQHuQqGE5yYWugTyowmHC5Jki");
    izdelaj(nizi, 143, "gP_Rnbd81CYfnv0uNRNo2gg0umGI2F7eRFIQGScZDZ2HW");
    izdelaj(nizi, 144, "jAA2x6Amcme8ZJS1");
    izdelaj(nizi, 145, "xzmZqspLoA0MQb5Cv8pUzsiXYdd4F5B9KhKQEzvDzI");
    izdelaj(nizi, 146, "L");
    izdelaj(nizi, 147, "2HOz1rTTmdvTjPtYrJIMTQbpEokut1gXDzXnhU1Ick5OKz7WkgqV0A3dNl");
    izdelaj(nizi, 148, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 149, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 150, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 151, "Tg");
    izdelaj(nizi, 152, "b1TfkFHNmjbnmjR2QiAyaz55GHK11aTHHTfin_14zXL0xeWA5u2lpWJHJKGTUrwwSZYVwWocB19y");
    izdelaj(nizi, 153, "pL8VhPYExgfCcTlubb1D4V8x5tRaVNLPwAQhqiDAXhBkiw1Gjwk1DI4pi");
    izdelaj(nizi, 154, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 155, "ZSOlUEUe_xbietxpGVgsT8ELh_nz8G3GtCCaSUF7a3anVjNaOHwPFEk3PxuRoGEHnm58CSF6TagA6YKTq");
    izdelaj(nizi, 156, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 157, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 158, "IejqpbtfFrRDeS3MMXR5G4YLwr4dcCtQnmI1IumX_Cn7HlhWtj0Q9vGrXkhPSuPjzpuly05N");
    izdelaj(nizi, 159, "NOSht08JtGEA02GaRAW1ttS5AwXN3sf6JuqihJ1gFI7dvpBrqeeUmogIbyrPe5fiN8kfL2aw4aWpaxogvRuif46CckN9O");
    izdelaj(nizi, 160, "my45S2FnIohAvJmk2SCXOLjoOA1Le8hWlCOr2qI1Gve5f3r5ZHS3FRTL");
    izdelaj(nizi, 161, "my45S2FnIohAvJmk2SCXOLjoOA1Le8hWlCOr2qI1Gve5f3r5ZHS3FRTL");
    izdelaj(nizi, 162, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 163, "2HOz1rTTmdvTjPtYrJIMTQbpEokut1gXDzXnhU1Ick5OKz7WkgqV0A3dNl");
    izdelaj(nizi, 164, "gml4nlZdIBQrMYZLZn0Yw0oXXae2oU_dFZmejhDy77NUXHKq6wmqwctEkmI1_wdKQxWQGVV1Dl");
    izdelaj(nizi, 165, "_du");
    izdelaj(nizi, 166, "6EFapbYoLjBReY65kKaz929fcJJdL3Spbe2loeqPtdOsz9n_bWVj7o46L9QJJiVudLHiwoT");
    izdelaj(nizi, 167, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 168, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 169, "ut1l7bE7bYLDKEgC5k11AyJeot4DXwkGpFQqoTjwnAXdWFR8WXS7");
    izdelaj(nizi, 170, "_du");
    izdelaj(nizi, 171, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 172, "pL8VhPYExgfCcTlubb1D4V8x5tRaVNLPwAQhqiDAXhBkiw1Gjwk1DI4pi");
    izdelaj(nizi, 173, "bJMGKWwUQ0lkNonEsF60CYNGhWeGYWoGrQttiyOk");
    izdelaj(nizi, 174, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 175, "7_jBZL1lxWJSc0kKzOps9n78Z_W6T");
    izdelaj(nizi, 176, "cF3yyjZc5RjRbAu3DQ_YKZeFDbsPR");
    izdelaj(nizi, 177, "j19dsq5RRuYZMofH8hO2vNrEptqeQcPX1Fa_zJq2TrJZphv5P4RZ4lRu6EjDRb47lqgYEO8GgRqf");
    izdelaj(nizi, 178, "IVoEcUbBaIPcx8ALh4mEz082e6F4LmMc4gDFJ4OGYxFZ1IhCVugby8qh5Yse1iLUV");
    izdelaj(nizi, 179, "eCntAWr3ZDZht4L8qFEVQ7JeaI5ZVii30I82T3RHaeUInADhr5aTKcbtGSaTjXmOCwlt5OXIBUE74A_R7RFfNXDkHLRf");
    izdelaj(nizi, 180, "6fZiUQCMdQ0naG80F0ZvMDdbFh91wJf7VqHNKHeAmv4JFJ5kCoAzPDiMoAUbuGyDuMADWbry28hNq0GFIVM");
    izdelaj(nizi, 181, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 182, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 183, "Ua79pDGTu_a");
    izdelaj(nizi, 184, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 185, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 186, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 187, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 188, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 189, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 190, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 191, "XhGX3iox9BoYn_P9RBR5x2peYKd2p");
    izdelaj(nizi, 192, "3e0mx6Aa6d6XZlUZj5QNghW3FpZyoOaHZCo19xh6h4xWiTVy");
    izdelaj(nizi, 193, "3e0mx6Aa6d6XZlUZj5QNghW3FpZyoOaHZCo19xh6h4xWiTVy");
    izdelaj(nizi, 194, "pL8VhPYExgfCcTlubb1D4V8x5tRaVNLPwAQhqiDAXhBkiw1Gjwk1DI4pi");
    izdelaj(nizi, 195, "LArUZqP455UgnIJwpf0IXQEro5V");
    izdelaj(nizi, 196, "R0ZfFmT5");
    izdelaj(nizi, 197, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 198, "2HOz1rTTmdvTjPtYrJIMTQbpEokut1gXDzXnhU1Ick5OKz7WkgqV0A3dNl");
    izdelaj(nizi, 199, "NOSht08JtGEA02GaRAW1ttS5AwXN3sf6JuqihJ1gFI7dvpBrqeeUmogIbyrPe5fiN8kfL2aw4aWpaxogvRuif46CckN9O");
    izdelaj(nizi, 200, "sgbStIjdVHEPCKRHclyWNIKCGp575qOc6gZbE8LMM2UG8AIKy");
    izdelaj(nizi, 201, "rPbvZd6MqFRsNXOcqs5CQBrPNLAPsPeHBBD6qX3nLbp7DxL9YIiYlX9pI786GkapeILnmRYbR0Y1MG9y");
    izdelaj(nizi, 202, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 203, "DOpdn6X7aHEDySzndznVNkCo1ouZoYWW088JBK6KgsBkbNgUdkrtB5ZvVITSuh75fZ8VDTsEa2ZmFegK9QeSw");
    izdelaj(nizi, 204, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 205, "coCOFXq_J1BiCPwo1t1Yq2Bk3pWTownrFbUhmozV0hI0HcbW4R6qBoUIwQHi3IB4");
    izdelaj(nizi, 206, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 207, "7_jBZL1lxWJSc0kKzOps9n78Z_W6T");
    izdelaj(nizi, 208, "6oCDNFoZ1XTeXBuGBYg4hmANZP80Ul6MH43qIBVEXTHaKZoml5nMdWDX80gjUymcQyZ7rJpCzPh5Gs_vvbw8JlSQ5yDoZ8Jg");
    izdelaj(nizi, 209, "IVoEcUbBaIPcx8ALh4mEz082e6F4LmMc4gDFJ4OGYxFZ1IhCVugby8qh5Yse1iLUV");
    izdelaj(nizi, 210, "4_TM8JlIUjLwcZK1lTIBVcvyaazuZZ2PeS6SmDybxOJtzVShiMQV43v");
    izdelaj(nizi, 211, "jnKFBFZIc");
    izdelaj(nizi, 212, "oq5ESkNoLGj6PnKpffzI3tfeGChkkYdNTtNW55KEidhgSnPedQ77hBjFaW5cXEw_335tzDEN54lTCcllN");
    izdelaj(nizi, 213, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 214, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 215, "pBkY0gusskU5G_pB8rU4LiOoN2myfPnrxcdBXK86U9cA_jeF1e3jigQxFHGXs4xbSFVcdPOOm3Fe");
    izdelaj(nizi, 216, "P9zca3vtbuDV0omFMTdZClfF2qo3Mc1da");
    izdelaj(nizi, 217, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 218, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 219, "ZsmHPFasSDdqDqnNORtC5MyvMNlye");
    izdelaj(nizi, 220, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 221, "fWX8Hb_z");
    izdelaj(nizi, 222, "_du");
    izdelaj(nizi, 223, "Rh_ddZd709Vravr");
    izdelaj(nizi, 224, "9aCWnV8YDivhXPknYhCVZ_lN78AnCj5Cykd2hgA0Fh8aWhRO3jKjOFAjOqQcMjBmmSgKvM8a");
    izdelaj(nizi, 225, "Fn7");
    izdelaj(nizi, 226, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 227, "3ytVXNyjch4zNojIIcrDsSHpNrnE_bPg8FENR_TWWp8oJHCyvcFog156_6Inm6qnJSTp3dFI2Ue");
    izdelaj(nizi, 228, "73OQuUqMvdwLbW44fHXB32T73v3ad0PcJF48K1WuUki4NeU61z9O3aDV59lVZuNn0uoX98DrQOW4NvosxWC9Dnftra7XVB");
    izdelaj(nizi, 229, "FINPtS4tm7qIHU7HtjOPhZnMwAsnq28UzJI1JM2VGZE_QcA6KVhhetnAcIwTxQMdO6tZ61Qdopa8nkM6");
    izdelaj(nizi, 230, "olunjhbIA2PZHtt_8U8Scn9gjXMTRfov");
    izdelaj(nizi, 231, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 232, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 233, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 234, "ystZ62X_V_E6L1D8DF3AA");
    izdelaj(nizi, 235, "eIFMv3LjxGIuBVceez2y4jmn5b");
    izdelaj(nizi, 236, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 237, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 238, "WNcsL1fP8hXe70G7Odp3TVg1485D_OMHO53z4KGF1xvfOG3upT7sDEEWVdTHB_XNKfZccLZWC5aV6B7Kv8m0Awh4BQXYyAkaIQMe");
    izdelaj(nizi, 239, "D8LS_NrioKp");
    izdelaj(nizi, 240, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 241, "0VU");
    izdelaj(nizi, 242, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 243, "lvZ4unmr54M4P1h7Zigmo4eAahD6eBA7iTMeiNtmPUOHcqYC91xjhmWPlV2qVdwqQAEUzYfWMS6Qnbv1nL3CxreznV0Pd");
    izdelaj(nizi, 244, "gdUVvC0Mpkahp1NMWMFHLmeLL3Cj169EKIbovECGaFAVMwPJCAGDFtO3B");

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
