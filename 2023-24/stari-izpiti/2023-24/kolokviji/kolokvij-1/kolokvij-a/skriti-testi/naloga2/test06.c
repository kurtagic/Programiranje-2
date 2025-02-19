
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
    int n = 225;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 1, "N1W_YZL95YgA9J1jv7JBtwcD_OO2SFJnf0sc9R7bDrv2FRMygkeW32A92K3bt");
    izdelaj(nizi, 2, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 3, "b1TfkFHNmjbnmjR2QiAyaz55GHK11aTHHTfin_14zXL0xeWA5u2lpWJHJKGTUrwwSZYVwWocB19y");
    izdelaj(nizi, 4, "hZclD52SkaWcRA3Wy9ocKbyJs7e_V9uEVwJaedyE8ckENVr8KNHm55G1LflGZqx58yZw8nSa");
    izdelaj(nizi, 5, "Zffr0Zn2DYPFQZduOfYWkRg1ig2aB2xb9RKffwCqUi9GfX5AAfvfQZUsIDD17_RigM5l2NDcvBNcMnBMYnKz8AQJprWYvvpN");
    izdelaj(nizi, 6, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 7, "OVrCNuU1ZIT8Rq5AgIxJL5y6tJ5GNfZUb");
    izdelaj(nizi, 8, "5rJKAB0jtNJBIwmkCYgcbYpkYNM17QTUusdXWz16nPkMxIoB7TwYEl2N1h6qoRkLzXxLgkx4trwxL3Orakg7i");
    izdelaj(nizi, 9, "h73l");
    izdelaj(nizi, 10, "hZclD52SkaWcRA3Wy9ocKbyJs7e_V9uEVwJaedyE8ckENVr8KNHm55G1LflGZqx58yZw8nSa");
    izdelaj(nizi, 11, "OVrCNuU1ZIT8Rq5AgIxJL5y6tJ5GNfZUb");
    izdelaj(nizi, 12, "N1W_YZL95YgA9J1jv7JBtwcD_OO2SFJnf0sc9R7bDrv2FRMygkeW32A92K3bt");
    izdelaj(nizi, 13, "Zffr0Zn2DYPFQZduOfYWkRg1ig2aB2xb9RKffwCqUi9GfX5AAfvfQZUsIDD17_RigM5l2NDcvBNcMnBMYnKz8AQJprWYvvpN");
    izdelaj(nizi, 14, "4WFkSb0");
    izdelaj(nizi, 15, "N1W_YZL95YgA9J1jv7JBtwcD_OO2SFJnf0sc9R7bDrv2FRMygkeW32A92K3bt");
    izdelaj(nizi, 16, "3ohuaLaLDAPo6OqTUNhfPcaG_NZGNKCz3zotnxTpsUisGkWmeLiysQi7v2mPwNOVW2PMVmrPHBtd");
    izdelaj(nizi, 17, "Zffr0Zn2DYPFQZduOfYWkRg1ig2aB2xb9RKffwCqUi9GfX5AAfvfQZUsIDD17_RigM5l2NDcvBNcMnBMYnKz8AQJprWYvvpN");
    izdelaj(nizi, 18, "hZclD52SkaWcRA3Wy9ocKbyJs7e_V9uEVwJaedyE8ckENVr8KNHm55G1LflGZqx58yZw8nSa");
    izdelaj(nizi, 19, "8bnJv5uFRS6ZcdmeEKa4GUaJe3cmPTIWgyyDEkPhiiTmB8kt1YaMf5ZGb5XFzo32K5VCEYg");
    izdelaj(nizi, 20, "hZclD52SkaWcRA3Wy9ocKbyJs7e_V9uEVwJaedyE8ckENVr8KNHm55G1LflGZqx58yZw8nSa");
    izdelaj(nizi, 21, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 22, "D4PNU0BX4npuXEXrAVqS2BVB9MfJ2NEWxiLFWJxxMfeVwFbJvefhN4WOQZIJA599oeqM5gVQh");
    izdelaj(nizi, 23, "CAx3HXOfCouBuOj2nJpNKUE9_gozj3keh0TbEtIxA9AwXCOCds73ri1jQFyYGQ2uCvLvDZDD1suthnWNGqZKLqrlEi");
    izdelaj(nizi, 24, "h73l");
    izdelaj(nizi, 25, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 26, "Rk6OPNUSWztL4WO3WHWj7y0wDshyA3oGHdZaKPp4LC5BEjwjTrWqn_OsSbAtymC03HS2OBRjNaDGeoe");
    izdelaj(nizi, 27, "N1W_YZL95YgA9J1jv7JBtwcD_OO2SFJnf0sc9R7bDrv2FRMygkeW32A92K3bt");
    izdelaj(nizi, 28, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 29, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 30, "PwPRqqZjRKjMTQY9vGCcE5Q7XVjmUmT4btPNuqvkVSOqQDAe6pM_7En7WXTRsWDKoUy91KdyZ_Is6_2PPMIr2Ch5");
    izdelaj(nizi, 31, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 32, "nRUZxtTkGTWPd3ObaHfISG");
    izdelaj(nizi, 33, "jYtEhyo5aOkj");
    izdelaj(nizi, 34, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 35, "coQuEkRV0DY5bKeB05WwKmszjbM1a2DNtMoMxDqlxPmLYZnYVlbR7qF1dOJQt3UTJoIL4loKNbjTyLk5");
    izdelaj(nizi, 36, "OVrCNuU1ZIT8Rq5AgIxJL5y6tJ5GNfZUb");
    izdelaj(nizi, 37, "AAsALhNjmzOV3Hmcay16gFrG7uSM0ayLi1OVf6VAB5dEtYpcSWjdy65PayE55jMtyRcubKFnwzHcgxMJNb5ZmQMrR2X6Gf");
    izdelaj(nizi, 38, "Zffr0Zn2DYPFQZduOfYWkRg1ig2aB2xb9RKffwCqUi9GfX5AAfvfQZUsIDD17_RigM5l2NDcvBNcMnBMYnKz8AQJprWYvvpN");
    izdelaj(nizi, 39, "0k16Ndcm7ee0fdsfaz4fIKcZMtl80jH3rLYiA712");
    izdelaj(nizi, 40, "oNreyRwREq4cUam2gN23Ukj4I5UtNBnlOgWgb_9OQiFZM0C2KSFG7lm0tc5x");
    izdelaj(nizi, 41, "hZclD52SkaWcRA3Wy9ocKbyJs7e_V9uEVwJaedyE8ckENVr8KNHm55G1LflGZqx58yZw8nSa");
    izdelaj(nizi, 42, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 43, "b1TfkFHNmjbnmjR2QiAyaz55GHK11aTHHTfin_14zXL0xeWA5u2lpWJHJKGTUrwwSZYVwWocB19y");
    izdelaj(nizi, 44, "Hjsmghx3dsF3XoNUFaFYMWhpBxRQLRtLr5XIFeZbD9pPKG4s6wLEf6dfOhu");
    izdelaj(nizi, 45, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 46, "nk6NBW6LV3qIVIxvOMg62T4x4rqJOUlRHdESMoKw7KV5_XWgLYZU_wA_xCUQTS6EB7UWyU0xVCnDL0a1o8");
    izdelaj(nizi, 47, "Zffr0Zn2DYPFQZduOfYWkRg1ig2aB2xb9RKffwCqUi9GfX5AAfvfQZUsIDD17_RigM5l2NDcvBNcMnBMYnKz8AQJprWYvvpN");
    izdelaj(nizi, 48, "CAx3HXOfCouBuOj2nJpNKUE9_gozj3keh0TbEtIxA9AwXCOCds73ri1jQFyYGQ2uCvLvDZDD1suthnWNGqZKLqrlEi");
    izdelaj(nizi, 49, "jYtEhyo5aOkj");
    izdelaj(nizi, 50, "UVKoPypwtjDhJ2ftkw09HnbYyd5a1xzP");
    izdelaj(nizi, 51, "WtWzZIDo3");
    izdelaj(nizi, 52, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 53, "WtWzZIDo3");
    izdelaj(nizi, 54, "n8Kd4NT4lXct");
    izdelaj(nizi, 55, "N1W_YZL95YgA9J1jv7JBtwcD_OO2SFJnf0sc9R7bDrv2FRMygkeW32A92K3bt");
    izdelaj(nizi, 56, "n2zVSNtdSn8UXHrqdz9ofEpMhoizapyQbVAwAKETxF5XXSbck4");
    izdelaj(nizi, 57, "BNjR2j0OoXoywv2TRMumLHNe0YkfCkBsKvp0Yq_G9wL0jKB1nPPQkPZXXhX3PMRHuFF879L9UScTW9p4AhRqtfnaVMRjvdKoOUVq");
    izdelaj(nizi, 58, "5styi");
    izdelaj(nizi, 59, "ag9a7yFV7QPdisM18r");
    izdelaj(nizi, 60, "N1W_YZL95YgA9J1jv7JBtwcD_OO2SFJnf0sc9R7bDrv2FRMygkeW32A92K3bt");
    izdelaj(nizi, 61, "gaK9rtwlnPtkHT_xlVyARnlkCiS2SSS_ZXv5cIsNgFLcCjiSLfHsZoe");
    izdelaj(nizi, 62, "CAx3HXOfCouBuOj2nJpNKUE9_gozj3keh0TbEtIxA9AwXCOCds73ri1jQFyYGQ2uCvLvDZDD1suthnWNGqZKLqrlEi");
    izdelaj(nizi, 63, "a0uGpFlvQ54lxi7IcykwzqJTN4");
    izdelaj(nizi, 64, "IbFjZM8dZ95Lk9c6FSMroem_dACDPkYyoFuI77Ri4QBYhsw5JKN21Lvtvvv0NcXVQ_4scB7w1WfNG1SzSBigEhNUrBsn");
    izdelaj(nizi, 65, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 66, "eAg9lAbL4bJKCUypbEAAHmqO0S9Ykoc004IKoiT");
    izdelaj(nizi, 67, "LQrb6Mhb72pIZqaYTB4YpKUsSyzbNdttPlF3q8oGlNERjWZ5kNBzvQmn3eHYu9iGsbdGyRlP6mW7QrV");
    izdelaj(nizi, 68, "TNQhQt_EgxiIvdP5zYEPxD5lPsZwe3hTbTUwipc9Le1S6qhYDkICVNbAa74rLTFOmNgcLyiGcSY7aJhD53T98h6QTsm6i29QXi");
    izdelaj(nizi, 69, "ATVWPECKYRadVz");
    izdelaj(nizi, 70, "N1W_YZL95YgA9J1jv7JBtwcD_OO2SFJnf0sc9R7bDrv2FRMygkeW32A92K3bt");
    izdelaj(nizi, 71, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 72, "6YD34f3nNfmxQdYSByMKU0NOyJMaGoVdJMLg9XefhNDW");
    izdelaj(nizi, 73, "8bXnYMKc9XRJQXdsM1k_l0anr_nVajlmLp7tbZdcFx6IjfnfIXZvdKdEHPsmQGgTh3FW");
    izdelaj(nizi, 74, "7FVStBCc4Bsw5kUCov9JxEPt9R_m8Nw5rRymSo8S5o3VaNPM0MSNRBn29lQQoJCBhXmiWNTQuNsR");
    izdelaj(nizi, 75, "hZclD52SkaWcRA3Wy9ocKbyJs7e_V9uEVwJaedyE8ckENVr8KNHm55G1LflGZqx58yZw8nSa");
    izdelaj(nizi, 76, "d3rGCoE_fihmxXC0SbiES6EMCFl_6eKcWsHaFVGjg7zCB0arvqg03YL__Pz5VOR_SPxJhNRWQCeL");
    izdelaj(nizi, 77, "XgaZDq2qBfrT4");
    izdelaj(nizi, 78, "YrsCRRcIMOuGfAbQDgcuehkHX8vYhPNHcBza9VsIBX_pFEk2KGx6Kh_zKaf18W6T1NHwkKKLrq0QVe5W5Zpe2cKy4OazdSlWuecc");
    izdelaj(nizi, 79, "AtfW70P6gjuWjtojRcxe7K9Q6Qzc1vHXfyeTIp0RNaFBlLPGqnHIPHdb1yvnnnOHg9IGase1rYudrj22QFfxez_");
    izdelaj(nizi, 80, "fRUq1rB3j6r4zt");
    izdelaj(nizi, 81, "cn5_vtnJylh_NA317Qu0u");
    izdelaj(nizi, 82, "TeoHVaDvLI6y56T6kEX98A0zf4ExyYpPgGajYwJwpXsDfrWiYsErvDr5QfkrpX_kvRyJsT6r9cgGjuxuLtombKg2p4KG");
    izdelaj(nizi, 83, "FEqDPpwYlBZuWkTpeOit6z5LOm5yt");
    izdelaj(nizi, 84, "CebRb69v2Sq9ZJocR0mwfvjKozohtfKhGqc_C12");
    izdelaj(nizi, 85, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 86, "hZclD52SkaWcRA3Wy9ocKbyJs7e_V9uEVwJaedyE8ckENVr8KNHm55G1LflGZqx58yZw8nSa");
    izdelaj(nizi, 87, "62K4QhV0XQHIyOPCl4hbztfqjJQWA556QG2QQ");
    izdelaj(nizi, 88, "hZclD52SkaWcRA3Wy9ocKbyJs7e_V9uEVwJaedyE8ckENVr8KNHm55G1LflGZqx58yZw8nSa");
    izdelaj(nizi, 89, "nk6NBW6LV3qIVIxvOMg62T4x4rqJOUlRHdESMoKw7KV5_XWgLYZU_wA_xCUQTS6EB7UWyU0xVCnDL0a1o8");
    izdelaj(nizi, 90, "o1SjQNlR0hYAAyyqz7AUYqfrRFDwC2QH1QEJGJyDYxnOqyKUdEfg2sKctTY4jRxUjxeUxgGmLuFY");
    izdelaj(nizi, 91, "4WFkSb0");
    izdelaj(nizi, 92, "UVKoPypwtjDhJ2ftkw09HnbYyd5a1xzP");
    izdelaj(nizi, 93, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 94, "mwKMjpUJASgI0qQpk0scZcx3GOUS9D5oY3IRTJqSUj_M1g6DHJGQ1Ej5m4ew8rubPQT4oMInZ5gl_U");
    izdelaj(nizi, 95, "6D8fWFCNQRJ0lzEfJG7rY5Or_21Y6xcmkY_5p5N5dIlLzn58f");
    izdelaj(nizi, 96, "z9jZHPhGS02BA_uABoWA8DLOOCA6MS1wdMJDmaiwex9r8NeOT5");
    izdelaj(nizi, 97, "3a1QEsnypqK69HVOQBT5Dj3P0GHf0JRLZUdKiuFxQESdE7ddcldUpVE0TVPox3Yy0MZ");
    izdelaj(nizi, 98, "fd7UZLXZD9oND1PhNUBrskfr6fyYJiBW2gT9eqsjf");
    izdelaj(nizi, 99, "ZoFnD_72jEY4ZuWVXbaQcBH4MgaAQ4Jq_3vsDcU");
    izdelaj(nizi, 100, "b1TfkFHNmjbnmjR2QiAyaz55GHK11aTHHTfin_14zXL0xeWA5u2lpWJHJKGTUrwwSZYVwWocB19y");
    izdelaj(nizi, 101, "vnkxecHIrlAQkikHhyfvZbNUGm57JxBYVXqjDBcacJ1ak9FK8MOJIiEHMus8vQI58");
    izdelaj(nizi, 102, "8f0RNp2cUOb_1IO9a3fUcmArhHs111j5dNKPiZpEtZ9F2T5_S0q9z9nMQXBHnmIfcFbK9VcE");
    izdelaj(nizi, 103, "fRUq1rB3j6r4zt");
    izdelaj(nizi, 104, "HrdJ5ljpa6R_3W9KLxjNQ08fEbkt5QWdy3pkXXMpEtv3oPewEA8_VxgRkPQgSwf1xKdpJqnJyDlRlMpxOTNx");
    izdelaj(nizi, 105, "qyiSq8ARtCoC5KmMF5PyhCrEMTOXK1Plpdpe");
    izdelaj(nizi, 106, "YrsCRRcIMOuGfAbQDgcuehkHX8vYhPNHcBza9VsIBX_pFEk2KGx6Kh_zKaf18W6T1NHwkKKLrq0QVe5W5Zpe2cKy4OazdSlWuecc");
    izdelaj(nizi, 107, "LQadkp1CjWWCAQIDWQ9r9nOq1wnRuBqCrz4iGMM0yQvJy2iRG_tMcf0_uUKXeYEB4OFNk2EH02H09qSSDJolUoJJ7Dzu");
    izdelaj(nizi, 108, "LHaQLjAR");
    izdelaj(nizi, 109, "2RKj_60t");
    izdelaj(nizi, 110, "PmUaChTvumYEVG06oEQ3kcYneXBtkpgvvMLLzKd_W3kqDS1PeDY701TMhIc38q9qZgXULzJSVHtjrFkMcrGBQk");
    izdelaj(nizi, 111, "nk6NBW6LV3qIVIxvOMg62T4x4rqJOUlRHdESMoKw7KV5_XWgLYZU_wA_xCUQTS6EB7UWyU0xVCnDL0a1o8");
    izdelaj(nizi, 112, "eHuvEffNz788my3dWTpb3ZbA0tY4NOL1Dm9cVTGrl02EITiXwNlvvfm2R4hFAvGdLiMaAwb9s61pB2E1H4rhqm1SZrZUtM");
    izdelaj(nizi, 113, "LKqsm2WMaR5bV");
    izdelaj(nizi, 114, "qILU3hz4EWwa9kJ6fAPR6RlVNA8dMUpVsvK7xjnafyfHY7sqHnDU1xDiqaVdebdFMgCtZBqG3YtHCGC");
    izdelaj(nizi, 115, "d_PjSENQsfu9tw9yDuWaUBkij1xjSsp0O9QeIyNNTs5MeVzx15r1h8D4Fj8aFl0M7ALPL4CaCjuo91VPCSTV1");
    izdelaj(nizi, 116, "CAx3HXOfCouBuOj2nJpNKUE9_gozj3keh0TbEtIxA9AwXCOCds73ri1jQFyYGQ2uCvLvDZDD1suthnWNGqZKLqrlEi");
    izdelaj(nizi, 117, "VfQuEMkTMlyXoOO1tGR7EUoV_AtsV_gN5Az8dqUI");
    izdelaj(nizi, 118, "YHiYn8rBRKHyh3YsRPJUXG4L");
    izdelaj(nizi, 119, "BUUEZVjn61iHoVRE7B1wcC8gqexyPbGZ5SNXOQF2Cov1m1X34nxl4g4XS1P1mzHRnP1D3vKIUzSY6");
    izdelaj(nizi, 120, "N1W_YZL95YgA9J1jv7JBtwcD_OO2SFJnf0sc9R7bDrv2FRMygkeW32A92K3bt");
    izdelaj(nizi, 121, "N5j27h7Y5gYWVuJwCGouI");
    izdelaj(nizi, 122, "kTqjbWej8W4s30JM9T6493WaYEsbrJi1NTcnGzdWXbNOTOCSC7dfurF19kkvLHB3hFLZjjFmhPbgDjL8Z");
    izdelaj(nizi, 123, "zEWsTfwU0GqVy4EefmgxOxn81urO78IGvK0_eYZ7rN8I_cAl5ORr9rF5DRaY092bz");
    izdelaj(nizi, 124, "c2KN8ztRPiWG_2FLn0ctJW0pUZ5qUlts1rQeXs9O9_YRKDshKLG5_QiwgXys53KcBz2Qy0lZjUvOU");
    izdelaj(nizi, 125, "NknGog6NR6AEVAqEclK_MMcOHxHtD4xA96jM943VLpUYu7MqTsqf_TcWJG6OEeKeTArqMgXBBw4wVe2U5MCMYqIt");
    izdelaj(nizi, 126, "CAx3HXOfCouBuOj2nJpNKUE9_gozj3keh0TbEtIxA9AwXCOCds73ri1jQFyYGQ2uCvLvDZDD1suthnWNGqZKLqrlEi");
    izdelaj(nizi, 127, "oNreyRwREq4cUam2gN23Ukj4I5UtNBnlOgWgb_9OQiFZM0C2KSFG7lm0tc5x");
    izdelaj(nizi, 128, "6opOx1cv_kfkwGzlziyeqAPpKXBi6GrPAHTap_chUS8yUWju_nolPcmOcvCIjQ");
    izdelaj(nizi, 129, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 130, "Wo");
    izdelaj(nizi, 131, "N5j27h7Y5gYWVuJwCGouI");
    izdelaj(nizi, 132, "jm4QlwnGYE1NyxjjItPHJI5lkYLw2yuv8Nnn_IBh3ja_t8e03");
    izdelaj(nizi, 133, "z_H");
    izdelaj(nizi, 134, "hZclD52SkaWcRA3Wy9ocKbyJs7e_V9uEVwJaedyE8ckENVr8KNHm55G1LflGZqx58yZw8nSa");
    izdelaj(nizi, 135, "hZclD52SkaWcRA3Wy9ocKbyJs7e_V9uEVwJaedyE8ckENVr8KNHm55G1LflGZqx58yZw8nSa");
    izdelaj(nizi, 136, "eVm4LAvaApuoA01e13FBy2XhUohoL6jKRlXMUYIRfqI178y2BocaY2mC12c2qw3zOtEE4ypZDfH9Di3DxFJiVGQpAUpXd6xHt");
    izdelaj(nizi, 137, "2mZYkVXOh4JXiM_nj5tabNY_rf6URb8EmcHtkkIx8ObpYAdjJLxqaNttozQ05Ax8AHEhfDOB3VrFrbQzaP_yc1HWfEZ4BPk8yq");
    izdelaj(nizi, 138, "_6_dGVH_kxH8Vrj3g2_6wdhr1LRr765Ku5tQsbanbAQU4noNVfnC7dyhQ1gVcyb5Q5WVrv4ZtlW3pBcc1AWRkqYW");
    izdelaj(nizi, 139, "D4PNU0BX4npuXEXrAVqS2BVB9MfJ2NEWxiLFWJxxMfeVwFbJvefhN4WOQZIJA599oeqM5gVQh");
    izdelaj(nizi, 140, "fSVkIUOpdH0N0IriP0oBG1ewEMDWvsJHR6VqtkVCIGsqliR5qtTt");
    izdelaj(nizi, 141, "YrsCRRcIMOuGfAbQDgcuehkHX8vYhPNHcBza9VsIBX_pFEk2KGx6Kh_zKaf18W6T1NHwkKKLrq0QVe5W5Zpe2cKy4OazdSlWuecc");
    izdelaj(nizi, 142, "Zffr0Zn2DYPFQZduOfYWkRg1ig2aB2xb9RKffwCqUi9GfX5AAfvfQZUsIDD17_RigM5l2NDcvBNcMnBMYnKz8AQJprWYvvpN");
    izdelaj(nizi, 143, "Zffr0Zn2DYPFQZduOfYWkRg1ig2aB2xb9RKffwCqUi9GfX5AAfvfQZUsIDD17_RigM5l2NDcvBNcMnBMYnKz8AQJprWYvvpN");
    izdelaj(nizi, 144, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 145, "fVTnjNizYAoGzmGMxTor0QmCr8TTSqyxeAf6");
    izdelaj(nizi, 146, "Oy9xpqIJHoL8ps23f_3c_SR_zH0oPyborzWdx4BLDF59XI9DeriC01MAmq1wW9kLJHc9NLL_VUBx5q5qFKgzSZwDRNF");
    izdelaj(nizi, 147, "vCQdSgkUvPecVrBraRz_6ug0oAmkqFr1OCKSLL8Bqvx");
    izdelaj(nizi, 148, "hUFqhKIPkyyjudx3bRAp9Dd9zVbEzxTkPHoUPAn1X14H2KNuKIr7AeM6c5t1neu6aAtgXFxx4");
    izdelaj(nizi, 149, "OVrCNuU1ZIT8Rq5AgIxJL5y6tJ5GNfZUb");
    izdelaj(nizi, 150, "PeOPz0l8M4nsv8T");
    izdelaj(nizi, 151, "RKRSSMi1a0FQqzuE7AtMAM5LQr73NUYwJFTjthSAtDw75nF_uWP8xs_hG");
    izdelaj(nizi, 152, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 153, "AtfW70P6gjuWjtojRcxe7K9Q6Qzc1vHXfyeTIp0RNaFBlLPGqnHIPHdb1yvnnnOHg9IGase1rYudrj22QFfxez_");
    izdelaj(nizi, 154, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 155, "2ekKpdXeNwGdKvVVPw8UWnzGcAd8iU5dEFCmGvakdRkFUMg5rvvmUBc9Kw7UZw30WsqlpRa2aDdVXYpw4dfnC8");
    izdelaj(nizi, 156, "IbFjZM8dZ95Lk9c6FSMroem_dACDPkYyoFuI77Ri4QBYhsw5JKN21Lvtvvv0NcXVQ_4scB7w1WfNG1SzSBigEhNUrBsn");
    izdelaj(nizi, 157, "W7y3WGDhu2DqGQBM1RSVpu8HeswoQmenF5mXXbujC4JXU9YML1yGeCcvueW7LcmsdRymg3pCYYogvBd4f");
    izdelaj(nizi, 158, "TVaIoXB5eM7JX3B9gObZHfNOHQOhCPMuDWGkseK6jiPXIptw39xQfR8dAGmDXfODReA");
    izdelaj(nizi, 159, "Zffr0Zn2DYPFQZduOfYWkRg1ig2aB2xb9RKffwCqUi9GfX5AAfvfQZUsIDD17_RigM5l2NDcvBNcMnBMYnKz8AQJprWYvvpN");
    izdelaj(nizi, 160, "hUFqhKIPkyyjudx3bRAp9Dd9zVbEzxTkPHoUPAn1X14H2KNuKIr7AeM6c5t1neu6aAtgXFxx4");
    izdelaj(nizi, 161, "F1vjwwgDkHuDEfNqhYiDMk3EVTUf");
    izdelaj(nizi, 162, "hZclD52SkaWcRA3Wy9ocKbyJs7e_V9uEVwJaedyE8ckENVr8KNHm55G1LflGZqx58yZw8nSa");
    izdelaj(nizi, 163, "Hc2NDF7rwk63Ri5UVrP1ewMaqgOR1wSVtnXWyfWD2");
    izdelaj(nizi, 164, "3ohuaLaLDAPo6OqTUNhfPcaG_NZGNKCz3zotnxTpsUisGkWmeLiysQi7v2mPwNOVW2PMVmrPHBtd");
    izdelaj(nizi, 165, "c5pylCZPIvekBN7sXOzvlN9vL5kpEdLQq7__IpZaH61qOWdpzOIAOYY41QLPQz1TVokCRRwJd_EgI");
    izdelaj(nizi, 166, "EK4gJo1nb9b3dMlfyNekkI7ODpRPguCBrRJfbkNxhsayYOwRuZbdIfOa9oEXcS3XZgYWfWuvGKW6x9rhPc9");
    izdelaj(nizi, 167, "T_uedm6fENzR_9RfAN5SjMhjmuRsWvec1LQhI5nUkQGPnqxyZmHC_YYNz1mIz1o_VvxR_eOxBhzwpo1dsONtuVyK");
    izdelaj(nizi, 168, "EK4gJo1nb9b3dMlfyNekkI7ODpRPguCBrRJfbkNxhsayYOwRuZbdIfOa9oEXcS3XZgYWfWuvGKW6x9rhPc9");
    izdelaj(nizi, 169, "8Av5s2q7XxaCFDuYYHma4m0EkDRDBgvkBbI0zHMAxClKNlSr1Q5khh3cERtWSLqp0hPHsDcQXS");
    izdelaj(nizi, 170, "Y7GwT8DMLJ_o7FteDhbLlzuWuU_FgDdK0gzYUxLAGLEMF_E");
    izdelaj(nizi, 171, "AAsALhNjmzOV3Hmcay16gFrG7uSM0ayLi1OVf6VAB5dEtYpcSWjdy65PayE55jMtyRcubKFnwzHcgxMJNb5ZmQMrR2X6Gf");
    izdelaj(nizi, 172, "OctPf3imNQPkG5F3nAP7ZC0");
    izdelaj(nizi, 173, "qyiSq8ARtCoC5KmMF5PyhCrEMTOXK1Plpdpe");
    izdelaj(nizi, 174, "nk6NBW6LV3qIVIxvOMg62T4x4rqJOUlRHdESMoKw7KV5_XWgLYZU_wA_xCUQTS6EB7UWyU0xVCnDL0a1o8");
    izdelaj(nizi, 175, "KZpdZfvBmJK3mt1UH2i8");
    izdelaj(nizi, 176, "C_epzj");
    izdelaj(nizi, 177, "sKTw_qx03sBsWNOK3q8tvgxdj8DPPgR97wCsAhwGNGPfU9MzOTtJb1ZYUwuE5OQ106ybcBdS94oKB5We5twhabVeELhufg");
    izdelaj(nizi, 178, "GGiJ");
    izdelaj(nizi, 179, "t28H9WSkfS50Ytidh0u");
    izdelaj(nizi, 180, "4WFkSb0");
    izdelaj(nizi, 181, "Zffr0Zn2DYPFQZduOfYWkRg1ig2aB2xb9RKffwCqUi9GfX5AAfvfQZUsIDD17_RigM5l2NDcvBNcMnBMYnKz8AQJprWYvvpN");
    izdelaj(nizi, 182, "xsV9KSgdeSahSTArqC28tD9DIyn7G84jlknIPKltpAzLL7i1RBnPsQgwnTySfK2SJVGK");
    izdelaj(nizi, 183, "pmQmcD2BY_0R9mq5UYLxSxHUaoFpkdxwe_cleZ8Mk4VBkrHqYR6ywllFYeTIq1f7Iy4eX0Jk6ijVBQAkQ");
    izdelaj(nizi, 184, "MNullXLqG2IdjYOsdOhCQ3JJv12Lo9g517ZYROHsgaAX87w95nKT8dQlDQ2dP6G1s2ghP4H9WCTRP0Sjn_9B1rOZI");
    izdelaj(nizi, 185, "H0ASFrF9I2fQraY2s_WE9zSb2iBS22wN6VFcu7jDVD2HKIRJ3P1o8t8W_7QfgJ9xvOk1b3");
    izdelaj(nizi, 186, "Psx1oqmshqpfau7k9je1IScO7iHTU6IIfFdEnSoQ9N5RfYOwuRy3PLQAKfxxS7QgP7mcjYNDS0R3Mt");
    izdelaj(nizi, 187, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 188, "KLvH97XIwYWmTtnRnA2ZjQPDFQjdHM0UuLuOLSNZTpIwIVDBHBu6DjgeKY8z908zhXMOzD3Q9XURCHM");
    izdelaj(nizi, 189, "03kXUGBg");
    izdelaj(nizi, 190, "hZclD52SkaWcRA3Wy9ocKbyJs7e_V9uEVwJaedyE8ckENVr8KNHm55G1LflGZqx58yZw8nSa");
    izdelaj(nizi, 191, "hZclD52SkaWcRA3Wy9ocKbyJs7e_V9uEVwJaedyE8ckENVr8KNHm55G1LflGZqx58yZw8nSa");
    izdelaj(nizi, 192, "4tlPxPIgCQFF4udFwAmC_Q9EqC0W8AcfDnNbOm5n6B10O4DQlKChfB");
    izdelaj(nizi, 193, "m2aE9qsMjyQPliQ1YmUJ_y076i4HFNqm2ixFX599lu9D69IGHwtj");
    izdelaj(nizi, 194, "T9zAYYoUFNnMVLsSTGqSAodr2EIZe");
    izdelaj(nizi, 195, "TqwjGZK_tcuJKjgLYPADPk6IleJLDdj6VNN9ZbzA_B6cnHqJFq2iHTVw");
    izdelaj(nizi, 196, "_LumPJGsRHuSZDyckIvF6P4kOcHOY");
    izdelaj(nizi, 197, "D4PNU0BX4npuXEXrAVqS2BVB9MfJ2NEWxiLFWJxxMfeVwFbJvefhN4WOQZIJA599oeqM5gVQh");
    izdelaj(nizi, 198, "iW2MklA8pReAT_dkPiYF7J91e8vbQtHBwaxOh3I3HanlRopWYDFAgVdmJ");
    izdelaj(nizi, 199, "dMBxyK_1xqDwLbgwp0DVLVvnd_yDHoBoKSZhcG9");
    izdelaj(nizi, 200, "xjR_m67YmZDP61OvB8YLLzwQpLdaQlLnYvJTt0w_fKDzLyNfJEhE6wbd");
    izdelaj(nizi, 201, "uxKukvQEoJKRqu63qPRapdFd0Qpc1zAhAYNti5A_YOiGDjb");
    izdelaj(nizi, 202, "5eL8JWfJ4yQBbpbLtQ");
    izdelaj(nizi, 203, "jnKFBFZIc");
    izdelaj(nizi, 204, "3e0mx6Aa6d6XZlUZj5QNghW3FpZyoOaHZCo19xh6h4xWiTVy");
    izdelaj(nizi, 205, "JU5aXQJtHWc4NMM7S8yaBapstzzkodkApENgQp34z1GsMoWaB3C4QN0onP_sUjy36HW");
    izdelaj(nizi, 206, "NknGog6NR6AEVAqEclK_MMcOHxHtD4xA96jM943VLpUYu7MqTsqf_TcWJG6OEeKeTArqMgXBBw4wVe2U5MCMYqIt");
    izdelaj(nizi, 207, "rKbmsE");
    izdelaj(nizi, 208, "wI8d");
    izdelaj(nizi, 209, "cn5_vtnJylh_NA317Qu0u");
    izdelaj(nizi, 210, "E9JFWofbo20x3rakGUhewi7bF3Rs1ZXUvEyjX9sjrIII0wOVyFOSaH7hN8gBqSP__As_wFzD");
    izdelaj(nizi, 211, "Oy9xpqIJHoL8ps23f_3c_SR_zH0oPyborzWdx4BLDF59XI9DeriC01MAmq1wW9kLJHc9NLL_VUBx5q5qFKgzSZwDRNF");
    izdelaj(nizi, 212, "zB3nsRD3ULe1QiNOcDKUsoAlsGIOCQUvcZfVw5xApUGSY0iV0NNyCd4WkV7h4LpplFTzcP9HFPSH6gmmWtSgwVfKltPP9bDT0n");
    izdelaj(nizi, 213, "vmJqWBgZJxRySzGGLukbVaoRg2resG1NGqkyLff8e");
    izdelaj(nizi, 214, "gZxeLtCNexscvW03JxtrxF__2UXmT0Xnpj3YTPUU43q31GwVj");
    izdelaj(nizi, 215, "X31cJ3TYcnBYlSbjGeQ8mTi2zZ3SXm0_vHdB05axpyx6O78tbqd_UC5KK4777hx2g6fl1EO2siyPkH4pMioCPrP3FwcUY");
    izdelaj(nizi, 216, "F1vjwwgDkHuDEfNqhYiDMk3EVTUf");
    izdelaj(nizi, 217, "h3wGyE211CMk4si2E1e21S9j5_vaOj88wWDe_8010r3uKioLfb3i_M8HFBG9l2BdXhO");
    izdelaj(nizi, 218, "ViS87EcwmpgiAdtqKFwnLR_mazqvQKbgGn0tNRbiEyOcxRBc");
    izdelaj(nizi, 219, "hZclD52SkaWcRA3Wy9ocKbyJs7e_V9uEVwJaedyE8ckENVr8KNHm55G1LflGZqx58yZw8nSa");
    izdelaj(nizi, 220, "hZclD52SkaWcRA3Wy9ocKbyJs7e_V9uEVwJaedyE8ckENVr8KNHm55G1LflGZqx58yZw8nSa");
    izdelaj(nizi, 221, "pUG9YOJftTZyKTZh");
    izdelaj(nizi, 222, "mx4DvxnQ0EXKh8uqXFwuxjKLNDxHaS6RCjFSXpgydJzO356KR3NRvOJMKk2dPBIqmqEMNvLyBd_E41UzAH5");
    izdelaj(nizi, 223, "cyjyXlunCALKYJ5Bku2poFBDJzPFjTaSAtvyW0D9N1JKEcCmVFusqRlMw1UwMSzB2s32FVes_3Z2");
    izdelaj(nizi, 224, "ZYSEXrKB8LktltQijrP93lkUTQCkkebcMbj3z4vEDKSZWswWDUFdI4NfE1__L9R6yWsosPNRxBq");

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
