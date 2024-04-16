
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
    int n = 222;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "U86vPrEj1Qlav1E5iGacCEs1c6z4dTP0LuVKIOEV55KI8OhZOMSNHVXFH4zb_ZsJRiMJkk6nMrL_Ne6bTNo2");
    izdelaj(nizi, 1, "wxHcR17ZlmNylAuVfssO3LwKDyX9GP");
    izdelaj(nizi, 2, "e9vro7v_5j5YNEuywQJg_1e9LnwRu8kvTuhau6GXUmFx0pO");
    izdelaj(nizi, 3, "ChR2alNKf6o5G7n12S6DwgStyJeCKtATkVwkol4voFllE");
    izdelaj(nizi, 4, "uKCkiiz9pxDWqGg6fVkX2V2eAn1aWz2ES7bcmg9MJKMUTJzfMsiV7KJ30JFupFURyIQwk0qQ04tjkHYy29Ou3wiAXZdNLvlHL5");
    izdelaj(nizi, 5, "96mPIEkYMarb2ZU5cM0EeQt5WL7R3xOfnNW4lfenH9mBbu0zQP5yF");
    izdelaj(nizi, 6, "uKCkiiz9pxDWqGg6fVkX2V2eAn1aWz2ES7bcmg9MJKMUTJzfMsiV7KJ30JFupFURyIQwk0qQ04tjkHYy29Ou3wiAXZdNLvlHL5");
    izdelaj(nizi, 7, "96mPIEkYMarb2ZU5cM0EeQt5WL7R3xOfnNW4lfenH9mBbu0zQP5yF");
    izdelaj(nizi, 8, "bkd3pYO38hgop4iK6B2I1a6KZH395K0dmbJ8cgEAfIOkCZ4UlTIVuvVN");
    izdelaj(nizi, 9, "e9vro7v_5j5YNEuywQJg_1e9LnwRu8kvTuhau6GXUmFx0pO");
    izdelaj(nizi, 10, "i_TBq1YaRor1I7wiX2znFzQ0IjSzUnwGpbOpnDo_NB4q");
    izdelaj(nizi, 11, "3zI5Inw8fbFhFJtJw9kbxhJNiF8WIN3");
    izdelaj(nizi, 12, "bkd3pYO38hgop4iK6B2I1a6KZH395K0dmbJ8cgEAfIOkCZ4UlTIVuvVN");
    izdelaj(nizi, 13, "e9vro7v_5j5YNEuywQJg_1e9LnwRu8kvTuhau6GXUmFx0pO");
    izdelaj(nizi, 14, "d23dkEnBT3");
    izdelaj(nizi, 15, "e9vro7v_5j5YNEuywQJg_1e9LnwRu8kvTuhau6GXUmFx0pO");
    izdelaj(nizi, 16, "oJ9E");
    izdelaj(nizi, 17, "SHgsoTYatAOYkcctdwsA_0mu9fc2CEfnPX9yB2ekMVv");
    izdelaj(nizi, 18, "2ObcwA7");
    izdelaj(nizi, 19, "1WnXq6rzJoeJdksnRZ_bweewW1ToWlGN1SpMvxyQP8XjNgT1");
    izdelaj(nizi, 20, "CKZPFe0TzHs4tYp0McrQ6966RyzDtFadEzsoxoAQDn9JHRhteFAWFm0JNn_4vlTVkUVpLV0tcMsMz7FizPps");
    izdelaj(nizi, 21, "e9vro7v_5j5YNEuywQJg_1e9LnwRu8kvTuhau6GXUmFx0pO");
    izdelaj(nizi, 22, "e9vro7v_5j5YNEuywQJg_1e9LnwRu8kvTuhau6GXUmFx0pO");
    izdelaj(nizi, 23, "VKZNcSOEujZlbaj5LgwfhLF8sg45bo_FQF_VOXQ8XmK_2k3NUfIIAZ70pADO24ygcV9h");
    izdelaj(nizi, 24, "egNEKVNJHXgpjJugpCRbaKJP1");
    izdelaj(nizi, 25, "gx2NxhaQ87EFHNbH3oFFgf");
    izdelaj(nizi, 26, "2ObcwA7");
    izdelaj(nizi, 27, "SXyPuuz87ie0FzgfbcrSpaIQ4oTVW5Mx");
    izdelaj(nizi, 28, "30sxjKGpLtGE5cBIUMdXIfyFjh2G9RSkPfJctNtjyD40m4XAtOWueclu");
    izdelaj(nizi, 29, "m1A3o0alJptogyM70rWSqJQmD1a8rU8QdeAzJAwxI3ynb2PA39j0XPt4pnvwkgG7_QpdlK1wUp6y3PsMeHi8J7tMIFkeOwvO");
    izdelaj(nizi, 30, "W");
    izdelaj(nizi, 31, "U86vPrEj1Qlav1E5iGacCEs1c6z4dTP0LuVKIOEV55KI8OhZOMSNHVXFH4zb_ZsJRiMJkk6nMrL_Ne6bTNo2");
    izdelaj(nizi, 32, "WfD5NEYbFCNQbe3nMma6iwt3h");
    izdelaj(nizi, 33, "hl_uXO5rgpchA5CbwT9RnpfsrEGKtt1l2sM9v6fOmFOmg2V4k5BkA93flPVax9LBkuT_IF5JLSFWYoExvEGrJ7uzmCnO");
    izdelaj(nizi, 34, "9mpisPFnqgRtFpmMAFflV_");
    izdelaj(nizi, 35, "IDw6NyKfR3K_fMvWwpDWS1cxCdUMKz5Mpk57ByJlWZb5AneIvhzw8");
    izdelaj(nizi, 36, "wxHcR17ZlmNylAuVfssO3LwKDyX9GP");
    izdelaj(nizi, 37, "kfjc5muD1wOV3Ru3f27aM2MelNLHdYn8pQbcOfzeUVslSpnTfHq");
    izdelaj(nizi, 38, "2ObcwA7");
    izdelaj(nizi, 39, "U86vPrEj1Qlav1E5iGacCEs1c6z4dTP0LuVKIOEV55KI8OhZOMSNHVXFH4zb_ZsJRiMJkk6nMrL_Ne6bTNo2");
    izdelaj(nizi, 40, "wxHcR17ZlmNylAuVfssO3LwKDyX9GP");
    izdelaj(nizi, 41, "lf73Is6OHMfv7Xkj4K3JMMgqT9U2");
    izdelaj(nizi, 42, "QYZGzuaORQufHWav7rVRPQTY4xYZrsKy9j_LxIsBPtN5UW4ozsp2bUyfp6pk8ECHUQsl3O");
    izdelaj(nizi, 43, "mgaKNTdeaZAqbJu3k3s5D4yAbpujymjdX2JIujCOOy7jG2Ne_LNdwS95prYJt8gIP6IF9Y9TuXC42CoBhZdZsgw");
    izdelaj(nizi, 44, "T_uedm6fENzR_9RfAN5SjMhjmuRsWvec1LQhI5nUkQGPnqxyZmHC_YYNz1mIz1o_VvxR_eOxBhzwpo1dsONtuVyK");
    izdelaj(nizi, 45, "e9vro7v_5j5YNEuywQJg_1e9LnwRu8kvTuhau6GXUmFx0pO");
    izdelaj(nizi, 46, "uRwZhUei6h8uckEvHljTchIYn27wnlDna0dr0s7xifPzHE3WJZTNqv8plmNMhWQs9yOE0_VN0HI4uHX7");
    izdelaj(nizi, 47, "Lz8qm8Vn8vIKkKXKEgJu2NyKPA2Zvt0v8uJgJEYdp5NKB1DlR1LrTnw17Fsd14ofqw08WPlRIsosEYIMr3SILlpZj7ZDL1PtrG");
    izdelaj(nizi, 48, "E7w0J4F");
    izdelaj(nizi, 49, "CKZPFe0TzHs4tYp0McrQ6966RyzDtFadEzsoxoAQDn9JHRhteFAWFm0JNn_4vlTVkUVpLV0tcMsMz7FizPps");
    izdelaj(nizi, 50, "lf73Is6OHMfv7Xkj4K3JMMgqT9U2");
    izdelaj(nizi, 51, "wxHcR17ZlmNylAuVfssO3LwKDyX9GP");
    izdelaj(nizi, 52, "aT2BeoiidCyV1WldGsI66m_oF5267yxUZu1q3l0dQuKAVAl0Rvo0PZ8o1vPf1HMg0C3HnL");
    izdelaj(nizi, 53, "CKZPFe0TzHs4tYp0McrQ6966RyzDtFadEzsoxoAQDn9JHRhteFAWFm0JNn_4vlTVkUVpLV0tcMsMz7FizPps");
    izdelaj(nizi, 54, "1WnXq6rzJoeJdksnRZ_bweewW1ToWlGN1SpMvxyQP8XjNgT1");
    izdelaj(nizi, 55, "bkd3pYO38hgop4iK6B2I1a6KZH395K0dmbJ8cgEAfIOkCZ4UlTIVuvVN");
    izdelaj(nizi, 56, "dMBxyK_1xqDwLbgwp0DVLVvnd_yDHoBoKSZhcG9");
    izdelaj(nizi, 57, "hl_uXO5rgpchA5CbwT9RnpfsrEGKtt1l2sM9v6fOmFOmg2V4k5BkA93flPVax9LBkuT_IF5JLSFWYoExvEGrJ7uzmCnO");
    izdelaj(nizi, 58, "keoXeyx55zTmJdmJuI24lVfQoTrR1JByA68fCNpk8JHPc1THVAb31FHbsRFvUmOHlVsx5Y");
    izdelaj(nizi, 59, "30sxjKGpLtGE5cBIUMdXIfyFjh2G9RSkPfJctNtjyD40m4XAtOWueclu");
    izdelaj(nizi, 60, "EzuDTAG2DM");
    izdelaj(nizi, 61, "DZHAseiVHF8kAshTXnfCAZ2rYbHni4ESLEOVA0HLJ_AIWWv1xhBySsKGWR");
    izdelaj(nizi, 62, "uRwZhUei6h8uckEvHljTchIYn27wnlDna0dr0s7xifPzHE3WJZTNqv8plmNMhWQs9yOE0_VN0HI4uHX7");
    izdelaj(nizi, 63, "Jq6Ze");
    izdelaj(nizi, 64, "QknftgVp2e0");
    izdelaj(nizi, 65, "Jq6Ze");
    izdelaj(nizi, 66, "CKZPFe0TzHs4tYp0McrQ6966RyzDtFadEzsoxoAQDn9JHRhteFAWFm0JNn_4vlTVkUVpLV0tcMsMz7FizPps");
    izdelaj(nizi, 67, "1WnXq6rzJoeJdksnRZ_bweewW1ToWlGN1SpMvxyQP8XjNgT1");
    izdelaj(nizi, 68, "U6dCd3ron9AiC96mKBjxlfoF9vBwU68ZFw5xRBym5gej_Xzp57HtXGlBA75Liq_PWVExRciPyMAkbWUlWL");
    izdelaj(nizi, 69, "AtCcfVvPFUxCx4sBsUqk1QoubAPRHbZncpDl1IeWMVyz0rriG0Aiskkv9SGUHlqOXOqOxZ");
    izdelaj(nizi, 70, "wP12fqyHLctQ7pzRfcNRyQ3AseOQEXbZBRIKOWUVZZvZZ3wGGW5gu5pcwbW0q3y");
    izdelaj(nizi, 71, "eTcItOqBet3v9gQhkabFmL_6uEixxyaOxHBzkPlAMJdoRSv_0V00L");
    izdelaj(nizi, 72, "Nl_kEWvbOve7_hnniZfArNUeflVLr2BlKXq9KglLvZnBmrv1S8yUKjyws8lvHbbL_dfe6F");
    izdelaj(nizi, 73, "DIaP4rOJIRAtknCkcGy5qz61dHucBmd27cs6froJO2zCK5F4_iN5bCDIude");
    izdelaj(nizi, 74, "W");
    izdelaj(nizi, 75, "rO2wplrrfz");
    izdelaj(nizi, 76, "Lz8qm8Vn8vIKkKXKEgJu2NyKPA2Zvt0v8uJgJEYdp5NKB1DlR1LrTnw17Fsd14ofqw08WPlRIsosEYIMr3SILlpZj7ZDL1PtrG");
    izdelaj(nizi, 77, "uyNW1AvKtF0AWAPoQeRkK7v5q5vLrnp1i");
    izdelaj(nizi, 78, "cEiYAo8EmRN8kmYFcjxfpcCGl1_XZoGYIR2PHIivD9DAgBNM8dcFwdRYG");
    izdelaj(nizi, 79, "W");
    izdelaj(nizi, 80, "zmT4MBjr4T5DjHfk39kAJLMPbj4PPBH79elDRvBAW");
    izdelaj(nizi, 81, "WfD5NEYbFCNQbe3nMma6iwt3h");
    izdelaj(nizi, 82, "CKZPFe0TzHs4tYp0McrQ6966RyzDtFadEzsoxoAQDn9JHRhteFAWFm0JNn_4vlTVkUVpLV0tcMsMz7FizPps");
    izdelaj(nizi, 83, "dMBxyK_1xqDwLbgwp0DVLVvnd_yDHoBoKSZhcG9");
    izdelaj(nizi, 84, "RtwhqQkCghvEvg");
    izdelaj(nizi, 85, "XzGmvgEZtkXtOEtqsIx2SDEUeqbG");
    izdelaj(nizi, 86, "tNYAz_fHNFS0sldhgrkxR0kgJGI9yKldu1Zbos0bMk3lrnKVSFffBt9iLQVjuARzokXpqqyaYinDrgMgmUmJ");
    izdelaj(nizi, 87, "EeWrUKkdwAZ1ZJeTZDP8N5Hy9oACosWDreicHT8i5icGU2m9q");
    izdelaj(nizi, 88, "EeWrUKkdwAZ1ZJeTZDP8N5Hy9oACosWDreicHT8i5icGU2m9q");
    izdelaj(nizi, 89, "vHzOMaEBKzjWNKCjADba7d1XC382EZPPs19WsT1LD8CC");
    izdelaj(nizi, 90, "WTWhh1kfR");
    izdelaj(nizi, 91, "SXyPuuz87ie0FzgfbcrSpaIQ4oTVW5Mx");
    izdelaj(nizi, 92, "AvJ56auEtovYpCXR6URnanLszA07P3iqTnL");
    izdelaj(nizi, 93, "bPDfjkN1TTvIS49FFcruuxqwo2FxKnWKLFQEE4msBdMpKGWT");
    izdelaj(nizi, 94, "dMBxyK_1xqDwLbgwp0DVLVvnd_yDHoBoKSZhcG9");
    izdelaj(nizi, 95, "2s1feqxzUsWqo5SKIyNUDJX5VKxRSVWZ0DjQ9al74BADVUolH9VLqZsmhkDc8oeMJtL6zlbH_o8chGDiLh6lJfjHhAMQUD");
    izdelaj(nizi, 96, "U86vPrEj1Qlav1E5iGacCEs1c6z4dTP0LuVKIOEV55KI8OhZOMSNHVXFH4zb_ZsJRiMJkk6nMrL_Ne6bTNo2");
    izdelaj(nizi, 97, "7DBnZzb48Fi22jb73rx6dcMT1vRL");
    izdelaj(nizi, 98, "vHzOMaEBKzjWNKCjADba7d1XC382EZPPs19WsT1LD8CC");
    izdelaj(nizi, 99, "dMBxyK_1xqDwLbgwp0DVLVvnd_yDHoBoKSZhcG9");
    izdelaj(nizi, 100, "2ObcwA7");
    izdelaj(nizi, 101, "B1Zmc2HALz61N3ZW06Q_SpebY5xyfqaic1ztNsk1pEbEKPh2hh");
    izdelaj(nizi, 102, "zUYdITxAkZx9POOUi8hdYhBQ01gflb");
    izdelaj(nizi, 103, "HyDSNPTuqTdUcuRmYEkMjpS7tv");
    izdelaj(nizi, 104, "CKZPFe0TzHs4tYp0McrQ6966RyzDtFadEzsoxoAQDn9JHRhteFAWFm0JNn_4vlTVkUVpLV0tcMsMz7FizPps");
    izdelaj(nizi, 105, "wxHcR17ZlmNylAuVfssO3LwKDyX9GP");
    izdelaj(nizi, 106, "HcUyi3j9zgAOXqrTlA56XryVTtCZKEGJPKvHyNbxvWQjAa1h7AQRJwTwBxXQdp");
    izdelaj(nizi, 107, "QR_HnnDjnD7IDusCqOp4OnASiWGYkda6_s");
    izdelaj(nizi, 108, "NTUq51vLil2gQUcgrkgcdt5H5TGUNch3PsY4lTRFGOvqA1UKw_OYgTBXnmi");
    izdelaj(nizi, 109, "rEs");
    izdelaj(nizi, 110, "lf73Is6OHMfv7Xkj4K3JMMgqT9U2");
    izdelaj(nizi, 111, "gx2NxhaQ87EFHNbH3oFFgf");
    izdelaj(nizi, 112, "3q40ztB849TDh1PG00VL5p9pCIQoRMRSLA2LotiaP9MlzYCE5DMm89AazXz0ofrZSGWr");
    izdelaj(nizi, 113, "2ObcwA7");
    izdelaj(nizi, 114, "oJzn2IOjwh2f4CpAnIxDBkDTYtDWV637W9QhLUoYSetG6E_EHqcNbPnCs");
    izdelaj(nizi, 115, "SXyPuuz87ie0FzgfbcrSpaIQ4oTVW5Mx");
    izdelaj(nizi, 116, "J7k_CXGQY8rA4orGDexAE7lldOfVBK4ES7Nlo8Y3c0NXaDQa3vLk3rYqiR8gnmA0lP5tYAyVcojwsPfz");
    izdelaj(nizi, 117, "T_uedm6fENzR_9RfAN5SjMhjmuRsWvec1LQhI5nUkQGPnqxyZmHC_YYNz1mIz1o_VvxR_eOxBhzwpo1dsONtuVyK");
    izdelaj(nizi, 118, "r32djhWemW287jipaztNZs3Ewpp0RwajsG1Jw5SgrvZ9ihgKOq7e2KT2ttQqmQDAKL36vMPC_CBNVSjwaMGwdljJIsZ0BzHBbElg");
    izdelaj(nizi, 119, "ab7CYNS");
    izdelaj(nizi, 120, "0zBO2ItcJ8uySZvwsz3OzPgQH");
    izdelaj(nizi, 121, "dMBxyK_1xqDwLbgwp0DVLVvnd_yDHoBoKSZhcG9");
    izdelaj(nizi, 122, "NK6BENBNA1nOgFXvnoHBjRd2h0ieB6KbTAGSty5N_852dH1dT358s0SMDaoRcRV");
    izdelaj(nizi, 123, "xsV9KSgdeSahSTArqC28tD9DIyn7G84jlknIPKltpAzLL7i1RBnPsQgwnTySfK2SJVGK");
    izdelaj(nizi, 124, "djrr8p0oAgV_27R830fS__jqIk9Xt0r5J8G8ShX5hPhpS3MpEjTiP4ww_S2e24tD9c5QmQK_nQ9b00s");
    izdelaj(nizi, 125, "bjaGwHbLxeC07X9Sb8PuCgaN2");
    izdelaj(nizi, 126, "PxDiSgvccj5OopctjjAySHUGBHKqt4rwFj7BHw98vOaJNV");
    izdelaj(nizi, 127, "96mPIEkYMarb2ZU5cM0EeQt5WL7R3xOfnNW4lfenH9mBbu0zQP5yF");
    izdelaj(nizi, 128, "o_21ExIQRjdte4oOCjVHBm99hK9D0Mgz6As4Xi8k5eJwRArV8D2dG8QEn0by2JDamF2GH5q");
    izdelaj(nizi, 129, "5C32JxE2zOO5l7ctpVXibALK7F");
    izdelaj(nizi, 130, "wxHcR17ZlmNylAuVfssO3LwKDyX9GP");
    izdelaj(nizi, 131, "jnKFBFZIc");
    izdelaj(nizi, 132, "u8VExhsL8f7utl2CPuD3ASV8uKyRvYjqDdSeImcita9RPBXIWr9_64qF81Ut5yxTNflG1jUjC");
    izdelaj(nizi, 133, "wxHcR17ZlmNylAuVfssO3LwKDyX9GP");
    izdelaj(nizi, 134, "hl_uXO5rgpchA5CbwT9RnpfsrEGKtt1l2sM9v6fOmFOmg2V4k5BkA93flPVax9LBkuT_IF5JLSFWYoExvEGrJ7uzmCnO");
    izdelaj(nizi, 135, "Jv9s4jXoSMYb2tPnRoRqicUpx2pq0J7A2P");
    izdelaj(nizi, 136, "t2prb4qLi_Fxv");
    izdelaj(nizi, 137, "CKZPFe0TzHs4tYp0McrQ6966RyzDtFadEzsoxoAQDn9JHRhteFAWFm0JNn_4vlTVkUVpLV0tcMsMz7FizPps");
    izdelaj(nizi, 138, "UUGcuR14oNRRilcBodYlnlWQjKKH01buJClZLgQb_5crapwj1j6");
    izdelaj(nizi, 139, "bkd3pYO38hgop4iK6B2I1a6KZH395K0dmbJ8cgEAfIOkCZ4UlTIVuvVN");
    izdelaj(nizi, 140, "y9JzDUfO5xcLePksAP3x29492qwz4qK7qi6g8ZL0U5Q");
    izdelaj(nizi, 141, "1s1A4Z1FLb7TCSjAsi7hhQv3WcfY2lxZ");
    izdelaj(nizi, 142, "AvJ56auEtovYpCXR6URnanLszA07P3iqTnL");
    izdelaj(nizi, 143, "1i_3V1Gf_6FGukuE7t_7ZX2Szk1RWIiVFVNt9F3sZ_qvAmF6VuqxlUqOti1dxczTMpHE0J5JlIXhB5kQ3XCU0JVWu");
    izdelaj(nizi, 144, "T_uedm6fENzR_9RfAN5SjMhjmuRsWvec1LQhI5nUkQGPnqxyZmHC_YYNz1mIz1o_VvxR_eOxBhzwpo1dsONtuVyK");
    izdelaj(nizi, 145, "yNTEqC9zybCk4gVC_iCug2MzC_lgCguaFkIyCJ6GKeFN3TUKECGl2Dq7DDaFkKIkDoBr32rYW");
    izdelaj(nizi, 146, "h4J0ZJT7vTNiK9pIqoCcCggtnnKb8TN4ipOStF5ANOzIdO93ZpNJkHzP8VXAUdseFW3BmI");
    izdelaj(nizi, 147, "o_21ExIQRjdte4oOCjVHBm99hK9D0Mgz6As4Xi8k5eJwRArV8D2dG8QEn0by2JDamF2GH5q");
    izdelaj(nizi, 148, "F");
    izdelaj(nizi, 149, "e9vro7v_5j5YNEuywQJg_1e9LnwRu8kvTuhau6GXUmFx0pO");
    izdelaj(nizi, 150, "l2Py2nqv8nr0qJW6oA16EVmYX3SvXLxJf9Z1IOaoK9pkY");
    izdelaj(nizi, 151, "ANVqzt1sZhe48F7jt1k7KvSkh8TK");
    izdelaj(nizi, 152, "aT2BeoiidCyV1WldGsI66m_oF5267yxUZu1q3l0dQuKAVAl0Rvo0PZ8o1vPf1HMg0C3HnL");
    izdelaj(nizi, 153, "i16hzSCbSGAwgb3Vt9W3ps2KAkpNrArlMzok1wpJfyz8IjPH4TCF");
    izdelaj(nizi, 154, "CKZPFe0TzHs4tYp0McrQ6966RyzDtFadEzsoxoAQDn9JHRhteFAWFm0JNn_4vlTVkUVpLV0tcMsMz7FizPps");
    izdelaj(nizi, 155, "2ObcwA7");
    izdelaj(nizi, 156, "Ko03QSdpq2jqqBrfffw9Ub85R8XKt_jR9zr_5jQnvnhzkmVx0JODAu");
    izdelaj(nizi, 157, "kxUsDWfXCjVlt9RbUd2O7S6afxGcyMP9lGbSazSAZ82");
    izdelaj(nizi, 158, "HzmJuFPb4RkSsZerA57LszyQfj3KmLhm_tx31t0mgevTa1oOhehr3yb");
    izdelaj(nizi, 159, "HV8lMdtV3xj4DMHZOYvPYnsL3x_k4s_B4Xatzq12RmXJXzXShQ7FaYow1hBQtblucU5wPDg_aJi0k4jfd3ff62KcKE1MNvjeI3JX");
    izdelaj(nizi, 160, "vHzOMaEBKzjWNKCjADba7d1XC382EZPPs19WsT1LD8CC");
    izdelaj(nizi, 161, "Fa5zsqfEmPXxSjnAEv9Ngx8_LbFt2pKF6NuR_IMv1NtSW7lvyJ7rAHauJErtVWZaLH7_HzAO");
    izdelaj(nizi, 162, "wxHcR17ZlmNylAuVfssO3LwKDyX9GP");
    izdelaj(nizi, 163, "MSQD9niZWbRXgPGSIDCRqq9ZHqg9Og18qU0KjIuObpUhjEKOtCQrMnPVSDz0G866LwgGGdq4RLZ4t");
    izdelaj(nizi, 164, "LYYNfKDvx9v2EymB_nYazPl7IoRyHKNCGFTBcUEE8bM");
    izdelaj(nizi, 165, "XmNy");
    izdelaj(nizi, 166, "9mpisPFnqgRtFpmMAFflV_");
    izdelaj(nizi, 167, "ddS8LjezFVupJlia15LzZtllzxz5JJ8hvPcR8tDAEvkoPx37R7t0zVAWDzCIAhfkZCgtu4WVS88fuSEKxG3OQjbg");
    izdelaj(nizi, 168, "GdgKRNHwl");
    izdelaj(nizi, 169, "RC3GGPRda0XUz1lpm8BfidicnYKcy8l48MM591p8c9UCNamfjNE9VydtDv");
    izdelaj(nizi, 170, "ZSOlUEUe_xbietxpGVgsT8ELh_nz8G3GtCCaSUF7a3anVjNaOHwPFEk3PxuRoGEHnm58CSF6TagA6YKTq");
    izdelaj(nizi, 171, "wxHcR17ZlmNylAuVfssO3LwKDyX9GP");
    izdelaj(nizi, 172, "r32djhWemW287jipaztNZs3Ewpp0RwajsG1Jw5SgrvZ9ihgKOq7e2KT2ttQqmQDAKL36vMPC_CBNVSjwaMGwdljJIsZ0BzHBbElg");
    izdelaj(nizi, 173, "Jv9s4jXoSMYb2tPnRoRqicUpx2pq0J7A2P");
    izdelaj(nizi, 174, "MSQD9niZWbRXgPGSIDCRqq9ZHqg9Og18qU0KjIuObpUhjEKOtCQrMnPVSDz0G866LwgGGdq4RLZ4t");
    izdelaj(nizi, 175, "vHzOMaEBKzjWNKCjADba7d1XC382EZPPs19WsT1LD8CC");
    izdelaj(nizi, 176, "EaG4prvhC_OJV0MynAWlynzEb2UnH4OGvpGGWSVy2ZLpHlUErDqrWdgSTdrllhi80RfkRJS5tgCG");
    izdelaj(nizi, 177, "ILTksoLaqEecPg_yVAvt");
    izdelaj(nizi, 178, "Vyhf6XDtunFdeeSDjter_52Vp5dR2WSV2ooknkB1");
    izdelaj(nizi, 179, "3K_2KN1Ickxt3MQk3DMbDOT2AUkSdo5nHVW6wihCxctusgXTRvFsidRar4JFvh");
    izdelaj(nizi, 180, "aT2BeoiidCyV1WldGsI66m_oF5267yxUZu1q3l0dQuKAVAl0Rvo0PZ8o1vPf1HMg0C3HnL");
    izdelaj(nizi, 181, "Nl_kEWvbOve7_hnniZfArNUeflVLr2BlKXq9KglLvZnBmrv1S8yUKjyws8lvHbbL_dfe6F");
    izdelaj(nizi, 182, "wxHcR17ZlmNylAuVfssO3LwKDyX9GP");
    izdelaj(nizi, 183, "Nl_kEWvbOve7_hnniZfArNUeflVLr2BlKXq9KglLvZnBmrv1S8yUKjyws8lvHbbL_dfe6F");
    izdelaj(nizi, 184, "CKZPFe0TzHs4tYp0McrQ6966RyzDtFadEzsoxoAQDn9JHRhteFAWFm0JNn_4vlTVkUVpLV0tcMsMz7FizPps");
    izdelaj(nizi, 185, "wxHcR17ZlmNylAuVfssO3LwKDyX9GP");
    izdelaj(nizi, 186, "Z2sqoCesli5eVOHKs3Y37rgZjIkyWUdtpwChx1Y3fMcID_griA1yjwmxL_A9wRlS_IvfWTkI");
    izdelaj(nizi, 187, "QYZGzuaORQufHWav7rVRPQTY4xYZrsKy9j_LxIsBPtN5UW4ozsp2bUyfp6pk8ECHUQsl3O");
    izdelaj(nizi, 188, "EeWrUKkdwAZ1ZJeTZDP8N5Hy9oACosWDreicHT8i5icGU2m9q");
    izdelaj(nizi, 189, "Gs6S406EzeAuHNT");
    izdelaj(nizi, 190, "Nl_kEWvbOve7_hnniZfArNUeflVLr2BlKXq9KglLvZnBmrv1S8yUKjyws8lvHbbL_dfe6F");
    izdelaj(nizi, 191, "sC5ed_nTn37IkkXTp65WVCGLOndferE8glB9gavW3LG9Glb9aNaGGmmF8v05VSrjdnDXrNj2yv1RlaaXHtiI");
    izdelaj(nizi, 192, "t2prb4qLi_Fxv");
    izdelaj(nizi, 193, "xdevaQWx64xlMf7bN0VToITWGNmrNke513WV02Lqc14618KqjpXEEATg3XI38zxz");
    izdelaj(nizi, 194, "8oDu3XQWYHHRFOKrLcBAIkHOS03zkFGRYNaBQtEW3zCsnfhp_ZVCqLbY9MvmZzKs9HmZGgpfpf1X4b1KXx0_wfwll6sii1");
    izdelaj(nizi, 195, "E7w0J4F");
    izdelaj(nizi, 196, "uHzPvDUSaYn0o94pC5ZH6LukgubnAsYGNcm0kxmW3NFVil2Lz8IdFEdP9UJ9c_Kb");
    izdelaj(nizi, 197, "hl_uXO5rgpchA5CbwT9RnpfsrEGKtt1l2sM9v6fOmFOmg2V4k5BkA93flPVax9LBkuT_IF5JLSFWYoExvEGrJ7uzmCnO");
    izdelaj(nizi, 198, "G5KokuOe8X3An0SUPdDXgJ2pvkfDbNAVg5pQ_5H0inqJuwcZn1hmfLkCptN7pID9retiIGewrip");
    izdelaj(nizi, 199, "RC3GGPRda0XUz1lpm8BfidicnYKcy8l48MM591p8c9UCNamfjNE9VydtDv");
    izdelaj(nizi, 200, "wxHcR17ZlmNylAuVfssO3LwKDyX9GP");
    izdelaj(nizi, 201, "ab7CYNS");
    izdelaj(nizi, 202, "2ObcwA7");
    izdelaj(nizi, 203, "hl_uXO5rgpchA5CbwT9RnpfsrEGKtt1l2sM9v6fOmFOmg2V4k5BkA93flPVax9LBkuT_IF5JLSFWYoExvEGrJ7uzmCnO");
    izdelaj(nizi, 204, "ca74BgONqcpivtIe0_7UbJA5at5yyMjHoMNtk4zj3IZb6IqN7XKfc92ZEIaaNraZSpBgUXEj5jJWR1iFedR_F");
    izdelaj(nizi, 205, "bDlOY8AA_A7XhD9H7nArv04LfHdKUzUi1fp2exwu2zes_8LurFXCmQcteV9nL2kfok269Ex5Oizow8S6WtweHC1RkqVUwk");
    izdelaj(nizi, 206, "67CZ8REkkfiLK2EnwQPmmy1OU11ZnK7ivOdA3HChPyJ3Ng2ZXx2EebALCSRapzp30c");
    izdelaj(nizi, 207, "YuWsoIwYg3N1XcQac4aLovraz6B_I2mI0YKu0ChrgTFYVNFW1i");
    izdelaj(nizi, 208, "uKCkiiz9pxDWqGg6fVkX2V2eAn1aWz2ES7bcmg9MJKMUTJzfMsiV7KJ30JFupFURyIQwk0qQ04tjkHYy29Ou3wiAXZdNLvlHL5");
    izdelaj(nizi, 209, "YtddpNPbOBhQq1ymoJo_TUGmTrN1CVx7V");
    izdelaj(nizi, 210, "U86vPrEj1Qlav1E5iGacCEs1c6z4dTP0LuVKIOEV55KI8OhZOMSNHVXFH4zb_ZsJRiMJkk6nMrL_Ne6bTNo2");
    izdelaj(nizi, 211, "vHzOMaEBKzjWNKCjADba7d1XC382EZPPs19WsT1LD8CC");
    izdelaj(nizi, 212, "F4sKpJbov");
    izdelaj(nizi, 213, "tMKXo0wrR1gakt2RkUE7lWZv22fUxv8ngbLJFhK5152aUqhR5kJkDRoRPCdRyswYe9mWfoajTtWjOmXvu");
    izdelaj(nizi, 214, "uKCkiiz9pxDWqGg6fVkX2V2eAn1aWz2ES7bcmg9MJKMUTJzfMsiV7KJ30JFupFURyIQwk0qQ04tjkHYy29Ou3wiAXZdNLvlHL5");
    izdelaj(nizi, 215, "HV8lMdtV3xj4DMHZOYvPYnsL3x_k4s_B4Xatzq12RmXJXzXShQ7FaYow1hBQtblucU5wPDg_aJi0k4jfd3ff62KcKE1MNvjeI3JX");
    izdelaj(nizi, 216, "XzGmvgEZtkXtOEtqsIx2SDEUeqbG");
    izdelaj(nizi, 217, "ZsmHPFasSDdqDqnNORtC5MyvMNlye");
    izdelaj(nizi, 218, "DHV38mDek5p4g4HZW7coiGhvG6K27Kp27oxX_VAOil4elRk41S4lzkkOrzNl3T6iZnZDcI3JplTIQgHaDXwa3x_PPDGkmu0");
    izdelaj(nizi, 219, "J7k_CXGQY8rA4orGDexAE7lldOfVBK4ES7Nlo8Y3c0NXaDQa3vLk3rYqiR8gnmA0lP5tYAyVcojwsPfz");
    izdelaj(nizi, 220, "1WnXq6rzJoeJdksnRZ_bweewW1ToWlGN1SpMvxyQP8XjNgT1");
    izdelaj(nizi, 221, "eteA2XMU8dzslfOc4skfzuz_EVppPFZBbr8HvP4u2kiTeAbPMh");

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
