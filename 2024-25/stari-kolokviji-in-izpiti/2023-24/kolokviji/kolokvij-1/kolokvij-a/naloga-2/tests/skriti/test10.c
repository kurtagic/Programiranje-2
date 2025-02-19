
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
    int n = 244;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "yF84vO");
    izdelaj(nizi, 1, "yF84vO");
    izdelaj(nizi, 2, "yF84vO");
    izdelaj(nizi, 3, "wVleW_4rc4G_7YmZmxUu9xrqZfOdvRCx2nAgZDNNoutaXAyQ3Fk1f3TsmGsbu");
    izdelaj(nizi, 4, "bJp_T_KazYKMGQfaLZpD39xoHjONqdMJKj1M");
    izdelaj(nizi, 5, "_3hsxly4YFxSs85FIcANfuORdD7sh6M_NLoE2jAWSosjDa2xBRLr");
    izdelaj(nizi, 6, "0Rc8QGDiKbWg0z");
    izdelaj(nizi, 7, "Xh6K7fXpDToTsSxR2LgpQ_R9LLVgYbl7TOe07u481f0QySP4IzUtFACUc3SxfKwpkcKqxN4Gc");
    izdelaj(nizi, 8, "yF84vO");
    izdelaj(nizi, 9, "OJlP4yHDVpL_VTrrm9e");
    izdelaj(nizi, 10, "RBhQigr8vYfwk3QxrqVbE_E_qmH6y19U26XJzEsHNM7y07");
    izdelaj(nizi, 11, "yF84vO");
    izdelaj(nizi, 12, "yF84vO");
    izdelaj(nizi, 13, "VZsiCq3MAov9lwHsc");
    izdelaj(nizi, 14, "yF84vO");
    izdelaj(nizi, 15, "usxRB0f8Evk_24JyWMAaS2ZuT_W9474oVT_CiaMXKg9Biqz4R8AsFUX2yKxonxzp48LkIaWi05lnI7x3g404ZQZ");
    izdelaj(nizi, 16, "usxRB0f8Evk_24JyWMAaS2ZuT_W9474oVT_CiaMXKg9Biqz4R8AsFUX2yKxonxzp48LkIaWi05lnI7x3g404ZQZ");
    izdelaj(nizi, 17, "TwXacDO7Cod2r49fFJamtcSms3Su4OmuXorZoLslr1P6COZxYkOzLSdjRv9UURPuc68zYjWN4NHeoSL7g4pv7fjZXXCslra");
    izdelaj(nizi, 18, "yRMQA0Y9YcgCZq2e59StKYB4awhhpWa056foi");
    izdelaj(nizi, 19, "TsqZlmh6TGij9NtyudYcj16toKrcoVrJbt3tGnvDBvVs1M0z0tGb1uD0SgrUo3XEdK5HAuRBU4jgwX2InYfC1u_7fwNToLMalzZ");
    izdelaj(nizi, 20, "bavE_I5JCS5h35NXW3fTitcMEe5b1IbczFI3TefCUo6ZauQ_HmjFdjGBpLqWlc7FsJm30APvtYPd3KT");
    izdelaj(nizi, 21, "ziEOdXbqxZFint1aYFxhzZNNN8t4NwJg09ELcqsORvhhzofPAsG2lrtrXoQuCfVKrSUM9640FLC12nq4uXhIXhvLC");
    izdelaj(nizi, 22, "cyTsvfcwew6YnqljiDNW_H");
    izdelaj(nizi, 23, "gu");
    izdelaj(nizi, 24, "7xZ2ULPbJ3OYLYNRLfh7f849DHvDQ_1BXFTy8kJWlCYBYTGWLGOPV");
    izdelaj(nizi, 25, "vEEKWtGFNQiSbvg");
    izdelaj(nizi, 26, "Z_DydCBCO5Oue7Dfq4gedsxYR7K9etelFwoIRMiR4R9Mxan1uPgIyU9_9GMFIu_pjybR61tRx3D4Jld6minws1QEfG5zVH0hw9x");
    izdelaj(nizi, 27, "YMGA_OXllRWrOJGzxy0qyszDcPs2qW96GeXF74M_SNQ1WDRZc4FJeQXA9ZtdE");
    izdelaj(nizi, 28, "RBhQigr8vYfwk3QxrqVbE_E_qmH6y19U26XJzEsHNM7y07");
    izdelaj(nizi, 29, "Y");
    izdelaj(nizi, 30, "zRF955WN4j2Y8GY_hvruMZrTEsRwaRQDJpZUZykEa2pkK8Ue_B8wFnFmZct7NYsCMW9z3bD");
    izdelaj(nizi, 31, "0j_PCpmm9c9Xw5ov1w9wMQAlBRFeSaJzAq8xuUAP0wiNdLWOIMKOxsFrSVdCkRcmZlLuh9UH");
    izdelaj(nizi, 32, "Z_DydCBCO5Oue7Dfq4gedsxYR7K9etelFwoIRMiR4R9Mxan1uPgIyU9_9GMFIu_pjybR61tRx3D4Jld6minws1QEfG5zVH0hw9x");
    izdelaj(nizi, 33, "RBhQigr8vYfwk3QxrqVbE_E_qmH6y19U26XJzEsHNM7y07");
    izdelaj(nizi, 34, "LSnEXf9i8eWsyX3xTAUF5wIStmusZ5HWj771PIOdajzHPFgXA9WeOgDhU7aHG7kADJ_9KK3OvdYifA3NsiXh");
    izdelaj(nizi, 35, "BqyWqO1pxUGAe5Llo26nyLDjrR4ecBfcoOjJJxsfLFBy49uXHRvUvQK6APs0Y7");
    izdelaj(nizi, 36, "EpvMO");
    izdelaj(nizi, 37, "1TyHNFRewD4S4st4o5NSMcfBgYDreJeZMtwislHnr0azx_mvxKikS9p6WIS0DhGc8DNoJWCThDhoJOyw7cF71Xb9NSzRdBpXw");
    izdelaj(nizi, 38, "koqXf8SrI7p4ErbVbak3MBMwO1w");
    izdelaj(nizi, 39, "RBhQigr8vYfwk3QxrqVbE_E_qmH6y19U26XJzEsHNM7y07");
    izdelaj(nizi, 40, "yF84vO");
    izdelaj(nizi, 41, "qCSRV1mp8pAU6i2fsC9gYxvg_lXgOJbIDSka1hQsZcNCMuNi9rp4QmA_VYWXHJUCPH_ObxRWz");
    izdelaj(nizi, 42, "OJlP4yHDVpL_VTrrm9e");
    izdelaj(nizi, 43, "yRMQA0Y9YcgCZq2e59StKYB4awhhpWa056foi");
    izdelaj(nizi, 44, "yF84vO");
    izdelaj(nizi, 45, "EpvMO");
    izdelaj(nizi, 46, "xYrsxBGdeSc2DoOd33rqYpTKt59KWZAhmdR");
    izdelaj(nizi, 47, "yF84vO");
    izdelaj(nizi, 48, "SHVG495LThfibJjZrHAdMWoJD_lxOHhRTFyaQyaEcvNbLNorhCAlNrVq53WGgKdWcQZ0yZPJLCg7WQ9q6CnjJk");
    izdelaj(nizi, 49, "oo");
    izdelaj(nizi, 50, "X4oAm19AIQJvIKcrQHIouCJ5GZhmgqjVW42PRTG4suZkwTTasX8x5aOCoSR4c");
    izdelaj(nizi, 51, "mKNY3LJUnQkhflpzMAhePaggoLg9SvPYN8KwC3l504G_xFyztNZvNpmakQ0pffUUf9dESqmiDTHkieDY0b4pmFf4");
    izdelaj(nizi, 52, "zXRbQJ6VCKRfH");
    izdelaj(nizi, 53, "vdiR1kmsKuwSDY_JNdkXiAwOWjLib");
    izdelaj(nizi, 54, "vuORqYz9eJua3SdVpe2XeaGq0SHE52S1lABDx7ZEBZXzQVW6ReHO9kW2Xk4IS8xnrCP9wCL4rLzsXfGbP");
    izdelaj(nizi, 55, "OJlP4yHDVpL_VTrrm9e");
    izdelaj(nizi, 56, "yRMQA0Y9YcgCZq2e59StKYB4awhhpWa056foi");
    izdelaj(nizi, 57, "JTzYGJcpWAOK5ZwVnDCV");
    izdelaj(nizi, 58, "JBH747qa7O_x0ycdTJVMNL3uHM3V2E1yhjX_0x1AByHhbAc7LHKZGQHT2yg6iapaJgTqPgTWAJ0pSBCCn5");
    izdelaj(nizi, 59, "m2bOjWKhJXhfw94Mr");
    izdelaj(nizi, 60, "RY4AvG7suLaWpQUlaCL6KHwiQriqSZAXskVIGBFm645uxaL0saGqgJj72HNqa1XEgg60LfCuqm9fcYggRp_0udXLR3g");
    izdelaj(nizi, 61, "lc1gWhEatiwoVBhR5GEHynegAN5JfCKllDkEjvm6DOjf_acJI70k0Sh2gfq2eU2wC5YfILkVu4E9i");
    izdelaj(nizi, 62, "7xZ2ULPbJ3OYLYNRLfh7f849DHvDQ_1BXFTy8kJWlCYBYTGWLGOPV");
    izdelaj(nizi, 63, "49N0obKRxw4tqrDIxE");
    izdelaj(nizi, 64, "6KXEOy_kCnsC_lmrk3lWGTU8Qv03w0o0FT3UcpnSO_5RXhmIJdned_wge3aIanAh7jXM4vY3I3lJZHsHwShFY8xU24JrjU");
    izdelaj(nizi, 65, "X0OwfkDJG7TAyO0vtV4fYyhCgzdJbZmJ8dvrsQKcH6J0mnky1HYXLQaBXGjCB");
    izdelaj(nizi, 66, "t3JP2yoB0_6ayn6brkPubkHotrPPUqqiHa0aD64Jc9Xx3g");
    izdelaj(nizi, 67, "NtuN29SnYnwikvo26HP5mdde5e1gF1PKICaYm1mLUeOQgk7dP83aAhcSkC7ruIlxRfe0QSN1nG8JRB0");
    izdelaj(nizi, 68, "vEEKWtGFNQiSbvg");
    izdelaj(nizi, 69, "QTB_T7Au01VvHVbsy4eFKNOkZBxEyTcRWL84_NnHlXoXFJ7_tucYxIMVGWet6vm9Zd03iOgV3fstscd97g94");
    izdelaj(nizi, 70, "EJRRl9mIvMMRKgxXLSlp1c_lNLd7WhL67cSB1ueH5079l4ozlzhjILcBdHfMFSSfjKPV5cCu9JXdA9ufenNGjRgF1GU8jAepz");
    izdelaj(nizi, 71, "4rYscU4V9oyFGcdLOehf_");
    izdelaj(nizi, 72, "IhxzdIPI0e44S56XQhF43sNXYycfaK5ALXzCLY8HFLAdet8yc_trmsHGonCdG_Vi4SOevVuiIzJpunGetua");
    izdelaj(nizi, 73, "cDgNjRpcBxVWJNhVmpbpkPvfUIhLgDb1BVSuQndsfPb4qCacJ03RWJaH_sU_lBmOqFr");
    izdelaj(nizi, 74, "14mSzpdQkevauGjKw24YI60ppFKDrkN5BEGGRP2PF71QdrNXdR1DOmWWfqvz1Nn");
    izdelaj(nizi, 75, "TAzeKgQPCbp0fVBV7ti61zBgGZdTgU2_q6QAEaVEWXq6IOAjOSwGroHlyIFMg23l_2BjoRMdpKrn");
    izdelaj(nizi, 76, "fkOjKrJliRpK6VNGxS1Gu5dQBVW8TnkRc2suiTgEM8mkm");
    izdelaj(nizi, 77, "X0OwfkDJG7TAyO0vtV4fYyhCgzdJbZmJ8dvrsQKcH6J0mnky1HYXLQaBXGjCB");
    izdelaj(nizi, 78, "jL8td2fwNgCqTcAsTSOk2lSAR7knFIMl4k");
    izdelaj(nizi, 79, "OJlP4yHDVpL_VTrrm9e");
    izdelaj(nizi, 80, "AR_01Y");
    izdelaj(nizi, 81, "Ck3u__L7PK_sE9hx9Nfn7x7mB9l30n5tNO8YVKD5mLMlLyh5bOW_Jwj8Nx0S47bwfztxPWSEKYrCP2NEBNkqBXvnnIjYwNxE5_g");
    izdelaj(nizi, 82, "gdPwF5zmeKthwkDC6UnKUmhB");
    izdelaj(nizi, 83, "1TyHNFRewD4S4st4o5NSMcfBgYDreJeZMtwislHnr0azx_mvxKikS9p6WIS0DhGc8DNoJWCThDhoJOyw7cF71Xb9NSzRdBpXw");
    izdelaj(nizi, 84, "MqdFmX5z");
    izdelaj(nizi, 85, "zFddwQv8CStAw0pNVucLWd1YVO7LoJIaXanoto788IlFyi9oslSIm5m4UJLRRXl");
    izdelaj(nizi, 86, "RlYxSY2wXkBPRQLFlS");
    izdelaj(nizi, 87, "EpvMO");
    izdelaj(nizi, 88, "KjnhvF1bi1mSdbgWPmcRZJaRJILxW75bsZvCtNrr0BdVctOoxz6Uyeq0uO2QoWpdVTzf");
    izdelaj(nizi, 89, "OJlP4yHDVpL_VTrrm9e");
    izdelaj(nizi, 90, "t3JP2yoB0_6ayn6brkPubkHotrPPUqqiHa0aD64Jc9Xx3g");
    izdelaj(nizi, 91, "rr2wpHg_XgDyHq9O_dvc6gs5fT1acX__I");
    izdelaj(nizi, 92, "bH7RGcVKuZ3d04hBb633LP8y9f4KWvA2nLOKxcZ1LRvkVn6_fnYYjxh");
    izdelaj(nizi, 93, "mDePhvmQQiBj_HAnHKz3Yp7kDol6UgJMc_HICW_8Hc4m0Zyu53k55uzrzwgK");
    izdelaj(nizi, 94, "jL8td2fwNgCqTcAsTSOk2lSAR7knFIMl4k");
    izdelaj(nizi, 95, "5t6vOwUoC5UZPF");
    izdelaj(nizi, 96, "OJlP4yHDVpL_VTrrm9e");
    izdelaj(nizi, 97, "FIfHYQ_FzcNn");
    izdelaj(nizi, 98, "yF84vO");
    izdelaj(nizi, 99, "Go5e8kSJYRPw2syR4uKv6SWYFuwQQ37kEKNbpZK4");
    izdelaj(nizi, 100, "KseQaI7I1Y9MhxMA3cafyP4hcCkijifJ");
    izdelaj(nizi, 101, "6KXEOy_kCnsC_lmrk3lWGTU8Qv03w0o0FT3UcpnSO_5RXhmIJdned_wge3aIanAh7jXM4vY3I3lJZHsHwShFY8xU24JrjU");
    izdelaj(nizi, 102, "yF84vO");
    izdelaj(nizi, 103, "_Gfijeo9EBAXEmyWDaJigwtZoq8KhXKSVbGq12zZt_VlJ16l3fqUpu_to5yzRHGEctUDKgdJXJgs0rXnCMQ");
    izdelaj(nizi, 104, "yF84vO");
    izdelaj(nizi, 105, "Tt48MW9HnBZAE4YbfJqpSXKMok6qqQc3m4Ig6X");
    izdelaj(nizi, 106, "q6_0FFvNptcVinnUkmGx8cfSmszlrQPVZJjniK01rKAdO8ne7op_gKuSfDVKpDBE5P8nr8uCQTTh");
    izdelaj(nizi, 107, "gu");
    izdelaj(nizi, 108, "Go5e8kSJYRPw2syR4uKv6SWYFuwQQ37kEKNbpZK4");
    izdelaj(nizi, 109, "q6Hx0Z4c49kW4AXjN5md3_TNx8E_mb2oB3K84hoUwMbGF0Pfm0X9sdCZRyuQRHQX7f9D4CCsesIlZt4Gz4PhvZKRAa2zN");
    izdelaj(nizi, 110, "mDePhvmQQiBj_HAnHKz3Yp7kDol6UgJMc_HICW_8Hc4m0Zyu53k55uzrzwgK");
    izdelaj(nizi, 111, "bavE_I5JCS5h35NXW3fTitcMEe5b1IbczFI3TefCUo6ZauQ_HmjFdjGBpLqWlc7FsJm30APvtYPd3KT");
    izdelaj(nizi, 112, "quvlf9vFeeOeJF0rHrW_Isv");
    izdelaj(nizi, 113, "Fq6kzWBjkcRxKuIEeqZ4ZxB2B5EBMgQCkeb9f");
    izdelaj(nizi, 114, "bavE_I5JCS5h35NXW3fTitcMEe5b1IbczFI3TefCUo6ZauQ_HmjFdjGBpLqWlc7FsJm30APvtYPd3KT");
    izdelaj(nizi, 115, "9NicZGhohzNpK_eGPd_Bp8");
    izdelaj(nizi, 116, "6oxVRBGI7Qrz");
    izdelaj(nizi, 117, "Rxvqn2MWgZGdv67q");
    izdelaj(nizi, 118, "gu");
    izdelaj(nizi, 119, "xdDZzt17_6owwMRTbzWvgi6KKlE0ACRa28ucDaBy5pRu6rbS6VHj6NoA2ovpTj");
    izdelaj(nizi, 120, "RBhQigr8vYfwk3QxrqVbE_E_qmH6y19U26XJzEsHNM7y07");
    izdelaj(nizi, 121, "9lgzwoXKg2yGhxJEoKzzPgrBYYzHLUm8Lfx4A_ksNAMHckiSvmv9efHSXLe");
    izdelaj(nizi, 122, "SXIW");
    izdelaj(nizi, 123, "R115H3RLoQtWNgJCLs5Zcjue2hqbYN4KauPKImc_7zpnRnt45KKoOVJPSGKRE1Al1e9gpJdGTQvZD74cnkwtZ5jAoDuTbDXq");
    izdelaj(nizi, 124, "q6_0FFvNptcVinnUkmGx8cfSmszlrQPVZJjniK01rKAdO8ne7op_gKuSfDVKpDBE5P8nr8uCQTTh");
    izdelaj(nizi, 125, "BTL0j0bZAkLlIwjUNKcEW5RZ8CenhueOcy4fMaNSDXlLj3");
    izdelaj(nizi, 126, "R115H3RLoQtWNgJCLs5Zcjue2hqbYN4KauPKImc_7zpnRnt45KKoOVJPSGKRE1Al1e9gpJdGTQvZD74cnkwtZ5jAoDuTbDXq");
    izdelaj(nizi, 127, "jL8td2fwNgCqTcAsTSOk2lSAR7knFIMl4k");
    izdelaj(nizi, 128, "pHv0k0xgKX83sztiGfYwhunum3mqABOXihgzsi5lSNWRP3D0hGkdS87VBXqGY85f2YZj");
    izdelaj(nizi, 129, "usxRB0f8Evk_24JyWMAaS2ZuT_W9474oVT_CiaMXKg9Biqz4R8AsFUX2yKxonxzp48LkIaWi05lnI7x3g404ZQZ");
    izdelaj(nizi, 130, "EJRRl9mIvMMRKgxXLSlp1c_lNLd7WhL67cSB1ueH5079l4ozlzhjILcBdHfMFSSfjKPV5cCu9JXdA9ufenNGjRgF1GU8jAepz");
    izdelaj(nizi, 131, "Jc09Mqun5A37uUnSo");
    izdelaj(nizi, 132, "yF84vO");
    izdelaj(nizi, 133, "9lgzwoXKg2yGhxJEoKzzPgrBYYzHLUm8Lfx4A_ksNAMHckiSvmv9efHSXLe");
    izdelaj(nizi, 134, "UFVnbowX7buvuQtCi_Ox6m8YwX6LDndse6P4IWdPblURRnoW2OA");
    izdelaj(nizi, 135, "csqBtcQPtdqYyTUF_m71HjJiPO9t0355v4EqQEmoLh0lcKtrGk5aoXi0yBSakZNGAdVEL00NH1SaiRMi9GeYvTqxB");
    izdelaj(nizi, 136, "tAXxrRwItBLSIUmQLAfmWN3QYDp8wR24IgnHOLJR2LfTTeK4X2w0YsbzM");
    izdelaj(nizi, 137, "RNIigG");
    izdelaj(nizi, 138, "jYKwVTho63YPiwRCQbqqQ5Ly_q6JObH79bDIcqYjBHmmMisejIBlQsEbEMMMaIk3FCUqPFFEEaI7lQs3t");
    izdelaj(nizi, 139, "TsqZlmh6TGij9NtyudYcj16toKrcoVrJbt3tGnvDBvVs1M0z0tGb1uD0SgrUo3XEdK5HAuRBU4jgwX2InYfC1u_7fwNToLMalzZ");
    izdelaj(nizi, 140, "bH7RGcVKuZ3d04hBb633LP8y9f4KWvA2nLOKxcZ1LRvkVn6_fnYYjxh");
    izdelaj(nizi, 141, "zFddwQv8CStAw0pNVucLWd1YVO7LoJIaXanoto788IlFyi9oslSIm5m4UJLRRXl");
    izdelaj(nizi, 142, "jYKwVTho63YPiwRCQbqqQ5Ly_q6JObH79bDIcqYjBHmmMisejIBlQsEbEMMMaIk3FCUqPFFEEaI7lQs3t");
    izdelaj(nizi, 143, "1TyHNFRewD4S4st4o5NSMcfBgYDreJeZMtwislHnr0azx_mvxKikS9p6WIS0DhGc8DNoJWCThDhoJOyw7cF71Xb9NSzRdBpXw");
    izdelaj(nizi, 144, "usxRB0f8Evk_24JyWMAaS2ZuT_W9474oVT_CiaMXKg9Biqz4R8AsFUX2yKxonxzp48LkIaWi05lnI7x3g404ZQZ");
    izdelaj(nizi, 145, "_7geBlbPWozI2WohEo_JIKTGV8ijekR4JywF1i3zUupAq8H_NcAKmD96");
    izdelaj(nizi, 146, "yF84vO");
    izdelaj(nizi, 147, "OJlP4yHDVpL_VTrrm9e");
    izdelaj(nizi, 148, "bavE_I5JCS5h35NXW3fTitcMEe5b1IbczFI3TefCUo6ZauQ_HmjFdjGBpLqWlc7FsJm30APvtYPd3KT");
    izdelaj(nizi, 149, "WBInzQuWsxxscjjJ5ZQeOlqKIuLrs8ULaExNqcmz6XB6BXspj");
    izdelaj(nizi, 150, "OJlP4yHDVpL_VTrrm9e");
    izdelaj(nizi, 151, "vQWTWfo9HGB0BXXh1wbuSDDap");
    izdelaj(nizi, 152, "Dr6ByMa7sANaflg13c1QjmWiMCpWDxL8dRfIdlDwNeKjMAC0yIAesopabfCX2RfV_bIS92revAyvQqAmLUh9");
    izdelaj(nizi, 153, "eFJmZax");
    izdelaj(nizi, 154, "HUMw3D0Bww37HcZumENuiWxGcoy5LxNuHCrVVKsJ5ui9PpmI3GcdaJ6Tt7pT6NRwaJcq8YnVpYMiGi5Fn8CQokhpdgriXd");
    izdelaj(nizi, 155, "IhxzdIPI0e44S56XQhF43sNXYycfaK5ALXzCLY8HFLAdet8yc_trmsHGonCdG_Vi4SOevVuiIzJpunGetua");
    izdelaj(nizi, 156, "_UK6CW5Qvt5");
    izdelaj(nizi, 157, "xYrsxBGdeSc2DoOd33rqYpTKt59KWZAhmdR");
    izdelaj(nizi, 158, "KM3cmU6oNGi3hXIQ89SQLsBpSBZoNbHzRQ4lT7r6Yeg6R_Ouo62NK_8TlMQdR7Jt96OYEqYLCSdvGmg6DqiJJxT2DfyD");
    izdelaj(nizi, 159, "TsqZlmh6TGij9NtyudYcj16toKrcoVrJbt3tGnvDBvVs1M0z0tGb1uD0SgrUo3XEdK5HAuRBU4jgwX2InYfC1u_7fwNToLMalzZ");
    izdelaj(nizi, 160, "WFjsqJLF6laLV1YT6r5");
    izdelaj(nizi, 161, "q6_0FFvNptcVinnUkmGx8cfSmszlrQPVZJjniK01rKAdO8ne7op_gKuSfDVKpDBE5P8nr8uCQTTh");
    izdelaj(nizi, 162, "yeyNT5BUXFxrDIq1Jingm2_IH4B36r0k9PWD");
    izdelaj(nizi, 163, "yF84vO");
    izdelaj(nizi, 164, "eT8Hhh0xYt2w0zbpRKypUBuSnCv3lCJsnYDKUl7ubfWndJmt1vGxk0bYW6V6BU828");
    izdelaj(nizi, 165, "NU4TTBrHSGGGUh");
    izdelaj(nizi, 166, "lsxKcvqrYrqHAVIVIk3zRaujSAgPi7sTWtz9zD_DrW1gSZJOrT8gitpytwsVHYTdVSYwOtvNUs_JmBo_BHE5WWgdHjXgefzZPIu");
    izdelaj(nizi, 167, "vx8");
    izdelaj(nizi, 168, "Y");
    izdelaj(nizi, 169, "yF84vO");
    izdelaj(nizi, 170, "yF84vO");
    izdelaj(nizi, 171, "w9SxMw6ZsPjl1zPV0yKyrKELWFB");
    izdelaj(nizi, 172, "DZHAseiVHF8kAshTXnfCAZ2rYbHni4ESLEOVA0HLJ_AIWWv1xhBySsKGWR");
    izdelaj(nizi, 173, "BadZoEtwNUYaQH8pg");
    izdelaj(nizi, 174, "vEEKWtGFNQiSbvg");
    izdelaj(nizi, 175, "oOMaBwzcB2IihhBfNubVZZPdHU6hb58OKV9P85mR");
    izdelaj(nizi, 176, "3ytVXNyjch4zNojIIcrDsSHpNrnE_bPg8FENR_TWWp8oJHCyvcFog156_6Inm6qnJSTp3dFI2Ue");
    izdelaj(nizi, 177, "h9i5QFmvOV0Nh82YPdNqKwpUUrdvOI5Ap9C3PvaVbu_");
    izdelaj(nizi, 178, "66SRIyr_QhO");
    izdelaj(nizi, 179, "MhUXD1KIv__3Wdqver0MTUZ07F58skgV9NpVHH_UUBXfr9I3gB7G_A19fNRnhvl");
    izdelaj(nizi, 180, "OvwGKN_6EIt_DPQK56a");
    izdelaj(nizi, 181, "TRUJp9c3CE6Syf7HINikLNMW3cj7P7V3g8gYtYhazG3C9pIqcztOCZ_s8RM44cEdTkdO2FN");
    izdelaj(nizi, 182, "koqXf8SrI7p4ErbVbak3MBMwO1w");
    izdelaj(nizi, 183, "_UK6CW5Qvt5");
    izdelaj(nizi, 184, "lmoxQSqCN7TlP6Nf8Ao6xnhg9QbNCgfk9_jxoGfN_1NuwyIku9ylFzvYcE1dZVki73_9HtnUWs");
    izdelaj(nizi, 185, "4rYscU4V9oyFGcdLOehf_");
    izdelaj(nizi, 186, "6KXEOy_kCnsC_lmrk3lWGTU8Qv03w0o0FT3UcpnSO_5RXhmIJdned_wge3aIanAh7jXM4vY3I3lJZHsHwShFY8xU24JrjU");
    izdelaj(nizi, 187, "7uXGZDBp1hF8lzaXYS_q4KkaCOMQLNw_3j3ZI8DDZqIKesbGnMr8nvOa");
    izdelaj(nizi, 188, "R115H3RLoQtWNgJCLs5Zcjue2hqbYN4KauPKImc_7zpnRnt45KKoOVJPSGKRE1Al1e9gpJdGTQvZD74cnkwtZ5jAoDuTbDXq");
    izdelaj(nizi, 189, "9lgzwoXKg2yGhxJEoKzzPgrBYYzHLUm8Lfx4A_ksNAMHckiSvmv9efHSXLe");
    izdelaj(nizi, 190, "VvI8nxtahUU52KKaFbKO");
    izdelaj(nizi, 191, "TsxPM8WW_VpK9rvaB9L3o9miOmWv0viHg2FU87anLo9uNsRIIJzi_TIq4_af3MxHyPfxL25iF8KfSufEIoqfjhllhe");
    izdelaj(nizi, 192, "XhGX3iox9BoYn_P9RBR5x2peYKd2p");
    izdelaj(nizi, 193, "RBhQigr8vYfwk3QxrqVbE_E_qmH6y19U26XJzEsHNM7y07");
    izdelaj(nizi, 194, "Ad_V_Tph6Hk0RDNs1oI1L0iJ81aVJmjOXf7uCg3SijnAEKe");
    izdelaj(nizi, 195, "EpvMO");
    izdelaj(nizi, 196, "NMC6ICYSLGtUC51kqEE7grj0chyUGH83GsjQ5fK");
    izdelaj(nizi, 197, "Se7DNP5AR1iDAPR1fqhSpNVKllI0kNFxfqJsYFYXHVj_9KT_HlbORAILJJJ7hJ2ka33mJ9TUwaQBr4fco70wkY");
    izdelaj(nizi, 198, "zXRbQJ6VCKRfH");
    izdelaj(nizi, 199, "NskEKuUH3GhoKCPIsIB0cfdYYoQoVjRmwuqDd8RYlv0dnMTznc2");
    izdelaj(nizi, 200, "O");
    izdelaj(nizi, 201, "1K1GoRpOKdfq7wQM1DGbyscYg6");
    izdelaj(nizi, 202, "Knd4XK9q7ZIN8EDadX7Ggned");
    izdelaj(nizi, 203, "wBg0UaAQUa4GkRumys8sBAtEMFnMF4jPZbs4ZNzmWKF1ZJcCu7gB3To");
    izdelaj(nizi, 204, "S_pDCJkAOi1QbH0Uts2URtkFhoQHweEnt74OduTgA0fYT2ViP4BsHRnCvdCIwO1EzxeIdNa");
    izdelaj(nizi, 205, "_UK6CW5Qvt5");
    izdelaj(nizi, 206, "t3JP2yoB0_6ayn6brkPubkHotrPPUqqiHa0aD64Jc9Xx3g");
    izdelaj(nizi, 207, "FvR");
    izdelaj(nizi, 208, "uc89ewS4V5XJtbIN0GGSd76l5bf9MerW9XZtBkffYuKCgUn8AFbDqzUufF8_PvHgp5M23IkxB");
    izdelaj(nizi, 209, "VjvWl8d10JjD");
    izdelaj(nizi, 210, "GepC34Ew6XRFekrzbivSnm2Qk7IuQYrRYu21irIJ");
    izdelaj(nizi, 211, "rr2wpHg_XgDyHq9O_dvc6gs5fT1acX__I");
    izdelaj(nizi, 212, "CDO2WrcPT0idOwSg");
    izdelaj(nizi, 213, "f3tMfRaTPYL8ZzGk6UuRKydI4G6MWgPhEfYsf3I4_D28w8eqWOlP6I8CucUxRxfZxZj72ORYY154Rhy6DnBM2xeQlRjjg");
    izdelaj(nizi, 214, "I5hunSTkKC5kX1IxVUDWnSIfHqP_b3dG8P");
    izdelaj(nizi, 215, "ELCfTVTuW1ON_sMbtq2SbJhNt_YB6_OyJ9iIlTLa");
    izdelaj(nizi, 216, "q6Hx0Z4c49kW4AXjN5md3_TNx8E_mb2oB3K84hoUwMbGF0Pfm0X9sdCZRyuQRHQX7f9D4CCsesIlZt4Gz4PhvZKRAa2zN");
    izdelaj(nizi, 217, "e");
    izdelaj(nizi, 218, "3T_n8S73MEJOLZuGdHNrcqRl8Fy_eDjHn9wt0ToQinMYNOctvxakcZ8SPsXsz3rxpAyGOGXDkIlhw4pIN3FGAUNz1AaubMm");
    izdelaj(nizi, 219, "Hap_nu");
    izdelaj(nizi, 220, "loqB3CcGE1");
    izdelaj(nizi, 221, "RUHRQWraLA8rwBm6urr7IWOa5Eqk6L");
    izdelaj(nizi, 222, "vF1J0Q2H3t0M7yHYEokFjFyof");
    izdelaj(nizi, 223, "u56ohXCSjFyP2tXaw0");
    izdelaj(nizi, 224, "xYrsxBGdeSc2DoOd33rqYpTKt59KWZAhmdR");
    izdelaj(nizi, 225, "Kj8qRCGpPehIr_WmTzWTw__mr14XdG4Ss49");
    izdelaj(nizi, 226, "bavE_I5JCS5h35NXW3fTitcMEe5b1IbczFI3TefCUo6ZauQ_HmjFdjGBpLqWlc7FsJm30APvtYPd3KT");
    izdelaj(nizi, 227, "0DMYZbJNvu2NRqQ469izkA1OM79XHEE3R9");
    izdelaj(nizi, 228, "1WXBArsqgzP18YepPnfDlw8IhS3ncfGNqaJvSo77_pvXYDsEXgjnYhP5UtFKftOI0WDAbqzEi3K");
    izdelaj(nizi, 229, "nK4BjBWbwyHgHEFew7km47HdrlILVKlyyD5U4QHsVd8Rqn9eje0PDy94LXf_3Ilaf6Z3Snu1oCsaDvfRD");
    izdelaj(nizi, 230, "RBhQigr8vYfwk3QxrqVbE_E_qmH6y19U26XJzEsHNM7y07");
    izdelaj(nizi, 231, "SuMJFrlKOJzJ_khu1rMgMSI5p5359u_P3HYQopEgEa8GGlwaBvkW");
    izdelaj(nizi, 232, "_l8K0ZCFdNUnwNhBv");
    izdelaj(nizi, 233, "8KNV0yJ");
    izdelaj(nizi, 234, "KcoKRJ62YGTSAttIn");
    izdelaj(nizi, 235, "9NicZGhohzNpK_eGPd_Bp8");
    izdelaj(nizi, 236, "TsqZlmh6TGij9NtyudYcj16toKrcoVrJbt3tGnvDBvVs1M0z0tGb1uD0SgrUo3XEdK5HAuRBU4jgwX2InYfC1u_7fwNToLMalzZ");
    izdelaj(nizi, 237, "_UK6CW5Qvt5");
    izdelaj(nizi, 238, "l2OIT1hP5x3vHEponSA1uOyccWVVS6VgBp9KOcaJsGbpyUvs9eTxYG57CRq9ZOan6SWPShlH");
    izdelaj(nizi, 239, "vs7GXhNz2UlV6w56AQ4fCk");
    izdelaj(nizi, 240, "YdwbDEzBNgqc3wq8ufs85ieJLZXTGhlF");
    izdelaj(nizi, 241, "PuGnUuMdIlcpDTOeXqEVunj8MOpVpMSkmVqYLztbsF3w3J7oUWHY_PP5GXB");
    izdelaj(nizi, 242, "0DMYZbJNvu2NRqQ469izkA1OM79XHEE3R9");
    izdelaj(nizi, 243, "OvwGKN_6EIt_DPQK56a");

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
