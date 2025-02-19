
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
    int n = 257;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "5xxmJha9hbGUBG5ytndtxsSe02RvcKGXY44UxOEb2EL");
    izdelaj(nizi, 1, "amndU20AcIrxVJUt2wzEouejaJdMUb0UjcyADtCRNnkWidkqEKxh5i8rd7ZnoioD98DqUKIlizlunTVraOpTI9g9");
    izdelaj(nizi, 2, "X2ZZEr4nnx_W4YkT2JjFrUGQhGvyo_8PKcc");
    izdelaj(nizi, 3, "Lhl6YDicVgoHtgJ9b64Gjy");
    izdelaj(nizi, 4, "2CheVkqiNjGAY9Ym0yKZWTTQ");
    izdelaj(nizi, 5, "PudYdCkfUeRWxtRm11v76NpuyFVQU9rtQXSfErn0vWSYnTPUnRoUs");
    izdelaj(nizi, 6, "X2ZZEr4nnx_W4YkT2JjFrUGQhGvyo_8PKcc");
    izdelaj(nizi, 7, "X2ZZEr4nnx_W4YkT2JjFrUGQhGvyo_8PKcc");
    izdelaj(nizi, 8, "PrXKNAZ41iU8THWijp2j032iAaCCZJ2XuF16fzmKGupuSXYYQhFakkKh9I1qP_OkqYsmWm5MV_69ZD");
    izdelaj(nizi, 9, "wufxKXhXDfiyueZBz6g4IpXbCNYENFfe6fzFZyAYBJgrPxoho4opa5v2iu6EXT");
    izdelaj(nizi, 10, "NIdQbOZR9LBjJH6Usb0hBRLAu2w0P8AFr");
    izdelaj(nizi, 11, "wufxKXhXDfiyueZBz6g4IpXbCNYENFfe6fzFZyAYBJgrPxoho4opa5v2iu6EXT");
    izdelaj(nizi, 12, "9p_7eq9fBI3vyZHEbpa9Ji312xg6YE6JiI");
    izdelaj(nizi, 13, "QU4VyDGhPXlY5u4pZvMuAs3CUA0MEvGUZEL7dhb06cucxidQ5DVFjpLZm9qd7WgBwd1LNKZ908TooT0WV_RF2uzOVxie");
    izdelaj(nizi, 14, "5xxmJha9hbGUBG5ytndtxsSe02RvcKGXY44UxOEb2EL");
    izdelaj(nizi, 15, "g0hl0afnpacMyslva_v4");
    izdelaj(nizi, 16, "h9t1GHTP6gdtyNA9QK8_ZOn");
    izdelaj(nizi, 17, "Ftl8LvN9dqLhUI2WDTxI7IGX3xqqVPPmckATaikj_Zb98");
    izdelaj(nizi, 18, "amndU20AcIrxVJUt2wzEouejaJdMUb0UjcyADtCRNnkWidkqEKxh5i8rd7ZnoioD98DqUKIlizlunTVraOpTI9g9");
    izdelaj(nizi, 19, "J_0YuLMZx7eAt_1tj5czsgJYIEvgMu7TfyZBriD6wG4cF");
    izdelaj(nizi, 20, "LLQFH7OvCdRKbkElR6GEYKzNYIAZ8oWOVR8HIOaDbaNp8IquirAajKMiOKCDQLmk82");
    izdelaj(nizi, 21, "KAdOp_Ou4q_InWwPu2lpMPZ75dQJ2G55UBYdK7Myd2Tjw_8vhFgDBnFEX0Ap_zg");
    izdelaj(nizi, 22, "F58XBjo4ZRMI2lPZe8OpJvgW5eUaZ4q5qS7eAXNZJmA1SvnNM9ZSn4suAokZFJds2U7atSlGFjtvSLWXiIlRI3NbnWg4GtZ_dIOS");
    izdelaj(nizi, 23, "2CheVkqiNjGAY9Ym0yKZWTTQ");
    izdelaj(nizi, 24, "kUzCP8p7hBVjU_2xKqEHhhwIIGiQJ11b9cAwMNXz_sysgvb9ry4R2escAMq4ua4a9BPETKUrfRQ3lZjVkyhLm");
    izdelaj(nizi, 25, "8Ykk1OscWuAF9mTQlOIZyCd_lzKbOBMLhwnUnvrmlggZjjEFm9yKB0YGF46knQvQl2gPDOyJoo4fY");
    izdelaj(nizi, 26, "NIdQbOZR9LBjJH6Usb0hBRLAu2w0P8AFr");
    izdelaj(nizi, 27, "IZmP3c");
    izdelaj(nizi, 28, "amndU20AcIrxVJUt2wzEouejaJdMUb0UjcyADtCRNnkWidkqEKxh5i8rd7ZnoioD98DqUKIlizlunTVraOpTI9g9");
    izdelaj(nizi, 29, "uvCkzSifl3v6h");
    izdelaj(nizi, 30, "uIJyDghA_g4N");
    izdelaj(nizi, 31, "pB1LcYxGqo8f5XBmMaXoNvWEIZeajmgHvm0s9ECHhhq4vwJAlNKixXkk3APTNuVQ38uJja3JJ2gg7DRGVoWe5G9G");
    izdelaj(nizi, 32, "YvFgdL4CS");
    izdelaj(nizi, 33, "GsLIT7k8jbxMSEm8LgUbtReQI8Z3ssUVkUxtTNrcAHo9dPMFjXLTP");
    izdelaj(nizi, 34, "xgyOIzasw5OR2tZrXPwcGa6bxuaq5AVkRrnK_xxTckITNbnxYBXlQR9yi4s0KXA7NVlvt3PVKqcu0flOxnnqNWzy06ZF");
    izdelaj(nizi, 35, "PYGsidSJ09gKRC4hpJjmOi5Z_OaKMJajwArTEYmTerOtRXzNSgX6t4ZBGSl2055aN");
    izdelaj(nizi, 36, "fLEoaPIHJCYGuCt2O8H3lEZx0bJu");
    izdelaj(nizi, 37, "wh_HE0sG9aDlErN2nVeInKhbtQdf0kzZO4OmGqMknGcupTtB2qTWJ_zo4a_RsHDEZOSeVncT");
    izdelaj(nizi, 38, "dEKNFOXGUK2Z8IOTpQyi8FDJPQMZzCuJo57xx9NX0SLLvie1");
    izdelaj(nizi, 39, "uIJyDghA_g4N");
    izdelaj(nizi, 40, "X2ZZEr4nnx_W4YkT2JjFrUGQhGvyo_8PKcc");
    izdelaj(nizi, 41, "GsLIT7k8jbxMSEm8LgUbtReQI8Z3ssUVkUxtTNrcAHo9dPMFjXLTP");
    izdelaj(nizi, 42, "xH4Wgk6N3Rjv6ZIbn9zqRdiKHBRwzIPv4RgyVKH");
    izdelaj(nizi, 43, "qyiSq8ARtCoC5KmMF5PyhCrEMTOXK1Plpdpe");
    izdelaj(nizi, 44, "GsLIT7k8jbxMSEm8LgUbtReQI8Z3ssUVkUxtTNrcAHo9dPMFjXLTP");
    izdelaj(nizi, 45, "amndU20AcIrxVJUt2wzEouejaJdMUb0UjcyADtCRNnkWidkqEKxh5i8rd7ZnoioD98DqUKIlizlunTVraOpTI9g9");
    izdelaj(nizi, 46, "nMjeu0CB41bguQZsu4PLGkrkqBu9JGgfaOXrHIY_g1gzblZnrsnmwpV03pmw");
    izdelaj(nizi, 47, "PudYdCkfUeRWxtRm11v76NpuyFVQU9rtQXSfErn0vWSYnTPUnRoUs");
    izdelaj(nizi, 48, "W2X0hHnxxLejWAOAMacQXQX4dCphVeadPByOrNu3mxYs1z6bQT1");
    izdelaj(nizi, 49, "EmhGuaKzikpnT0Ruxtm4PFu8pWi2bte3kOVUhO7_hoeX8uBxj1Ua7pG6S3B2TEu8zcJG8RTh6lLDpIHaWynjUja2thNutA");
    izdelaj(nizi, 50, "lGrYMVi5wFC91N7HRhqm1xOf0USlzOY8fbnEq_A3pLRvZ_38Or2kH6JOoXN__1XD");
    izdelaj(nizi, 51, "hPCgmm1p5Q8KIKpGGRrVxI4atGoxUq1dux3x_s1htEthYWv2XZeVLZvMKWjhAYSw3bsq6IsO2wjAcoZdQ2qgbRrwv8bY_WdT");
    izdelaj(nizi, 52, "X2ZZEr4nnx_W4YkT2JjFrUGQhGvyo_8PKcc");
    izdelaj(nizi, 53, "xH4Wgk6N3Rjv6ZIbn9zqRdiKHBRwzIPv4RgyVKH");
    izdelaj(nizi, 54, "j6OrLXbc6AbJC65tCTIpFlQosOS5eR6T1cNboYZg30GfAE0izTymjP4OQOONVo8EUeLvrY1IuupO1GIJ");
    izdelaj(nizi, 55, "1LHfOrCobN9RDuzkXhe");
    izdelaj(nizi, 56, "svIHKPUdvqYMlK_zxRXZOKxGyycpgSgfTs2wmjPmP_JvY6nZpAuF8w3OuaARMSQnvp7lV_b");
    izdelaj(nizi, 57, "22JtO6xZvUXkyk05QA1R_gsOEvydsB6w4Mg1os5kbr");
    izdelaj(nizi, 58, "kZDYOFNBfOC7qfBHVd1k2dIiNaaSylFJ8qQ4OfiOKTWNrQHncLIA1KNpGpbgFdVl2");
    izdelaj(nizi, 59, "XoDeYQa6J4a5rVzaHD2");
    izdelaj(nizi, 60, "vzz8CBQevw0fwzf");
    izdelaj(nizi, 61, "HPLON06Y1kBoTviVSD3mj7AF4DgNJ80XbH_OlLi");
    izdelaj(nizi, 62, "g0hl0afnpacMyslva_v4");
    izdelaj(nizi, 63, "yHDJojHzf4oOkmoQ68CBAaeTbUFMpEAHc5NceBpwCHqt9qshpfmlq_XqZ4v0SLHYXdMxz32g5BAe");
    izdelaj(nizi, 64, "lGrYMVi5wFC91N7HRhqm1xOf0USlzOY8fbnEq_A3pLRvZ_38Or2kH6JOoXN__1XD");
    izdelaj(nizi, 65, "IzcS7hcgWkIdR0lmIMNtIVJTfiQVbO1g6Lt8Q9PsmAFzqYnafVaV7mmaDBLg5TzaziRFS050djh");
    izdelaj(nizi, 66, "efqiGPevr5n94q6IVYat6UbY6VkZ4aBeH3ipnCQk2WFpPG");
    izdelaj(nizi, 67, "1LHfOrCobN9RDuzkXhe");
    izdelaj(nizi, 68, "dfyCiNhxDjxuo2vv5b2J_MChFRjGvYmrVfJUwVOFcKMw6nRomjxdZCJkj2UQwFx");
    izdelaj(nizi, 69, "jlZLIk6WJJNcxu9ra9TuJVxmPIK");
    izdelaj(nizi, 70, "1NUmYYk");
    izdelaj(nizi, 71, "X2ZZEr4nnx_W4YkT2JjFrUGQhGvyo_8PKcc");
    izdelaj(nizi, 72, "yg_ljLqR_vV1wzE4fDQm_LL4RMl2");
    izdelaj(nizi, 73, "BjqzfLjW5my7vQTbrZBNaKSDpX_tWkBKRjq");
    izdelaj(nizi, 74, "L_MH84K2v24b6CWzHDDUOnCrclOZBWiKNeB1s8bsxX6jHkNpsT9iJAfrZGNI");
    izdelaj(nizi, 75, "xH4Wgk6N3Rjv6ZIbn9zqRdiKHBRwzIPv4RgyVKH");
    izdelaj(nizi, 76, "lGrYMVi5wFC91N7HRhqm1xOf0USlzOY8fbnEq_A3pLRvZ_38Or2kH6JOoXN__1XD");
    izdelaj(nizi, 77, "X2ZZEr4nnx_W4YkT2JjFrUGQhGvyo_8PKcc");
    izdelaj(nizi, 78, "IzcS7hcgWkIdR0lmIMNtIVJTfiQVbO1g6Lt8Q9PsmAFzqYnafVaV7mmaDBLg5TzaziRFS050djh");
    izdelaj(nizi, 79, "IZmP3c");
    izdelaj(nizi, 80, "PYGsidSJ09gKRC4hpJjmOi5Z_OaKMJajwArTEYmTerOtRXzNSgX6t4ZBGSl2055aN");
    izdelaj(nizi, 81, "DlqviIOg_KFFQizPckZ_8_oXUldNVJ3CBM2DVSI6KoBBJUupmj4LJ5ATI2WqF7ATEwckTZC890Gy15ZGHKIrL9UQ");
    izdelaj(nizi, 82, "kKkyXCi6KThnZTeBtlnlp2baQ_vYFaq7Kcfywqk0Y");
    izdelaj(nizi, 83, "xpm4");
    izdelaj(nizi, 84, "Ftl8LvN9dqLhUI2WDTxI7IGX3xqqVPPmckATaikj_Zb98");
    izdelaj(nizi, 85, "X2ZZEr4nnx_W4YkT2JjFrUGQhGvyo_8PKcc");
    izdelaj(nizi, 86, "zed7szYkyNVGopAhs0nz_eef37Q5cXQTKQv4dzshAJ11YKSG2lAEqs9XKRU5e6tsgeh");
    izdelaj(nizi, 87, "0qZS9qcf5WBVervCuPXr42CTgGv7y_akFSRaEgShFxyHusaWrqOZIR");
    izdelaj(nizi, 88, "amndU20AcIrxVJUt2wzEouejaJdMUb0UjcyADtCRNnkWidkqEKxh5i8rd7ZnoioD98DqUKIlizlunTVraOpTI9g9");
    izdelaj(nizi, 89, "LBzzgsKvV8Xp9SosEKbDL9Gfc4PKHMTfBwheTZm1JRIfKOprxMJ4QUZH");
    izdelaj(nizi, 90, "wfugYS3S11fPXRv0xYPgHapfmkeJn4oTAHREpdw");
    izdelaj(nizi, 91, "5xxmJha9hbGUBG5ytndtxsSe02RvcKGXY44UxOEb2EL");
    izdelaj(nizi, 92, "kARodWM0Gdy4ogZcrCtbB0WJ_I2S_1X5RENulVyCfsmsjvuQkZ2fVdiXiemV_WaBcpqEGKQqyY28Nmf");
    izdelaj(nizi, 93, "lGrYMVi5wFC91N7HRhqm1xOf0USlzOY8fbnEq_A3pLRvZ_38Or2kH6JOoXN__1XD");
    izdelaj(nizi, 94, "c4ZeXvLUl7fEcYJGN_rjxEi");
    izdelaj(nizi, 95, "DlqviIOg_KFFQizPckZ_8_oXUldNVJ3CBM2DVSI6KoBBJUupmj4LJ5ATI2WqF7ATEwckTZC890Gy15ZGHKIrL9UQ");
    izdelaj(nizi, 96, "5xxmJha9hbGUBG5ytndtxsSe02RvcKGXY44UxOEb2EL");
    izdelaj(nizi, 97, "uc89ewS4V5XJtbIN0GGSd76l5bf9MerW9XZtBkffYuKCgUn8AFbDqzUufF8_PvHgp5M23IkxB");
    izdelaj(nizi, 98, "KAdOp_Ou4q_InWwPu2lpMPZ75dQJ2G55UBYdK7Myd2Tjw_8vhFgDBnFEX0Ap_zg");
    izdelaj(nizi, 99, "iG1SD3oZpcE6x9");
    izdelaj(nizi, 100, "DplzAZ5S4KO1uyuVTUSpYaNfMjT5ELI3GEg__w4l3HIhAy9dKWCrsdBNuln16jyLDk");
    izdelaj(nizi, 101, "LcZEZJp0y7b0Yd2XZvVUwrdHWjzaXpNn54IyyrsXvITu8H5WbMJ_OmpNfvh4fWH_XGtqpYpgM6HMWwcKYXoqUDEhM1S");
    izdelaj(nizi, 102, "Rtl_dS3gs1WLVBltyESV3NBHFW3wOP14zl9Locf30PuCZJms0rZ381DZykaD3PJIvkL");
    izdelaj(nizi, 103, "wufxKXhXDfiyueZBz6g4IpXbCNYENFfe6fzFZyAYBJgrPxoho4opa5v2iu6EXT");
    izdelaj(nizi, 104, "amndU20AcIrxVJUt2wzEouejaJdMUb0UjcyADtCRNnkWidkqEKxh5i8rd7ZnoioD98DqUKIlizlunTVraOpTI9g9");
    izdelaj(nizi, 105, "uefxk1N1q4GvqOt_0kjF7j5ZAw_dDrQrA5B3SvitUylO_RfP0RNDwIbsOifu7wYwhjHbT03i1Xg");
    izdelaj(nizi, 106, "taGDcm_tHxUvlkenbJCIh9tV03hjgjv1KZDS1w6c3JTBy_ZpwlW7KGvOtt_VIZD9uUyX5ZxyXrW4B7bmkTuBLvcDM6");
    izdelaj(nizi, 107, "IzcS7hcgWkIdR0lmIMNtIVJTfiQVbO1g6Lt8Q9PsmAFzqYnafVaV7mmaDBLg5TzaziRFS050djh");
    izdelaj(nizi, 108, "JKhEbZMi3I6qe5UB7IaGTFCeKMcq55KIkFoUCbIfvkxvyjrUQbFEW9iz2ZVSgR_Or_N");
    izdelaj(nizi, 109, "tVqPYsw5IyKQBfibbrz9kQzjcMzgt7dYKFbeBjA8TpsX7Yit9bxOaIdHfrhqP5VlzA9I1T8jCBTHH");
    izdelaj(nizi, 110, "RcU2x7Ov");
    izdelaj(nizi, 111, "7x5qH3YxgolY3qECFTIKANr8Z8VFIzjP6cgZRkj5zsprz9ZRXcJHJVcSQawp_pTImyJwZi4Tqk");
    izdelaj(nizi, 112, "lGrYMVi5wFC91N7HRhqm1xOf0USlzOY8fbnEq_A3pLRvZ_38Or2kH6JOoXN__1XD");
    izdelaj(nizi, 113, "92yuGGQgpmP5ySNadZbleq7_3RJi");
    izdelaj(nizi, 114, "taGDcm_tHxUvlkenbJCIh9tV03hjgjv1KZDS1w6c3JTBy_ZpwlW7KGvOtt_VIZD9uUyX5ZxyXrW4B7bmkTuBLvcDM6");
    izdelaj(nizi, 115, "8Wz4oFyMzYZB8EsVNeco");
    izdelaj(nizi, 116, "FGQXiIyyAuGa_V2xf07CDNPucVCoiv_");
    izdelaj(nizi, 117, "GwrN6ewM3zReaxP2u_EBwjmMuiaIIOiz1SdPDvffbrp0tvTYwXT7E5U7pQU7kUITGkDdG1rS");
    izdelaj(nizi, 118, "vj4wjdqSyuOT3vOksX0CFEbIJeEEhpaTqVcgqeagB45aTuI06vvGIBcLkJVd22uN76jm5ib4D5nxcw");
    izdelaj(nizi, 119, "zvBKrE");
    izdelaj(nizi, 120, "Qi_C1IXxoexXaHAjyMUVuSJUaNAIn8GVupK5ZALLOY6ht4OBLykGywn8Uiv6BoPln7gY2qH_DTRMqBe_rAkqjJIghZz4E89q");
    izdelaj(nizi, 121, "R");
    izdelaj(nizi, 122, "XVq6NOW4HW1xIxT3HritZpbIxqrxcKRz54QBQc7KMHgdcSw");
    izdelaj(nizi, 123, "vzz8CBQevw0fwzf");
    izdelaj(nizi, 124, "5xxmJha9hbGUBG5ytndtxsSe02RvcKGXY44UxOEb2EL");
    izdelaj(nizi, 125, "VKRdU7mqWsNQI4Q412pJV_4k3i0OVdtGs5K_DYf7PEqjhh_j7jrhAcgRp0uX18OKxZLTmxGLdqE_QXYWx");
    izdelaj(nizi, 126, "Y5TVqvEEDK_5m");
    izdelaj(nizi, 127, "xH4Wgk6N3Rjv6ZIbn9zqRdiKHBRwzIPv4RgyVKH");
    izdelaj(nizi, 128, "lJntCX7PnqzMzjcqn4MsD8ax4IAe_");
    izdelaj(nizi, 129, "_tldiVbZAj1XIRrDJ1K0A0x_WwjNeqlG6kKB_Useivd1eIpXitozgdiNAeb6INSI3TXZrkPbetD4eKlf2IAiNQP2Az2ffLRY5ZtW");
    izdelaj(nizi, 130, "taGDcm_tHxUvlkenbJCIh9tV03hjgjv1KZDS1w6c3JTBy_ZpwlW7KGvOtt_VIZD9uUyX5ZxyXrW4B7bmkTuBLvcDM6");
    izdelaj(nizi, 131, "56oJhCJNDe4KXz4RYHfRuZ6ugI1cmXJIRb8j1Ae_FYIk9wuMRWsrSEWoYV");
    izdelaj(nizi, 132, "NIdQbOZR9LBjJH6Usb0hBRLAu2w0P8AFr");
    izdelaj(nizi, 133, "13doMS9QIA5ZwonIQWE5b31iiXeJpVmjiO7CV9jEEb1iSfMkLKtmyxN2XkyroZ5yoEiKJ");
    izdelaj(nizi, 134, "GgYKrWLgmLHxPQtCjj2skkolkmK54ubi2_xj8e_dm9ssZulkgUVwjFeBb8Jj9t6");
    izdelaj(nizi, 135, "kVDWfkLbddA");
    izdelaj(nizi, 136, "efqiGPevr5n94q6IVYat6UbY6VkZ4aBeH3ipnCQk2WFpPG");
    izdelaj(nizi, 137, "DIEHj2hI_9V1oAacYMGhDRiQNVDal2QDD6XTfwOBrGzfDObVQquAcixJF9ig2zGFSBmRKV7aYfzUdV");
    izdelaj(nizi, 138, "UPJXJyZRD72Gw9wuP9uu_sQugnE4gRp89sx7UypeMuOnpGxVlG9qKPZhKVVfgTp2CCnQD");
    izdelaj(nizi, 139, "stFEznn8dwu7l8jtlhnWYsRUQUlZ8KQX");
    izdelaj(nizi, 140, "XYM496");
    izdelaj(nizi, 141, "PrXKNAZ41iU8THWijp2j032iAaCCZJ2XuF16fzmKGupuSXYYQhFakkKh9I1qP_OkqYsmWm5MV_69ZD");
    izdelaj(nizi, 142, "Gy6VIwK5NQJdudPAdb8Rdmrzh9Ib_1aCsE69KAdKnXEs5qZrFkXyiOEID");
    izdelaj(nizi, 143, "N479WgwQ3eDDPkPGb2c9HcBa43");
    izdelaj(nizi, 144, "HPLON06Y1kBoTviVSD3mj7AF4DgNJ80XbH_OlLi");
    izdelaj(nizi, 145, "EmhGuaKzikpnT0Ruxtm4PFu8pWi2bte3kOVUhO7_hoeX8uBxj1Ua7pG6S3B2TEu8zcJG8RTh6lLDpIHaWynjUja2thNutA");
    izdelaj(nizi, 146, "NIdQbOZR9LBjJH6Usb0hBRLAu2w0P8AFr");
    izdelaj(nizi, 147, "VfBFW7OmD8ok1O6w0iMG2bycTXe_M0qnTkvcjpCpZjBTs_JxtrUwQnhQPWUZYwB5GpV5zCDQPJnvq");
    izdelaj(nizi, 148, "Y_HfYkQ86To6dRoQxlNGUaGmqpjXJdC1RxQ9dWqpwDQQaa_ppkonK3kXjf4yEedvfkV40ywmyXokZFWbVgSRq57D");
    izdelaj(nizi, 149, "Q71_x85Nk");
    izdelaj(nizi, 150, "GwrN6ewM3zReaxP2u_EBwjmMuiaIIOiz1SdPDvffbrp0tvTYwXT7E5U7pQU7kUITGkDdG1rS");
    izdelaj(nizi, 151, "CyLw6YqMVD");
    izdelaj(nizi, 152, "RZyy7lVLcEN2sdNdroVS");
    izdelaj(nizi, 153, "X2ZZEr4nnx_W4YkT2JjFrUGQhGvyo_8PKcc");
    izdelaj(nizi, 154, "efqiGPevr5n94q6IVYat6UbY6VkZ4aBeH3ipnCQk2WFpPG");
    izdelaj(nizi, 155, "jlZLIk6WJJNcxu9ra9TuJVxmPIK");
    izdelaj(nizi, 156, "quQYP0LnhmjsfhEWdUpBYEgODwa");
    izdelaj(nizi, 157, "TdP16IwV7wzRvqn2");
    izdelaj(nizi, 158, "0ed0WUwszJpMyLrHTr43bmvMAerD6C9");
    izdelaj(nizi, 159, "GZpnKC9M5LMysoZm6ebXO9gDw_D9rvntdWggLtk1zeLiX1ekO92Aq0eagEJzAcadYLpCl1w4RLVT92EynCmb2rl6nwDIAylMs");
    izdelaj(nizi, 160, "LQrb6Mhb72pIZqaYTB4YpKUsSyzbNdttPlF3q8oGlNERjWZ5kNBzvQmn3eHYu9iGsbdGyRlP6mW7QrV");
    izdelaj(nizi, 161, "vc5xA_xJgE7nJ0SZiVz_sQ2SF9s2hTa");
    izdelaj(nizi, 162, "ymrDS6Jn6iWCbckFVV5");
    izdelaj(nizi, 163, "m0Skrh7MOqUnQ0hFp9KScYuKVs25KimP5uhDMwFMCZ6pIM");
    izdelaj(nizi, 164, "hGNZbnpvDfFFNAznIFIceOl5K4X8j1DW_vxZejgAT49O_MwZOg4luM7CNub4C5gDcW0CCfu73sy34vaKdxKE2Gzu7BKb1A");
    izdelaj(nizi, 165, "HMUJZHPtjTfnntprt_ZPR06GB_a1zTyRaNSq0Srqe0VIocp1oBdtPwZF4F38vn1lD8R1fZFFcNuSqdeA28x7WCy");
    izdelaj(nizi, 166, "PudYdCkfUeRWxtRm11v76NpuyFVQU9rtQXSfErn0vWSYnTPUnRoUs");
    izdelaj(nizi, 167, "wufxKXhXDfiyueZBz6g4IpXbCNYENFfe6fzFZyAYBJgrPxoho4opa5v2iu6EXT");
    izdelaj(nizi, 168, "xH4Wgk6N3Rjv6ZIbn9zqRdiKHBRwzIPv4RgyVKH");
    izdelaj(nizi, 169, "qyiSq8ARtCoC5KmMF5PyhCrEMTOXK1Plpdpe");
    izdelaj(nizi, 170, "IRY4BkFNu7pFIAZLu2n4emQq2VCBTqUWzwmJlCipX1CXYDF86LtqZ2Nz8Lg");
    izdelaj(nizi, 171, "xgyOIzasw5OR2tZrXPwcGa6bxuaq5AVkRrnK_xxTckITNbnxYBXlQR9yi4s0KXA7NVlvt3PVKqcu0flOxnnqNWzy06ZF");
    izdelaj(nizi, 172, "H3_Ju9x9sgQ3G");
    izdelaj(nizi, 173, "wlivX1LWDdomihfwXYxEkR5s4vSsPqzaAbP");
    izdelaj(nizi, 174, "w4iONVAnLxm_IRtQXYLbeoNs0TnFy3Am7VSmBoMtOP08CcE");
    izdelaj(nizi, 175, "CyLw6YqMVD");
    izdelaj(nizi, 176, "9p_7eq9fBI3vyZHEbpa9Ji312xg6YE6JiI");
    izdelaj(nizi, 177, "vw3Wg_S5r9nD8aQrUMc0zl_69iX8jg8hDNzYGz6supbq7dcCSM1_Cun9acvuEHTNOu6MPU8f3");
    izdelaj(nizi, 178, "KPeTeBJ69jC8QxvVrm6ueSLjwQsZxLK30qAZjOWU96MZYbEY14_6L");
    izdelaj(nizi, 179, "r5Kn_hHBwL14Brlw_Ur2Dq1sxWRNqmpvu1g30hj55dYe4zQ7gO");
    izdelaj(nizi, 180, "fHYh6SYJCNpz8Elbxltvmz5sSdkASoehDLDJq3wNtgSwjKljkYLmS0RvAmlg");
    izdelaj(nizi, 181, "iwRfiMsA9r6HdsvL7qJNjM6pCnQYhqkVx5oP0Dno2IMSwPqs0hp4AGJ9jWfF");
    izdelaj(nizi, 182, "45VMc8ObnIq9ucoLFB3Ltjuh1wCoX89LXe6KZsggqiEYrLk9F_");
    izdelaj(nizi, 183, "uvCkzSifl3v6h");
    izdelaj(nizi, 184, "JIDPDjKjYpUesAe8dHx8jUdaZOsqe1xXw6TSaVySZ36FeHa0AXoRAc1Qge3pmy7LKi6T5wL_e4zBQPLDIYBsbb4oHZX");
    izdelaj(nizi, 185, "1LHfOrCobN9RDuzkXhe");
    izdelaj(nizi, 186, "DIEHj2hI_9V1oAacYMGhDRiQNVDal2QDD6XTfwOBrGzfDObVQquAcixJF9ig2zGFSBmRKV7aYfzUdV");
    izdelaj(nizi, 187, "UU7U4XEV6NuCFoT3zv9CDNqZZJKv6IRo");
    izdelaj(nizi, 188, "F38iME_Dgt9LSzcvh0OMubAOwUX72CYDsEUG9so2zXoPK");
    izdelaj(nizi, 189, "XVq6NOW4HW1xIxT3HritZpbIxqrxcKRz54QBQc7KMHgdcSw");
    izdelaj(nizi, 190, "Q71_x85Nk");
    izdelaj(nizi, 191, "v7NgoWcNZ8RWbo6gghTogc8ZSzw_GCnDjRHZva_06dDk8A8HZvpRpuAPlkvgO2i5Kutf2eJr01lsE3nFhiejBlQ");
    izdelaj(nizi, 192, "7x5qH3YxgolY3qECFTIKANr8Z8VFIzjP6cgZRkj5zsprz9ZRXcJHJVcSQawp_pTImyJwZi4Tqk");
    izdelaj(nizi, 193, "S");
    izdelaj(nizi, 194, "GgYKrWLgmLHxPQtCjj2skkolkmK54ubi2_xj8e_dm9ssZulkgUVwjFeBb8Jj9t6");
    izdelaj(nizi, 195, "R");
    izdelaj(nizi, 196, "ETppgajqYQtBmW1n2L_hfiCHiYlmF6SH");
    izdelaj(nizi, 197, "4tgcK0s3FeUdtEUyz3mtDG7JgAuUdu");
    izdelaj(nizi, 198, "uoEP8WaXIFzN3_PgsJFuHsGwx2FUMZbWkLIfEso128QzANWGi1bJhBAy9Jkn33aaQk44");
    izdelaj(nizi, 199, "gMGKcFN2oTL2GgK00d1o4nEgCq828l2_3ieKcd1SUy6A_HEIJoq");
    izdelaj(nizi, 200, "X5_qoWEasZG7gPEBqCwbyKuQyYtrOBWFbC7sqaCVpV4ZtfALQQSDfURDcnSzW2CFByMCh");
    izdelaj(nizi, 201, "FcHr2MA62hDZMUxyFwNO7pdLNFFh4QXW8MpS70uYztSsp68AecMwYJj2r9ylPcbFGa45Te3Vw5TyNeAEjD");
    izdelaj(nizi, 202, "c4ZeXvLUl7fEcYJGN_rjxEi");
    izdelaj(nizi, 203, "NAFuQZXIj0xBv5eGRf_2JTvAh8MVq6xexAzdz7C2yPDCLOE9qWiaybJhpp1W0mqg");
    izdelaj(nizi, 204, "stFEznn8dwu7l8jtlhnWYsRUQUlZ8KQX");
    izdelaj(nizi, 205, "D9_akMf1ntNwq2eLsgkTInwFtpIqSGQOXxVmAsZxRjmw3VJMcQ8cYNNShPnLNr8");
    izdelaj(nizi, 206, "YltgULP19GYvVTsEkKySPEJZbfn_v2nYGbP12rRmzDi");
    izdelaj(nizi, 207, "Z57rxDKeKBIkt35Oeb3o2awi0xPJgwaHbUQx0023QnVF4Pw4LTsiZph7Fl");
    izdelaj(nizi, 208, "WqaFDzdh0h15ZmFUkzpdWadm2EpBFsY");
    izdelaj(nizi, 209, "6opOx1cv_kfkwGzlziyeqAPpKXBi6GrPAHTap_chUS8yUWju_nolPcmOcvCIjQ");
    izdelaj(nizi, 210, "qipJRQSzzuukBjMm8p36KWftqDhs8JEORDfClM2QL4b8RieBI0TTVUrALd6DxhQDsgJwZn9");
    izdelaj(nizi, 211, "XVq6NOW4HW1xIxT3HritZpbIxqrxcKRz54QBQc7KMHgdcSw");
    izdelaj(nizi, 212, "kARodWM0Gdy4ogZcrCtbB0WJ_I2S_1X5RENulVyCfsmsjvuQkZ2fVdiXiemV_WaBcpqEGKQqyY28Nmf");
    izdelaj(nizi, 213, "wfXwD3OT_ydg5oB");
    izdelaj(nizi, 214, "PorDEkryS7f1faGvKqo319fGG9vHE3zDPLjJVULQaG");
    izdelaj(nizi, 215, "Jeif7M0Ice8Eo6xcPWovUCoJYTJ4xWYUKamwi01VtvwhRPU4ouwne7n6TH7POT5dOq");
    izdelaj(nizi, 216, "stFEznn8dwu7l8jtlhnWYsRUQUlZ8KQX");
    izdelaj(nizi, 217, "gZYLVabfkzGFAZs");
    izdelaj(nizi, 218, "1NUmYYk");
    izdelaj(nizi, 219, "m2A65hccA5QrJ0QOJgrzLKZfegT6zWJAz2uZpQEbHS2FkX9_eHAsBNP2OWcGSSUY_rmXmiaPAGh71DKJPmK2nioWWKCc");
    izdelaj(nizi, 220, "SY");
    izdelaj(nizi, 221, "j6OrLXbc6AbJC65tCTIpFlQosOS5eR6T1cNboYZg30GfAE0izTymjP4OQOONVo8EUeLvrY1IuupO1GIJ");
    izdelaj(nizi, 222, "paudanplq7ysDh8ZTjaUO4zG2_CiN56Ng6kuWOx859hN3fZPVDa1KUZRRm24ZvTpckYhwyzA6_7md2sKX");
    izdelaj(nizi, 223, "ySbxddHMz8haB5qUkcn_iXB6Sv0x0i1i8l6fTCu3cd");
    izdelaj(nizi, 224, "v7NgoWcNZ8RWbo6gghTogc8ZSzw_GCnDjRHZva_06dDk8A8HZvpRpuAPlkvgO2i5Kutf2eJr01lsE3nFhiejBlQ");
    izdelaj(nizi, 225, "taGDcm_tHxUvlkenbJCIh9tV03hjgjv1KZDS1w6c3JTBy_ZpwlW7KGvOtt_VIZD9uUyX5ZxyXrW4B7bmkTuBLvcDM6");
    izdelaj(nizi, 226, "doDv5r0MnL32eyS");
    izdelaj(nizi, 227, "7UX0qOs60ybEPc1AZvM7AfVUs5P8dYEe1Xi_vZ3gLz_nXC9vKm4NBs13JyYqaZVuHOfuY3m_yga0R2hYjq1Qg55YSP");
    izdelaj(nizi, 228, "e9OBlaXlg9C47z_cmrtxeYwaedfHgI_PxC7nxtz3r");
    izdelaj(nizi, 229, "oCcKLLR6NMFQyhlt80j4AdONWWLeO7NL76Q85rXiaE0egj7Ke7YN9fWeiLhH");
    izdelaj(nizi, 230, "X2ZZEr4nnx_W4YkT2JjFrUGQhGvyo_8PKcc");
    izdelaj(nizi, 231, "qyiSq8ARtCoC5KmMF5PyhCrEMTOXK1Plpdpe");
    izdelaj(nizi, 232, "nRQkNzmZKnJCE_APSISdrXq2jWi8Y20I_XXKPYNs4hPzew");
    izdelaj(nizi, 233, "taGDcm_tHxUvlkenbJCIh9tV03hjgjv1KZDS1w6c3JTBy_ZpwlW7KGvOtt_VIZD9uUyX5ZxyXrW4B7bmkTuBLvcDM6");
    izdelaj(nizi, 234, "fXpcHQYZei_u_IHdNzOoqTsnSjzgTd2P5qhz3OJP4fxxtGoSvL");
    izdelaj(nizi, 235, "Hhuq3cDdQAMEwDyGJNEpLvme1MhCKDyYKbh38CCNASCGZCvTE7ttVXQUfkw93");
    izdelaj(nizi, 236, "pij8b1b6rtZmDA73QgM8bxJDDlYRSSSZt_8");
    izdelaj(nizi, 237, "BadZoEtwNUYaQH8pg");
    izdelaj(nizi, 238, "taGDcm_tHxUvlkenbJCIh9tV03hjgjv1KZDS1w6c3JTBy_ZpwlW7KGvOtt_VIZD9uUyX5ZxyXrW4B7bmkTuBLvcDM6");
    izdelaj(nizi, 239, "atnKnMA");
    izdelaj(nizi, 240, "dbdyjaKxVrvbVIqfa");
    izdelaj(nizi, 241, "6h0VW0EJp3DdrqZZHt6GT33aBGrF4PEqjj7c");
    izdelaj(nizi, 242, "EFVITpHUeF38fNvP_iFfFddJR7OfypHSj7dUJK5agrUpZWMp0");
    izdelaj(nizi, 243, "q5djoKfhDeYjWz1nA_V7hY5p_sBZI0aiSP_TlC_69dcw23f0h0uUU7cqV9");
    izdelaj(nizi, 244, "amndU20AcIrxVJUt2wzEouejaJdMUb0UjcyADtCRNnkWidkqEKxh5i8rd7ZnoioD98DqUKIlizlunTVraOpTI9g9");
    izdelaj(nizi, 245, "z_JUmwYWKIGh8e8VgaDGIIb_Q8sxqphO_3WPLKotQe7ZmJwVjZiAcCZvSySGXbO8sY9xBITZFCW7w6raa6lY3WpF0Ouf");
    izdelaj(nizi, 246, "wufxKXhXDfiyueZBz6g4IpXbCNYENFfe6fzFZyAYBJgrPxoho4opa5v2iu6EXT");
    izdelaj(nizi, 247, "XdP01AHSVSHNJ5hqwK2jTSA501JpNySW_YAgs2wYsBew7Mo19vKYpkzy8ZqhhgYAr8ryPq8BA2ep_qtCK");
    izdelaj(nizi, 248, "tceHUjYmzm6Yxckvsfl7Qc7uzS5A_gtzDHlcD0ywOFgf");
    izdelaj(nizi, 249, "gVKOr3kZjqJsneLwLBb9VN_P6edzsCKTrcV3w1_iccmGRUzGehiL6mPyZcSs");
    izdelaj(nizi, 250, "onhwDwXRz3HYcjVVVpTnUZ3oLJj1lRWLeWxfvw0mfAePoWVO_n_vz5f2UovmrFNO");
    izdelaj(nizi, 251, "SY");
    izdelaj(nizi, 252, "6EBp9L_X1LHkkjKPvmSfAa4BDZS");
    izdelaj(nizi, 253, "hY1WqaCWDRcoDam_quQ7RMUVSd38is2YZ3HgmfCVZIdNyypdeuVYAdsYPKc");
    izdelaj(nizi, 254, "wKseQ5rzEPVL_V2yKthrZ8Wkpx4vg2_5");
    izdelaj(nizi, 255, "IzcS7hcgWkIdR0lmIMNtIVJTfiQVbO1g6Lt8Q9PsmAFzqYnafVaV7mmaDBLg5TzaziRFS050djh");
    izdelaj(nizi, 256, "b1Sl54cJDlNemGAUEaUoQ89o49D7oC4rPuemCIid1IhZtz_HJf");

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
