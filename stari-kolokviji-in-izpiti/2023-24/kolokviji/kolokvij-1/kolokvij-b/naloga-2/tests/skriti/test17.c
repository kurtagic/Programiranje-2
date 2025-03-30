
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
    int n = 140;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "wK5aVlVmEdFVulYKsxusVzWEi01TLQOoAfLKGultA6ppy");
    izdelaj(nizi, 1, "gZyfSOYWgDws9OgFKanvIVoVZL0DhOJINAzB");
    izdelaj(nizi, 2, "wP9wZQGMA9FhQ0ABAyHfxMifltedW0I5NWhnKmY6rhNgxJf");
    izdelaj(nizi, 3, "gnnT3CVdn8MrdEr6yHnEX9XCXNVVcJilr4v4T5jIkgK3auMNLrExOtMfMr9xU8zQm");
    izdelaj(nizi, 4, "Oxrt509F6mDaYWG9GW");
    izdelaj(nizi, 5, "r1yITMFQxpkQG8o5R0DJBmQ6oeYd6Nn2WOmc7HDS8CLvbM0Nq6QkV_YtYpIpWd");
    izdelaj(nizi, 6, "LYzpzWAjIc1YXU6Uh0TDWbMd8k8aSWlitbSUVle6aIwNLYi9lJF5yCwqaUJe8rc1yU4ITgmhlVb9NFfP");
    izdelaj(nizi, 7, "lte79S8ljNB6ebB0iWnHHksoomyRn9kAiiVlPnOmWuB42gUs_3hKrxBAgEInBBYr68z96WqCmW7e5sIrA3Hgq4dvsiFgHhu");
    izdelaj(nizi, 8, "gU1CYiH1HlsVkNGEgyctTd3FIbAaFsTO00h6kq3OzHPnl0RMStEIJdnjrsVabA7");
    izdelaj(nizi, 9, "muWm7BZIikFgrAzrWDaq");
    izdelaj(nizi, 10, "bhsoC0x1NLYGfsZov5RnkFdaYyOqXCfOHRTLTg");
    izdelaj(nizi, 11, "SUi49vVAq0P7UMoYgLH2eiFJtmIgJvO9ZeXuzbOfBzRoftwCDCZdFFTa4QyihDpj09LGd98n3SqWMCA_kgm1uQ");
    izdelaj(nizi, 12, "VtE");
    izdelaj(nizi, 13, "kPsRtuZ3PmVwj46L88a13ERReW54tu8ppJrKLqwSvLQhSlOBFRxuUqA1NRzQP_1LEzVEo8tHH_TShEZdzDZpr4rrcsqp0k4C");
    izdelaj(nizi, 14, "f8YUIZ4LmseqfuKKuxsBpZ2i7oTzYnCgnxY0EJtlUP8FSvnnvY5WFYhu6GZUpL5R1dfnDpzioHAM_mu_UzZ1l5XWsJnlwal");
    nizi[15] = nizi[1];
    izdelaj(nizi, 16, "5NZ1jIqN0Q0EVbVgSWkxwxCghKgbS9J04J0qKX1FnEunrgpIo4ufTC");
    izdelaj(nizi, 17, "8wSt63oIwKQd82TrFdF0r_1pxyJcz2ehLmcPvpyGjefO7XZthruXP");
    izdelaj(nizi, 18, "SI3_CS46yMJxd27iN7llUJ2mz0E2vUAv1XWsFpTtZ0akeZ0swCtrzdLWdGm9sFArHEnJjpaVOqf_HAG0vgGf0n");
    izdelaj(nizi, 19, "c9_OeI1YGdS");
    izdelaj(nizi, 20, "Ia2JXV6vyEn_x4fY_JVEjYx3wLWU0gWLhDmeR89famDLQpKpogjHX7K2OS__rdFoWHInC1TJ");
    nizi[21] = nizi[6];
    izdelaj(nizi, 22, "ZGLI_aNzYn3167C7ZJZztp5AG4E5Ow_5znCRRK379wfpv2csa2R");
    izdelaj(nizi, 23, "X4");
    izdelaj(nizi, 24, "FUFXHlpVuoKjdmJ0yNlyW8IHyEGUYftngCRa8a28tZbeCn7fHM640wH4Y8meCwln2T1PitduSD7U9Q7kIyLSQJImmfN9Z1");
    izdelaj(nizi, 25, "EC8Rp43_0y");
    izdelaj(nizi, 26, "qO1XfsIbJdNfKIZG_oZ6GAAnEchMZvsHHPxJcFZtYwuJrjhowNZt1xxJiOfwxEuFHYVkddMJQyaIMs11oK0");
    izdelaj(nizi, 27, "LTHGl2IK9EFBT1XqrIelm1iwg1z_BiD959QQVhNtIVVMPze1MEiFi");
    nizi[28] = nizi[0];
    izdelaj(nizi, 29, "8AaAZywrRX6LV9Bveaas8OZg8edn3JKKFO8N04ewBsRKLWE7nFIZiU7Te6YZct2tZtPlWkkEK8BuEjjZl3iWOq1lFTaTGK");
    nizi[30] = nizi[27];
    nizi[31] = nizi[20];
    izdelaj(nizi, 32, "zOzf7ctlf7lhly2MwQHMDziYlXjoeFAt_6dznjEL35x7vdRYkY8OREOJAzdDwwQ2rDFF4XsOw");
    nizi[33] = nizi[25];
    nizi[34] = nizi[5];
    izdelaj(nizi, 35, "fgfu5aRdW44l9Ewwh8JVRE7PwOQKqjyRuzQ_jWfXOgHNub0cHU");
    izdelaj(nizi, 36, "oS60wKn5CbVH9uCOD8qg08wcYmakzoNZunRfIN_ilq6InI49LZK2UyVZqurTRCjlVM3X96DDTskjsURZCgTVUN78eVS");
    izdelaj(nizi, 37, "ua8GjXRvz7xNCTh_wKGHOztWgQ4KmmmogoDbNG");
    izdelaj(nizi, 38, "dTAkw3fEeg9WxpWaOQos44bPpXvloagw8QK6VosmTwmDe8j3AFC8SFCRMt");
    nizi[39] = nizi[35];
    izdelaj(nizi, 40, "kF9pR1NNm7QXRTi1oerD1yVu_duNDDfVHbTBMbDN2EpU9G3gkA5ZBvJKmArgOLswaK");
    nizi[41] = nizi[26];
    izdelaj(nizi, 42, "jS3y8cm3PDT4A2JiBT3gTV0kqs4hC8aH");
    izdelaj(nizi, 43, "777ZhBvh6NAWrfz27EGNYvU6zKZovzu3MEIwrX4hifWcsRhz_TthjkdajokanUaEMXUv22aoJ4dtzaZyScADJdkGr_8ess");
    izdelaj(nizi, 44, "EK");
    nizi[45] = nizi[19];
    nizi[46] = nizi[42];
    izdelaj(nizi, 47, "zOLC4EhEjDczaCG");
    nizi[48] = nizi[23];
    nizi[49] = nizi[11];
    izdelaj(nizi, 50, "0RcZJcW4wdgT96eH2oeKQAiYdtP");
    nizi[51] = nizi[29];
    nizi[52] = nizi[36];
    izdelaj(nizi, 53, "XGZeQ3RTh1ayBj0erEJHWHYluKDVD63BYkRv");
    izdelaj(nizi, 54, "svSMSwekBbcrmFCDPDi3k");
    izdelaj(nizi, 55, "UnX6VItGia26DSEMlCCXrIQ5KXEDPSUofnmG6opZSO6QqKmoa9HyNT3D2w4IyGXsurV0rsTEUIsyeCsE5def");
    nizi[56] = nizi[55];
    izdelaj(nizi, 57, "elAJoSpETJolAwnkPNFlYnZmhV4TeDE_WNgCuQd7qzwG_M80xWivRX3baWAt");
    nizi[58] = nizi[32];
    nizi[59] = nizi[45];
    izdelaj(nizi, 60, "upkPmbfV1e5HveKYiFhgYd01MVKn68AIZzX9BH8_fJxk7Q_qHT4n9cp0U0jzZK8xhs8yNLLL0gRf429cuCX6RDn");
    nizi[61] = nizi[8];
    izdelaj(nizi, 62, "6TrEqE0GEc_FMEiRjvOrDx5oI41e7DvygtjYSGtI5UgfWKdSAPFHic8P7m");
    izdelaj(nizi, 63, "eh26BqrexN94tv8AeyrKmBJj_fQaZ3NdhJWkMwBSXQcGA0Uwq_Dobvg2NAewUXovXdVgqz1Euq70AG3YxodNdEmhEPqTWnmAEG6j");
    izdelaj(nizi, 64, "yQLevmHDU3b_Lq1crvvEjF");
    izdelaj(nizi, 65, "J7MWeFOI2o0xqkACfkEypwunvCGGydFwQF_GU4FoxQXq9LvQlhS1H0kWFFOu7seGoKOTeL8F729L6q_dO69ix");
    izdelaj(nizi, 66, "xgKyx1ncFFc75iqG0Lzpj3ANu5NzlZkZUlJzMTIZYcf6Ph");
    izdelaj(nizi, 67, "o6HUzTJ3MtyxKARjthQ9Bpx");
    izdelaj(nizi, 68, "usXJF07_e1zgdXW_4gwIsnKjUSDEU_zALO_hrybAATCCdh9xb");
    izdelaj(nizi, 69, "ihRuOOPOo8Ixd7Oj84hP4EZCgco5B3eUQ5MHm43uTfUIJQ7nEplzXNQZK6nI");
    izdelaj(nizi, 70, "iFkdNRCiJ8L8djXZx");
    izdelaj(nizi, 71, "EA15wULIDlTFCN0VwKfh2LMDdmx31bvqOjJNgvUGjATps2BZmFsjODmw9dKywSOLhyir2DDdyp2MT9Kp7fp");
    izdelaj(nizi, 72, "rgQyDA2jEfGSxA2tdv8IiZnXt5PxL");
    nizi[73] = nizi[42];
    izdelaj(nizi, 74, "MSkgt5XnkmBvTEDnW");
    izdelaj(nizi, 75, "R5QMN3hLMd0EB45oHBMrCXzy4l3DzKhDYcm8Enesi775pW4D4OLcz_9kkG_sDOF");
    izdelaj(nizi, 76, "e8FML5sVySl_Wk1kx2nvSDdNPwYoAapCzdKr3dfi0WscqBm1smJ0bqJShWn");
    izdelaj(nizi, 77, "MSRd0uDCJ1jdbmF3Vs8SJdD8xiePoyGDNh09Wl2bj3_huVWoPgiFbnnFoyiiKf2neFohb9CCjCGC9mzW5kcZ4ythvj4Z");
    izdelaj(nizi, 78, "ZJp_qPGKDsr9fIJ5yWUmy_vrQximpcyZIejhZoZf3gMko2VWUjPZprMH7FXVl6kK524");
    izdelaj(nizi, 79, "5ywVbdN");
    nizi[80] = nizi[79];
    izdelaj(nizi, 81, "aCZnKTnhNxvjQmn2kzDEVhcvEL9CEP_l_4ryAKSPp0o3FVEeVwdm4h2Yw3fhovm5n0RqxlAuySot0QsZ");
    nizi[82] = nizi[45];
    nizi[83] = nizi[11];
    izdelaj(nizi, 84, "u_XYKB85irfzGy2stre4rmlBZ62xaQoolx4VFiiLOofQa0D7yWrgP37RgIU1n5Vrcp5kx7AFZHF7PEmUj_aSfsGhO1jmid_");
    nizi[85] = nizi[37];
    izdelaj(nizi, 86, "nGNnJonQweIwWSVajPxEGotiRimBN8baB_5gPRw0SXNq5UJbW4U6R7QNWug2ahWQApPSRdQ_vZnr_LlW5yurVl");
    izdelaj(nizi, 87, "mr_VAIljJfgb1Ju6qjeJ9KFm49RYG2BEUbYc3_GUiGPerFs5YoCWZBWva9b2TZNIod8LWhv06");
    izdelaj(nizi, 88, "LEIxVjGwbgcQ9f1a8B7FKI");
    izdelaj(nizi, 89, "C53_EHaNcZlvn_m20AJnzIqw_3VNFP4z7oYObj8tFirpwsv4KC1CiUyWxHSHTHuTdh2r7YMCU");
    izdelaj(nizi, 90, "vYNJTvWwDCp99iRNhB7Z_0xiJDt1IeX8JBWP");
    izdelaj(nizi, 91, "HIx36igAGGb9EG3ycqiLFirsGWbh_sBPJeRTBOwlxbjJKvhS");
    izdelaj(nizi, 92, "I_7BqZm7DCW532Pz50D31MAbOwLQeBNYbzKNOfbAaem78GrEDU_kcxt17NJ7xill1pixYybDjtVOuOeAW2km9T3bY49Peh");
    nizi[93] = nizi[73];
    izdelaj(nizi, 94, "hXKeclxak1V8OcUO8DCA8yyeI3");
    izdelaj(nizi, 95, "XddZ099CiAZUNpEkef1hjBBoBaO0SkofhnL8QIniRxk6ns_hef8dX0NJtTIUNXGb_t8FxXcVm75r_ce57NFVqbl");
    nizi[96] = nizi[41];
    izdelaj(nizi, 97, "F3v3mcVn_aoTiGS3");
    izdelaj(nizi, 98, "hPiUH6uk6hYE93FWG4VGJWlXo_GC753U_7JdkDqWfanGwlr25keow61U");
    izdelaj(nizi, 99, "SHqJsmRbisS8i6WzQlnQeoY");
    izdelaj(nizi, 100, "NXmmSyQ_NS_fllvi2sECIHfqN2AJ60N_kAZDaAJ5SJ");
    izdelaj(nizi, 101, "jKhtoNreG0VHzNGddMkmUilltPIZ6vFVYEiktatnyvgkuUwQ9ytf");
    izdelaj(nizi, 102, "ks5cT9MR6FQBte");
    nizi[103] = nizi[67];
    izdelaj(nizi, 104, "ZnuQzkdF7OKmjO");
    izdelaj(nizi, 105, "9R56chcJEum1mTBikkfBfsaVACkVtXwWnUfDrXzDAbVRtMDXHN1_wDfgwuJJwhf1WgrzGSruK_23kYBW8F2TLSM0");
    izdelaj(nizi, 106, "Uhjpqs87wK1K3Jpm0QOc6VkAPxlvUk_160JO5xXvx1krERqzleIFnrmkSZIaN5Jb_HYheWMHhSGMUkNjvZ6_oE_3O55fpvgf");
    nizi[107] = nizi[85];
    izdelaj(nizi, 108, "qoRd22LiCzSUlnGiCqM6iA3Y_BWCwWRC");
    izdelaj(nizi, 109, "9r0ck5C9kgVgCNO34FbQsr9yrR_x7foWUM89oOpwGpqnpI83gxR2irIKHTXsYCrCqH3ibY5JoTT5cbuBf_23Sq1V2DLkiU5");
    izdelaj(nizi, 110, "ysK88iOvkXsBhMVbE99KFZ7Sge1EGQlgNF9pEeppzxr7dy8S6HPah5U9EH_A81iDcg02RCSoJW");
    izdelaj(nizi, 111, "BtzIFCKzERp2sw1dlysRyQ4NlNB41tGBmCUha0x_K");
    izdelaj(nizi, 112, "a6s8m2venMbh52VnGVNu1RgOjg1tKyqK6dSHCs4ZWmFS4vN1LNVJ__7Xt2VTl7uPCS9kgXCX8k8zBkexWuKTy7PUWNK4YS");
    izdelaj(nizi, 113, "aV25P2ByxKv0Qzf80FV7UHyQInuntZpbU0AyeXw");
    nizi[114] = nizi[9];
    izdelaj(nizi, 115, "y97BtwXiCrYlxPf1MpT7");
    izdelaj(nizi, 116, "kicy7m3CxLC11HaHRyIewP1i");
    izdelaj(nizi, 117, "v1KMvK2_4jzhA23Zo1B6ujwmyf1V88_j3DzAy_02fpxBr8qgvaA3hvFI");
    izdelaj(nizi, 118, "NkIyluQ5NVWOaF5crEQDkfmYPuQTERbllzfEzWV_OTNUDE18KtNx3XZCH2psrNIrlkK_rRjDkhjSUKDZ");
    izdelaj(nizi, 119, "SZB4B3KohYGFGEJOVevI");
    izdelaj(nizi, 120, "BVUkCJQsyQjMyfsjGQEDFwAbpDtnjA530u42d_d3AY5CMl339lAMftk");
    izdelaj(nizi, 121, "CNxqzSQMrXK1E4Qszf_NLcdljlkIwhuwYQw0euYzeNbVSjGVqzP3cZCACnn_");
    izdelaj(nizi, 122, "H90Si8JDRF10UyM9cP6Y9cSR4_XYbth57XBsosMfvYM4sKVmtha7AmFD37dkstGoRCwf_BSVZt6_Hg91");
    nizi[123] = nizi[121];
    izdelaj(nizi, 124, "HyaBg4TKqz3mmIsIaHCfbvONfvoHk8cP2248zF0CbA3J_nZTNpeLXGFlJLvQpxAo6v6v");
    izdelaj(nizi, 125, "1wYpbSoY8LMU47dfoO1PM90cA3KusLRNuck14sldyyhebojCPXIZ7");
    izdelaj(nizi, 126, "MpPc8NhxYjIyB4mCmrLlQNQGpFBXEFpYv7ZpGurvJogaI9pYa");
    nizi[127] = nizi[11];
    izdelaj(nizi, 128, "G9JeJz58Fn8jqldcpvkv_rcDt7QEF7zsPGb4cflNGLXa_QUsIyEl3xWh9kGbDT0O8R2wgvHCUer5akpT_vlnSXJ");
    izdelaj(nizi, 129, "M_fi68yfbl8Kati7QeZzkGUYRwR7HaIVMvU59Jp7Ni1goI7ZRYMsAjgx2DJ6Ftv90DXgf_1uTI6nuokxSZrU");
    izdelaj(nizi, 130, "3EzXTNrlU0T4MySGmBnsFGxHFdVcFCV");
    izdelaj(nizi, 131, "rnDro7G8eExWQ891pp9szNgmbj6Wgvgz");
    nizi[132] = nizi[25];
    izdelaj(nizi, 133, "Q7");
    izdelaj(nizi, 134, "ld4ZVa_msyJ9iqrg_kkwTCtbJjY24cXQriEiQBm");
    izdelaj(nizi, 135, "L0VtIj5gzht9HZkxMNBOp3ff");
    izdelaj(nizi, 136, "AOgheWr5KA9sdHLWEF");
    izdelaj(nizi, 137, "Bt9jjG2mCGdpGkQB6jouF6RyZXiIdGdVW77qyfG4Loz9i4gag4krz1SDHwm7nK_ppsxiy6U");
    izdelaj(nizi, 138, "2GFCgjvq8JB9ZhF");
    izdelaj(nizi, 139, "i3uV463o0");

    char** niziKopija = malloc((n + 1) * sizeof(char*));
    memcpy(niziKopija, nizi, (n + 1) * sizeof(char*));

    razbohoti(nizi);

    for (int i = 0; i < n; i++) {
        printf("%d", nizi[i] == niziKopija[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("<%s>\n", nizi[i]);
        free(nizi[i]);
    }

    free(nizi);
    free(niziKopija);

    printf("-----\n");

    return 0;
}
