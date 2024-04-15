
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
    int n = 209;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "CVmjG9P2");
    izdelaj(nizi, 1, "b9qF");
    izdelaj(nizi, 2, "0rIC3oMetKzKvSYgyp5UzAMEMAKpGLbyRZzLGnvk0IysbKhzQTlRgVPdubty6UUiigODeZ95kPb");
    izdelaj(nizi, 3, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 4, "kJ3lhMu77ypjk55p29yO");
    izdelaj(nizi, 5, "zPZrPQ21eUQV_XzJokSciclilh5fBGpCfx");
    izdelaj(nizi, 6, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 7, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 8, "nL95dmFXitpfXtQEcDO8KU2kaEikzpIT311g0AzIomGf5NNZhtI");
    izdelaj(nizi, 9, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 10, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 11, "rxmz4IKU0cvGO8quPxOQ3542dZnYV34oSvXMl96ZgGd31wMnLVx4TWKBt");
    izdelaj(nizi, 12, "pSHgV46S6wmduPXiwryaPjfqjmv2U5rbiTusi9dripuqvis2v9WskDKW3EIGCjKpo0GGi1QaiE3");
    izdelaj(nizi, 13, "PtYvbIqSGMSHswjFZpsqJH0tpCppqkZKCdgfSC7mEddh_mhtMBj77iZrk9X6ztrU0eaTIAFb");
    izdelaj(nizi, 14, "WFsmN3QVz2r1SHh5JiO35GH8qbWP2UGjCMK_Y");
    izdelaj(nizi, 15, "zPZrPQ21eUQV_XzJokSciclilh5fBGpCfx");
    izdelaj(nizi, 16, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 17, "OLm0nOMD8R0pTPDCGTgeG0QBUcjPIRdwaYvDlpvxBJ33mAoPhx8VtHF48VnTEKGhCDC13tJs0becZ6FuAXyu88Jy");
    izdelaj(nizi, 18, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 19, "uYVUDCbVnkb1PB19MXNSqszREarFnh3BBN47zWPHJpWlBQSQ1s_S1gMPnkPytI5H1");
    izdelaj(nizi, 20, "f2iJ8exb_UIAwMWSzBFAqr1smVvUGLyd3AMAMbmeiHISdlLgFFwQ4H4RtUbVUoiV7XnZrEBHvoEOprLMd");
    izdelaj(nizi, 21, "OU5EM1xpjDQq26dts8CbOVVLiDjqtfrqnts");
    izdelaj(nizi, 22, "PtYvbIqSGMSHswjFZpsqJH0tpCppqkZKCdgfSC7mEddh_mhtMBj77iZrk9X6ztrU0eaTIAFb");
    izdelaj(nizi, 23, "0F1ZLyn3fQtwhiVjyaDuW5YDFVWN4EX5F69oJCbIQFzwrZ9E1yqL");
    izdelaj(nizi, 24, "ITgrhRte8BoD3Hl7JhzdavCbScssNIw6NhXJWnbGQJ4ZFuJG1WMD1YuOfhdrbPrsYUyG");
    izdelaj(nizi, 25, "PtYvbIqSGMSHswjFZpsqJH0tpCppqkZKCdgfSC7mEddh_mhtMBj77iZrk9X6ztrU0eaTIAFb");
    izdelaj(nizi, 26, "ITgrhRte8BoD3Hl7JhzdavCbScssNIw6NhXJWnbGQJ4ZFuJG1WMD1YuOfhdrbPrsYUyG");
    izdelaj(nizi, 27, "uYVUDCbVnkb1PB19MXNSqszREarFnh3BBN47zWPHJpWlBQSQ1s_S1gMPnkPytI5H1");
    izdelaj(nizi, 28, "PtYvbIqSGMSHswjFZpsqJH0tpCppqkZKCdgfSC7mEddh_mhtMBj77iZrk9X6ztrU0eaTIAFb");
    izdelaj(nizi, 29, "ITgrhRte8BoD3Hl7JhzdavCbScssNIw6NhXJWnbGQJ4ZFuJG1WMD1YuOfhdrbPrsYUyG");
    izdelaj(nizi, 30, "yAsdngl9kiQGe");
    izdelaj(nizi, 31, "PtYvbIqSGMSHswjFZpsqJH0tpCppqkZKCdgfSC7mEddh_mhtMBj77iZrk9X6ztrU0eaTIAFb");
    izdelaj(nizi, 32, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 33, "zPZrPQ21eUQV_XzJokSciclilh5fBGpCfx");
    izdelaj(nizi, 34, "ITgrhRte8BoD3Hl7JhzdavCbScssNIw6NhXJWnbGQJ4ZFuJG1WMD1YuOfhdrbPrsYUyG");
    izdelaj(nizi, 35, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 36, "LlKuS1a0xdgyx87CH7PAG3muobgrKj0Xwg3MOc99wDcKujItFj8vZS_mSabAkR4ldqH_SozqQezWQT8o7o12xDRsb");
    izdelaj(nizi, 37, "ITgrhRte8BoD3Hl7JhzdavCbScssNIw6NhXJWnbGQJ4ZFuJG1WMD1YuOfhdrbPrsYUyG");
    izdelaj(nizi, 38, "_mqxlqFbKFozRBvRupLbIbchti");
    izdelaj(nizi, 39, "PtYvbIqSGMSHswjFZpsqJH0tpCppqkZKCdgfSC7mEddh_mhtMBj77iZrk9X6ztrU0eaTIAFb");
    izdelaj(nizi, 40, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 41, "5aa_R0ZCl64Cua99tf5xto1K5hc33tJfOUO");
    izdelaj(nizi, 42, "ZkYVcCEPmLi2EqffoytajqxbQ67NmYF8ApaRobZjrgD");
    izdelaj(nizi, 43, "ejiwypMra");
    izdelaj(nizi, 44, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 45, "uYVUDCbVnkb1PB19MXNSqszREarFnh3BBN47zWPHJpWlBQSQ1s_S1gMPnkPytI5H1");
    izdelaj(nizi, 46, "0F1ZLyn3fQtwhiVjyaDuW5YDFVWN4EX5F69oJCbIQFzwrZ9E1yqL");
    izdelaj(nizi, 47, "b9qF");
    izdelaj(nizi, 48, "HcgGhNzpOdCxdsG8BmkVUxyAaG2QL_OOCPJYPA8n1K041NvgvuUel8hcIJtAHs8q5Dkb_6DsaOtdnlQcL_qpdCRWxz");
    izdelaj(nizi, 49, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 50, "IwvgwdKr9oKlPcdzwdb2p_C1giuMDW_xruJG2Ij8NMtWlk");
    izdelaj(nizi, 51, "RYnQp6");
    izdelaj(nizi, 52, "LJYs7BvwFV");
    izdelaj(nizi, 53, "0rIC3oMetKzKvSYgyp5UzAMEMAKpGLbyRZzLGnvk0IysbKhzQTlRgVPdubty6UUiigODeZ95kPb");
    izdelaj(nizi, 54, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 55, "mtZK20DGRL");
    izdelaj(nizi, 56, "fKGopk7CZMLEmIgJZc9k9I_DgZGW0v4XIMrXPo_h3NV_m_qVSsgB1pLm7_KsWYHcncHQuPi0nAS6S2Vrp6kTUpc12");
    izdelaj(nizi, 57, "q4qxZ_NVMB7m1hSdcOADFKqVxGHmgm5q_1C_Sr444b2C9rrRj5IVTKsSaCj0kprvXxudXjlCmwikRAQ3yRQrQ797wo");
    izdelaj(nizi, 58, "nL95dmFXitpfXtQEcDO8KU2kaEikzpIT311g0AzIomGf5NNZhtI");
    izdelaj(nizi, 59, "pSHgV46S6wmduPXiwryaPjfqjmv2U5rbiTusi9dripuqvis2v9WskDKW3EIGCjKpo0GGi1QaiE3");
    izdelaj(nizi, 60, "uCkPDKwN1nR9Mix99Vdvl2aJecnoUJPOwEoodoq2D7EXXKjFf_jKC");
    izdelaj(nizi, 61, "LlKuS1a0xdgyx87CH7PAG3muobgrKj0Xwg3MOc99wDcKujItFj8vZS_mSabAkR4ldqH_SozqQezWQT8o7o12xDRsb");
    izdelaj(nizi, 62, "ntvWQT5u5yOSXF2dawjKQKKxAAvZCxDu4wixPKOhO4SPAMyEwWeKwiwH9vGwdOgQymBLeRf_BK44ezRcr90WlZcBauQXN");
    izdelaj(nizi, 63, "oiKA5FT_SRinTt_FpyrW");
    izdelaj(nizi, 64, "q4qxZ_NVMB7m1hSdcOADFKqVxGHmgm5q_1C_Sr444b2C9rrRj5IVTKsSaCj0kprvXxudXjlCmwikRAQ3yRQrQ797wo");
    izdelaj(nizi, 65, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 66, "0F1ZLyn3fQtwhiVjyaDuW5YDFVWN4EX5F69oJCbIQFzwrZ9E1yqL");
    izdelaj(nizi, 67, "zfCn11Jj5feLW7CKCgPSHIETWknWawHS140XcV7Vj6RR9F4B7FU9XnWIKVciWBnpqHehmeoRcC_k");
    izdelaj(nizi, 68, "XYbfzMRLyDq");
    izdelaj(nizi, 69, "Mog5aGP9WK2Rm8SVC2Jg0EmFWjPbCbfWwz3i_6KoFn2rNmlOIt");
    izdelaj(nizi, 70, "9r_u2aYr0WTOv");
    izdelaj(nizi, 71, "sKtmeKN_oAdDGFBq5HCJ3xcnaBjaLW3rhuFMbLk9");
    izdelaj(nizi, 72, "rxmz4IKU0cvGO8quPxOQ3542dZnYV34oSvXMl96ZgGd31wMnLVx4TWKBt");
    izdelaj(nizi, 73, "nL95dmFXitpfXtQEcDO8KU2kaEikzpIT311g0AzIomGf5NNZhtI");
    izdelaj(nizi, 74, "hNOWzu_aRDKGHR9wIxaqh0udHBwwnOimHdmBiCtzGG3ZBXvcywwOgmEZsQo2PXnj5pyysxJRaFf7YVN");
    izdelaj(nizi, 75, "oNuq1LoBxpi5S4BJNDvBgKxFbQQRA5h5YaYrSJ2VNue0iX4DBM8Ap_v3S");
    izdelaj(nizi, 76, "jkK5tuZDyHShlCoqqyiioR50ciTj222A9YMbOe4H0gh6hQ8iZkP7E7oModxI01MFv9H5XnagW2qjvrWEhWWH_k3aF9GgjEpvLc");
    izdelaj(nizi, 77, "C_sdDJTDSKkC60HNy8UO4NGEgil6");
    izdelaj(nizi, 78, "uYVUDCbVnkb1PB19MXNSqszREarFnh3BBN47zWPHJpWlBQSQ1s_S1gMPnkPytI5H1");
    izdelaj(nizi, 79, "Fes_yfX5dsz2zQ2Zoax9kLyvg_Yu06O177jVdHS");
    izdelaj(nizi, 80, "zPZrPQ21eUQV_XzJokSciclilh5fBGpCfx");
    izdelaj(nizi, 81, "eITdc1yUXKYZWJxy3AYmk2GBctGS7HbK1BPTMy86wEek8mwoJdBXwW56ODBP");
    izdelaj(nizi, 82, "LJYs7BvwFV");
    izdelaj(nizi, 83, "v1ADbLvsu");
    izdelaj(nizi, 84, "gvGEUuEDSdseewX4WlFICFj62W0WNG5XOSIhTd5yC776zyzHSdVwl6oOMWxYTj2nCoT0RQsHxEG663EfGwJsl4QfBN");
    izdelaj(nizi, 85, "qpC7FNhB3YnhAbBQlQXE6CB1Sk6Hzzg8R5CVw1B3afGobIE");
    izdelaj(nizi, 86, "aaz99ZLeae7CI");
    izdelaj(nizi, 87, "Ds8LJya4BYGR_J3I50_XdtwCAtETZTyGElOpFu10fuxmcf9PrdwxPb8k0");
    izdelaj(nizi, 88, "uYVUDCbVnkb1PB19MXNSqszREarFnh3BBN47zWPHJpWlBQSQ1s_S1gMPnkPytI5H1");
    izdelaj(nizi, 89, "ITgrhRte8BoD3Hl7JhzdavCbScssNIw6NhXJWnbGQJ4ZFuJG1WMD1YuOfhdrbPrsYUyG");
    izdelaj(nizi, 90, "zfCn11Jj5feLW7CKCgPSHIETWknWawHS140XcV7Vj6RR9F4B7FU9XnWIKVciWBnpqHehmeoRcC_k");
    izdelaj(nizi, 91, "oiKA5FT_SRinTt_FpyrW");
    izdelaj(nizi, 92, "9r_u2aYr0WTOv");
    izdelaj(nizi, 93, "9r_u2aYr0WTOv");
    izdelaj(nizi, 94, "UvVNpjU7v4xPc6dof8K68oSRVDYEQsLLjn45hRWYuELoe8RzY4Oi6");
    izdelaj(nizi, 95, "nL95dmFXitpfXtQEcDO8KU2kaEikzpIT311g0AzIomGf5NNZhtI");
    izdelaj(nizi, 96, "Fes_yfX5dsz2zQ2Zoax9kLyvg_Yu06O177jVdHS");
    izdelaj(nizi, 97, "rGg4rr4Qb6Zc37NgiUyWBXQJ");
    izdelaj(nizi, 98, "9trWbLCmyTCPsmf_glyO4Z1gTc1Fhf4cys2cNgqLZUy4vRMWgcHe3sCmYR4D86nNGKdVNAD");
    izdelaj(nizi, 99, "D2p_RluQ3");
    izdelaj(nizi, 100, "gvGEUuEDSdseewX4WlFICFj62W0WNG5XOSIhTd5yC776zyzHSdVwl6oOMWxYTj2nCoT0RQsHxEG663EfGwJsl4QfBN");
    izdelaj(nizi, 101, "eITdc1yUXKYZWJxy3AYmk2GBctGS7HbK1BPTMy86wEek8mwoJdBXwW56ODBP");
    izdelaj(nizi, 102, "sKtmeKN_oAdDGFBq5HCJ3xcnaBjaLW3rhuFMbLk9");
    izdelaj(nizi, 103, "2qd80Zq3UxvyJoqv3i92K8JeLh7k890e_VUTHbyKx5eEir3YdcGD9CiEGBU1xjoDoI_mqQO8N2G0z");
    izdelaj(nizi, 104, "LJYs7BvwFV");
    izdelaj(nizi, 105, "rxmz4IKU0cvGO8quPxOQ3542dZnYV34oSvXMl96ZgGd31wMnLVx4TWKBt");
    izdelaj(nizi, 106, "WFsmN3QVz2r1SHh5JiO35GH8qbWP2UGjCMK_Y");
    izdelaj(nizi, 107, "S3eKWf5ndjvuXp3yTK73jrrO6qDQsfcARDDdKxcrYZKR5g98CmbOXp6BI_rEfljJa4Xnn1Y34aJN2as0UeK9PW");
    izdelaj(nizi, 108, "9trWbLCmyTCPsmf_glyO4Z1gTc1Fhf4cys2cNgqLZUy4vRMWgcHe3sCmYR4D86nNGKdVNAD");
    izdelaj(nizi, 109, "D2p_RluQ3");
    izdelaj(nizi, 110, "c0jhSk35idt");
    izdelaj(nizi, 111, "X7xOvVZ3aySORjsQyhHH5jLgpkmSg6ol5LYcnInagMEvkn3s");
    izdelaj(nizi, 112, "QGFa8iVo1L4HmUX5vymqp2Q758wV49L_M");
    izdelaj(nizi, 113, "gc1mWnR5ATSIIeuaDvMEwNiA8bGXMba7AXAZvXivuVdO3p5H0Lr0kCk9fAg2mi78t7YJP2r8cVyHnKQC4QOZL52FNHwW8");
    izdelaj(nizi, 114, "_zKRCmSl8pRrWoPcUlAf");
    izdelaj(nizi, 115, "uCkPDKwN1nR9Mix99Vdvl2aJecnoUJPOwEoodoq2D7EXXKjFf_jKC");
    izdelaj(nizi, 116, "Hj3pRGPVMRwzbG7ic5mGi1wa2yPUArI4zmIz5NoC7qyvKFRhyXniUYAJzTfojru1lOEa9Oxt8ci0HXAExCjz_bslNCocOLBdr");
    izdelaj(nizi, 117, "YH1gkYi8WEauLp5P191gU_k_WOo9W_stTU8Ou3HlRhxZO3slqtnWF33N6q3LCdlZpGJ");
    izdelaj(nizi, 118, "OLm0nOMD8R0pTPDCGTgeG0QBUcjPIRdwaYvDlpvxBJ33mAoPhx8VtHF48VnTEKGhCDC13tJs0becZ6FuAXyu88Jy");
    izdelaj(nizi, 119, "PtYvbIqSGMSHswjFZpsqJH0tpCppqkZKCdgfSC7mEddh_mhtMBj77iZrk9X6ztrU0eaTIAFb");
    izdelaj(nizi, 120, "pSHgV46S6wmduPXiwryaPjfqjmv2U5rbiTusi9dripuqvis2v9WskDKW3EIGCjKpo0GGi1QaiE3");
    izdelaj(nizi, 121, "OLm0nOMD8R0pTPDCGTgeG0QBUcjPIRdwaYvDlpvxBJ33mAoPhx8VtHF48VnTEKGhCDC13tJs0becZ6FuAXyu88Jy");
    izdelaj(nizi, 122, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 123, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 124, "x3esntocfb0JJDYOLZ2dFPvmlYfNCt76DM2D8N8RChvf1W51hhgOFi0aYX6u5M7S2zMvz1FQkM4YzoQfy42PAD1Ax");
    izdelaj(nizi, 125, "mRvFlyYFiz8Iajn5_VBuEw2tDF0loyplTAtcdltRuMe09puHTi97WNIGejSrJkbr7nKz8Q2PMC0m");
    izdelaj(nizi, 126, "x3esntocfb0JJDYOLZ2dFPvmlYfNCt76DM2D8N8RChvf1W51hhgOFi0aYX6u5M7S2zMvz1FQkM4YzoQfy42PAD1Ax");
    izdelaj(nizi, 127, "MXjJyfJY6MeiLm0Wo0DgtqjupcoPqztZf38QNcIW22eP3NGuSjegSORp2AXah_vqJULbjQczMK8zdu12eZezE5T");
    izdelaj(nizi, 128, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 129, "kHN84dIad_0W_km9EiQoTMqyTbUPK_o5fdu7yFfehc26HEpQbkYY_17WSZP0vPkN3lTxiLwExY2uMaOqw");
    izdelaj(nizi, 130, "eITdc1yUXKYZWJxy3AYmk2GBctGS7HbK1BPTMy86wEek8mwoJdBXwW56ODBP");
    izdelaj(nizi, 131, "BvZPn_FGQJbIni7jRm7Hv3NpCBi6Dwr4JAd4pvdpab8Hnev6xNCvaQHnp8en4OGfJuYmtlp9kJU67ifUJLgeDwUug");
    izdelaj(nizi, 132, "PtYvbIqSGMSHswjFZpsqJH0tpCppqkZKCdgfSC7mEddh_mhtMBj77iZrk9X6ztrU0eaTIAFb");
    izdelaj(nizi, 133, "R4kABA5");
    izdelaj(nizi, 134, "5OoKvaSh4NkNx7j3DaLRymso9QuOnbfJZTQt3TnNUxNhb77UsYx9f2vEDu4__Ww5S0hO_P0al3iwiPZ_1y3n_oNa4U9");
    izdelaj(nizi, 135, "jFODP71cAduNAXQyh9mqhFtAQnDT7xQxoZ2tOkhZrq2pIZ391JA5MCKigFwff6aYZ6");
    izdelaj(nizi, 136, "nFh_OMsWycdVpQigCuNcVTMskvFdPhRRbnNG54WAfa2nekGN7CylvSLCPvj26O8");
    izdelaj(nizi, 137, "zPZrPQ21eUQV_XzJokSciclilh5fBGpCfx");
    izdelaj(nizi, 138, "yAYrnZkcCxzrmsewUoi87MIvFd7ElbT2nxeUQ6fMqPRUFZNkMN3zpgLEcnB5j8N_bIV7NgYDsEr");
    izdelaj(nizi, 139, "Ds8LJya4BYGR_J3I50_XdtwCAtETZTyGElOpFu10fuxmcf9PrdwxPb8k0");
    izdelaj(nizi, 140, "fKGopk7CZMLEmIgJZc9k9I_DgZGW0v4XIMrXPo_h3NV_m_qVSsgB1pLm7_KsWYHcncHQuPi0nAS6S2Vrp6kTUpc12");
    izdelaj(nizi, 141, "WFsmN3QVz2r1SHh5JiO35GH8qbWP2UGjCMK_Y");
    izdelaj(nizi, 142, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 143, "OLm0nOMD8R0pTPDCGTgeG0QBUcjPIRdwaYvDlpvxBJ33mAoPhx8VtHF48VnTEKGhCDC13tJs0becZ6FuAXyu88Jy");
    izdelaj(nizi, 144, "JrXlDrItFMamBwhwvVvsOLeGzbQn7swONsbmntyrdQAuDCaoLny7NuC7Oln7pB8wi_bVCKN9NgrGsJ5s72B");
    izdelaj(nizi, 145, "02g5hlJZw01kYDlowV3uZVCppv2S_4pxl0dzluRdTGnOi4vb55kjQBU0uY6A1gW3iqqfr");
    izdelaj(nizi, 146, "jFo4BTwO6wbPcINnqLO7xBjcUcXYr4hb_CYhjy5VL5KYqCQo3R0E8ouEZzm_5vTDnf4H1");
    izdelaj(nizi, 147, "HK9qHJ2GnIW1R0tpGabM9lNoeUPKr042qhgkZiodPI9fyPVN5V7ur_K6cks9o4sM");
    izdelaj(nizi, 148, "d05lDPVinsjKJelpKw2FQAgAHjBveukuXaPny3P7RKeFf_ELUwY4OyZwj");
    izdelaj(nizi, 149, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 150, "OLm0nOMD8R0pTPDCGTgeG0QBUcjPIRdwaYvDlpvxBJ33mAoPhx8VtHF48VnTEKGhCDC13tJs0becZ6FuAXyu88Jy");
    izdelaj(nizi, 151, "S3eKWf5ndjvuXp3yTK73jrrO6qDQsfcARDDdKxcrYZKR5g98CmbOXp6BI_rEfljJa4Xnn1Y34aJN2as0UeK9PW");
    izdelaj(nizi, 152, "JfuI0q8SWYpRVX2RHShXiPJgPEsT3ZTsSqw");
    izdelaj(nizi, 153, "UvVNpjU7v4xPc6dof8K68oSRVDYEQsLLjn45hRWYuELoe8RzY4Oi6");
    izdelaj(nizi, 154, "2qd80Zq3UxvyJoqv3i92K8JeLh7k890e_VUTHbyKx5eEir3YdcGD9CiEGBU1xjoDoI_mqQO8N2G0z");
    izdelaj(nizi, 155, "PtYvbIqSGMSHswjFZpsqJH0tpCppqkZKCdgfSC7mEddh_mhtMBj77iZrk9X6ztrU0eaTIAFb");
    izdelaj(nizi, 156, "ITgrhRte8BoD3Hl7JhzdavCbScssNIw6NhXJWnbGQJ4ZFuJG1WMD1YuOfhdrbPrsYUyG");
    izdelaj(nizi, 157, "kJ3lhMu77ypjk55p29yO");
    izdelaj(nizi, 158, "S6ui6bNnVx9o5LWTBaVetMZTnZXI9R6bzMAA3B5KsoN3tzev8q2evj8vU1E4TzqkXJJbrxWrEc7KNmc0LaBDNFpTTL4Uv7_");
    izdelaj(nizi, 159, "D5wzph3EfB2B3Cu_nUftFPpIKih3f50iP");
    izdelaj(nizi, 160, "eITdc1yUXKYZWJxy3AYmk2GBctGS7HbK1BPTMy86wEek8mwoJdBXwW56ODBP");
    izdelaj(nizi, 161, "HSRM8sA2IxiSNQPHH3DfK5QTd6tGUS6DXRA72ioOZAo_r");
    izdelaj(nizi, 162, "b3Xkwxl_oxYQsWZu6OsI");
    izdelaj(nizi, 163, "nL95dmFXitpfXtQEcDO8KU2kaEikzpIT311g0AzIomGf5NNZhtI");
    izdelaj(nizi, 164, "fNE8XPiIFlRWqQ4NRXGS4Jm_0ieZp5Fgb8eNXj2huFvsIC_UGttv5elX4tV2_c13jDwOw3UKYNcjEqSrzx7DChml4yle");
    izdelaj(nizi, 165, "S3eKWf5ndjvuXp3yTK73jrrO6qDQsfcARDDdKxcrYZKR5g98CmbOXp6BI_rEfljJa4Xnn1Y34aJN2as0UeK9PW");
    izdelaj(nizi, 166, "JrXlDrItFMamBwhwvVvsOLeGzbQn7swONsbmntyrdQAuDCaoLny7NuC7Oln7pB8wi_bVCKN9NgrGsJ5s72B");
    izdelaj(nizi, 167, "UvVNpjU7v4xPc6dof8K68oSRVDYEQsLLjn45hRWYuELoe8RzY4Oi6");
    izdelaj(nizi, 168, "MKi6jEITM7casmvoib1mwx4nu1sHZ1CsIV5WSmvFV72BQaRFirBx_FOF1tBey7NTFjJxLy76hXWnmLPyR7jPb8rUnfsjtd");
    izdelaj(nizi, 169, "wRFxUcIb1");
    izdelaj(nizi, 170, "TmmycgZ1DZfjecntIVr_VWJoRZdL6N6MlkDMxbk3M0FfDaSbb53CeXgIZcIZLEDmyN9i8iWfvtAZ9XLdQeq67B7jgUzoPiFIzau");
    izdelaj(nizi, 171, "lLo5GjmtyKCVwFheojIjNypUfYnEuCd98ZwhgV4vlzuDdmoCYIK2SADVrAjK4AA8t2B0RboRBshj8kXhQroxV1p1RFhX3aoXUqAf");
    izdelaj(nizi, 172, "IMJEhhRP_o1I_26");
    izdelaj(nizi, 173, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 174, "9trWbLCmyTCPsmf_glyO4Z1gTc1Fhf4cys2cNgqLZUy4vRMWgcHe3sCmYR4D86nNGKdVNAD");
    izdelaj(nizi, 175, "fKGopk7CZMLEmIgJZc9k9I_DgZGW0v4XIMrXPo_h3NV_m_qVSsgB1pLm7_KsWYHcncHQuPi0nAS6S2Vrp6kTUpc12");
    izdelaj(nizi, 176, "pwgkG1Y5qH31b13Oahl5cOkQQOk1Y");
    izdelaj(nizi, 177, "UvVNpjU7v4xPc6dof8K68oSRVDYEQsLLjn45hRWYuELoe8RzY4Oi6");
    izdelaj(nizi, 178, "39QxcLxvEIaAu4dD0NbhnrkiYXWkyAAT1SKz1lBeun4d48cZVXnJNuW0swCM6Tun4Q");
    izdelaj(nizi, 179, "dbNjRHXnwxBIwWwua4vrg4UiH4gRy0bjOliN3ub");
    izdelaj(nizi, 180, "uYVUDCbVnkb1PB19MXNSqszREarFnh3BBN47zWPHJpWlBQSQ1s_S1gMPnkPytI5H1");
    izdelaj(nizi, 181, "uCkPDKwN1nR9Mix99Vdvl2aJecnoUJPOwEoodoq2D7EXXKjFf_jKC");
    izdelaj(nizi, 182, "XYbfzMRLyDq");
    izdelaj(nizi, 183, "fp1M4XyD92l8QHoeH6cfyJcSRUonV9ck5TPZTQqXrz");
    izdelaj(nizi, 184, "zrR8FmGrJTfJ3VNvkKtp");
    izdelaj(nizi, 185, "x3esntocfb0JJDYOLZ2dFPvmlYfNCt76DM2D8N8RChvf1W51hhgOFi0aYX6u5M7S2zMvz1FQkM4YzoQfy42PAD1Ax");
    izdelaj(nizi, 186, "rGg4rr4Qb6Zc37NgiUyWBXQJ");
    izdelaj(nizi, 187, "81CL8kFbYIsr3lNXnSr8Zg_iATJaK8maED7X1UqjToYOP2hzYBhnkEfNo7FtbNP3GHepoy9WXC_1wSnt7X2JSDUmIT9mRCah");
    izdelaj(nizi, 188, "x3esntocfb0JJDYOLZ2dFPvmlYfNCt76DM2D8N8RChvf1W51hhgOFi0aYX6u5M7S2zMvz1FQkM4YzoQfy42PAD1Ax");
    izdelaj(nizi, 189, "LlKuS1a0xdgyx87CH7PAG3muobgrKj0Xwg3MOc99wDcKujItFj8vZS_mSabAkR4ldqH_SozqQezWQT8o7o12xDRsb");
    izdelaj(nizi, 190, "ZkYVcCEPmLi2EqffoytajqxbQ67NmYF8ApaRobZjrgD");
    izdelaj(nizi, 191, "2PdzFTvkRxtRSgRoiZQIiq2EAhX0r_YMvNI9lfluwminUU4JBPaQOBAtKmRYUudwLeaC2pmk8QgpI");
    izdelaj(nizi, 192, "9zrH9HJkWR1UcogNtKCUnpZS5kkzhFSRNee2elYNTRB3quNboIapaeY3NPzqxInXfknebfYUTe9EEbL2JWnWTdogG");
    izdelaj(nizi, 193, "LlKuS1a0xdgyx87CH7PAG3muobgrKj0Xwg3MOc99wDcKujItFj8vZS_mSabAkR4ldqH_SozqQezWQT8o7o12xDRsb");
    izdelaj(nizi, 194, "LlKuS1a0xdgyx87CH7PAG3muobgrKj0Xwg3MOc99wDcKujItFj8vZS_mSabAkR4ldqH_SozqQezWQT8o7o12xDRsb");
    izdelaj(nizi, 195, "u0x98Z");
    izdelaj(nizi, 196, "D2p_RluQ3");
    izdelaj(nizi, 197, "islAO8Wwy7oTUaU5LWZK1Tt88HXKx4N5O3IQAa_9D5ZphnfCpdKR");
    izdelaj(nizi, 198, "ITgrhRte8BoD3Hl7JhzdavCbScssNIw6NhXJWnbGQJ4ZFuJG1WMD1YuOfhdrbPrsYUyG");
    izdelaj(nizi, 199, "LlKuS1a0xdgyx87CH7PAG3muobgrKj0Xwg3MOc99wDcKujItFj8vZS_mSabAkR4ldqH_SozqQezWQT8o7o12xDRsb");
    izdelaj(nizi, 200, "1EaGl96D7YTfxYEtCDpxEOsUTVOpNSZvACgfqBXsil5");
    izdelaj(nizi, 201, "JsuLYbYxD_a8WvNsDvLT0y1H6x4Dlyntn3rT6Qy0ALQAYYjdSfqCtmeP9_36aI9Jab9zPXjz");
    izdelaj(nizi, 202, "PtYvbIqSGMSHswjFZpsqJH0tpCppqkZKCdgfSC7mEddh_mhtMBj77iZrk9X6ztrU0eaTIAFb");
    izdelaj(nizi, 203, "5OoKvaSh4NkNx7j3DaLRymso9QuOnbfJZTQt3TnNUxNhb77UsYx9f2vEDu4__Ww5S0hO_P0al3iwiPZ_1y3n_oNa4U9");
    izdelaj(nizi, 204, "eITdc1yUXKYZWJxy3AYmk2GBctGS7HbK1BPTMy86wEek8mwoJdBXwW56ODBP");
    izdelaj(nizi, 205, "yAsdngl9kiQGe");
    izdelaj(nizi, 206, "slqr21myhKrYToNdf0PqS_fYwhwnr7te0cEEux_HDpoNOS8MKDtyO");
    izdelaj(nizi, 207, "2cUqETsGGyqSOb61dac0bkn4DqE2ZHuVEya1Nxyd_gGHP8IUxpIt");
    izdelaj(nizi, 208, "lzfsOys7tzAteEVWLBcd9_wtrMw2trkNpLNaUscpHN2fJkLkTOjz72T_Onw5dDLonnpNCn6tv_kKvNClFaDJO9GznkQ7j");

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
