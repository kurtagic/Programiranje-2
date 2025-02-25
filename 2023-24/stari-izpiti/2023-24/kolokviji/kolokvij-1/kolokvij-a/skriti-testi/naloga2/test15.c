
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
    int n = 273;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 1, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 2, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 3, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 4, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 5, "SQWNc3PzGEt2LNJ8szh9SlrJKLqjOs089pNQms0zDCaT6nSfRZHr2AMYJzPOhqfBCznNL32Xxr");
    izdelaj(nizi, 6, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 7, "MZxkZKtgtWjlZGrQhIXwHIt1uZvumj95JP8BQfYPsaxl0eSFUehUCtpfOL5");
    izdelaj(nizi, 8, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 9, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 10, "HV8lMdtV3xj4DMHZOYvPYnsL3x_k4s_B4Xatzq12RmXJXzXShQ7FaYow1hBQtblucU5wPDg_aJi0k4jfd3ff62KcKE1MNvjeI3JX");
    izdelaj(nizi, 11, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 12, "HV8lMdtV3xj4DMHZOYvPYnsL3x_k4s_B4Xatzq12RmXJXzXShQ7FaYow1hBQtblucU5wPDg_aJi0k4jfd3ff62KcKE1MNvjeI3JX");
    izdelaj(nizi, 13, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 14, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 15, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 16, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 17, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 18, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 19, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 20, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 21, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 22, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 23, "j3v4VnS7SJtRw0pfF8y3TVYSUfCtqraCfZVT5a1cjtibge37ai2WxAnqI4sL78nThiU3");
    izdelaj(nizi, 24, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 25, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 26, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 27, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 28, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 29, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 30, "j3v4VnS7SJtRw0pfF8y3TVYSUfCtqraCfZVT5a1cjtibge37ai2WxAnqI4sL78nThiU3");
    izdelaj(nizi, 31, "F8IBegvPLlHve7HRpvmkAu9YkXBTsusUV7eE6uCirshxVKM4AvJIJ1");
    izdelaj(nizi, 32, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 33, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 34, "mSHSXgdCeUO3");
    izdelaj(nizi, 35, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 36, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 37, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 38, "n2swGcFYze1D0T6RoHj");
    izdelaj(nizi, 39, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 40, "MZxkZKtgtWjlZGrQhIXwHIt1uZvumj95JP8BQfYPsaxl0eSFUehUCtpfOL5");
    izdelaj(nizi, 41, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 42, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 43, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 44, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 45, "o5e0v0DXP69uE2kFrgU2wIC_4_UZhsIwDawsdneN2");
    izdelaj(nizi, 46, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 47, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 48, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 49, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 50, "HV8lMdtV3xj4DMHZOYvPYnsL3x_k4s_B4Xatzq12RmXJXzXShQ7FaYow1hBQtblucU5wPDg_aJi0k4jfd3ff62KcKE1MNvjeI3JX");
    izdelaj(nizi, 51, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 52, "HV8lMdtV3xj4DMHZOYvPYnsL3x_k4s_B4Xatzq12RmXJXzXShQ7FaYow1hBQtblucU5wPDg_aJi0k4jfd3ff62KcKE1MNvjeI3JX");
    izdelaj(nizi, 53, "wNaZL1RfDRTayXZh8gLKA2srWYHxNTzfxzK28aMWnhqK_LXEmm53jmY1t3IreSYrdqrOeD7xbUxt");
    izdelaj(nizi, 54, "GnnmTqkMZdmu4rkiWl27o7to3KJieyoTwl2hiLsIlo916z57EgrHbKw_A_22qxK_fuRi2u9DpzgYPwNZS5LjKr5w5rxmhhT7O");
    izdelaj(nizi, 55, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 56, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 57, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 58, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 59, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 60, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 61, "o5e0v0DXP69uE2kFrgU2wIC_4_UZhsIwDawsdneN2");
    izdelaj(nizi, 62, "66XN7nSooxgguB8W2sM7KsffXvE1s8lYPlkxxMMVGMX3U0TD9L794jRFurF19UV");
    izdelaj(nizi, 63, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 64, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 65, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 66, "OMD20g4VPCp54RQGe0VZuCC6Q867VC7fXnBspF0QLPaWdmyqxe8C92CuXh6DeokK43gDPzTmq6542KqPJQOYlLHrejnRz4y");
    izdelaj(nizi, 67, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 68, "wXptAjB9vjiBp3YPkuP4exMuZSqC0KFOy_O2ZkvDhdpjZMDZraBMbB_uWuRmp2SOVJ_fT5wqidRhIYPhFMF5");
    izdelaj(nizi, 69, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 70, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 71, "GnnmTqkMZdmu4rkiWl27o7to3KJieyoTwl2hiLsIlo916z57EgrHbKw_A_22qxK_fuRi2u9DpzgYPwNZS5LjKr5w5rxmhhT7O");
    izdelaj(nizi, 72, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 73, "j3v4VnS7SJtRw0pfF8y3TVYSUfCtqraCfZVT5a1cjtibge37ai2WxAnqI4sL78nThiU3");
    izdelaj(nizi, 74, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 75, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 76, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 77, "SQWNc3PzGEt2LNJ8szh9SlrJKLqjOs089pNQms0zDCaT6nSfRZHr2AMYJzPOhqfBCznNL32Xxr");
    izdelaj(nizi, 78, "Fv3bQCHywE9lkWueJQG7lHV482nlT2QM9uJ1Xz_7XKubrT2FCzjDxnFX4YMbUB0llKcDMDSPJcPWPcTTVcn");
    izdelaj(nizi, 79, "OQkRdxguCowJy2no6iS6lbfeoRnMe1G5thRpgX91u85QSIp");
    izdelaj(nizi, 80, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 81, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 82, "dHyxwKwlCkgUeH7Uk5nQ1m3uY6zjY_S8oWeKV2cuZFTML87vs3n");
    izdelaj(nizi, 83, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 84, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 85, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 86, "Zf5fwT3e0b8jSq168jgcuqVEOZvhNuDUvDLuBBIjDfKCXJGPePR1O4");
    izdelaj(nizi, 87, "ke6GrVP6cM8ddUWdgO865MKRZNPiMu2SHjHc9Mr6hZk");
    izdelaj(nizi, 88, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 89, "F8IBegvPLlHve7HRpvmkAu9YkXBTsusUV7eE6uCirshxVKM4AvJIJ1");
    izdelaj(nizi, 90, "wXptAjB9vjiBp3YPkuP4exMuZSqC0KFOy_O2ZkvDhdpjZMDZraBMbB_uWuRmp2SOVJ_fT5wqidRhIYPhFMF5");
    izdelaj(nizi, 91, "HV8lMdtV3xj4DMHZOYvPYnsL3x_k4s_B4Xatzq12RmXJXzXShQ7FaYow1hBQtblucU5wPDg_aJi0k4jfd3ff62KcKE1MNvjeI3JX");
    izdelaj(nizi, 92, "GnnmTqkMZdmu4rkiWl27o7to3KJieyoTwl2hiLsIlo916z57EgrHbKw_A_22qxK_fuRi2u9DpzgYPwNZS5LjKr5w5rxmhhT7O");
    izdelaj(nizi, 93, "GnnmTqkMZdmu4rkiWl27o7to3KJieyoTwl2hiLsIlo916z57EgrHbKw_A_22qxK_fuRi2u9DpzgYPwNZS5LjKr5w5rxmhhT7O");
    izdelaj(nizi, 94, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 95, "j3v4VnS7SJtRw0pfF8y3TVYSUfCtqraCfZVT5a1cjtibge37ai2WxAnqI4sL78nThiU3");
    izdelaj(nizi, 96, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 97, "GnnmTqkMZdmu4rkiWl27o7to3KJieyoTwl2hiLsIlo916z57EgrHbKw_A_22qxK_fuRi2u9DpzgYPwNZS5LjKr5w5rxmhhT7O");
    izdelaj(nizi, 98, "XQRAv3YSrMH0t_XARt3r4okS8vArcMnRv21nEAk9TmiGk1a60v6L");
    izdelaj(nizi, 99, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 100, "1lfPo4zbaj3tUVFCmisSewtoLYg8zV2CVlQ4yL");
    izdelaj(nizi, 101, "GnnmTqkMZdmu4rkiWl27o7to3KJieyoTwl2hiLsIlo916z57EgrHbKw_A_22qxK_fuRi2u9DpzgYPwNZS5LjKr5w5rxmhhT7O");
    izdelaj(nizi, 102, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 103, "fp28ZeonCVYk2DyflAdTdHRfAlwlu4yfbSAubfqsddFm5C9mL1j4BdPdTUppusdamMqGkx78b");
    izdelaj(nizi, 104, "GnnmTqkMZdmu4rkiWl27o7to3KJieyoTwl2hiLsIlo916z57EgrHbKw_A_22qxK_fuRi2u9DpzgYPwNZS5LjKr5w5rxmhhT7O");
    izdelaj(nizi, 105, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 106, "7A8SkyFIRsUIL6SkvtH67VNc6pZUW3HOTNQIWpEg90bUJRBhSOrL");
    izdelaj(nizi, 107, "JJpGci_4JUaR9381hAXprT6p2LX2xVGAXnlo5bq84IUvQ3S6G4VRV");
    izdelaj(nizi, 108, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 109, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 110, "Zf5fwT3e0b8jSq168jgcuqVEOZvhNuDUvDLuBBIjDfKCXJGPePR1O4");
    izdelaj(nizi, 111, "fKVKo31SKpsEvvp42HEEk3qvFYMhVewA_BsUNuvlPj0G75FGXenj07hdBIie9kWJ29N22ijC3p3");
    izdelaj(nizi, 112, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 113, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 114, "GnnmTqkMZdmu4rkiWl27o7to3KJieyoTwl2hiLsIlo916z57EgrHbKw_A_22qxK_fuRi2u9DpzgYPwNZS5LjKr5w5rxmhhT7O");
    izdelaj(nizi, 115, "j3v4VnS7SJtRw0pfF8y3TVYSUfCtqraCfZVT5a1cjtibge37ai2WxAnqI4sL78nThiU3");
    izdelaj(nizi, 116, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 117, "F8IBegvPLlHve7HRpvmkAu9YkXBTsusUV7eE6uCirshxVKM4AvJIJ1");
    izdelaj(nizi, 118, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 119, "GnnmTqkMZdmu4rkiWl27o7to3KJieyoTwl2hiLsIlo916z57EgrHbKw_A_22qxK_fuRi2u9DpzgYPwNZS5LjKr5w5rxmhhT7O");
    izdelaj(nizi, 120, "fp28ZeonCVYk2DyflAdTdHRfAlwlu4yfbSAubfqsddFm5C9mL1j4BdPdTUppusdamMqGkx78b");
    izdelaj(nizi, 121, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 122, "cpo1");
    izdelaj(nizi, 123, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 124, "fp28ZeonCVYk2DyflAdTdHRfAlwlu4yfbSAubfqsddFm5C9mL1j4BdPdTUppusdamMqGkx78b");
    izdelaj(nizi, 125, "SQWNc3PzGEt2LNJ8szh9SlrJKLqjOs089pNQms0zDCaT6nSfRZHr2AMYJzPOhqfBCznNL32Xxr");
    izdelaj(nizi, 126, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 127, "XQRAv3YSrMH0t_XARt3r4okS8vArcMnRv21nEAk9TmiGk1a60v6L");
    izdelaj(nizi, 128, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 129, "66XN7nSooxgguB8W2sM7KsffXvE1s8lYPlkxxMMVGMX3U0TD9L794jRFurF19UV");
    izdelaj(nizi, 130, "q");
    izdelaj(nizi, 131, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 132, "7A8SkyFIRsUIL6SkvtH67VNc6pZUW3HOTNQIWpEg90bUJRBhSOrL");
    izdelaj(nizi, 133, "dyam6HkWgDUMk2rqgkcWpTxFgIvEE0W00dLeTsTHRqBkCni5AlK_1P2rXkITeuUk5g_uHD_tZBPr4");
    izdelaj(nizi, 134, "k_wL97uwwztLVH45x8y6Sfy7MGTLVQkPDTca1h3rW481uEgs9X1LCj7IFcdSNQi2dPH1Uln");
    izdelaj(nizi, 135, "X8bmQQ3coOj1CuMk");
    izdelaj(nizi, 136, "GiQQGFgDN4SOmFQM68W9aMV58PeKWiqr1N6b1giaqTGgaYUxR088OJhwrS0x5AbYqwHiJY5GQQ7KWO");
    izdelaj(nizi, 137, "j3v4VnS7SJtRw0pfF8y3TVYSUfCtqraCfZVT5a1cjtibge37ai2WxAnqI4sL78nThiU3");
    izdelaj(nizi, 138, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 139, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 140, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 141, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 142, "HV8lMdtV3xj4DMHZOYvPYnsL3x_k4s_B4Xatzq12RmXJXzXShQ7FaYow1hBQtblucU5wPDg_aJi0k4jfd3ff62KcKE1MNvjeI3JX");
    izdelaj(nizi, 143, "fp28ZeonCVYk2DyflAdTdHRfAlwlu4yfbSAubfqsddFm5C9mL1j4BdPdTUppusdamMqGkx78b");
    izdelaj(nizi, 144, "lGBK9TuQaAZFGwlSvQYl3pYq9wi86OvFwPBUAqHMz_LRNIytFOzSv6esrhBYVPjJI3HJWBZw");
    izdelaj(nizi, 145, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 146, "diKZkjD_9bhv9OfHHypG1Ksl2yFXeN8VB7bGTRQzMnePY");
    izdelaj(nizi, 147, "Fv3bQCHywE9lkWueJQG7lHV482nlT2QM9uJ1Xz_7XKubrT2FCzjDxnFX4YMbUB0llKcDMDSPJcPWPcTTVcn");
    izdelaj(nizi, 148, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 149, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 150, "2konywSJYmXPM");
    izdelaj(nizi, 151, "zUF5QAuA1KRMGNUW869PK2XWOqWAyuDsImCP2EU6vdRiK3gRMj34kWKdA56t6q0TB2tF18ISJjuohbGVhKVh_7DuvPfwtQtzAHeU");
    izdelaj(nizi, 152, "rErra2T7Dztag2vV2XJQ12840Xjl50DN8xZ");
    izdelaj(nizi, 153, "SQWNc3PzGEt2LNJ8szh9SlrJKLqjOs089pNQms0zDCaT6nSfRZHr2AMYJzPOhqfBCznNL32Xxr");
    izdelaj(nizi, 154, "GnnmTqkMZdmu4rkiWl27o7to3KJieyoTwl2hiLsIlo916z57EgrHbKw_A_22qxK_fuRi2u9DpzgYPwNZS5LjKr5w5rxmhhT7O");
    izdelaj(nizi, 155, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 156, "KCE9pIwfq270H7uzm96eaj9hpQ7qrYjsofCl5NR8L");
    izdelaj(nizi, 157, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 158, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 159, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 160, "Fv3bQCHywE9lkWueJQG7lHV482nlT2QM9uJ1Xz_7XKubrT2FCzjDxnFX4YMbUB0llKcDMDSPJcPWPcTTVcn");
    izdelaj(nizi, 161, "WFPs3yuK9OuL4HHf");
    izdelaj(nizi, 162, "GnnmTqkMZdmu4rkiWl27o7to3KJieyoTwl2hiLsIlo916z57EgrHbKw_A_22qxK_fuRi2u9DpzgYPwNZS5LjKr5w5rxmhhT7O");
    izdelaj(nizi, 163, "XQRAv3YSrMH0t_XARt3r4okS8vArcMnRv21nEAk9TmiGk1a60v6L");
    izdelaj(nizi, 164, "IhxzdIPI0e44S56XQhF43sNXYycfaK5ALXzCLY8HFLAdet8yc_trmsHGonCdG_Vi4SOevVuiIzJpunGetua");
    izdelaj(nizi, 165, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 166, "GnnmTqkMZdmu4rkiWl27o7to3KJieyoTwl2hiLsIlo916z57EgrHbKw_A_22qxK_fuRi2u9DpzgYPwNZS5LjKr5w5rxmhhT7O");
    izdelaj(nizi, 167, "wXptAjB9vjiBp3YPkuP4exMuZSqC0KFOy_O2ZkvDhdpjZMDZraBMbB_uWuRmp2SOVJ_fT5wqidRhIYPhFMF5");
    izdelaj(nizi, 168, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 169, "g9FkkcpUz3cEFO_mIVaNx9qU8ul_H0fJQ2tKX");
    izdelaj(nizi, 170, "4WU_7A69aPtIeUBZujGyWBysho3ozkdY7C9LgdnGerFmz4f35nb3081D7DyEIfHNCLoEWn4two4Wf");
    izdelaj(nizi, 171, "MZxkZKtgtWjlZGrQhIXwHIt1uZvumj95JP8BQfYPsaxl0eSFUehUCtpfOL5");
    izdelaj(nizi, 172, "OW61VHLGz");
    izdelaj(nizi, 173, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 174, "4WU_7A69aPtIeUBZujGyWBysho3ozkdY7C9LgdnGerFmz4f35nb3081D7DyEIfHNCLoEWn4two4Wf");
    izdelaj(nizi, 175, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 176, "YmO_ouBRoOXAniX98T7iHJ81KqUXIaW46XaXAthp8Zwzzr");
    izdelaj(nizi, 177, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 178, "GnnmTqkMZdmu4rkiWl27o7to3KJieyoTwl2hiLsIlo916z57EgrHbKw_A_22qxK_fuRi2u9DpzgYPwNZS5LjKr5w5rxmhhT7O");
    izdelaj(nizi, 179, "F8IBegvPLlHve7HRpvmkAu9YkXBTsusUV7eE6uCirshxVKM4AvJIJ1");
    izdelaj(nizi, 180, "rErra2T7Dztag2vV2XJQ12840Xjl50DN8xZ");
    izdelaj(nizi, 181, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 182, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 183, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 184, "2HOz1rTTmdvTjPtYrJIMTQbpEokut1gXDzXnhU1Ick5OKz7WkgqV0A3dNl");
    izdelaj(nizi, 185, "VKRdU7mqWsNQI4Q412pJV_4k3i0OVdtGs5K_DYf7PEqjhh_j7jrhAcgRp0uX18OKxZLTmxGLdqE_QXYWx");
    izdelaj(nizi, 186, "7A8SkyFIRsUIL6SkvtH67VNc6pZUW3HOTNQIWpEg90bUJRBhSOrL");
    izdelaj(nizi, 187, "ruLiL9Jr9umeDnB3kwBfpzIhb1Pumf8d62WzLbt8oQVNX8yeZr82wPG20pyFNj4u6VwXw6Aj871VLgVoJDevDdJiNrT5s");
    izdelaj(nizi, 188, "k_wL97uwwztLVH45x8y6Sfy7MGTLVQkPDTca1h3rW481uEgs9X1LCj7IFcdSNQi2dPH1Uln");
    izdelaj(nizi, 189, "6ovIA1iawfRBIhzIF6JCUIKqX5AYusnldbe1d9Zp4_0");
    izdelaj(nizi, 190, "DZUFGCQSq0WER0wBfhQyhNJvrUrnrnKYGgQ0ViorD6w4CYSXWTNJMHqScsoQGuDzEfgbelKvBB8PiEYAPLN2YnYbMT7Z1nDC40");
    izdelaj(nizi, 191, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 192, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 193, "f");
    izdelaj(nizi, 194, "lGBK9TuQaAZFGwlSvQYl3pYq9wi86OvFwPBUAqHMz_LRNIytFOzSv6esrhBYVPjJI3HJWBZw");
    izdelaj(nizi, 195, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 196, "NMw6feyJ5Vj4VufTa3eMRDzO9bbMVJlqbKyp9bHZABeuGf9");
    izdelaj(nizi, 197, "VKRdU7mqWsNQI4Q412pJV_4k3i0OVdtGs5K_DYf7PEqjhh_j7jrhAcgRp0uX18OKxZLTmxGLdqE_QXYWx");
    izdelaj(nizi, 198, "F8IBegvPLlHve7HRpvmkAu9YkXBTsusUV7eE6uCirshxVKM4AvJIJ1");
    izdelaj(nizi, 199, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 200, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 201, "KsTds9F7NdKrwKNVug32BLTVcASvhvTGpA7wxDx4VliKKix4JxbiYqsHvZ2B7A2weLzr55qxJPT");
    izdelaj(nizi, 202, "eva8Yv5CVzC2C9eCNuZVh3W7cUjXFwCm3d_1y_efLmvpbpWw");
    izdelaj(nizi, 203, "rErra2T7Dztag2vV2XJQ12840Xjl50DN8xZ");
    izdelaj(nizi, 204, "66XN7nSooxgguB8W2sM7KsffXvE1s8lYPlkxxMMVGMX3U0TD9L794jRFurF19UV");
    izdelaj(nizi, 205, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 206, "PEbBwcVJy1gOsyG0ciASeE02z05aHhiYUubemMJB0jTdL8NgPo_4FfeuYUToY2_PMsvwKYJxM8hPi_IcEDwc6BCOkNVvfATZ13");
    izdelaj(nizi, 207, "rErra2T7Dztag2vV2XJQ12840Xjl50DN8xZ");
    izdelaj(nizi, 208, "7yhsH6_3p7vLKYbLI9");
    izdelaj(nizi, 209, "rErra2T7Dztag2vV2XJQ12840Xjl50DN8xZ");
    izdelaj(nizi, 210, "rErra2T7Dztag2vV2XJQ12840Xjl50DN8xZ");
    izdelaj(nizi, 211, "lwpNAVVedYA2YpmD2GnFbyB4mxgeUJijhIqFTxFR_oU5I_WvdprEsp8q1tj9bYHyz90wTizwwrzIyfUB6XKoH47Svtb_Xad");
    izdelaj(nizi, 212, "YmO_ouBRoOXAniX98T7iHJ81KqUXIaW46XaXAthp8Zwzzr");
    izdelaj(nizi, 213, "NMw6feyJ5Vj4VufTa3eMRDzO9bbMVJlqbKyp9bHZABeuGf9");
    izdelaj(nizi, 214, "n2swGcFYze1D0T6RoHj");
    izdelaj(nizi, 215, "n2swGcFYze1D0T6RoHj");
    izdelaj(nizi, 216, "XQRAv3YSrMH0t_XARt3r4okS8vArcMnRv21nEAk9TmiGk1a60v6L");
    izdelaj(nizi, 217, "vcPpWvRoH");
    izdelaj(nizi, 218, "fp28ZeonCVYk2DyflAdTdHRfAlwlu4yfbSAubfqsddFm5C9mL1j4BdPdTUppusdamMqGkx78b");
    izdelaj(nizi, 219, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 220, "OQkRdxguCowJy2no6iS6lbfeoRnMe1G5thRpgX91u85QSIp");
    izdelaj(nizi, 221, "diKZkjD_9bhv9OfHHypG1Ksl2yFXeN8VB7bGTRQzMnePY");
    izdelaj(nizi, 222, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 223, "lGBK9TuQaAZFGwlSvQYl3pYq9wi86OvFwPBUAqHMz_LRNIytFOzSv6esrhBYVPjJI3HJWBZw");
    izdelaj(nizi, 224, "OQkRdxguCowJy2no6iS6lbfeoRnMe1G5thRpgX91u85QSIp");
    izdelaj(nizi, 225, "rErra2T7Dztag2vV2XJQ12840Xjl50DN8xZ");
    izdelaj(nizi, 226, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 227, "mxfSMLPl6zFr");
    izdelaj(nizi, 228, "o5e0v0DXP69uE2kFrgU2wIC_4_UZhsIwDawsdneN2");
    izdelaj(nizi, 229, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 230, "o5e0v0DXP69uE2kFrgU2wIC_4_UZhsIwDawsdneN2");
    izdelaj(nizi, 231, "g9FkkcpUz3cEFO_mIVaNx9qU8ul_H0fJQ2tKX");
    izdelaj(nizi, 232, "6ovIA1iawfRBIhzIF6JCUIKqX5AYusnldbe1d9Zp4_0");
    izdelaj(nizi, 233, "2ERuMdhrfMCpDOri");
    izdelaj(nizi, 234, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 235, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 236, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 237, "7yhsH6_3p7vLKYbLI9");
    izdelaj(nizi, 238, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 239, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 240, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 241, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 242, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 243, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 244, "hGB_sjUpBc2rtEKdHXb_W8HBtnbW2560SEJiMqgNTCnL06imf9l9BvznIn8OMDaJ9RTY1dUQjmQTvrBmzVUrLGiYAzE5");
    izdelaj(nizi, 245, "MZxkZKtgtWjlZGrQhIXwHIt1uZvumj95JP8BQfYPsaxl0eSFUehUCtpfOL5");
    izdelaj(nizi, 246, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 247, "WFPs3yuK9OuL4HHf");
    izdelaj(nizi, 248, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 249, "Fv3bQCHywE9lkWueJQG7lHV482nlT2QM9uJ1Xz_7XKubrT2FCzjDxnFX4YMbUB0llKcDMDSPJcPWPcTTVcn");
    izdelaj(nizi, 250, "GnnmTqkMZdmu4rkiWl27o7to3KJieyoTwl2hiLsIlo916z57EgrHbKw_A_22qxK_fuRi2u9DpzgYPwNZS5LjKr5w5rxmhhT7O");
    izdelaj(nizi, 251, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 252, "MpFBJZ5aFs2o2kZprl2vziH4kb9yj7GAVcaQsUlsn9ikF4yFI04pYMO0j4VbO6PI7RmZyzOEB0eTMfC");
    izdelaj(nizi, 253, "rErra2T7Dztag2vV2XJQ12840Xjl50DN8xZ");
    izdelaj(nizi, 254, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 255, "HV8lMdtV3xj4DMHZOYvPYnsL3x_k4s_B4Xatzq12RmXJXzXShQ7FaYow1hBQtblucU5wPDg_aJi0k4jfd3ff62KcKE1MNvjeI3JX");
    izdelaj(nizi, 256, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 257, "j3v4VnS7SJtRw0pfF8y3TVYSUfCtqraCfZVT5a1cjtibge37ai2WxAnqI4sL78nThiU3");
    izdelaj(nizi, 258, "CAx3HXOfCouBuOj2nJpNKUE9_gozj3keh0TbEtIxA9AwXCOCds73ri1jQFyYGQ2uCvLvDZDD1suthnWNGqZKLqrlEi");
    izdelaj(nizi, 259, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 260, "F8IBegvPLlHve7HRpvmkAu9YkXBTsusUV7eE6uCirshxVKM4AvJIJ1");
    izdelaj(nizi, 261, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 262, "HV8lMdtV3xj4DMHZOYvPYnsL3x_k4s_B4Xatzq12RmXJXzXShQ7FaYow1hBQtblucU5wPDg_aJi0k4jfd3ff62KcKE1MNvjeI3JX");
    izdelaj(nizi, 263, "XQRAv3YSrMH0t_XARt3r4okS8vArcMnRv21nEAk9TmiGk1a60v6L");
    izdelaj(nizi, 264, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 265, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 266, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");
    izdelaj(nizi, 267, "OQkRdxguCowJy2no6iS6lbfeoRnMe1G5thRpgX91u85QSIp");
    izdelaj(nizi, 268, "NMw6feyJ5Vj4VufTa3eMRDzO9bbMVJlqbKyp9bHZABeuGf9");
    izdelaj(nizi, 269, "X8bmQQ3coOj1CuMk");
    izdelaj(nizi, 270, "GnnmTqkMZdmu4rkiWl27o7to3KJieyoTwl2hiLsIlo916z57EgrHbKw_A_22qxK_fuRi2u9DpzgYPwNZS5LjKr5w5rxmhhT7O");
    izdelaj(nizi, 271, "7nOkic5bZN6Zzsjju9AXgTNRdVPAPLxxHMFTD8Zwjw2wKbOxd");
    izdelaj(nizi, 272, "9Zwuiga5RE3TG2DE8oISjsIyBl30wnrTNOx6JXT_BS3GNLuOKsdTCI_");

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
