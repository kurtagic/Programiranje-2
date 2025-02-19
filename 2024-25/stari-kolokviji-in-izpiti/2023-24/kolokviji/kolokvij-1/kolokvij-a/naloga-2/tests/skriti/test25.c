
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
    int n = 202;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "HQEuobrbVjqtSNpD7TwW4nnuVN4k5JBfLk0NbTYAchzDpwKFzLK3KOvGlVwuWlEXeGi_1N1tNS8");
    izdelaj(nizi, 1, "HQEuobrbVjqtSNpD7TwW4nnuVN4k5JBfLk0NbTYAchzDpwKFzLK3KOvGlVwuWlEXeGi_1N1tNS8");
    izdelaj(nizi, 2, "DkiACmRo0liciH2sT78SEh8ql7KcyDxKsdAz23wbojIlSwmwPFPuEwyWtLtkqIE6NiL_0mgB9qC4jRS8dzZp8IpD");
    izdelaj(nizi, 3, "HQEuobrbVjqtSNpD7TwW4nnuVN4k5JBfLk0NbTYAchzDpwKFzLK3KOvGlVwuWlEXeGi_1N1tNS8");
    izdelaj(nizi, 4, "HQEuobrbVjqtSNpD7TwW4nnuVN4k5JBfLk0NbTYAchzDpwKFzLK3KOvGlVwuWlEXeGi_1N1tNS8");
    izdelaj(nizi, 5, "iEBx3105FMXo8MxO4YOA6px5wHceLMUUDDMoHD1oVuxMlEW8zbsG2bjH");
    izdelaj(nizi, 6, "Yt3w_1A3o5ceXc2WYsl1VxnPWNgoFEWnfnSIuRJqo9x7OmN5_1g3KeAtRXPfLbyz9XY9ncdjsumIkUcYRInRdzfyUXI7FFV");
    izdelaj(nizi, 7, "GPOuAX1dmD10WUdG2F0Bms2kkBVjwAetLOWR8B");
    izdelaj(nizi, 8, "D3cfD7XvMwm0Yn5qexBli");
    izdelaj(nizi, 9, "HQEuobrbVjqtSNpD7TwW4nnuVN4k5JBfLk0NbTYAchzDpwKFzLK3KOvGlVwuWlEXeGi_1N1tNS8");
    izdelaj(nizi, 10, "os2pk35251bd4iVxDDkQioa2qk3spB6z");
    izdelaj(nizi, 11, "ei2vwj");
    izdelaj(nizi, 12, "bWAWnpsZccEFpJr0FQz3");
    izdelaj(nizi, 13, "VxNyKcx9T_YVSM_BRrrEuf");
    izdelaj(nizi, 14, "HQEuobrbVjqtSNpD7TwW4nnuVN4k5JBfLk0NbTYAchzDpwKFzLK3KOvGlVwuWlEXeGi_1N1tNS8");
    izdelaj(nizi, 15, "ei2vwj");
    izdelaj(nizi, 16, "bWAWnpsZccEFpJr0FQz3");
    izdelaj(nizi, 17, "mdDaDsOfhI5X7KWJf62PxIQ");
    izdelaj(nizi, 18, "HQEuobrbVjqtSNpD7TwW4nnuVN4k5JBfLk0NbTYAchzDpwKFzLK3KOvGlVwuWlEXeGi_1N1tNS8");
    izdelaj(nizi, 19, "aPj76sDUMP");
    izdelaj(nizi, 20, "iEBx3105FMXo8MxO4YOA6px5wHceLMUUDDMoHD1oVuxMlEW8zbsG2bjH");
    izdelaj(nizi, 21, "HQEuobrbVjqtSNpD7TwW4nnuVN4k5JBfLk0NbTYAchzDpwKFzLK3KOvGlVwuWlEXeGi_1N1tNS8");
    izdelaj(nizi, 22, "VhGPQ4FWgeMeC9x8VIe_iYIJ__9GbY9eaimFY_6mGFb9Ic79CRtSSO_RseGnXPsMJ_c072e");
    izdelaj(nizi, 23, "bWAWnpsZccEFpJr0FQz3");
    izdelaj(nizi, 24, "sA7iDUyKEuZ2DhjTJx7LkXaxH6DXGwUS3jgF_2fEQxVPP8J1gmGLhveGfxhuIGOX");
    izdelaj(nizi, 25, "r06xPG4PkQif0INoAtG6owEMULRla_khKAJixv4sdwj2Z9e6yhoX9ITD5rQcPMIqQN_O8rF1yeWMg3zGWxWC6V");
    izdelaj(nizi, 26, "xEMnn_u1lmKSqNb2DfjhgtE0zxQ5B7quDfGqOHENiFDjVDjBW6ij4kzqR5Q6aFD");
    izdelaj(nizi, 27, "HQEuobrbVjqtSNpD7TwW4nnuVN4k5JBfLk0NbTYAchzDpwKFzLK3KOvGlVwuWlEXeGi_1N1tNS8");
    izdelaj(nizi, 28, "1K58rJ6_ReFx_h6kOPPRYQ4xJ2Y9VmyfU5Hqt5EzFtc3SaQOn1cD3epW2wlbWCWZ_BPr3P_i3SRPd6R");
    izdelaj(nizi, 29, "AyuaENYYKzMVcRhiJ7tybUKuewvByFgp0D92JOrOYTkAIrDqFYl6sjNLDPGCVJJF2tV9jxRtOIAIGLU_cgXjrXJadv85cPRv_A");
    izdelaj(nizi, 30, "GK_qDsK1_UUqprqPGhihJ");
    izdelaj(nizi, 31, "GDrSnF4CTN9FsEK4y9AD");
    izdelaj(nizi, 32, "exYcxDfSBNGkZ0nn5NTUefDcDteaCBJDOURnlwk");
    izdelaj(nizi, 33, "yVdvMZ5C4PglEtfGje1lT1db");
    izdelaj(nizi, 34, "ghw");
    izdelaj(nizi, 35, "bWAWnpsZccEFpJr0FQz3");
    izdelaj(nizi, 36, "55");
    izdelaj(nizi, 37, "3swhM7fPsgDISOA204DuXWi61z99DUKwo4AbB_yAxHVRjCDnccRpduu3npqTOILoigVrnUYz");
    izdelaj(nizi, 38, "g16spXxQ1lzEtGkVxm");
    izdelaj(nizi, 39, "BcXQmdRDZ3kcJZUOOzaw6VuPVRlek1JfDoY4zSlT91xwxrBuTllFa96u");
    izdelaj(nizi, 40, "UhcHSekp4ObEj5wnJYtCeYgEz2SATtPvcPnUNUzMslZ0QKeGmBmlTLojOu_THkeOwVDqPxSE3");
    izdelaj(nizi, 41, "iEBx3105FMXo8MxO4YOA6px5wHceLMUUDDMoHD1oVuxMlEW8zbsG2bjH");
    izdelaj(nizi, 42, "3q86Ganmn1DwTR4");
    izdelaj(nizi, 43, "Fv3bQCHywE9lkWueJQG7lHV482nlT2QM9uJ1Xz_7XKubrT2FCzjDxnFX4YMbUB0llKcDMDSPJcPWPcTTVcn");
    izdelaj(nizi, 44, "Dsm9v");
    izdelaj(nizi, 45, "ryqqWhxLgzKaEpDPxo");
    izdelaj(nizi, 46, "3q86Ganmn1DwTR4");
    izdelaj(nizi, 47, "cXAB9k23S7nfNiuTsLDrkpnvZhbFFUvkXM5f67plGnumo0ge9vzeuybIoS4AI8J3b3SCh1gSir18TnTOyWmJ");
    izdelaj(nizi, 48, "iEBx3105FMXo8MxO4YOA6px5wHceLMUUDDMoHD1oVuxMlEW8zbsG2bjH");
    izdelaj(nizi, 49, "M5RXP1hThvpQZnUWxm9qjlzUQqLoIc17XU1rWwHAD4hJSubohTpHk8vQb8xHsOtSUG_RZ6k6XfEJlyW");
    izdelaj(nizi, 50, "7KSeDlHXVGW4fLPRo3SpnY10enuFpgx6S0j_5wN4LZhcnlVO4DXxa2hW_Ja");
    izdelaj(nizi, 51, "OYtXwHzrIHykFjhjGs25l7s5FCKeQRTJNaDjQyirtQbKIfXI");
    izdelaj(nizi, 52, "AiJ12meMe9uaYux4N9s3KitGewH4NqCK2jtBF0lLyzTJ4mGgpIEYRkkw5kGiS2XY4J1dhn");
    izdelaj(nizi, 53, "iEBx3105FMXo8MxO4YOA6px5wHceLMUUDDMoHD1oVuxMlEW8zbsG2bjH");
    izdelaj(nizi, 54, "MD3JlGwwZdQZL1LSnrXl2Swh_IxOb");
    izdelaj(nizi, 55, "VXsXZgL7LI4csEgwnH_VV_VLaRv");
    izdelaj(nizi, 56, "jpN8xa8W9G9cm3pDBfE");
    izdelaj(nizi, 57, "DkiACmRo0liciH2sT78SEh8ql7KcyDxKsdAz23wbojIlSwmwPFPuEwyWtLtkqIE6NiL_0mgB9qC4jRS8dzZp8IpD");
    izdelaj(nizi, 58, "Vny51qhZmW96YXgv66oxyifLqykvSElCh4acfp0UGmx5xd5HrZX1UugEntBlXXDlIIt3M3APLVSgpltlPbtl82KyRi10");
    izdelaj(nizi, 59, "cArMu06ouTu");
    izdelaj(nizi, 60, "yAkI9LHUFbYl15yhT6FnCK2fxoDwaxg6Zo9lefOj3fz35s43tYo");
    izdelaj(nizi, 61, "fRqouZECHvvyJGGBrno");
    izdelaj(nizi, 62, "xEMnn_u1lmKSqNb2DfjhgtE0zxQ5B7quDfGqOHENiFDjVDjBW6ij4kzqR5Q6aFD");
    izdelaj(nizi, 63, "0Hurz0mdGQWQ_fMV4n3d0dlZbxsf7ndtLGrOjNySeN4ASF_A6NbMQWtsV6nK403GxjJsm_PSVwcMbSJOKBoG2Fw7idMu");
    izdelaj(nizi, 64, "gdPwF5zmeKthwkDC6UnKUmhB");
    izdelaj(nizi, 65, "U2TdXPoxvn_zmx7jQWtFcvFfTXR3YKrj0riDnCfbRWee5ubSzkoXrb6urFWU5m3QlCeeWfchU7WlCAa6D7A3Gk3");
    izdelaj(nizi, 66, "VnBLqCugnRQJAT6LlOnr2oJctAXBEc9RwmLNG9");
    izdelaj(nizi, 67, "RMBIBUwxJ4zVGslAX67vCW46zEaZefmkPUov06Jv7HjkB7IneyrhwSme8UeXFRqTsurmf67eGd");
    izdelaj(nizi, 68, "HQEuobrbVjqtSNpD7TwW4nnuVN4k5JBfLk0NbTYAchzDpwKFzLK3KOvGlVwuWlEXeGi_1N1tNS8");
    izdelaj(nizi, 69, "iEBx3105FMXo8MxO4YOA6px5wHceLMUUDDMoHD1oVuxMlEW8zbsG2bjH");
    izdelaj(nizi, 70, "md6tYv7WBm2ZaYOmBybZp7DUgaocKd6RvCt_aTF6L0U29WyOSYCE040WXtZKK0sHEMUKktFpE");
    izdelaj(nizi, 71, "rDT5CLhmE4oEVmcRHLj3kyDReUe_zr5Adx5qNqaaC9F1gBxj9HmIMiQxsHR3Dgzpd81Cd7WP8sgWzl");
    izdelaj(nizi, 72, "cUXMVwsiALaHTdDUxI1ZNV0IZPEcboGamZ3kw1bqRKCSywfcTTpJ86SBqT");
    izdelaj(nizi, 73, "UhcHSekp4ObEj5wnJYtCeYgEz2SATtPvcPnUNUzMslZ0QKeGmBmlTLojOu_THkeOwVDqPxSE3");
    izdelaj(nizi, 74, "HQEuobrbVjqtSNpD7TwW4nnuVN4k5JBfLk0NbTYAchzDpwKFzLK3KOvGlVwuWlEXeGi_1N1tNS8");
    izdelaj(nizi, 75, "KxpXWdwZaZoDVEqiFhYG84QW3GmRpBK3aeTmFdbovDE6Z3zcTq");
    izdelaj(nizi, 76, "tj2iZQs6Y0RhKcBCFfYYAB9kb2SiMdLhNe4w7TYI1nDIIgOUFhh2cVK4IF");
    izdelaj(nizi, 77, "GUg3CGwk0PA6WxoNmDpndOHOzPm3aHfTWNeVXeG7ahYVIN1h985Uk3tR__ucUZ3CDbWDDCPtB7MXEzIDbG3d");
    izdelaj(nizi, 78, "KK4Njr8DsRX4R92VG18Nr");
    izdelaj(nizi, 79, "GIDaaAGtd3lR0IAJpQMidRB");
    izdelaj(nizi, 80, "ystZ62X_V_E6L1D8DF3AA");
    izdelaj(nizi, 81, "c5g2UO9y0vZFSs7AbQMTp_zkJBU41wzLlp3mieE5u0j5sWTi2aCLUZSuu7vYLQSuxHMBOQPF");
    izdelaj(nizi, 82, "mAJPLVHBPZlJR8hXHQXumYaLyxcDRfD1AMddcS04VIlZcII4wtmvS4g16KumXI65J46Dtoye");
    izdelaj(nizi, 83, "9Z3Ppwi18vOZGtxpe");
    izdelaj(nizi, 84, "HQEuobrbVjqtSNpD7TwW4nnuVN4k5JBfLk0NbTYAchzDpwKFzLK3KOvGlVwuWlEXeGi_1N1tNS8");
    izdelaj(nizi, 85, "hZclD52SkaWcRA3Wy9ocKbyJs7e_V9uEVwJaedyE8ckENVr8KNHm55G1LflGZqx58yZw8nSa");
    izdelaj(nizi, 86, "dR62vNa4epbm9_ZlXG4yITcYi2Co7Es");
    izdelaj(nizi, 87, "dR62vNa4epbm9_ZlXG4yITcYi2Co7Es");
    izdelaj(nizi, 88, "iEBx3105FMXo8MxO4YOA6px5wHceLMUUDDMoHD1oVuxMlEW8zbsG2bjH");
    izdelaj(nizi, 89, "LqmWKUhV0FSECmAA5ZFPSud7aSX64unM");
    izdelaj(nizi, 90, "jkbVOPjXumcZixD0HzjGwcfQvXiBeERtUukc1hzgBANf3QCMeuuwZWYso90Re4DoZx");
    izdelaj(nizi, 91, "YzLLaokBBUsobc_VIbN9HL4TFcBdmGn");
    izdelaj(nizi, 92, "iEBx3105FMXo8MxO4YOA6px5wHceLMUUDDMoHD1oVuxMlEW8zbsG2bjH");
    izdelaj(nizi, 93, "Mx_RTU3Y_yzuNl9vGe5u9obEC6HFv1vWvR33Qqij9j7If8DSsOwU8hGM5e");
    izdelaj(nizi, 94, "HQEuobrbVjqtSNpD7TwW4nnuVN4k5JBfLk0NbTYAchzDpwKFzLK3KOvGlVwuWlEXeGi_1N1tNS8");
    izdelaj(nizi, 95, "0Hurz0mdGQWQ_fMV4n3d0dlZbxsf7ndtLGrOjNySeN4ASF_A6NbMQWtsV6nK403GxjJsm_PSVwcMbSJOKBoG2Fw7idMu");
    izdelaj(nizi, 96, "9JNqtAXThVVszDb6bQ23P_fbsOvB52qrN4nYXI8sub54Cc3QoZYR2CQN0_lbxKuayyFNqH4X");
    izdelaj(nizi, 97, "UhcHSekp4ObEj5wnJYtCeYgEz2SATtPvcPnUNUzMslZ0QKeGmBmlTLojOu_THkeOwVDqPxSE3");
    izdelaj(nizi, 98, "tj2iZQs6Y0RhKcBCFfYYAB9kb2SiMdLhNe4w7TYI1nDIIgOUFhh2cVK4IF");
    izdelaj(nizi, 99, "bWAWnpsZccEFpJr0FQz3");
    izdelaj(nizi, 100, "YG65qXIwE1Sx8h7uXvnH1giWMpPiYHkAGWQGGqxLHkhv8rs3XDfGfB");
    izdelaj(nizi, 101, "GDrSnF4CTN9FsEK4y9AD");
    izdelaj(nizi, 102, "2CheVkqiNjGAY9Ym0yKZWTTQ");
    izdelaj(nizi, 103, "yzcJpre8BdnRW736");
    izdelaj(nizi, 104, "QDjYOsPdOB6EDAy968MlncC5UvlesCaTHmMOrelqyBJI49EIFGYWo_Mro1axFdKWosw4S7YlJhFV4khkNeSbzAJjcA");
    izdelaj(nizi, 105, "4mfoQ7uB68t9PolzHF9LycvUdPj59EEBPGev_NBCp6V307Cp6YXTr9enxpV3YE15qL");
    izdelaj(nizi, 106, "bWAWnpsZccEFpJr0FQz3");
    izdelaj(nizi, 107, "nN_GD8W977BK9NEZbkLqjrQfDVyZhSinQML3atDIOhTuNJsMOSLwUx_q");
    izdelaj(nizi, 108, "Yy3ev1wpxb5cRldMIOjrYCwTy3wdvWLDdR9FJ");
    izdelaj(nizi, 109, "0wnfHpepYQr230hbnbiq_aQv7Wu3Li0jo7XbQf4AsjdDP7lD");
    izdelaj(nizi, 110, "_qSD0ZR1uZNAN15Mh6WGm1AbPIDUUJD7tH3EdeZFuda5UeSeHIX3bHeadwMvefEb5bedW7sN1EDyCOcKksp9D");
    izdelaj(nizi, 111, "TMb6GFIS9TDwHlQ1uSAwVxSgjPsQRQU_y");
    izdelaj(nizi, 112, "z3n8k2dLa8ao16k6FTt84");
    izdelaj(nizi, 113, "gGdv1iagkYM0HiX5FPJ8uPEsQN9w_v9");
    izdelaj(nizi, 114, "XZeMMr");
    izdelaj(nizi, 115, "Stu0YC422ts8Zs6Yf_Osu6BW_m_cgGQmE4eNskmbOoBFOCqpOWGlAWGIl_UAOLYPEsSToAPZ_QVlZ");
    izdelaj(nizi, 116, "Dsm9v");
    izdelaj(nizi, 117, "HQEuobrbVjqtSNpD7TwW4nnuVN4k5JBfLk0NbTYAchzDpwKFzLK3KOvGlVwuWlEXeGi_1N1tNS8");
    izdelaj(nizi, 118, "hZclD52SkaWcRA3Wy9ocKbyJs7e_V9uEVwJaedyE8ckENVr8KNHm55G1LflGZqx58yZw8nSa");
    izdelaj(nizi, 119, "fFVNCViNU6YEecAetLvk7q63DrggNwMQgA6rLTacJ8tIfjn3_v1SXDCE7AOzLoS");
    izdelaj(nizi, 120, "KblsQcXbyB8hgbSYCUKWZFFLAxbfsyW6");
    izdelaj(nizi, 121, "0QYKekw8girilb91OxjXtRAj4Qzc4M79JYhQTvBu7kCWrWeJPj0wEItTWWTl_4QXnlC0ykdzycGgwT01xHrp5Df9");
    izdelaj(nizi, 122, "HQEuobrbVjqtSNpD7TwW4nnuVN4k5JBfLk0NbTYAchzDpwKFzLK3KOvGlVwuWlEXeGi_1N1tNS8");
    izdelaj(nizi, 123, "djrr8p0oAgV_27R830fS__jqIk9Xt0r5J8G8ShX5hPhpS3MpEjTiP4ww_S2e24tD9c5QmQK_nQ9b00s");
    izdelaj(nizi, 124, "nCkXQXG82NPgl3QwlHVwx3ZvYMVoPSM9bgOwTjIVLhEdaw");
    izdelaj(nizi, 125, "Rk5ki8v7m2xCNb6FFFdwSZaJflq4aLp0D7fR0qH6cfimFIs9hwy9HqQNRjckA");
    izdelaj(nizi, 126, "bb3zcSdoPoDnx38Ze99F2gvuvzOC7yWqk5Dq");
    izdelaj(nizi, 127, "JoLNhQDp__g");
    izdelaj(nizi, 128, "VnBLqCugnRQJAT6LlOnr2oJctAXBEc9RwmLNG9");
    izdelaj(nizi, 129, "JeRKm4IxyIOH5FEBADqm3A9id4EvpaY_X943ujlMHqvqCcDWIFnwAMQ4KSnyYY0PwYZ5lFyvyH2yKcDn");
    izdelaj(nizi, 130, "iJ4YmSFoi1_2utOQdXeK7RsR3cxnybZzJQzXXx6xoPfTNiH9OsrrU3SjOnVycD7Ro1rHkhdF6IA5Z00p9Mt9wAfhl");
    izdelaj(nizi, 131, "7KSeDlHXVGW4fLPRo3SpnY10enuFpgx6S0j_5wN4LZhcnlVO4DXxa2hW_Ja");
    izdelaj(nizi, 132, "ED4TtIAIZfbB6buCgZNwSJoRva6u7kHtzWTxwI05a07Vsvs5qLsp5UdLgS0IaqxUSxsH1kmkdNmf7mNa5eAvGT4");
    izdelaj(nizi, 133, "Stu0YC422ts8Zs6Yf_Osu6BW_m_cgGQmE4eNskmbOoBFOCqpOWGlAWGIl_UAOLYPEsSToAPZ_QVlZ");
    izdelaj(nizi, 134, "6oVPCeUxq7dEQmhcZobwIso4xfzZLsk");
    izdelaj(nizi, 135, "Dsm9v");
    izdelaj(nizi, 136, "lJntCX7PnqzMzjcqn4MsD8ax4IAe_");
    izdelaj(nizi, 137, "cArMu06ouTu");
    izdelaj(nizi, 138, "1LOR_GuyuIgn8o_K2kLRs00a2bFVOtPJARphxqnRtPdfmZutEiSya0yRBCpA7Ul4_lIze");
    izdelaj(nizi, 139, "YzLLaokBBUsobc_VIbN9HL4TFcBdmGn");
    izdelaj(nizi, 140, "kuc9HCw1Vylftbwp1g8umGYAKo17wWT5jkfbrnqFvQS7Q1XPt_Dg4LUf6Rnz7N2qI7c8NriInRHiHom");
    izdelaj(nizi, 141, "lW95GMp5ZZOO24BA3dN96105YrKcvBPl1LNDd");
    izdelaj(nizi, 142, "2lDViFgNId");
    izdelaj(nizi, 143, "zrc7CDKuC4");
    izdelaj(nizi, 144, "43HFCSxUkrgQFDL6HovFLeU00k_");
    izdelaj(nizi, 145, "r06xPG4PkQif0INoAtG6owEMULRla_khKAJixv4sdwj2Z9e6yhoX9ITD5rQcPMIqQN_O8rF1yeWMg3zGWxWC6V");
    izdelaj(nizi, 146, "Stu0YC422ts8Zs6Yf_Osu6BW_m_cgGQmE4eNskmbOoBFOCqpOWGlAWGIl_UAOLYPEsSToAPZ_QVlZ");
    izdelaj(nizi, 147, "luWwEAT4K75kF4Et2f8Q1WCGOIMgUxBEM7XnlO2Ah_B0mJJz2GsMGO6lbRx5");
    izdelaj(nizi, 148, "55");
    izdelaj(nizi, 149, "N3azXLtLLhfy5fEsqHU16ZHOl9KDW0t2OOy6s6DdOkS82hpMyImsWUYoqzdWAb83IMA80LcSiQ0RtEeN7Sk");
    izdelaj(nizi, 150, "sgt0KiQS2xXsm3FMbtBzaMC1u780ZaJHN1QaeF9U2C8vn__TFFV0x4Q6bLTfyKOQaKnd_93f");
    izdelaj(nizi, 151, "GvjWn9A_1HZ9f4KgRZU2w");
    izdelaj(nizi, 152, "BcXQmdRDZ3kcJZUOOzaw6VuPVRlek1JfDoY4zSlT91xwxrBuTllFa96u");
    izdelaj(nizi, 153, "yzcJpre8BdnRW736");
    izdelaj(nizi, 154, "hyxak6yJDW9a5L3bVashgeBTHyjOhCxOkgmFIQ0RiKFt4CojPzuELJQpcg");
    izdelaj(nizi, 155, "HQEuobrbVjqtSNpD7TwW4nnuVN4k5JBfLk0NbTYAchzDpwKFzLK3KOvGlVwuWlEXeGi_1N1tNS8");
    izdelaj(nizi, 156, "jkbVOPjXumcZixD0HzjGwcfQvXiBeERtUukc1hzgBANf3QCMeuuwZWYso90Re4DoZx");
    izdelaj(nizi, 157, "iEBx3105FMXo8MxO4YOA6px5wHceLMUUDDMoHD1oVuxMlEW8zbsG2bjH");
    izdelaj(nizi, 158, "cXAB9k23S7nfNiuTsLDrkpnvZhbFFUvkXM5f67plGnumo0ge9vzeuybIoS4AI8J3b3SCh1gSir18TnTOyWmJ");
    izdelaj(nizi, 159, "DkiACmRo0liciH2sT78SEh8ql7KcyDxKsdAz23wbojIlSwmwPFPuEwyWtLtkqIE6NiL_0mgB9qC4jRS8dzZp8IpD");
    izdelaj(nizi, 160, "Stu0YC422ts8Zs6Yf_Osu6BW_m_cgGQmE4eNskmbOoBFOCqpOWGlAWGIl_UAOLYPEsSToAPZ_QVlZ");
    izdelaj(nizi, 161, "trHX3zsyh1BZhfJiDEGGs64AhY8ZstSJv2Du");
    izdelaj(nizi, 162, "rGrXCKK0xGzbqncCH");
    izdelaj(nizi, 163, "MPM4mg3QNc9q1kcPcedikR0L7_hCiYFRre25wfuXuJ6z9QvU2F1zlKqI");
    izdelaj(nizi, 164, "dR62vNa4epbm9_ZlXG4yITcYi2Co7Es");
    izdelaj(nizi, 165, "nN_GD8W977BK9NEZbkLqjrQfDVyZhSinQML3atDIOhTuNJsMOSLwUx_q");
    izdelaj(nizi, 166, "iHujsQyfPf8lIRka0JadmGunRwW8HhRHuhNys5VYqXMvqbR9");
    izdelaj(nizi, 167, "dhIvEyRA8PmmLEzgzqQlLc0uEJBCg5o0_xovSWwS2vWL82mR01SQ");
    izdelaj(nizi, 168, "0j_PCpmm9c9Xw5ov1w9wMQAlBRFeSaJzAq8xuUAP0wiNdLWOIMKOxsFrSVdCkRcmZlLuh9UH");
    izdelaj(nizi, 169, "hWrNJRwmboD8TN02BSIZDT1iH40QE50jsuIsbhRfZ9ASUMXmvEP4L1rF3tC_dsXHlseAHDwlWvLNp5Butvy6");
    izdelaj(nizi, 170, "aAOWH1dJQ65JlUef8");
    izdelaj(nizi, 171, "aAHsTU1vQOEZG7POcIPbMRbWPjgeqFsIj3");
    izdelaj(nizi, 172, "g16spXxQ1lzEtGkVxm");
    izdelaj(nizi, 173, "TMb6GFIS9TDwHlQ1uSAwVxSgjPsQRQU_y");
    izdelaj(nizi, 174, "aUno9MBla9Oyn8DQWIW9Iz1ooEldCv93FOX0XLkyDBuBBy7beTjLbX942AMiB");
    izdelaj(nizi, 175, "3swhM7fPsgDISOA204DuXWi61z99DUKwo4AbB_yAxHVRjCDnccRpduu3npqTOILoigVrnUYz");
    izdelaj(nizi, 176, "5e1klNF1E");
    izdelaj(nizi, 177, "rDT5CLhmE4oEVmcRHLj3kyDReUe_zr5Adx5qNqaaC9F1gBxj9HmIMiQxsHR3Dgzpd81Cd7WP8sgWzl");
    izdelaj(nizi, 178, "REn2t_3D6pR0tl9Hic9An");
    izdelaj(nizi, 179, "3q86Ganmn1DwTR4");
    izdelaj(nizi, 180, "Stu0YC422ts8Zs6Yf_Osu6BW_m_cgGQmE4eNskmbOoBFOCqpOWGlAWGIl_UAOLYPEsSToAPZ_QVlZ");
    izdelaj(nizi, 181, "r06xPG4PkQif0INoAtG6owEMULRla_khKAJixv4sdwj2Z9e6yhoX9ITD5rQcPMIqQN_O8rF1yeWMg3zGWxWC6V");
    izdelaj(nizi, 182, "apBxhxnhDUXzlIJ3uc2GZIjpPmkNw6OnCNACXSZ6yNX_d19zU7oU4jVjbRTqBFhCAfgqsggdzNuFJpo8hXnq4XoB5");
    izdelaj(nizi, 183, "XSD0Rbv4I56dJE6HdfgTc7BLscXyp86MSBWqts9e6IXayVgXI_PHw9Q8cSYxKjo2rKVfuj0dvxFh7_xEo");
    izdelaj(nizi, 184, "fRqouZECHvvyJGGBrno");
    izdelaj(nizi, 185, "1LOR_GuyuIgn8o_K2kLRs00a2bFVOtPJARphxqnRtPdfmZutEiSya0yRBCpA7Ul4_lIze");
    izdelaj(nizi, 186, "6h0VW0EJp3DdrqZZHt6GT33aBGrF4PEqjj7c");
    izdelaj(nizi, 187, "0Hurz0mdGQWQ_fMV4n3d0dlZbxsf7ndtLGrOjNySeN4ASF_A6NbMQWtsV6nK403GxjJsm_PSVwcMbSJOKBoG2Fw7idMu");
    izdelaj(nizi, 188, "iEBx3105FMXo8MxO4YOA6px5wHceLMUUDDMoHD1oVuxMlEW8zbsG2bjH");
    izdelaj(nizi, 189, "Mljuapy_veDvbJOAJU");
    izdelaj(nizi, 190, "Cjc3lAkAA0C7GGKufg7IlMfcWmqh3BNL1WxKM4DqyIC0VZcJka6g2vtUhOR24rZuymS0WOG4kWObqvea54vAN5oiOlONfFegav9");
    izdelaj(nizi, 191, "43HFCSxUkrgQFDL6HovFLeU00k_");
    izdelaj(nizi, 192, "03mfg6l_WZZLbYvB3AATfGYlaoEoT7okl5yWkwUdbUiMUrSoEsnSW5M86FHmzGlzm5rxQRj3jSW2ay6");
    izdelaj(nizi, 193, "4VCC2tat65BxH479HR7oUH3PJQdUDCxqdf8CDY8mnsL");
    izdelaj(nizi, 194, "N3azXLtLLhfy5fEsqHU16ZHOl9KDW0t2OOy6s6DdOkS82hpMyImsWUYoqzdWAb83IMA80LcSiQ0RtEeN7Sk");
    izdelaj(nizi, 195, "yKUam48rR9tTq9KjEM2Jb");
    izdelaj(nizi, 196, "pJ01QApmuQunQ8dKUPaZ5VQ");
    izdelaj(nizi, 197, "DkiACmRo0liciH2sT78SEh8ql7KcyDxKsdAz23wbojIlSwmwPFPuEwyWtLtkqIE6NiL_0mgB9qC4jRS8dzZp8IpD");
    izdelaj(nizi, 198, "SUAuLwGINL4vQ4XDetHLogTpUjHqmkLs0Hu3MNG");
    izdelaj(nizi, 199, "Yqn8qTOlYaaLvJBXO92a_bvX42lWwFtpHrF");
    izdelaj(nizi, 200, "wb5oQoxB9Bg2uTDapf4MRO7Nu1yjLQJPg1A16C_4OTTJmXwDqsaGDvQ0HJrD_QMXeD83xtqL4CJpJk7y53V2bJtfurb");
    izdelaj(nizi, 201, "W0AL7K_oOSnXyCOsmXqZ4GCPKSafzlVufj5Uze6HTyKf8vfQzm5bPHWr76o1hMnFMWWCvdsM");

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
