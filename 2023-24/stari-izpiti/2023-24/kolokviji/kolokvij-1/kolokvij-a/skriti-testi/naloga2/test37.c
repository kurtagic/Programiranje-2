
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
    int n = 201;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "gCk_s8eK");
    izdelaj(nizi, 1, "gCk_s8eK");
    izdelaj(nizi, 2, "Rxvqn2MWgZGdv67q");
    izdelaj(nizi, 3, "Rxvqn2MWgZGdv67q");
    izdelaj(nizi, 4, "fhUAgN8V1SF4H5JExP7EZMJtVAznB4FrWCBcXmCwLmVHna_rPzLCtYnipQ6SJds2JF2Cy7lgHKnX40bAjI5w8ZBQHlwQbx");
    izdelaj(nizi, 5, "gCk_s8eK");
    izdelaj(nizi, 6, "gCk_s8eK");
    izdelaj(nizi, 7, "gCk_s8eK");
    izdelaj(nizi, 8, "gCk_s8eK");
    izdelaj(nizi, 9, "T0NJ8yw_A48gL71gMWyH0WEQczHpDz5i");
    izdelaj(nizi, 10, "dfhSUya2d7yiXiC53pOjglGSui9XxheZPihjyTYu1uuo1cAdoNmgg3Tld4");
    izdelaj(nizi, 11, "dfhSUya2d7yiXiC53pOjglGSui9XxheZPihjyTYu1uuo1cAdoNmgg3Tld4");
    izdelaj(nizi, 12, "SDPMHsc4MxemSDcz1bwm_fn82ssZzjUvAAX6Q39MgoRObPQplNZ0i1");
    izdelaj(nizi, 13, "Ojk12m3HST4Bc7BvQfQeXg08ObAGGYECW8VGbNZ6vt4J6p_nQxYSPUoaDTe4_xqtt6fu8fIPid8HridMgnlw44YJ3Q");
    izdelaj(nizi, 14, "dfhSUya2d7yiXiC53pOjglGSui9XxheZPihjyTYu1uuo1cAdoNmgg3Tld4");
    izdelaj(nizi, 15, "qFK7mNDbv");
    izdelaj(nizi, 16, "Ojk12m3HST4Bc7BvQfQeXg08ObAGGYECW8VGbNZ6vt4J6p_nQxYSPUoaDTe4_xqtt6fu8fIPid8HridMgnlw44YJ3Q");
    izdelaj(nizi, 17, "dfhSUya2d7yiXiC53pOjglGSui9XxheZPihjyTYu1uuo1cAdoNmgg3Tld4");
    izdelaj(nizi, 18, "GVQy4mznWtbPuxKCZzfjnrarqtlslkocs3b9932ADbpejd0Io");
    izdelaj(nizi, 19, "PekubCZ9T14GWZrIpnszfsitii2psRqqC8FT3mjdGtGxcchrnhD2LyNLIFyNduhjHQb9kcvvLtVaNOEb");
    izdelaj(nizi, 20, "gCk_s8eK");
    izdelaj(nizi, 21, "Rxvqn2MWgZGdv67q");
    izdelaj(nizi, 22, "CClWn8gzsSxYbxEy9UBqk97gTW3w86VMn2VXKM2b6Kt71aNGrmn4r66sfsPLi7eQHwofOZuQesVFVFr4DiB5bzCCDU4GGscn");
    izdelaj(nizi, 23, "PekubCZ9T14GWZrIpnszfsitii2psRqqC8FT3mjdGtGxcchrnhD2LyNLIFyNduhjHQb9kcvvLtVaNOEb");
    izdelaj(nizi, 24, "gCk_s8eK");
    izdelaj(nizi, 25, "Rxvqn2MWgZGdv67q");
    izdelaj(nizi, 26, "gCk_s8eK");
    izdelaj(nizi, 27, "HB9At_bycCicU7Njoz");
    izdelaj(nizi, 28, "kyZ4qlaqFI8zywdUmlgANg8rnH13RylRjQRuPiUbPvdbgo5ikWGvwPguSBSJBqZ");
    izdelaj(nizi, 29, "PekubCZ9T14GWZrIpnszfsitii2psRqqC8FT3mjdGtGxcchrnhD2LyNLIFyNduhjHQb9kcvvLtVaNOEb");
    izdelaj(nizi, 30, "1LHfOrCobN9RDuzkXhe");
    izdelaj(nizi, 31, "gCk_s8eK");
    izdelaj(nizi, 32, "dfhSUya2d7yiXiC53pOjglGSui9XxheZPihjyTYu1uuo1cAdoNmgg3Tld4");
    izdelaj(nizi, 33, "PekubCZ9T14GWZrIpnszfsitii2psRqqC8FT3mjdGtGxcchrnhD2LyNLIFyNduhjHQb9kcvvLtVaNOEb");
    izdelaj(nizi, 34, "SDPMHsc4MxemSDcz1bwm_fn82ssZzjUvAAX6Q39MgoRObPQplNZ0i1");
    izdelaj(nizi, 35, "Rxvqn2MWgZGdv67q");
    izdelaj(nizi, 36, "dfhSUya2d7yiXiC53pOjglGSui9XxheZPihjyTYu1uuo1cAdoNmgg3Tld4");
    izdelaj(nizi, 37, "SDPMHsc4MxemSDcz1bwm_fn82ssZzjUvAAX6Q39MgoRObPQplNZ0i1");
    izdelaj(nizi, 38, "lc1gWhEatiwoVBhR5GEHynegAN5JfCKllDkEjvm6DOjf_acJI70k0Sh2gfq2eU2wC5YfILkVu4E9i");
    izdelaj(nizi, 39, "2eJYIYKi7B1hdyofVPZH_GfSO0JKO6WBVaOzHgznkC8plonf3lXy7IPIIWQeY");
    izdelaj(nizi, 40, "gCk_s8eK");
    izdelaj(nizi, 41, "NFq5X0bpcwOLv2_lnRneUypSTtiCevkone8XhA5t46rKz5XAgBTxEuqusKjMzCjG2J3LuFr5N7q");
    izdelaj(nizi, 42, "Ojk12m3HST4Bc7BvQfQeXg08ObAGGYECW8VGbNZ6vt4J6p_nQxYSPUoaDTe4_xqtt6fu8fIPid8HridMgnlw44YJ3Q");
    izdelaj(nizi, 43, "_nXj4yTBv7VejAoJsjfytASpUPXR3idSKmgGvzEpYxrhM6PwhUA10MwD5gp_oG6usSPs_l5c5hGLi3dEIGwUa1Dpbn1iX_0kDZiL");
    izdelaj(nizi, 44, "zrCuJ");
    izdelaj(nizi, 45, "Ojk12m3HST4Bc7BvQfQeXg08ObAGGYECW8VGbNZ6vt4J6p_nQxYSPUoaDTe4_xqtt6fu8fIPid8HridMgnlw44YJ3Q");
    izdelaj(nizi, 46, "EIOSyazOd4V9UBUFM5pELrg4nILFTfqPW3_7d2P641xbkLvY2L");
    izdelaj(nizi, 47, "dfhSUya2d7yiXiC53pOjglGSui9XxheZPihjyTYu1uuo1cAdoNmgg3Tld4");
    izdelaj(nizi, 48, "gCk_s8eK");
    izdelaj(nizi, 49, "Ojk12m3HST4Bc7BvQfQeXg08ObAGGYECW8VGbNZ6vt4J6p_nQxYSPUoaDTe4_xqtt6fu8fIPid8HridMgnlw44YJ3Q");
    izdelaj(nizi, 50, "TcjFZSeA9CFtuTXeI2N0mea7rjSiCP_9xsSowU3YyH2cb_gaWrjf6IT99sk");
    izdelaj(nizi, 51, "20KvmJQ3ilOvmweCnbORdqWQyUbpRtu4hVlMsUwH5IBfizsufCn4TxrFMz_zVBjd");
    izdelaj(nizi, 52, "a8MPvUgjkofi2PtgnfMwmRAOYz0OJU2fVOCOcyjfHXWEUvMCRe6pdzzfk7JAMR2v8RQGLcTB7LbpDYQiu8cAr2ncDqtQjs");
    izdelaj(nizi, 53, "4YCXO72vxKxze2Bv1WwyefZs87yDjmrgrHgrzKiHPUm1vBqvCyTwDDaz33J");
    izdelaj(nizi, 54, "dfhSUya2d7yiXiC53pOjglGSui9XxheZPihjyTYu1uuo1cAdoNmgg3Tld4");
    izdelaj(nizi, 55, "X7fTX3xepI0zvHNwNyWVHOvksNFNngOQWuRJskWhUDDjM4M2f62uiFX_cRVz7QeACAp");
    izdelaj(nizi, 56, "gCk_s8eK");
    izdelaj(nizi, 57, "AqyQ69TTNVWk6k22QE_ZyqDRECh3X1ltCbdmLshpfGAgPACuoO7u1ndlXdm1vP5O05f");
    izdelaj(nizi, 58, "1KSIypvuASLgoEdhpOXqe3CvUL7i_u21Xg9pHh0wHaJuEO8J7Ih89");
    izdelaj(nizi, 59, "kFuUrYOf0X3_T2AO8zapIkrZ7hUS2RAbBpkvfPWqgqwDbiPHpSFZRy");
    izdelaj(nizi, 60, "SDPMHsc4MxemSDcz1bwm_fn82ssZzjUvAAX6Q39MgoRObPQplNZ0i1");
    izdelaj(nizi, 61, "NmEfwJO5dVG_8s93Dmz1gpf9TLmCJtPI7xBth1nxN");
    izdelaj(nizi, 62, "un2wOV6KCKZ_xsz5oZOT2lqGaHV8_k2KTLkXrr0slhWVG1YOrAxIFAEu");
    izdelaj(nizi, 63, "EIOSyazOd4V9UBUFM5pELrg4nILFTfqPW3_7d2P641xbkLvY2L");
    izdelaj(nizi, 64, "SDPMHsc4MxemSDcz1bwm_fn82ssZzjUvAAX6Q39MgoRObPQplNZ0i1");
    izdelaj(nizi, 65, "dfhSUya2d7yiXiC53pOjglGSui9XxheZPihjyTYu1uuo1cAdoNmgg3Tld4");
    izdelaj(nizi, 66, "gCk_s8eK");
    izdelaj(nizi, 67, "vwxDEoufsI2926n9T9JF1y426UUMd6MswSZwgzL0LYMc7F7wbJ36QlgIgmWAGtvIrzlCWjyClWh4QQrLfLCUNYiDY50ZfY");
    izdelaj(nizi, 68, "gCk_s8eK");
    izdelaj(nizi, 69, "VEFDXQhwVRZjRRnLKBe4bIsEm8I5Mu4CaUFYgdn7aJv");
    izdelaj(nizi, 70, "G44M");
    izdelaj(nizi, 71, "PekubCZ9T14GWZrIpnszfsitii2psRqqC8FT3mjdGtGxcchrnhD2LyNLIFyNduhjHQb9kcvvLtVaNOEb");
    izdelaj(nizi, 72, "SDPMHsc4MxemSDcz1bwm_fn82ssZzjUvAAX6Q39MgoRObPQplNZ0i1");
    izdelaj(nizi, 73, "gCk_s8eK");
    izdelaj(nizi, 74, "sY9pa_6MLHLab09DaGiXJhUdl2Osp4iXOZ1Q0NDjGkISSU5KfGoLkgTTduej3eyHZgP2PP5rgd38qyiQOcaYHPhg07SH9cy9hzCP");
    izdelaj(nizi, 75, "gCk_s8eK");
    izdelaj(nizi, 76, "F");
    izdelaj(nizi, 77, "HRBbB2onAmjdwBKa0RwxWgAk93aLssC3gVnTmaZ5jepNkrb9CP7d1Wvm6WgwkJrUBIevgMnwkvK");
    izdelaj(nizi, 78, "dDBBa7KVcc5UzLKVfEmhW4r4rE79Y3hgl0EoZPnje6UZWBmm5PwuvDYlt4B089r_abyJs7Xb_48tLaqJQdcj5V");
    izdelaj(nizi, 79, "bTD3CNUMPLJKCPvTkRiERkGuZlm_KePUV5VQ19kkuWU31ri8wp7tu");
    izdelaj(nizi, 80, "L_MH84K2v24b6CWzHDDUOnCrclOZBWiKNeB1s8bsxX6jHkNpsT9iJAfrZGNI");
    izdelaj(nizi, 81, "hketKW");
    izdelaj(nizi, 82, "vYtAjqUwgD8oXztWutsBJuYd7ILmuwlyRUXn7bchNkr77NDZmbQjxYKVY6C7U0iA40al");
    izdelaj(nizi, 83, "jUZE9yp_0NhpAG6Ig8tN5ooxZ_UIaUUDH0quJCdLZnV9z3tMJSfprn976RXmAQr");
    izdelaj(nizi, 84, "PekubCZ9T14GWZrIpnszfsitii2psRqqC8FT3mjdGtGxcchrnhD2LyNLIFyNduhjHQb9kcvvLtVaNOEb");
    izdelaj(nizi, 85, "j19dsq5RRuYZMofH8hO2vNrEptqeQcPX1Fa_zJq2TrJZphv5P4RZ4lRu6EjDRb47lqgYEO8GgRqf");
    izdelaj(nizi, 86, "7735m8mBbf5vFFqNMEc0pcLUcRePnhl0bpN");
    izdelaj(nizi, 87, "ImCqsbuj_esUFfK2");
    izdelaj(nizi, 88, "gCk_s8eK");
    izdelaj(nizi, 89, "bTD3CNUMPLJKCPvTkRiERkGuZlm_KePUV5VQ19kkuWU31ri8wp7tu");
    izdelaj(nizi, 90, "dxn7LKg2AYtBSeTlPeEWb0w9mzq2TpJfGmhPiEiwosKwxEjF2CdB7rjGIydE2VvgFK8rvl_Zf");
    izdelaj(nizi, 91, "TjPNpuMEVDV93eWqLIh30c_Otouo33GEoOPo9SK6CX85Vt3c5K1ObaGuIbh");
    izdelaj(nizi, 92, "SDPMHsc4MxemSDcz1bwm_fn82ssZzjUvAAX6Q39MgoRObPQplNZ0i1");
    izdelaj(nizi, 93, "sRRaX4Hnl3Jz2e1");
    izdelaj(nizi, 94, "20IyAz75Bht6jU0LUOfCnWMj9Bgx8XjTrMvNyb8DlI3j4q4xf2zwM5Srsv9kb0NJyBj8rT_Li0bErPpsqZ");
    izdelaj(nizi, 95, "EI12FY0TJa32wr0KHQakzgAOb1mxiax");
    izdelaj(nizi, 96, "T0NJ8yw_A48gL71gMWyH0WEQczHpDz5i");
    izdelaj(nizi, 97, "MtbR17gyySqfHT8IMUae5nQ8qOrQp7Ig764LUTdmr_rVE2h96gEKQdcjnN");
    izdelaj(nizi, 98, "W124qfEpvdgdAfNnJr2L4J_Rj1hXHRpFziCrJpeQnM0fsIMHDpWZ0aiE0PWNpc01fPWa");
    izdelaj(nizi, 99, "T0NJ8yw_A48gL71gMWyH0WEQczHpDz5i");
    izdelaj(nizi, 100, "dfhSUya2d7yiXiC53pOjglGSui9XxheZPihjyTYu1uuo1cAdoNmgg3Tld4");
    izdelaj(nizi, 101, "sRRaX4Hnl3Jz2e1");
    izdelaj(nizi, 102, "CHEFRJhNSLsy5G8U8iN3X9iH");
    izdelaj(nizi, 103, "dfhSUya2d7yiXiC53pOjglGSui9XxheZPihjyTYu1uuo1cAdoNmgg3Tld4");
    izdelaj(nizi, 104, "2ujc3IdNdAsYTYIiEdMd6KRnxSZ4K7KAXiUKLIKrRfxq2mjrr2Eqtpjas36WxeCH1");
    izdelaj(nizi, 105, "dDBBa7KVcc5UzLKVfEmhW4r4rE79Y3hgl0EoZPnje6UZWBmm5PwuvDYlt4B089r_abyJs7Xb_48tLaqJQdcj5V");
    izdelaj(nizi, 106, "Rxvqn2MWgZGdv67q");
    izdelaj(nizi, 107, "dfhSUya2d7yiXiC53pOjglGSui9XxheZPihjyTYu1uuo1cAdoNmgg3Tld4");
    izdelaj(nizi, 108, "1MkGQwYpOjN2sC6_bLIPTTAhE9ykcXHo1ICzf_IpItNpHFXjrkVRg3QtnYJ9aa5PucHtonhitHIjAnd8Ns7ZDQ");
    izdelaj(nizi, 109, "fhUAgN8V1SF4H5JExP7EZMJtVAznB4FrWCBcXmCwLmVHna_rPzLCtYnipQ6SJds2JF2Cy7lgHKnX40bAjI5w8ZBQHlwQbx");
    izdelaj(nizi, 110, "1yENbxfu4_OmDHeI3iBTo0HLut0wqymKvzCx2saLxpD3tUZ7afTL6kG2CPjlNIIDhhA9xV0wAmXvkOB4");
    izdelaj(nizi, 111, "dfhSUya2d7yiXiC53pOjglGSui9XxheZPihjyTYu1uuo1cAdoNmgg3Tld4");
    izdelaj(nizi, 112, "zrCuJ");
    izdelaj(nizi, 113, "EIOSyazOd4V9UBUFM5pELrg4nILFTfqPW3_7d2P641xbkLvY2L");
    izdelaj(nizi, 114, "ny2j0XPAyfMvTrOhbtI8D51lcUMsFv1J3mhpdJWUyf0jrKJcv5DVuXDbfYJ5Ru8nsqpBZfc6R2OGMpS86");
    izdelaj(nizi, 115, "NFq5X0bpcwOLv2_lnRneUypSTtiCevkone8XhA5t46rKz5XAgBTxEuqusKjMzCjG2J3LuFr5N7q");
    izdelaj(nizi, 116, "bEFJlJem2bI32wSNFSsuMtHAGa_NpYsLJ");
    izdelaj(nizi, 117, "L_MH84K2v24b6CWzHDDUOnCrclOZBWiKNeB1s8bsxX6jHkNpsT9iJAfrZGNI");
    izdelaj(nizi, 118, "R7QsHCeLU3YwTERh_r18GR0_8tGwFbbM_N");
    izdelaj(nizi, 119, "T4jqDkuccjuJun5smmqYVzXpgcIV3K4lSu06RTC6yLJScsdJY1v0C6UBfkf3SaIgqP");
    izdelaj(nizi, 120, "PekubCZ9T14GWZrIpnszfsitii2psRqqC8FT3mjdGtGxcchrnhD2LyNLIFyNduhjHQb9kcvvLtVaNOEb");
    izdelaj(nizi, 121, "EIOSyazOd4V9UBUFM5pELrg4nILFTfqPW3_7d2P641xbkLvY2L");
    izdelaj(nizi, 122, "dvTUSXCvyqLFs5Nd_KGC3n7vGTkeA");
    izdelaj(nizi, 123, "gCk_s8eK");
    izdelaj(nizi, 124, "sY9pa_6MLHLab09DaGiXJhUdl2Osp4iXOZ1Q0NDjGkISSU5KfGoLkgTTduej3eyHZgP2PP5rgd38qyiQOcaYHPhg07SH9cy9hzCP");
    izdelaj(nizi, 125, "mx1gCsdyK2nSRfyjp5RiOnxLtna2czDBtWK5_rBp7atd6vncMzGFHd0vLrZw9qy5");
    izdelaj(nizi, 126, "sRRaX4Hnl3Jz2e1");
    izdelaj(nizi, 127, "7XTBW1Far79HE584SMoWoZGNWwY_VjYtLbU8aicHjpKen7CUCNSIse__IPLwMQXj3l1s1JTQSnkY4DOGMfInXJ");
    izdelaj(nizi, 128, "aQo1AbDScnW7wimnHZEv_Nd1qifduh24xef7f8RvowKVPpdZkB7Ql8yrYuugVaCIqjgzYM6k_FdTfDNT3W2sjeyA_g");
    izdelaj(nizi, 129, "sY9pa_6MLHLab09DaGiXJhUdl2Osp4iXOZ1Q0NDjGkISSU5KfGoLkgTTduej3eyHZgP2PP5rgd38qyiQOcaYHPhg07SH9cy9hzCP");
    izdelaj(nizi, 130, "_5UOmxcfbqDGa23gDFm3xZ");
    izdelaj(nizi, 131, "hketKW");
    izdelaj(nizi, 132, "vwxDEoufsI2926n9T9JF1y426UUMd6MswSZwgzL0LYMc7F7wbJ36QlgIgmWAGtvIrzlCWjyClWh4QQrLfLCUNYiDY50ZfY");
    izdelaj(nizi, 133, "1BnNBuTqvuaD6RoL6SEUVn_rk3BemLu8xrYQXIh9mxQ4mpbgtblBTcpfOpuEOuhN");
    izdelaj(nizi, 134, "SjhX8ouxsMHmAg8c1Ih4tWlBdHgX1bGHF565EsUmDWkfSxa6OGmtUJkgBjxPUZIz0Jjfq7aqnjMLLdwr1HQyByowF1QZ_oJATe");
    izdelaj(nizi, 135, "coQuEkRV0DY5bKeB05WwKmszjbM1a2DNtMoMxDqlxPmLYZnYVlbR7qF1dOJQt3UTJoIL4loKNbjTyLk5");
    izdelaj(nizi, 136, "IW8KYarlNs2KVNO5zqoS_F09DhvCQ1hopKRXTOM8LCAryGict0oHOGKHlD00mMumkLPFSQJvv1LJy2LDFBrQm");
    izdelaj(nizi, 137, "GDktNRrW15B8ntgmgb86UiGBLOjSbfaFJRyTIWEnO1Ql0ggPjtThNRXKU1g_SlzA2Th5oWFxiofA0l6aFZ6UNwgPbNKi");
    izdelaj(nizi, 138, "nyDq7K21kRDuXExYfvD7JDLHEGUwWldAP40GlxqhFYPPZ34rkS9ejE9WG5CXzZlvFROb_C9z6Mn1hPEU2rEdnUlUbK5q7mSA");
    izdelaj(nizi, 139, "CClWn8gzsSxYbxEy9UBqk97gTW3w86VMn2VXKM2b6Kt71aNGrmn4r66sfsPLi7eQHwofOZuQesVFVFr4DiB5bzCCDU4GGscn");
    izdelaj(nizi, 140, "w_88IQwYlUtzan7uGHU5mgcVm2RRqG0ufzsgrlgkdQL0dCU6LSjFJE");
    izdelaj(nizi, 141, "ToJ5HBiEURe9FrWme45l0tmHgetm9GgmT6LFiG");
    izdelaj(nizi, 142, "CEaAw22Llneo66TkI7SV3CE7rnOUVi9HMntneHGGupp60_26G_MOfuPDrA1uGiUu_1IUoY");
    izdelaj(nizi, 143, "gCk_s8eK");
    izdelaj(nizi, 144, "ZyR4rPjj8bPpQpmobgtyx6Kgv9kdnxSqM5p");
    izdelaj(nizi, 145, "R7QsHCeLU3YwTERh_r18GR0_8tGwFbbM_N");
    izdelaj(nizi, 146, "AR_01Y");
    izdelaj(nizi, 147, "w_88IQwYlUtzan7uGHU5mgcVm2RRqG0ufzsgrlgkdQL0dCU6LSjFJE");
    izdelaj(nizi, 148, "PMumIZ0WkSyRGGf6qBrfXH8WQpsNEbQjQEAQ");
    izdelaj(nizi, 149, "RFXAWRhZxqaAPGXtDmSwRwFNBHVE51xQmHnmVOlxgLE_x9svz_o1MeXC8yHsoq8oUca");
    izdelaj(nizi, 150, "wxKZtlZpjD4O9sRDDz");
    izdelaj(nizi, 151, "nyDq7K21kRDuXExYfvD7JDLHEGUwWldAP40GlxqhFYPPZ34rkS9ejE9WG5CXzZlvFROb_C9z6Mn1hPEU2rEdnUlUbK5q7mSA");
    izdelaj(nizi, 152, "Rxvqn2MWgZGdv67q");
    izdelaj(nizi, 153, "dfhSUya2d7yiXiC53pOjglGSui9XxheZPihjyTYu1uuo1cAdoNmgg3Tld4");
    izdelaj(nizi, 154, "sRRaX4Hnl3Jz2e1");
    izdelaj(nizi, 155, "cwxmDI4s9FpYuP1DaJ");
    izdelaj(nizi, 156, "G44M");
    izdelaj(nizi, 157, "Ojk12m3HST4Bc7BvQfQeXg08ObAGGYECW8VGbNZ6vt4J6p_nQxYSPUoaDTe4_xqtt6fu8fIPid8HridMgnlw44YJ3Q");
    izdelaj(nizi, 158, "zed7szYkyNVGopAhs0nz_eef37Q5cXQTKQv4dzshAJ11YKSG2lAEqs9XKRU5e6tsgeh");
    izdelaj(nizi, 159, "Q_oLyxoDC5aVb2CexUJYFghE3rQHz5qJbAGYx4En34Bk_XqAk41A_0Ae6xhZr9yZH5_XPXcScaTjkSx1XhaiyEPXnE");
    izdelaj(nizi, 160, "mum0tAaJoCq8cAK0mWyqL1dKMF3ZkMfGjEbrqUJSyw45");
    izdelaj(nizi, 161, "1XzbrJROHmNPisxf3PXisNDLQoxbCK6tJ3zdSwmMH9ztK_IOw");
    izdelaj(nizi, 162, "HB9At_bycCicU7Njoz");
    izdelaj(nizi, 163, "8JfXDE2kFR1GQ9H6B");
    izdelaj(nizi, 164, "Zduyo4T21x8LH_xtLkfgjsUsbW3Y");
    izdelaj(nizi, 165, "SDPMHsc4MxemSDcz1bwm_fn82ssZzjUvAAX6Q39MgoRObPQplNZ0i1");
    izdelaj(nizi, 166, "gCk_s8eK");
    izdelaj(nizi, 167, "UxTlFPKTRWPSTcBlDA1AltEmj4FLcJCtAjNNi8o5l6wa3NLUjESx");
    izdelaj(nizi, 168, "kyZ4qlaqFI8zywdUmlgANg8rnH13RylRjQRuPiUbPvdbgo5ikWGvwPguSBSJBqZ");
    izdelaj(nizi, 169, "zed7szYkyNVGopAhs0nz_eef37Q5cXQTKQv4dzshAJ11YKSG2lAEqs9XKRU5e6tsgeh");
    izdelaj(nizi, 170, "Lrs6Ew4CmeG4ivb1AZp4igxsJHOdL_CfpCvbbNKOZLWSWEi2p74pN6ZntNQ6euInjQBAWVkmec68iJcvzL");
    izdelaj(nizi, 171, "CClWn8gzsSxYbxEy9UBqk97gTW3w86VMn2VXKM2b6Kt71aNGrmn4r66sfsPLi7eQHwofOZuQesVFVFr4DiB5bzCCDU4GGscn");
    izdelaj(nizi, 172, "gCk_s8eK");
    izdelaj(nizi, 173, "PZ5x2RKWVYi6HERBHNo_PPPHzXzjyLdffoQSuRxFF5WaPcaZyagfuyJTvueszZ_v4ahB");
    izdelaj(nizi, 174, "SBj2N34YjTHnF3uZMkQ9rNIM");
    izdelaj(nizi, 175, "gCk_s8eK");
    izdelaj(nizi, 176, "w_88IQwYlUtzan7uGHU5mgcVm2RRqG0ufzsgrlgkdQL0dCU6LSjFJE");
    izdelaj(nizi, 177, "gCk_s8eK");
    izdelaj(nizi, 178, "PekubCZ9T14GWZrIpnszfsitii2psRqqC8FT3mjdGtGxcchrnhD2LyNLIFyNduhjHQb9kcvvLtVaNOEb");
    izdelaj(nizi, 179, "D7dXNaWOsDiZI3JqfhXCdJYxiBsVhHkje2PL4");
    izdelaj(nizi, 180, "gCk_s8eK");
    izdelaj(nizi, 181, "HRBbB2onAmjdwBKa0RwxWgAk93aLssC3gVnTmaZ5jepNkrb9CP7d1Wvm6WgwkJrUBIevgMnwkvK");
    izdelaj(nizi, 182, "W124qfEpvdgdAfNnJr2L4J_Rj1hXHRpFziCrJpeQnM0fsIMHDpWZ0aiE0PWNpc01fPWa");
    izdelaj(nizi, 183, "dNVi60wnplpcSk7A4L6jGMQHX_KI_rxPKSToBrGR1p");
    izdelaj(nizi, 184, "44U6sil5muIOAfbKCjvZKeCGT9Eo0_4odTHJVP2mD3FOJ_r");
    izdelaj(nizi, 185, "bEu_E5IqaFU");
    izdelaj(nizi, 186, "8cym7CZuzbbzD5ZIfAk8drG97IaqaQq1k5b6VYPKWP2IDbDRfz1xXdeXxTphy41cahMRTuamba");
    izdelaj(nizi, 187, "TIROdBugInufaUK_1IWIkUI57JAsP");
    izdelaj(nizi, 188, "gCk_s8eK");
    izdelaj(nizi, 189, "MPSDDNZzgr8FAtz2migztYbnDiTcl5hblQSfkSbVk_uqKJ");
    izdelaj(nizi, 190, "CHEFRJhNSLsy5G8U8iN3X9iH");
    izdelaj(nizi, 191, "cwxmDI4s9FpYuP1DaJ");
    izdelaj(nizi, 192, "m");
    izdelaj(nizi, 193, "qji4K1OuDeNXTsq5S3S1Z9qx698Hq8BrHMag0ShSNIMu9rStIuPBqFNvHcELAeAAy47Wsx5RFgzZFNNZT0s6M");
    izdelaj(nizi, 194, "HRBbB2onAmjdwBKa0RwxWgAk93aLssC3gVnTmaZ5jepNkrb9CP7d1Wvm6WgwkJrUBIevgMnwkvK");
    izdelaj(nizi, 195, "mum0tAaJoCq8cAK0mWyqL1dKMF3ZkMfGjEbrqUJSyw45");
    izdelaj(nizi, 196, "t61nxbYebyhFV3m0RHKDspEhhtGoTYW46KEMFz6k9_vsv0C3SEWUE8Aw1KURBu_65qb");
    izdelaj(nizi, 197, "FcHr2MA62hDZMUxyFwNO7pdLNFFh4QXW8MpS70uYztSsp68AecMwYJj2r9ylPcbFGa45Te3Vw5TyNeAEjD");
    izdelaj(nizi, 198, "SDPMHsc4MxemSDcz1bwm_fn82ssZzjUvAAX6Q39MgoRObPQplNZ0i1");
    izdelaj(nizi, 199, "zd2kuWK7ZeY3n1m16Ol03AY8y_kE7n");
    izdelaj(nizi, 200, "n7jmeoH3m4e3WiL4RlQNHLglyT0tM7iW8n");

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
