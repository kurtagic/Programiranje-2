
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
    int n = 233;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "GmHs4xYtCVQNKMbd8hFoxWBUNLf2RXZUbmgC2ypaQUQejyYgCAtM6c3LfqEzw4Mp56J1ygGil2EIwWzLqFB90VMqxECCGt");
    izdelaj(nizi, 1, "l2OIT1hP5x3vHEponSA1uOyccWVVS6VgBp9KOcaJsGbpyUvs9eTxYG57CRq9ZOan6SWPShlH");
    izdelaj(nizi, 2, "l2OIT1hP5x3vHEponSA1uOyccWVVS6VgBp9KOcaJsGbpyUvs9eTxYG57CRq9ZOan6SWPShlH");
    izdelaj(nizi, 3, "iytm8qYFU8ZbmZgQO_7xVIohQR8sNg2K");
    izdelaj(nizi, 4, "LkSUNQwmKKwEyHYshl266RnNr8IgID5MSHVH7TjF76cMae");
    izdelaj(nizi, 5, "RBBi4m1fQoZ_kwwgGvmj0kKC5ktJF3Gc");
    izdelaj(nizi, 6, "XyLcysl5WJqesQgFUYysTTt3SKdKLvQ3cAstZ1976V1xREpxP");
    izdelaj(nizi, 7, "tRw");
    izdelaj(nizi, 8, "2TymheosiBzWZQ5ixy2lUbBcnP5k4EBlMIWMpdG3H0_3oetA3TxQByaKS6X5EnJgWJ_zC");
    izdelaj(nizi, 9, "5gv5b4SvnngQENpr24");
    izdelaj(nizi, 10, "vxK7TwTbNaWQQYfmEWUmmm4c3Dhk9wdfa2");
    izdelaj(nizi, 11, "DMXoIGTU0Bksxz_l1rgOYRWG1Mcql69V56Bblaf0luXQ");
    izdelaj(nizi, 12, "Z65fEJZ_qS8czykxFy_LDiUyeIoIsT1ZuPOwZ5dRx5k_zeP7Yc4WgeWAV2BtmpyPSU4UyPfcQp8eMeQRIGzns");
    izdelaj(nizi, 13, "VT");
    izdelaj(nizi, 14, "uAMb045AwhL8G1");
    izdelaj(nizi, 15, "y9JzDUfO5xcLePksAP3x29492qwz4qK7qi6g8ZL0U5Q");
    izdelaj(nizi, 16, "5gv5b4SvnngQENpr24");
    izdelaj(nizi, 17, "NFHjntknj75tUpM9");
    izdelaj(nizi, 18, "bhMLktAbdg_60y");
    izdelaj(nizi, 19, "mPsZVTm_KycE7OXalRsx_Q1XmSFqvF3MXwEZTdQVHc5LUG");
    izdelaj(nizi, 20, "KbIdyAJIAjb7");
    izdelaj(nizi, 21, "vWA0lupIlJGSdKoibNOOifoNJ47hlJcm_8T0N2ELwMnKp24JA8");
    izdelaj(nizi, 22, "y9JzDUfO5xcLePksAP3x29492qwz4qK7qi6g8ZL0U5Q");
    izdelaj(nizi, 23, "sWVG6Ug8x1hZ_AtvDJuKNS8a2niLtlkJuV6ok94f2312Gtkv36AydsjHY3RWn4YT_7r4N0bgr6dATX5c07THR0gP5h5L");
    izdelaj(nizi, 24, "MSWUs0VPcyinH89H63dbqu3SorrGl5vaLReBgPkyyb5dRidHc_xV6hfHTa6bkDOqa8an7TVEVAjkC1sQWP");
    izdelaj(nizi, 25, "3qbzR21IyQL4g");
    izdelaj(nizi, 26, "vWA0lupIlJGSdKoibNOOifoNJ47hlJcm_8T0N2ELwMnKp24JA8");
    izdelaj(nizi, 27, "rAV6QjanZzPnftXOB4mF8XNL0UYRH8c8OFydsLEOm8Dpvl3k9m4Kv8QK7mBllHrMnKL7qawdNpVGL4W6RjXjoUkPI_UMEcSZgals");
    izdelaj(nizi, 28, "qoxUiNrohkkyy4G0Ztk3KQITjS2L8b0J1rI2J5nUauAtznJ9Q6dktuN4uOps4O");
    izdelaj(nizi, 29, "xTsj6WAUZ5OAIbMMUNu4kXsddU8ywLNgMbb4jbJUogOFvqcsu73PFD3Kyw1xKRrVJvZRX14OrYWBj");
    izdelaj(nizi, 30, "9ljFDegh0UyHN7EqoP_uveeQ6gO9wqDu9a2LYRt4AV6hgnQijkEohesuQbEE");
    izdelaj(nizi, 31, "MoxAQYCj1r0wY_8_y8BxcPKdQG__xnRjXeueTypsRdlIcfr0uthdBdS8RpWBZ9AMRCgr98flawE");
    izdelaj(nizi, 32, "SuFC1L5gCvdYuP43aCcN0o5fTM1gz1SoRYYTBh0baRQFMGNjS4Xr7H2uHvP0oeHq3cUbSkkJaps");
    izdelaj(nizi, 33, "fto__WRJ0v2Zs0xpbd7skLMuxHZEjxbJJjR5Idekth2ojdZmHVSWCBFZFlKi8f2OWcQHWabwfb6kNlUzSASAx7D8");
    izdelaj(nizi, 34, "vs7GXhNz2UlV6w56AQ4fCk");
    izdelaj(nizi, 35, "y9JzDUfO5xcLePksAP3x29492qwz4qK7qi6g8ZL0U5Q");
    izdelaj(nizi, 36, "Vg0tgJkFm");
    izdelaj(nizi, 37, "6CVZq4BLijhgrX_UT3C8yFwjkI50ammKfjdKphldwjOyFrF56aC");
    izdelaj(nizi, 38, "clAODrhwZySTM0SnbpbYv");
    izdelaj(nizi, 39, "_MO3rStfYFs103Ebr84tmUyZxB");
    izdelaj(nizi, 40, "FxgyC_YDffxA51tH_QY68UUfnsmEuL0Vdy4P1dHavlEWz6");
    izdelaj(nizi, 41, "l2OIT1hP5x3vHEponSA1uOyccWVVS6VgBp9KOcaJsGbpyUvs9eTxYG57CRq9ZOan6SWPShlH");
    izdelaj(nizi, 42, "4nogdXDzZRZsLQc5BPFQg1BX_2CiBE7uqDHY4EZLJv");
    izdelaj(nizi, 43, "038rXXRfn3YF5tOYKzoQwiUEDaNWTR2tywtazgBl8QJEYXOGjy3XD3LT2x");
    izdelaj(nizi, 44, "LC");
    izdelaj(nizi, 45, "li2C6AtNgAZhbQTM");
    izdelaj(nizi, 46, "6OxAevhzzIGG4aQ8RYJASSV5B23w5cO1hQzDvxr5ZTPSyh7qK");
    izdelaj(nizi, 47, "UNgxOrZ_Nh3eiO7L");
    izdelaj(nizi, 48, "7Blc66GOw4w0rnX6slynsMVxG5hA602QeQwGlQDY0elSFTW6UxAG1rahr0GZCFRntE2KA3mIVzKJZrxKjMBaXYVRGN");
    izdelaj(nizi, 49, "sZ7QDixGPLE1lWGw2i");
    izdelaj(nizi, 50, "GoMEOi");
    izdelaj(nizi, 51, "SejcsO8KkFVomeBZpsIqDaUV76DEkb0RslQWIaMgG3mugfWsV2U86j0AjjgcHYfORWvfCNWUhYnTiB0yDuNmbNYbQ");
    izdelaj(nizi, 52, "5rJKAB0jtNJBIwmkCYgcbYpkYNM17QTUusdXWz16nPkMxIoB7TwYEl2N1h6qoRkLzXxLgkx4trwxL3Orakg7i");
    izdelaj(nizi, 53, "SQWNc3PzGEt2LNJ8szh9SlrJKLqjOs089pNQms0zDCaT6nSfRZHr2AMYJzPOhqfBCznNL32Xxr");
    izdelaj(nizi, 54, "my8yneJinGk45RaFa3oR5NviycJQIzDqOR541RCnESM1NeH7fS8qSnpZKXEW5t7N5QZlyInb");
    izdelaj(nizi, 55, "yVdvMZ5C4PglEtfGje1lT1db");
    izdelaj(nizi, 56, "Dd");
    izdelaj(nizi, 57, "BgdVg0h2dvhbyJQwpb7P49ATdB5gk9KM_l8wJcrUFiv2ZWX0pFWRL0OQWoTtBcKdFS0SI8TcmmCdGe59Cir");
    izdelaj(nizi, 58, "Wrqeg_cKjyt970Bxws0xtD8743cqjAtbUIKOo4wk9TI1A");
    izdelaj(nizi, 59, "kJxWx9ipAsizCCw_GtXAyLvM8_k0XfGhUqhxvgxLSnaUZxLL5wDAaSWd6U4g7jt2SrrS");
    izdelaj(nizi, 60, "ueYJ2M9rPgVr8JgfqssPcb_Akp5y2aDr9QzK7BV2xjZsZT7TRTaKsqxvLrkjG8Raug_w2LIWWxsbwB8y");
    izdelaj(nizi, 61, "my8yneJinGk45RaFa3oR5NviycJQIzDqOR541RCnESM1NeH7fS8qSnpZKXEW5t7N5QZlyInb");
    izdelaj(nizi, 62, "mPsZVTm_KycE7OXalRsx_Q1XmSFqvF3MXwEZTdQVHc5LUG");
    izdelaj(nizi, 63, "DbOrb9yXLtSS1wifBg9FbZiTuIE0MYb090HKmR9qtTh7vd");
    izdelaj(nizi, 64, "ml_jF");
    izdelaj(nizi, 65, "kCxKvL63EbOqtqvnXffWC7HGtA_obfa");
    izdelaj(nizi, 66, "c130OgBGGR2Ixj2T2BvAi_PLLRqz8cjmnemShUHKA_0tr1tfm19j3VpTx0Qm_ViJvqQdqYCeDyM5HaAf");
    izdelaj(nizi, 67, "cYJsGBjhkWXt13KMLMT28Qh");
    izdelaj(nizi, 68, "BQnTMxG0q7jYW_XMAPKED3zBr6tllcRnIr1ul9zaz0hKKl_8V2u8tGkceVWI58SkynU");
    izdelaj(nizi, 69, "9srOTiH2Xjr7qd2cgCORLY0PkiJj7KxRkNsyyL4asWBzRdWcgTiw8QDvLzvmeA45MdM0qFHVHD8BjP");
    izdelaj(nizi, 70, "FxgyC_YDffxA51tH_QY68UUfnsmEuL0Vdy4P1dHavlEWz6");
    izdelaj(nizi, 71, "Z65fEJZ_qS8czykxFy_LDiUyeIoIsT1ZuPOwZ5dRx5k_zeP7Yc4WgeWAV2BtmpyPSU4UyPfcQp8eMeQRIGzns");
    izdelaj(nizi, 72, "Oj5BKGhM69Go6hdMjit6Tqo7Xe2TKtSQsj_zBqTGmSlfFl_TpPjX5hhuCB");
    izdelaj(nizi, 73, "4nogdXDzZRZsLQc5BPFQg1BX_2CiBE7uqDHY4EZLJv");
    izdelaj(nizi, 74, "cKqV6CAdKis");
    izdelaj(nizi, 75, "zwrgsYmdsBenq6GTJp_otQmkwjIUxLCJYAOaTFFDSbN440p0WrG3PInG8oe");
    izdelaj(nizi, 76, "sZ7QDixGPLE1lWGw2i");
    izdelaj(nizi, 77, "yBiNGPVNb0n_NwFkuFzw7u2BW0pX0bs1wE2pb5SmBXit4fFJFldhZa3zXbzs5phzVmcInpgklX7fMXN3zqSNojioB");
    izdelaj(nizi, 78, "IXOSlQMTghroPuYMHEsZR");
    izdelaj(nizi, 79, "t7jLPk0L6vFtpliwbtGMvZZ5OwsT4lfHFxO0sFFRt5clwdKvY6LZRdPQ63Fnqa4D4r6");
    izdelaj(nizi, 80, "ljk6jY7VgndZaKXhW_djxvFYwdugBq9QdUbtDb06sa2F4TGlR8u4QKQUPj3NLukcrt");
    izdelaj(nizi, 81, "ITo53ZkHnVZRbl4oze04agHqNxORK0ithNZs1UbyiTgOFPhXXKrY_ngsbqVSCwTmY");
    izdelaj(nizi, 82, "Z8gBLaNivOvsXPvKPV9JIAG6zujVLoNQEpNGmJChngfFoOHyJg4IZ3TwL6Of2_im6YAKgcS");
    izdelaj(nizi, 83, "t0coGKWEpZAM1OpQGMIWw72KwihcOjHtk8M9GaUPMCpjNQCDvMYW3HIEZa72");
    izdelaj(nizi, 84, "FAV9fMaPgnwtr51ImgbBupXZHRieXHm71LRWMeYgJlC3yuUsgo6qgv7N3oqNSHzaGpxiiOi0OmEDpRZgu8w8");
    izdelaj(nizi, 85, "OJidYLPE79qYVHvdZg9aa_kqilD3CPshXEh9z79pGDjjPd_Lp1t961RhZj87AOerZ");
    izdelaj(nizi, 86, "KbIdyAJIAjb7");
    izdelaj(nizi, 87, "XrDQqgc0cNpRTJnaKzpRR");
    izdelaj(nizi, 88, "u");
    izdelaj(nizi, 89, "FG9IiBs6S8Z39cUn6T9ZoPm5RXiqnIAJGSB");
    izdelaj(nizi, 90, "4SZu11qYhitj7KfdzPJGIzOT2KYsGO3UM6Fvl1");
    izdelaj(nizi, 91, "wdb67noomhzjcEsItf6k4mgCs_sFOokzLCoLkJwoIZExJiOwe0cMeF");
    izdelaj(nizi, 92, "KlOWCXCT9UWLU03ltGOYrG14VS1m");
    izdelaj(nizi, 93, "jbKXhlzD7I2pgYqKGkrf2oZx2h2CtmV_GJS964h1N3an57Qh2QIYDncZZxkdLO3gNrjRpJ_9wRC2fu9TB1mp5ew83t8oHj2itfrD");
    izdelaj(nizi, 94, "kQrQjSIZessM2f");
    izdelaj(nizi, 95, "o0l9aAIYioynVMsDuC98mDt28550E9LYw2ftEmHfC8iOsr3cpJCb");
    izdelaj(nizi, 96, "lw9hwNTKC_1KkZmKOEaVDnA3gugwRfrsmlDwUaPb2XyD98tQ59uECh3kkwyA3KY5GYjTgMa206sXmljeNLlJERYM");
    izdelaj(nizi, 97, "kuBacWXKr2tdzBXNmL_7bYXMK9UvnPyeqRLfX_FzQt");
    izdelaj(nizi, 98, "K2au_4HpqN4Y");
    izdelaj(nizi, 99, "ueYJ2M9rPgVr8JgfqssPcb_Akp5y2aDr9QzK7BV2xjZsZT7TRTaKsqxvLrkjG8Raug_w2LIWWxsbwB8y");
    izdelaj(nizi, 100, "tExGx7TNO4k0Kkjvonn2DfIVC");
    izdelaj(nizi, 101, "aJVBzkjxB6IcWwqRu4F6CSG2TUA_AB6eDgXce95zCoduZsHKHGu6OpxCf4pzUe1");
    izdelaj(nizi, 102, "69L4Goiq1F1Kzych0Abgk9ItGPc0RwWKKcDAIN1");
    izdelaj(nizi, 103, "n1wUhd6VVvcU29EUYL");
    izdelaj(nizi, 104, "FY0NR6WwsnTC4RyRFWMNOlR6Aq8QN9g3kDzlH7qxHUcg0B32RN9fVptBi1IY5oBTu1xJdnzwlwEWG4");
    izdelaj(nizi, 105, "wdPtjXILLX3hA");
    izdelaj(nizi, 106, "udrVQtfUDiD6dtCKRhbrlD7UJtPke6pdk7Bs8peCPI8DZSi_RXIKWGOwbpHBy2nUqPH_ih1");
    izdelaj(nizi, 107, "1pC9U9t3HnI7cv_dCnBV4aWCJlEZcWrcws2gS8lnI2qAKMUvK7EBoDM99d3aIYcd8UCJ4nz1lNkeOnUMj1ToMzIJUN");
    izdelaj(nizi, 108, "EBsoSU9ABOYxRu8rxIkVR1I_EbV4m8FS5nMJRTzd_wA5MflQzyizGPX0YtOVs8vs1Hx1AS4vkclZ7eRMJAmoLkv2AD1sQu34PpX1");
    izdelaj(nizi, 109, "5iIXm4ITo4ZMlygexbXY1JAwSO1N_4Bs");
    izdelaj(nizi, 110, "rXRqpHiOoyn_ZmpLLwLdyfr8SU2g6");
    izdelaj(nizi, 111, "g3L2PmV15XOT_T6");
    izdelaj(nizi, 112, "Cp83gbnF2kF3f");
    izdelaj(nizi, 113, "KPdWaghpjdhQvLggAT99_IosTLHT0eEI3P7i7HZGZNu5");
    izdelaj(nizi, 114, "I6n37mFBD2tffFWIyqv1mJ");
    izdelaj(nizi, 115, "ya24KWa5nr1Ot14eVzM1lYvu5nVt");
    izdelaj(nizi, 116, "_Z3sQbowTZhVZDC2dPrxfRSqASrxKpPW0ZP02kx4Z0SZ2nIC2JUzJNZc7C4");
    izdelaj(nizi, 117, "oxiKWo8x2ZoznwtBmQYD2TwJz8WXFFr6d5rb6k9kvlSQi");
    izdelaj(nizi, 118, "80mmVGosvmw1ZKwAzaQ3z7K2Zd_KEN");
    izdelaj(nizi, 119, "SOOwGGct08D9jSx9yrQKXnqjLm2mZhuwdzjkVH2qdRUS6twv8FAfTwVstLDFNcsede");
    izdelaj(nizi, 120, "uBFfr_Qnk3JtlzXDtMECKpSUgUgPcZxU1rhHyacfV5ujsNwdVKaEbAdIW_6lRfJu2qoEgQX25590fsmbRkZCvI39eyPRg");
    izdelaj(nizi, 121, "URn7bq0AIsY_8I");
    izdelaj(nizi, 122, "1WnXq6rzJoeJdksnRZ_bweewW1ToWlGN1SpMvxyQP8XjNgT1");
    izdelaj(nizi, 123, "eKqcLz2ETZjHciztFa3hYfLoFldINMDEGRkClS_QGtwIw2ah");
    izdelaj(nizi, 124, "DaWufIjV7gF9jFr0cCC4hgT3J59UaCwxCfNmxVewFHk3opfysOgPqUBefG2c5_Khcq_CHV2GMKJ");
    izdelaj(nizi, 125, "lluV9zy6t3ig4WA1oSEOSnHFOJVUoUw4lxNvdwYTipcKGG6ERAxMH7tiyGXK");
    izdelaj(nizi, 126, "K2au_4HpqN4Y");
    izdelaj(nizi, 127, "oi3fbPNPpQdh3NaqROoJJEaQrwEp47VvQa");
    izdelaj(nizi, 128, "UACX9WVuz7Bkdbk6brosH0Eyv7VnfAIbH53amYWO4YqdEvj75xPrP");
    izdelaj(nizi, 129, "S0PXcLaLPmzSaaTeF596bfir5N4cnf8PBcGSdnHgXxKrI1b23olgOGAd88VVnJJmw98EMZ2t9ZQe647EjlUb_p3");
    izdelaj(nizi, 130, "oxiKWo8x2ZoznwtBmQYD2TwJz8WXFFr6d5rb6k9kvlSQi");
    izdelaj(nizi, 131, "Szese5i16x4tMA9C9aGoJ");
    izdelaj(nizi, 132, "su");
    izdelaj(nizi, 133, "6ZUraA0WWhgJX7RvHHRspShG5g5aprCzdRY");
    izdelaj(nizi, 134, "Y2JEUJOP4h_CfaAYCO96e5zldNfMVHg4aa5_4TTmQ_bUmU68xk");
    izdelaj(nizi, 135, "MmgSL3");
    izdelaj(nizi, 136, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 137, "1EAyNUlPc5TyoZB2yu1nN1QwkmQFEfngHF7HVXtL9SoY_");
    izdelaj(nizi, 138, "tNYAz_fHNFS0sldhgrkxR0kgJGI9yKldu1Zbos0bMk3lrnKVSFffBt9iLQVjuARzokXpqqyaYinDrgMgmUmJ");
    izdelaj(nizi, 139, "yeyNT5BUXFxrDIq1Jingm2_IH4B36r0k9PWD");
    izdelaj(nizi, 140, "ePlBjPr2PGh1FjAEsDRTA4kqml");
    izdelaj(nizi, 141, "doDv5r0MnL32eyS");
    izdelaj(nizi, 142, "SUAuLwGINL4vQ4XDetHLogTpUjHqmkLs0Hu3MNG");
    izdelaj(nizi, 143, "2xzYy1SKcds6jX6ZFpRmnu6Z5bkYGvue8zhu9XlCUMsisCj");
    izdelaj(nizi, 144, "qvKJp4oIP5ieegXCcQBkcB0cEo1WxafyLv_jc5TjsPLotwuV0jpUeC9f5lBlaK8N6zG_RQb0MDf314KF");
    izdelaj(nizi, 145, "yzE5P");
    izdelaj(nizi, 146, "ejqCu1BSvWjpLt5Dx7PrIx3cvkb8hCTnltfPgOPLzyibEgttWjOlI6gK");
    izdelaj(nizi, 147, "cLNSjjdO4tg_LQT14OT3M80zDyAE0uq3uX");
    izdelaj(nizi, 148, "WJ_FINaC5I2k8XODYBU1JDOi3hUNKKFGuRQ7CwdNrEPU7Yj5BKFvSjtv");
    izdelaj(nizi, 149, "8PnbU7oqjwcGXpcJryYodNxMAP52Q");
    izdelaj(nizi, 150, "fANv70IMqYSYHinpFfVC4sfByUKV2JQRqYTOxdYl397vMNuZiZS7NN9IEUVlCQOxNuIJ2PICORH9aHUpMrzF");
    izdelaj(nizi, 151, "uqbvrNUYn01HY6ZLnO_orKTQfzynzf82ejhIHNSMmAfs7oRHn5RCGMfOf5iZQoo9rvW4cd");
    izdelaj(nizi, 152, "cwxmDI4s9FpYuP1DaJ");
    izdelaj(nizi, 153, "5iIXm4ITo4ZMlygexbXY1JAwSO1N_4Bs");
    izdelaj(nizi, 154, "1NUmYYk");
    izdelaj(nizi, 155, "VPU_U4MakuojczG");
    izdelaj(nizi, 156, "rzlHI91qxCKzQ583_qRcG86");
    izdelaj(nizi, 157, "7x1kakAvTexhjzuNOiQ_DLkhoNCwZcpO");
    izdelaj(nizi, 158, "3K_2KN1Ickxt3MQk3DMbDOT2AUkSdo5nHVW6wihCxctusgXTRvFsidRar4JFvh");
    izdelaj(nizi, 159, "jZtKfqhaa_Hmmb6iQMy7SWp315gCQ");
    izdelaj(nizi, 160, "LWmZpycFLLGmSPZF");
    izdelaj(nizi, 161, "a6tHgXojNSBXQOOisjkJCYYEBx3CM1tZu");
    izdelaj(nizi, 162, "SZhmyQ");
    izdelaj(nizi, 163, "k5Fuk3xU0BFNa15tmUzfczX5YAVZwbVjhg9_Ae");
    izdelaj(nizi, 164, "8vqoB_jLq2dPJATnXOrXqr9Dze3_PqFhm7qdADEklmgOQedUhuE09lQbezZsFtBXR_xqt52ITfPTf");
    izdelaj(nizi, 165, "fvlTB452fUaPvZMUMj0xTaJUcXAaM0");
    izdelaj(nizi, 166, "lV_LMz3_R_HgdhdF5QC04CmnEWjdD4NReWtaJjShUOiSabw1Z2ytHvnTPQvKokOwOXAwN9n");
    izdelaj(nizi, 167, "Aa8w6cMFydLXtLlkQk8zFVg8DMLydkUdRMi6wsFQXcGZv3tRI3I6A3Ipit2WRO8iTGCQDAOHyOB");
    izdelaj(nizi, 168, "cITkzt");
    izdelaj(nizi, 169, "PGAopfoCJl5wcqwXp1GbKN6On0kNsDJED0nnw0fuwBdoUuFRJbEGmR80r6CCM17X");
    izdelaj(nizi, 170, "jqUsk");
    izdelaj(nizi, 171, "OhJnJ3eC16");
    izdelaj(nizi, 172, "qNScIx32ENESmtED25bkaOEHZhnVtAw2fbLkNMM0vpnt");
    izdelaj(nizi, 173, "Cp83gbnF2kF3f");
    izdelaj(nizi, 174, "4IEuk");
    izdelaj(nizi, 175, "Am2d70UdiwWGyxDIbCPmZ3wh83CLO62qMcO_sJcUjytn5mYnHi4CWY0");
    izdelaj(nizi, 176, "kCxKvL63EbOqtqvnXffWC7HGtA_obfa");
    izdelaj(nizi, 177, "dejmZcDKJz212EAsm7aYtM5DTFVjyp_cXbRh6cO9D0G_KjQriJizlvmwEMK6Uu1NJuRKFoNTEg");
    izdelaj(nizi, 178, "5iIXm4ITo4ZMlygexbXY1JAwSO1N_4Bs");
    izdelaj(nizi, 179, "GPJHhzsx7HR");
    izdelaj(nizi, 180, "qvKJp4oIP5ieegXCcQBkcB0cEo1WxafyLv_jc5TjsPLotwuV0jpUeC9f5lBlaK8N6zG_RQb0MDf314KF");
    izdelaj(nizi, 181, "lBfRF3Jh3CNjAnFctxZxSy9oEAlr_B63Wx7ptEFEYw3JeTIaUPjEHXqhF6qyFoBVs8BHHIO1C7TPD_aLLOeA");
    izdelaj(nizi, 182, "wOBi09MOmYqH5gKYbp1Ya9cSq9spaVC98dcFZwzNEJd1YzQKLYSiI8JfPp8dBzhZ9ySSyI2LMw1VYKr9f267YmcHsh");
    izdelaj(nizi, 183, "DyJ7");
    izdelaj(nizi, 184, "bSDTAqBo1fwENu9xdG1Dj0Kw_7X4iTG0dd3oqJMQnd_ccUJPhTD5ZKUt3hQwL5g");
    izdelaj(nizi, 185, "HpFtjPQsA0Egi0ZSgF63ECS0RvniCTpGc_1m2rF5iipVcZGQ5Zjr89rIr2yTByw2fUE9ZdVD");
    izdelaj(nizi, 186, "UFVnbowX7buvuQtCi_Ox6m8YwX6LDndse6P4IWdPblURRnoW2OA");
    izdelaj(nizi, 187, "5YKgiHYyqOTTUkJwWW2lmIzRvoIhB4LA3g8_Keam7sId2Yx5wgj5");
    izdelaj(nizi, 188, "ibjxgggX");
    izdelaj(nizi, 189, "LEPaGKIjkrX7RvzLH_Qm1fMRbmKk_LsTfkrq4Mb6BSJ8haIyrbdxGh4J5_IN6laNuyqNAu1Jx9QR5ADXgg6QJo5");
    izdelaj(nizi, 190, "vUftUhmXgZ3a1m_RmNot5dOvKx_Ff9PhjWYkJwRKV_wQGFfRL");
    izdelaj(nizi, 191, "MsyJiBAdp5ngflcCZpL");
    izdelaj(nizi, 192, "mGaitDZ_G_PDLuAdl3EimI6f3VWpEXCAhJS4Qw_QNAfNy028AZx9RB5YSEv4jCGdtmI2s_QJB");
    izdelaj(nizi, 193, "bNdszVR8_bLGNU1vtw0mHvkZtWujAfcD2Y12AlxdyrPawK7ajO2_7XEuikAuYsGaV21xfesCQDzGd6vIq");
    izdelaj(nizi, 194, "yVFTGFykWGpGkw6qq84ydi8xzNzw0Hur_LBOlAEj2FO3Bj8DTb9neLnB7tvNN34e1HDya7st42_1721HR4");
    izdelaj(nizi, 195, "wMWcgiBS40WpU8Z8zG5SDYXmvYc8BW3z899XG6jXO4uPg2IEL1UWdBkxVloPGq_O0Weogro_tfd1");
    izdelaj(nizi, 196, "qHx4bMD");
    izdelaj(nizi, 197, "qtsZh9xq3pgTCzLCfp1oUBIueMbjfi87HN");
    izdelaj(nizi, 198, "UadaGd8n5vSAN");
    izdelaj(nizi, 199, "Q5s");
    izdelaj(nizi, 200, "DeAXukLdS_8eTW3HkqRhCInKMFg2Dg6Crue3idGAnnpOAxeiwDvuIOpXV7Z2GImcW7LnYQx3KlhI99G");
    izdelaj(nizi, 201, "lw9hwNTKC_1KkZmKOEaVDnA3gugwRfrsmlDwUaPb2XyD98tQ59uECh3kkwyA3KY5GYjTgMa206sXmljeNLlJERYM");
    izdelaj(nizi, 202, "zfP87YGG4bdoL4hcSRTKeo9EgdCb1msabM2M6f2KmrbvMlx");
    izdelaj(nizi, 203, "YuNUlzKAflfaVqf03iPdW9TSeO");
    izdelaj(nizi, 204, "xF4QEFsHOuwV3UNfOM");
    izdelaj(nizi, 205, "ER0xudC0AEAFVKfvAe70zK9bMiQiTjy2l_SAGcIVIPrmeAJgNixXKGnbu87hmXFrs8wHylyS3Fh3hWCmtwyMVv");
    izdelaj(nizi, 206, "L_Jm4YttkP6tCmdY0K7luBRSl7UmxWNFtDT_1TgSKsgTHqbpDUSVGkqA4pcg1XZcGU");
    izdelaj(nizi, 207, "2TVOxQnvlpZzw3FKCrjd_ub");
    izdelaj(nizi, 208, "Hc2NDF7rwk63Ri5UVrP1ewMaqgOR1wSVtnXWyfWD2");
    izdelaj(nizi, 209, "d1j9tIrkZC");
    izdelaj(nizi, 210, "KM3cmU6oNGi3hXIQ89SQLsBpSBZoNbHzRQ4lT7r6Yeg6R_Ouo62NK_8TlMQdR7Jt96OYEqYLCSdvGmg6DqiJJxT2DfyD");
    izdelaj(nizi, 211, "ftQ3erA_a5jADavXe40");
    izdelaj(nizi, 212, "V0i9KIhDVDLAf0Ici862eF9ex_dOPmkK7p32qKtBXZ_fXwxxk3NJf_Lz6EIgls");
    izdelaj(nizi, 213, "qv2PxdMd7SSifc9gH1PhjPA0tlVRrEfZPEFUI4hjvHdvudN2QR5pJTfBx0K0E_Sxi47yjNglQDOdnh8QGQplRAdfoHEzoGOm1");
    izdelaj(nizi, 214, "VXoqyV45S9YqkosFPnwPwBxVHeqPIXC_3n0h7SAhfCWhbxo9smrGnGw_cEhfXoe2eJyVHIH_1YFsVXihKKHLzA");
    izdelaj(nizi, 215, "UsaSTib0PJZNpcbp3rWW2rz1IeGjHFxDFIk");
    izdelaj(nizi, 216, "ThDbDNT8");
    izdelaj(nizi, 217, "3_lS8PsQ_BdZ_t2tzUFC8AjcbjEf2BIC8uc4bH5PHidFf5mNULs89vyu9JpuaW6y8o5");
    izdelaj(nizi, 218, "60RbIemX1LDuDyXGX6kCodXe2qwE6wtHDf9OGhfU8hEAWR2SByyZC9UYUrYsCr1BmKLEzkfidzNvw_9Y");
    izdelaj(nizi, 219, "BQnTMxG0q7jYW_XMAPKED3zBr6tllcRnIr1ul9zaz0hKKl_8V2u8tGkceVWI58SkynU");
    izdelaj(nizi, 220, "flIm51lmusYF_0hR5NwFdH0y_4GLnynH9_isowmxhRRxDNP0cWw7bstMPXW2LWMMArXoM64EuM3bjRfgg12xhiTRccO24");
    izdelaj(nizi, 221, "BX4NGIzI");
    izdelaj(nizi, 222, "4MiRbBvJiOWREaTUcaOQ3IhH5GHyjhLwRM_SvkXSqIwNvlDCOuUXvxpqImn");
    izdelaj(nizi, 223, "kMdjI356ejNK0PR");
    izdelaj(nizi, 224, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 225, "GR8DeL3Hu2JiV");
    izdelaj(nizi, 226, "FsorFX6Of16_3_8m4sDxgGM5NgBFei7B4khRY4nNA");
    izdelaj(nizi, 227, "TcIovbkiUcs0_xbf7d5OU");
    izdelaj(nizi, 228, "bC9h2EgRgoVG0_ffqLd8VZrgIecBa2G5G3clEPpASsWhOgOCAzP");
    izdelaj(nizi, 229, "Jeif7M0Ice8Eo6xcPWovUCoJYTJ4xWYUKamwi01VtvwhRPU4ouwne7n6TH7POT5dOq");
    izdelaj(nizi, 230, "E28ol8FhnfMFQemrWdhCJfONQNlc2B0l5NNJZAFm2TnNg8THTH4Q05lW8ZvGK4dIyuK5W47lGPzUGSCJWN");
    izdelaj(nizi, 231, "gOz6ZsO3G1jf_P5RIEsmFCTJm3Qvj03XDZ2MRn7bNs1KnczmR15i9q0RMMJnjcySRbBN1NJB");
    izdelaj(nizi, 232, "2Dk0DKChA1bZpQ1CB3yL190hgKFR2x0pP53trHAm25CXuuVy8R7jvGqqzqdpcesLj_Tba0MtavMWgH_Uw6dIwkc3r7rtPxt4I53");

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
