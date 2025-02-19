
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
    int n = 176;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "aXb_RuJmQcQwEDjW35X0XDiBOrSsZdfyMmb0DTbm");
    izdelaj(nizi, 1, "aXb_RuJmQcQwEDjW35X0XDiBOrSsZdfyMmb0DTbm");
    izdelaj(nizi, 2, "q6");
    izdelaj(nizi, 3, "YWJYu24uelG40Yd3FrPhmjNtIEefF4BwFDOIOjhDbaedAozB6gAIe16UCkR6_zczA_W");
    izdelaj(nizi, 4, "q6");
    izdelaj(nizi, 5, "KwyWm8pSakzXoTFtIHQUbYhQyftmPfSa7lktTF3xHTiVUVaA9PUyKAQsGLod8oE8ZcXmJ2K39");
    izdelaj(nizi, 6, "AYKWQKXQLrqHneJi54ISLwICxZ08HbrnXWjLWPAVJq0A0xgTlmZ3_klgxSOubS0DtPRU");
    izdelaj(nizi, 7, "YWJYu24uelG40Yd3FrPhmjNtIEefF4BwFDOIOjhDbaedAozB6gAIe16UCkR6_zczA_W");
    izdelaj(nizi, 8, "YWJYu24uelG40Yd3FrPhmjNtIEefF4BwFDOIOjhDbaedAozB6gAIe16UCkR6_zczA_W");
    izdelaj(nizi, 9, "xkaHDHKwppeyQKQGH6T7RDXWGsFt9SE4W9OvmOXmbCaTqf2bBjrpJF1v4qNIZoq67Nmd0VMgNX2GZErUKN4OwpdnT");
    izdelaj(nizi, 10, "xkaHDHKwppeyQKQGH6T7RDXWGsFt9SE4W9OvmOXmbCaTqf2bBjrpJF1v4qNIZoq67Nmd0VMgNX2GZErUKN4OwpdnT");
    izdelaj(nizi, 11, "xkaHDHKwppeyQKQGH6T7RDXWGsFt9SE4W9OvmOXmbCaTqf2bBjrpJF1v4qNIZoq67Nmd0VMgNX2GZErUKN4OwpdnT");
    izdelaj(nizi, 12, "IPRhIzigDcxRpM8nuHkYX");
    izdelaj(nizi, 13, "_87kaRBbnwvmc6u77pHGI5ok_FPNlI6CqVg6T_Uha2CNSJLqdvT4AUxaWMg_lapbzv5kMf12D6XdXPiBI7Cw2GRXE48y65");
    izdelaj(nizi, 14, "JvYLdsodKfZ29FHtt3j0dETrEHwbfVYb5IdoazZW3UC4Do471AHzpNtLxK8_Tbdd2hepWUUsbrxaRKtnoPAQXtMOIwJ0Ysv4IQ");
    izdelaj(nizi, 15, "axosy8AdywbnCCxbAxGZMZ7Q8UTDqjVMytAnClPcZ2iswlbHWO3Mibyxcc0ypSDkY5a9kwnlupEhOCjF3YoH6kd430");
    izdelaj(nizi, 16, "YWJYu24uelG40Yd3FrPhmjNtIEefF4BwFDOIOjhDbaedAozB6gAIe16UCkR6_zczA_W");
    izdelaj(nizi, 17, "6ZNnTvpbAJmvQro7rH6yGgdrePC3e2xc3T1h_QIcPmrSdjw10CxT2sgMmBTQSCwRiPCT4sIEKe73EH01lP2");
    izdelaj(nizi, 18, "q6");
    izdelaj(nizi, 19, "2EHqSjmKXxgtENkhRotmHpphVGo6h4mq");
    izdelaj(nizi, 20, "JvYLdsodKfZ29FHtt3j0dETrEHwbfVYb5IdoazZW3UC4Do471AHzpNtLxK8_Tbdd2hepWUUsbrxaRKtnoPAQXtMOIwJ0Ysv4IQ");
    izdelaj(nizi, 21, "q6");
    izdelaj(nizi, 22, "q6");
    izdelaj(nizi, 23, "jEgb839rAj_e2qvo1pyJiQkDg1");
    izdelaj(nizi, 24, "yzE5P");
    izdelaj(nizi, 25, "DYtKHM");
    izdelaj(nizi, 26, "d_aTx7MrsDitZyM5pH8jzSZldNY9CAgJdiyh5Lef02LHwtrwIN7u29RnL");
    izdelaj(nizi, 27, "_87kaRBbnwvmc6u77pHGI5ok_FPNlI6CqVg6T_Uha2CNSJLqdvT4AUxaWMg_lapbzv5kMf12D6XdXPiBI7Cw2GRXE48y65");
    izdelaj(nizi, 28, "AYKWQKXQLrqHneJi54ISLwICxZ08HbrnXWjLWPAVJq0A0xgTlmZ3_klgxSOubS0DtPRU");
    izdelaj(nizi, 29, "vhJV5o1E27M5JvJwbCu7s23vmc2Q4tRB067ewxFp6Kz");
    izdelaj(nizi, 30, "dclRnB");
    izdelaj(nizi, 31, "2konywSJYmXPM");
    izdelaj(nizi, 32, "v");
    izdelaj(nizi, 33, "PMumIZ0WkSyRGGf6qBrfXH8WQpsNEbQjQEAQ");
    izdelaj(nizi, 34, "kSoPFd3hdy0HS3rUeJVlrlN3wUDF9MD7P6BUM1RcpbbURSGdh3xNHJCIWTpGWyU8T");
    izdelaj(nizi, 35, "q6");
    izdelaj(nizi, 36, "PMumIZ0WkSyRGGf6qBrfXH8WQpsNEbQjQEAQ");
    izdelaj(nizi, 37, "q6");
    izdelaj(nizi, 38, "xkaHDHKwppeyQKQGH6T7RDXWGsFt9SE4W9OvmOXmbCaTqf2bBjrpJF1v4qNIZoq67Nmd0VMgNX2GZErUKN4OwpdnT");
    izdelaj(nizi, 39, "q6");
    izdelaj(nizi, 40, "KCE9pIwfq270H7uzm96eaj9hpQ7qrYjsofCl5NR8L");
    izdelaj(nizi, 41, "q6");
    izdelaj(nizi, 42, "58p09chv0w6EVsJdp6qmRdp7khwnmu7zmaJpGT0C1FFDH_54liL8wTyi");
    izdelaj(nizi, 43, "BWAyaQltfRM2uUcSzJaACnLq_1268Le8NKlgEpf1G4Dkgolrf4KckTSUEja4OFHwhajhCTwrfk0D_bOeEibyOfG7MgzKpFU3aK");
    izdelaj(nizi, 44, "PMumIZ0WkSyRGGf6qBrfXH8WQpsNEbQjQEAQ");
    izdelaj(nizi, 45, "PMumIZ0WkSyRGGf6qBrfXH8WQpsNEbQjQEAQ");
    izdelaj(nizi, 46, "XwSccnyFlAGgZ0AW03fWzmCw7C2KAEu47g5ww8VaGsekxZFPSresQ");
    izdelaj(nizi, 47, "YWJYu24uelG40Yd3FrPhmjNtIEefF4BwFDOIOjhDbaedAozB6gAIe16UCkR6_zczA_W");
    izdelaj(nizi, 48, "X2ZZEr4nnx_W4YkT2JjFrUGQhGvyo_8PKcc");
    izdelaj(nizi, 49, "iN1M1zA1rVLNlpYIGk09fg3h0yMDLJd16thSYoamcev_WKoK1endUQNGw");
    izdelaj(nizi, 50, "PMumIZ0WkSyRGGf6qBrfXH8WQpsNEbQjQEAQ");
    izdelaj(nizi, 51, "2EHqSjmKXxgtENkhRotmHpphVGo6h4mq");
    izdelaj(nizi, 52, "d_aTx7MrsDitZyM5pH8jzSZldNY9CAgJdiyh5Lef02LHwtrwIN7u29RnL");
    izdelaj(nizi, 53, "_87kaRBbnwvmc6u77pHGI5ok_FPNlI6CqVg6T_Uha2CNSJLqdvT4AUxaWMg_lapbzv5kMf12D6XdXPiBI7Cw2GRXE48y65");
    izdelaj(nizi, 54, "aXb_RuJmQcQwEDjW35X0XDiBOrSsZdfyMmb0DTbm");
    izdelaj(nizi, 55, "_87kaRBbnwvmc6u77pHGI5ok_FPNlI6CqVg6T_Uha2CNSJLqdvT4AUxaWMg_lapbzv5kMf12D6XdXPiBI7Cw2GRXE48y65");
    izdelaj(nizi, 56, "YWJYu24uelG40Yd3FrPhmjNtIEefF4BwFDOIOjhDbaedAozB6gAIe16UCkR6_zczA_W");
    izdelaj(nizi, 57, "9");
    izdelaj(nizi, 58, "dclRnB");
    izdelaj(nizi, 59, "vwxDEoufsI2926n9T9JF1y426UUMd6MswSZwgzL0LYMc7F7wbJ36QlgIgmWAGtvIrzlCWjyClWh4QQrLfLCUNYiDY50ZfY");
    izdelaj(nizi, 60, "q6");
    izdelaj(nizi, 61, "SzyZRrgcOofB3tcuyQhE4GMNvymC9xO0DFJTg9Fe3iHM7WedsJyLsPchDJkgaQB");
    izdelaj(nizi, 62, "S3mO9boFxUlxXudvsFXAP1NgN4tTRFgNMdAojmqQNMi61cvyMrsr8yuBVRulixupuZPjC");
    izdelaj(nizi, 63, "vhJV5o1E27M5JvJwbCu7s23vmc2Q4tRB067ewxFp6Kz");
    izdelaj(nizi, 64, "YWJYu24uelG40Yd3FrPhmjNtIEefF4BwFDOIOjhDbaedAozB6gAIe16UCkR6_zczA_W");
    izdelaj(nizi, 65, "xkaHDHKwppeyQKQGH6T7RDXWGsFt9SE4W9OvmOXmbCaTqf2bBjrpJF1v4qNIZoq67Nmd0VMgNX2GZErUKN4OwpdnT");
    izdelaj(nizi, 66, "fk1");
    izdelaj(nizi, 67, "6FEQ");
    izdelaj(nizi, 68, "S3mO9boFxUlxXudvsFXAP1NgN4tTRFgNMdAojmqQNMi61cvyMrsr8yuBVRulixupuZPjC");
    izdelaj(nizi, 69, "axosy8AdywbnCCxbAxGZMZ7Q8UTDqjVMytAnClPcZ2iswlbHWO3Mibyxcc0ypSDkY5a9kwnlupEhOCjF3YoH6kd430");
    izdelaj(nizi, 70, "aXb_RuJmQcQwEDjW35X0XDiBOrSsZdfyMmb0DTbm");
    izdelaj(nizi, 71, "_87kaRBbnwvmc6u77pHGI5ok_FPNlI6CqVg6T_Uha2CNSJLqdvT4AUxaWMg_lapbzv5kMf12D6XdXPiBI7Cw2GRXE48y65");
    izdelaj(nizi, 72, "PMumIZ0WkSyRGGf6qBrfXH8WQpsNEbQjQEAQ");
    izdelaj(nizi, 73, "S3mO9boFxUlxXudvsFXAP1NgN4tTRFgNMdAojmqQNMi61cvyMrsr8yuBVRulixupuZPjC");
    izdelaj(nizi, 74, "vhJV5o1E27M5JvJwbCu7s23vmc2Q4tRB067ewxFp6Kz");
    izdelaj(nizi, 75, "uX8eMTCWv6nff4SLUvLtAdiuM1x33xEutDS1er");
    izdelaj(nizi, 76, "5zkcTWsdD01deOgU3kHSbL_d07FRSSWUX_ErJRwddFlJO5N_0mV2fErWVhnytK2cYBMeNMHcOJ6e6ttHj1LsT");
    izdelaj(nizi, 77, "qR1LGrXmSsl3YXCqsV0JINWD35OcA6LixnLw");
    izdelaj(nizi, 78, "q6");
    izdelaj(nizi, 79, "Wl2DDPuRkNe5iwo");
    izdelaj(nizi, 80, "uX8eMTCWv6nff4SLUvLtAdiuM1x33xEutDS1er");
    izdelaj(nizi, 81, "cXAB9k23S7nfNiuTsLDrkpnvZhbFFUvkXM5f67plGnumo0ge9vzeuybIoS4AI8J3b3SCh1gSir18TnTOyWmJ");
    izdelaj(nizi, 82, "aXb_RuJmQcQwEDjW35X0XDiBOrSsZdfyMmb0DTbm");
    izdelaj(nizi, 83, "vlHpYguKxNfdx1");
    izdelaj(nizi, 84, "_87kaRBbnwvmc6u77pHGI5ok_FPNlI6CqVg6T_Uha2CNSJLqdvT4AUxaWMg_lapbzv5kMf12D6XdXPiBI7Cw2GRXE48y65");
    izdelaj(nizi, 85, "oy8zGAIvY9ND0ATU2vH2TJ3rGD1hAGgQ7Y5gTSLaZjmTU6V14KGKtyYwWo98_WsaKWJ7kpJ24X");
    izdelaj(nizi, 86, "q6");
    izdelaj(nizi, 87, "9");
    izdelaj(nizi, 88, "_87kaRBbnwvmc6u77pHGI5ok_FPNlI6CqVg6T_Uha2CNSJLqdvT4AUxaWMg_lapbzv5kMf12D6XdXPiBI7Cw2GRXE48y65");
    izdelaj(nizi, 89, "YWJYu24uelG40Yd3FrPhmjNtIEefF4BwFDOIOjhDbaedAozB6gAIe16UCkR6_zczA_W");
    izdelaj(nizi, 90, "0uMDPQqyL5JTI");
    izdelaj(nizi, 91, "JvYLdsodKfZ29FHtt3j0dETrEHwbfVYb5IdoazZW3UC4Do471AHzpNtLxK8_Tbdd2hepWUUsbrxaRKtnoPAQXtMOIwJ0Ysv4IQ");
    izdelaj(nizi, 92, "58p09chv0w6EVsJdp6qmRdp7khwnmu7zmaJpGT0C1FFDH_54liL8wTyi");
    izdelaj(nizi, 93, "q6");
    izdelaj(nizi, 94, "YWJYu24uelG40Yd3FrPhmjNtIEefF4BwFDOIOjhDbaedAozB6gAIe16UCkR6_zczA_W");
    izdelaj(nizi, 95, "dclRnB");
    izdelaj(nizi, 96, "K0MKKsjXmKbsbn_jbWatsqjBdQS02OLLpQjTPaJlGvA63O7TvpjJetACrF4TiU2lNdeTh1Jx62IcHitABY");
    izdelaj(nizi, 97, "hBsBHkphxkeWFVWnHqvrFcsz02hLBwDRt2K36cOkCKP_gYQmWBcnGjxErznNIfyQLl0gAAalY0zw37xL_zPH69heE9NSBZ9");
    izdelaj(nizi, 98, "vhJV5o1E27M5JvJwbCu7s23vmc2Q4tRB067ewxFp6Kz");
    izdelaj(nizi, 99, "kSoPFd3hdy0HS3rUeJVlrlN3wUDF9MD7P6BUM1RcpbbURSGdh3xNHJCIWTpGWyU8T");
    izdelaj(nizi, 100, "3zeH7E4vWRSWflaezDwf62ZmJJSpR4KuThROcyN8gLwVa");
    izdelaj(nizi, 101, "2konywSJYmXPM");
    izdelaj(nizi, 102, "XwSccnyFlAGgZ0AW03fWzmCw7C2KAEu47g5ww8VaGsekxZFPSresQ");
    izdelaj(nizi, 103, "9srOTiH2Xjr7qd2cgCORLY0PkiJj7KxRkNsyyL4asWBzRdWcgTiw8QDvLzvmeA45MdM0qFHVHD8BjP");
    izdelaj(nizi, 104, "hBsBHkphxkeWFVWnHqvrFcsz02hLBwDRt2K36cOkCKP_gYQmWBcnGjxErznNIfyQLl0gAAalY0zw37xL_zPH69heE9NSBZ9");
    izdelaj(nizi, 105, "Ml23KNkuA");
    izdelaj(nizi, 106, "KCE9pIwfq270H7uzm96eaj9hpQ7qrYjsofCl5NR8L");
    izdelaj(nizi, 107, "X2ZZEr4nnx_W4YkT2JjFrUGQhGvyo_8PKcc");
    izdelaj(nizi, 108, "zyUKKGhzmvKic1JZemHj6ThwQnxAbBA8uaPK2KoGxqVu37LUPR");
    izdelaj(nizi, 109, "1JdgtuqtZ3lpvcD0Epje804KljoeSfwDiIueEOEkU8J_mlyflv0jM3Qvi5zI9idKK71E9bh3qnYc02Yg4WfWE8g2decSMZdm53X");
    izdelaj(nizi, 110, "hBsBHkphxkeWFVWnHqvrFcsz02hLBwDRt2K36cOkCKP_gYQmWBcnGjxErznNIfyQLl0gAAalY0zw37xL_zPH69heE9NSBZ9");
    izdelaj(nizi, 111, "YWJYu24uelG40Yd3FrPhmjNtIEefF4BwFDOIOjhDbaedAozB6gAIe16UCkR6_zczA_W");
    izdelaj(nizi, 112, "vhJV5o1E27M5JvJwbCu7s23vmc2Q4tRB067ewxFp6Kz");
    izdelaj(nizi, 113, "t82XLUUfgwMff0RJVMAt2G8_M");
    izdelaj(nizi, 114, "saP8A36BiVJmXPCDOeMZIKAXLcwDhxAFf");
    izdelaj(nizi, 115, "Y8BAW8DXzZn7VTOf");
    izdelaj(nizi, 116, "58p09chv0w6EVsJdp6qmRdp7khwnmu7zmaJpGT0C1FFDH_54liL8wTyi");
    izdelaj(nizi, 117, "X2ZZEr4nnx_W4YkT2JjFrUGQhGvyo_8PKcc");
    izdelaj(nizi, 118, "9srOTiH2Xjr7qd2cgCORLY0PkiJj7KxRkNsyyL4asWBzRdWcgTiw8QDvLzvmeA45MdM0qFHVHD8BjP");
    izdelaj(nizi, 119, "YMo_pOpBgpcIQOfDu6OHHwySlubOmSQsqkdlWy0S4Fmw3V5dK9");
    izdelaj(nizi, 120, "YWJYu24uelG40Yd3FrPhmjNtIEefF4BwFDOIOjhDbaedAozB6gAIe16UCkR6_zczA_W");
    izdelaj(nizi, 121, "XwSccnyFlAGgZ0AW03fWzmCw7C2KAEu47g5ww8VaGsekxZFPSresQ");
    izdelaj(nizi, 122, "PMumIZ0WkSyRGGf6qBrfXH8WQpsNEbQjQEAQ");
    izdelaj(nizi, 123, "seiva7yPMNbTlr_VxmRqN8AIVfS7SKutiCilqkczjBx5pohOY78Op3E7mEwrrqSvw0ZQ8YVw");
    izdelaj(nizi, 124, "xkaHDHKwppeyQKQGH6T7RDXWGsFt9SE4W9OvmOXmbCaTqf2bBjrpJF1v4qNIZoq67Nmd0VMgNX2GZErUKN4OwpdnT");
    izdelaj(nizi, 125, "YWJYu24uelG40Yd3FrPhmjNtIEefF4BwFDOIOjhDbaedAozB6gAIe16UCkR6_zczA_W");
    izdelaj(nizi, 126, "Fv4X19RavTh6rGou75WqfcZ0RWrq8S4LqXrXYNURLyuT0t6oQHy");
    izdelaj(nizi, 127, "BWAyaQltfRM2uUcSzJaACnLq_1268Le8NKlgEpf1G4Dkgolrf4KckTSUEja4OFHwhajhCTwrfk0D_bOeEibyOfG7MgzKpFU3aK");
    izdelaj(nizi, 128, "UPEyJMYh_r_TSUP1p4TBBBFHIE8NclOBAZZ8tnSQVP5otiO7fgDbuSd0p8VPh7ojgI4lRR_xaMXQ8V2CuNz2kDJulxsjUa");
    izdelaj(nizi, 129, "JvYLdsodKfZ29FHtt3j0dETrEHwbfVYb5IdoazZW3UC4Do471AHzpNtLxK8_Tbdd2hepWUUsbrxaRKtnoPAQXtMOIwJ0Ysv4IQ");
    izdelaj(nizi, 130, "PMumIZ0WkSyRGGf6qBrfXH8WQpsNEbQjQEAQ");
    izdelaj(nizi, 131, "vEsS7BGjY36naaf3d_USKFhihcRPFAgl2CuXlkdd");
    izdelaj(nizi, 132, "ju5UmRcxJgkywIWNZIAgSbL32meGtfAfriXWtP0xVWz5QYHeMKn");
    izdelaj(nizi, 133, "vlHpYguKxNfdx1");
    izdelaj(nizi, 134, "YWJYu24uelG40Yd3FrPhmjNtIEefF4BwFDOIOjhDbaedAozB6gAIe16UCkR6_zczA_W");
    izdelaj(nizi, 135, "q6");
    izdelaj(nizi, 136, "J2nxHssKcFDOtEMXeOtOO58YwPZu99_CWCYjXaewJyh6SF2NDIyECRnaz4XgWiGRUlRphHrbV6TDdHBCrTeQExTaXU");
    izdelaj(nizi, 137, "cXAB9k23S7nfNiuTsLDrkpnvZhbFFUvkXM5f67plGnumo0ge9vzeuybIoS4AI8J3b3SCh1gSir18TnTOyWmJ");
    izdelaj(nizi, 138, "9");
    izdelaj(nizi, 139, "q6");
    izdelaj(nizi, 140, "1riNAniDjlTyEgJkHSPQ5tDsgBmpVOaCdnAUI_Ru2JVvqGq4pRI8ntO3vDb9oz_U8V8Pr7v1Y2UKLX");
    izdelaj(nizi, 141, "vhJV5o1E27M5JvJwbCu7s23vmc2Q4tRB067ewxFp6Kz");
    izdelaj(nizi, 142, "kSoPFd3hdy0HS3rUeJVlrlN3wUDF9MD7P6BUM1RcpbbURSGdh3xNHJCIWTpGWyU8T");
    izdelaj(nizi, 143, "0X2zsCgbVjHMMoJjFX_9EGieLwvHmqiWkSwE8dpilJsojCT0FelQ");
    izdelaj(nizi, 144, "T88MTBPKMgNQwKbMy8DBTHWT0pi4XeLfluKZAWSHF0uLKmbl2se9eLZKs0MbEEOf7tkW6cHXczjAwZ8OjnfG4eV");
    izdelaj(nizi, 145, "BWAyaQltfRM2uUcSzJaACnLq_1268Le8NKlgEpf1G4Dkgolrf4KckTSUEja4OFHwhajhCTwrfk0D_bOeEibyOfG7MgzKpFU3aK");
    izdelaj(nizi, 146, "YWJYu24uelG40Yd3FrPhmjNtIEefF4BwFDOIOjhDbaedAozB6gAIe16UCkR6_zczA_W");
    izdelaj(nizi, 147, "JZxRWYxuOTpBVAcy1kXhbWrOHWoUVp__ucBLEUvENrMhlCHeLf2a9aJIPKsewE7AZSMTGHaohYBx3qmXjNhoJ9gK3Cvi1K8kp9x");
    izdelaj(nizi, 148, "u301GzJajPb2dKUl91MQoCOGGjhF4lXPRJ_k8mwl_Co_KbQLTQUAaHDbORGT1ACybAWqp");
    izdelaj(nizi, 149, "oi3fbPNPpQdh3NaqROoJJEaQrwEp47VvQa");
    izdelaj(nizi, 150, "_plWG33ME2WBherxjl0O2ZvEPokg6xSmZ1KLwPOW6ozrXWSgvhQE3LvBSxK8yTUAUwUiByRjtomSrMpwdIEqVOGShLiNSe1g");
    izdelaj(nizi, 151, "aXb_RuJmQcQwEDjW35X0XDiBOrSsZdfyMmb0DTbm");
    izdelaj(nizi, 152, "ijxfqeEXi0WTAFqi1peu2oYQVyUfuK1wOcfjUrw2");
    izdelaj(nizi, 153, "MaAvFqFSs4MZEAquvAL_dni");
    izdelaj(nizi, 154, "ay3VQ8Mf7iZYpbeSA2oNFaDloO");
    izdelaj(nizi, 155, "xkaHDHKwppeyQKQGH6T7RDXWGsFt9SE4W9OvmOXmbCaTqf2bBjrpJF1v4qNIZoq67Nmd0VMgNX2GZErUKN4OwpdnT");
    izdelaj(nizi, 156, "T88MTBPKMgNQwKbMy8DBTHWT0pi4XeLfluKZAWSHF0uLKmbl2se9eLZKs0MbEEOf7tkW6cHXczjAwZ8OjnfG4eV");
    izdelaj(nizi, 157, "q6");
    izdelaj(nizi, 158, "T88MTBPKMgNQwKbMy8DBTHWT0pi4XeLfluKZAWSHF0uLKmbl2se9eLZKs0MbEEOf7tkW6cHXczjAwZ8OjnfG4eV");
    izdelaj(nizi, 159, "ay3VQ8Mf7iZYpbeSA2oNFaDloO");
    izdelaj(nizi, 160, "vhJV5o1E27M5JvJwbCu7s23vmc2Q4tRB067ewxFp6Kz");
    izdelaj(nizi, 161, "P4FkjkBzL2rVfVCx");
    izdelaj(nizi, 162, "kSoPFd3hdy0HS3rUeJVlrlN3wUDF9MD7P6BUM1RcpbbURSGdh3xNHJCIWTpGWyU8T");
    izdelaj(nizi, 163, "axosy8AdywbnCCxbAxGZMZ7Q8UTDqjVMytAnClPcZ2iswlbHWO3Mibyxcc0ypSDkY5a9kwnlupEhOCjF3YoH6kd430");
    izdelaj(nizi, 164, "vhJV5o1E27M5JvJwbCu7s23vmc2Q4tRB067ewxFp6Kz");
    izdelaj(nizi, 165, "1SoA4Q6F8Ig");
    izdelaj(nizi, 166, "ijxfqeEXi0WTAFqi1peu2oYQVyUfuK1wOcfjUrw2");
    izdelaj(nizi, 167, "q6");
    izdelaj(nizi, 168, "e_LL0H8Eu_FfJSYmzGUpX9hCzKD_rqeqq9xFdClB2gSXLOmZ_YwCvnxPYUQR6HSe64soujiL2nEjizo0hXO");
    izdelaj(nizi, 169, "kSoPFd3hdy0HS3rUeJVlrlN3wUDF9MD7P6BUM1RcpbbURSGdh3xNHJCIWTpGWyU8T");
    izdelaj(nizi, 170, "fA6KEpwSCXuj5GR2rfbHjC");
    izdelaj(nizi, 171, "bH7RGcVKuZ3d04hBb633LP8y9f4KWvA2nLOKxcZ1LRvkVn6_fnYYjxh");
    izdelaj(nizi, 172, "9srOTiH2Xjr7qd2cgCORLY0PkiJj7KxRkNsyyL4asWBzRdWcgTiw8QDvLzvmeA45MdM0qFHVHD8BjP");
    izdelaj(nizi, 173, "lXw4THIUomLdGC_k2s7SwH");
    izdelaj(nizi, 174, "vlHpYguKxNfdx1");
    izdelaj(nizi, 175, "cXAB9k23S7nfNiuTsLDrkpnvZhbFFUvkXM5f67plGnumo0ge9vzeuybIoS4AI8J3b3SCh1gSir18TnTOyWmJ");

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
