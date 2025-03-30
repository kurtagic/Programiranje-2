
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
    int n = 238;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "rq06Gmadjmx47l");
    izdelaj(nizi, 1, "LXgFlt_71zAS1sjHE27qO5mZ8M3LrBoIpIZdLXblx2CPq8dJQPLCcfUavY9LBAIN8ze");
    izdelaj(nizi, 2, "RgSMt5KhteW1jJdKIROixcvyRq_W5ePY2rM0NGECLnxCYJDp4JUFqFH");
    izdelaj(nizi, 3, "MZ57YbVxstRHvxH80TBGCjQlaj3BC0YI4ifYzhTl73G2R2xz6exTqOEVdWcL");
    izdelaj(nizi, 4, "rq06Gmadjmx47l");
    izdelaj(nizi, 5, "2zauqn");
    izdelaj(nizi, 6, "rq06Gmadjmx47l");
    izdelaj(nizi, 7, "MIzlXL180u9gqkQ9QTJ5QAIEe800DkYjo5ES6av2M8rzml5KWfLK5ycHeFauPkVm8UbQx5Cn2yHrys5T_H3Z0y");
    izdelaj(nizi, 8, "RgSMt5KhteW1jJdKIROixcvyRq_W5ePY2rM0NGECLnxCYJDp4JUFqFH");
    izdelaj(nizi, 9, "VFhmGmuvvACPr4ou7yWks8WWncya9uuL07M6DhWz_rGS");
    izdelaj(nizi, 10, "MIzlXL180u9gqkQ9QTJ5QAIEe800DkYjo5ES6av2M8rzml5KWfLK5ycHeFauPkVm8UbQx5Cn2yHrys5T_H3Z0y");
    izdelaj(nizi, 11, "rmaDwS9ulO_nkBm");
    izdelaj(nizi, 12, "oZjgWJdK");
    izdelaj(nizi, 13, "RgSMt5KhteW1jJdKIROixcvyRq_W5ePY2rM0NGECLnxCYJDp4JUFqFH");
    izdelaj(nizi, 14, "x69hz2i8dsFqk2ozJsC4I0qlsY9pVhLinbF0kk3gw_28rX3AwfTyelXRKPoLRvKsVigU5Z6CXSnH0OPjmpx35KAEPV2K9edo8FmT");
    izdelaj(nizi, 15, "V1VKVjCcYCTV6DUwNVAXK2H3XVL8L3NLCnsk0ngZgI6tA3y1LhvXDp2jnxeGQmxvZhKCDGI");
    izdelaj(nizi, 16, "l84uDntyLCtfnh");
    izdelaj(nizi, 17, "rmaDwS9ulO_nkBm");
    izdelaj(nizi, 18, "l84uDntyLCtfnh");
    izdelaj(nizi, 19, "WGumtsm9ga3b");
    izdelaj(nizi, 20, "WGumtsm9ga3b");
    izdelaj(nizi, 21, "RgSMt5KhteW1jJdKIROixcvyRq_W5ePY2rM0NGECLnxCYJDp4JUFqFH");
    izdelaj(nizi, 22, "rq06Gmadjmx47l");
    izdelaj(nizi, 23, "rq06Gmadjmx47l");
    izdelaj(nizi, 24, "rq06Gmadjmx47l");
    izdelaj(nizi, 25, "4EoI2GZEluJ89zbawzivhb3NrdYjhON1S");
    izdelaj(nizi, 26, "vdiR1kmsKuwSDY_JNdkXiAwOWjLib");
    izdelaj(nizi, 27, "V1VKVjCcYCTV6DUwNVAXK2H3XVL8L3NLCnsk0ngZgI6tA3y1LhvXDp2jnxeGQmxvZhKCDGI");
    izdelaj(nizi, 28, "LXgFlt_71zAS1sjHE27qO5mZ8M3LrBoIpIZdLXblx2CPq8dJQPLCcfUavY9LBAIN8ze");
    izdelaj(nizi, 29, "_nXj4yTBv7VejAoJsjfytASpUPXR3idSKmgGvzEpYxrhM6PwhUA10MwD5gp_oG6usSPs_l5c5hGLi3dEIGwUa1Dpbn1iX_0kDZiL");
    izdelaj(nizi, 30, "rq06Gmadjmx47l");
    izdelaj(nizi, 31, "_nXj4yTBv7VejAoJsjfytASpUPXR3idSKmgGvzEpYxrhM6PwhUA10MwD5gp_oG6usSPs_l5c5hGLi3dEIGwUa1Dpbn1iX_0kDZiL");
    izdelaj(nizi, 32, "mizT47UQjeJ");
    izdelaj(nizi, 33, "kCxKvL63EbOqtqvnXffWC7HGtA_obfa");
    izdelaj(nizi, 34, "rq06Gmadjmx47l");
    izdelaj(nizi, 35, "kCxKvL63EbOqtqvnXffWC7HGtA_obfa");
    izdelaj(nizi, 36, "mizT47UQjeJ");
    izdelaj(nizi, 37, "rq06Gmadjmx47l");
    izdelaj(nizi, 38, "vdiR1kmsKuwSDY_JNdkXiAwOWjLib");
    izdelaj(nizi, 39, "vdiR1kmsKuwSDY_JNdkXiAwOWjLib");
    izdelaj(nizi, 40, "WGumtsm9ga3b");
    izdelaj(nizi, 41, "mKNY3LJUnQkhflpzMAhePaggoLg9SvPYN8KwC3l504G_xFyztNZvNpmakQ0pffUUf9dESqmiDTHkieDY0b4pmFf4");
    izdelaj(nizi, 42, "WGumtsm9ga3b");
    izdelaj(nizi, 43, "R3wrTaamr_wvxi6A5NUizh4i");
    izdelaj(nizi, 44, "mizT47UQjeJ");
    izdelaj(nizi, 45, "h3wGyE211CMk4si2E1e21S9j5_vaOj88wWDe_8010r3uKioLfb3i_M8HFBG9l2BdXhO");
    izdelaj(nizi, 46, "MqtoZmqf3zocEj_sYm1irCfSY0yUDrzGnBJ1bN78jI5ir45n9NcwrdLJ8JKRP0");
    izdelaj(nizi, 47, "rq06Gmadjmx47l");
    izdelaj(nizi, 48, "BU");
    izdelaj(nizi, 49, "vdiR1kmsKuwSDY_JNdkXiAwOWjLib");
    izdelaj(nizi, 50, "rq06Gmadjmx47l");
    izdelaj(nizi, 51, "mizT47UQjeJ");
    izdelaj(nizi, 52, "w_SAZ3V6C9yIIbV9ArsE5VZcrtgtNLXMKpFaa6Qtfw9KyauiH1PcFARcZnQjG");
    izdelaj(nizi, 53, "VFhmGmuvvACPr4ou7yWks8WWncya9uuL07M6DhWz_rGS");
    izdelaj(nizi, 54, "Riauyo0VR1fCXG2pa05cbkGfwUL0VgGAcTD7IZsP");
    izdelaj(nizi, 55, "R7WzgMLz_F");
    izdelaj(nizi, 56, "7vz5hdRi4PNjUynemfSK6kfXRiAn8TMLttGHkxFTYe8avhgJU2QzK");
    izdelaj(nizi, 57, "mizT47UQjeJ");
    izdelaj(nizi, 58, "rq06Gmadjmx47l");
    izdelaj(nizi, 59, "FrcZjwVy1a6SJOj6oQ64rk6eJImVyrJ1f5M_Ia8Y4BuJMyZrLvYBAGk6RTYgHYHAkrGWII4izK1xMHINeBIw41zEx4VeI05");
    izdelaj(nizi, 60, "WGumtsm9ga3b");
    izdelaj(nizi, 61, "2zauqn");
    izdelaj(nizi, 62, "mizT47UQjeJ");
    izdelaj(nizi, 63, "dJ6NbWUzaIDSnbkpXULc4zET6X2HwxqoBHLmRAhBJSByv3HGMIxz_CvqlNZv1gR8dZjudiYv7apErJFibMibcp2ouy3QOCbSD");
    izdelaj(nizi, 64, "VFhmGmuvvACPr4ou7yWks8WWncya9uuL07M6DhWz_rGS");
    izdelaj(nizi, 65, "GnPB");
    izdelaj(nizi, 66, "FrcZjwVy1a6SJOj6oQ64rk6eJImVyrJ1f5M_Ia8Y4BuJMyZrLvYBAGk6RTYgHYHAkrGWII4izK1xMHINeBIw41zEx4VeI05");
    izdelaj(nizi, 67, "WGumtsm9ga3b");
    izdelaj(nizi, 68, "cgP8h");
    izdelaj(nizi, 69, "mizT47UQjeJ");
    izdelaj(nizi, 70, "LXgFlt_71zAS1sjHE27qO5mZ8M3LrBoIpIZdLXblx2CPq8dJQPLCcfUavY9LBAIN8ze");
    izdelaj(nizi, 71, "FrcZjwVy1a6SJOj6oQ64rk6eJImVyrJ1f5M_Ia8Y4BuJMyZrLvYBAGk6RTYgHYHAkrGWII4izK1xMHINeBIw41zEx4VeI05");
    izdelaj(nizi, 72, "rmaDwS9ulO_nkBm");
    izdelaj(nizi, 73, "RgSMt5KhteW1jJdKIROixcvyRq_W5ePY2rM0NGECLnxCYJDp4JUFqFH");
    izdelaj(nizi, 74, "dmOCNXFGdaUaJWlhkMmOZQR");
    izdelaj(nizi, 75, "3jiRzi6pgvBvAsWWUgGLoayuiMFbHnEgvDcoDj3XV4_HqeUknJX5rQ96AKd6JocGPOOVq");
    izdelaj(nizi, 76, "LXgFlt_71zAS1sjHE27qO5mZ8M3LrBoIpIZdLXblx2CPq8dJQPLCcfUavY9LBAIN8ze");
    izdelaj(nizi, 77, "C44Z3I5ASmYuF3jJ_J5Aoo8ic76SX_DkxTzGdBxaXdczcmCR");
    izdelaj(nizi, 78, "V1VKVjCcYCTV6DUwNVAXK2H3XVL8L3NLCnsk0ngZgI6tA3y1LhvXDp2jnxeGQmxvZhKCDGI");
    izdelaj(nizi, 79, "WGumtsm9ga3b");
    izdelaj(nizi, 80, "cXSnttP0POR63PdozfxmeQR8MxlC7Tt7HPCIAG1asuNfA_UjOlcXMhdDaoc_D_3nVN5Zf2b6BK2EiED5_f");
    izdelaj(nizi, 81, "OjeG7sMrakKKUahAu2FcxtoxLRZuwZYxOUar7JeDAywT");
    izdelaj(nizi, 82, "x69hz2i8dsFqk2ozJsC4I0qlsY9pVhLinbF0kk3gw_28rX3AwfTyelXRKPoLRvKsVigU5Z6CXSnH0OPjmpx35KAEPV2K9edo8FmT");
    izdelaj(nizi, 83, "RgSMt5KhteW1jJdKIROixcvyRq_W5ePY2rM0NGECLnxCYJDp4JUFqFH");
    izdelaj(nizi, 84, "RgSMt5KhteW1jJdKIROixcvyRq_W5ePY2rM0NGECLnxCYJDp4JUFqFH");
    izdelaj(nizi, 85, "S_pDCJkAOi1QbH0Uts2URtkFhoQHweEnt74OduTgA0fYT2ViP4BsHRnCvdCIwO1EzxeIdNa");
    izdelaj(nizi, 86, "C6PhKippKF3VzufZxpTnGGNr8p5AugvpTzoVj2WCcxZ2z9z3");
    izdelaj(nizi, 87, "zrc7CDKuC4");
    izdelaj(nizi, 88, "5GdAQBnbBJrWsv3AWmFdgt9BIzJ6hMm3");
    izdelaj(nizi, 89, "MqtoZmqf3zocEj_sYm1irCfSY0yUDrzGnBJ1bN78jI5ir45n9NcwrdLJ8JKRP0");
    izdelaj(nizi, 90, "vdiR1kmsKuwSDY_JNdkXiAwOWjLib");
    izdelaj(nizi, 91, "kvuSLFq9z6peZ6CfGt7KzX7yiSniBDOfFwLys91ZNBel9SgrNRJwFfWgC4xFaXgVJfS2XWuOlQdil");
    izdelaj(nizi, 92, "WGumtsm9ga3b");
    izdelaj(nizi, 93, "rq06Gmadjmx47l");
    izdelaj(nizi, 94, "WGumtsm9ga3b");
    izdelaj(nizi, 95, "0Rc8QGDiKbWg0z");
    izdelaj(nizi, 96, "2zauqn");
    izdelaj(nizi, 97, "RgSMt5KhteW1jJdKIROixcvyRq_W5ePY2rM0NGECLnxCYJDp4JUFqFH");
    izdelaj(nizi, 98, "UqM_9tR4y5XFwaK2uFn2hXxEyLsEoFYMPfQPh3sSDnh9ISdgD9VIpPM1k4elGWEaNbOnO0_Kvl4i_3Sp589Mq9UYXe5RJ");
    izdelaj(nizi, 99, "7rGTspHuAhjjmkktVn9z8K2jLZY1VGJoRqL47h2n98p");
    izdelaj(nizi, 100, "zew0TQI21qJdwa");
    izdelaj(nizi, 101, "vrMz4lAzQvz2jQnM");
    izdelaj(nizi, 102, "4FdeCKlWoN5y6WezopS07kb_UUwUpYgE_LAzJHWMUWpTwKTesPGZapvuVsfDIHKrbvr039joUoNlI4D8lgbR1DY6_HPeQ");
    izdelaj(nizi, 103, "2zauqn");
    izdelaj(nizi, 104, "MZ57YbVxstRHvxH80TBGCjQlaj3BC0YI4ifYzhTl73G2R2xz6exTqOEVdWcL");
    izdelaj(nizi, 105, "rq06Gmadjmx47l");
    izdelaj(nizi, 106, "cgP8h");
    izdelaj(nizi, 107, "WGumtsm9ga3b");
    izdelaj(nizi, 108, "27idGCHlYSAMmxWOzJtTwefLPVGxF1IUO3HYRjLr58qLqZreYaOcjGM2UkhrR7U8UXska");
    izdelaj(nizi, 109, "s3Y_R0n07nSeuH_x2ZOYKP6tZQIZKuDMvrYxGfyMkvIpVWld3pZ4I_WxAWeSnIEeq6qr61GA5S16BsBsQjq2lZcxteeX89WydK0U");
    izdelaj(nizi, 110, "92qFIv4ct");
    izdelaj(nizi, 111, "yowt3hjHcfqq_9f350fRC3WC1O");
    izdelaj(nizi, 112, "MIzlXL180u9gqkQ9QTJ5QAIEe800DkYjo5ES6av2M8rzml5KWfLK5ycHeFauPkVm8UbQx5Cn2yHrys5T_H3Z0y");
    izdelaj(nizi, 113, "UqM_9tR4y5XFwaK2uFn2hXxEyLsEoFYMPfQPh3sSDnh9ISdgD9VIpPM1k4elGWEaNbOnO0_Kvl4i_3Sp589Mq9UYXe5RJ");
    izdelaj(nizi, 114, "0cNNj5Nd6d9O0ewj7c3vxyKFM_3gnEZtfO0lovv_Uq794nlZYNFwDThNqApQx3PYw1VioFge7f41sYMD4qrJ");
    izdelaj(nizi, 115, "rq06Gmadjmx47l");
    izdelaj(nizi, 116, "V1VKVjCcYCTV6DUwNVAXK2H3XVL8L3NLCnsk0ngZgI6tA3y1LhvXDp2jnxeGQmxvZhKCDGI");
    izdelaj(nizi, 117, "x69hz2i8dsFqk2ozJsC4I0qlsY9pVhLinbF0kk3gw_28rX3AwfTyelXRKPoLRvKsVigU5Z6CXSnH0OPjmpx35KAEPV2K9edo8FmT");
    izdelaj(nizi, 118, "nhkLQ3k4zvVt6Gqvsr_JTWINcG_CWgkixhkN9OLTWhBOKpzIybUffcPmaHmVyv_yrng4H_gwN7vFqNiJ5jDciw5uWPd_GBglVc6");
    izdelaj(nizi, 119, "2TAMShFZzof_6niD9IoyWrmhqSYTPjVdmmNQ6hMHRX20jOrsdmShNfVY01A");
    izdelaj(nizi, 120, "WGumtsm9ga3b");
    izdelaj(nizi, 121, "MyaO73a8wKaeO2w9KiYcefFP79bkdAoa57SUYfqfE_JfOWguGG12mgAm87IiuEj7UFzddgr5Be1dgRTUNaDEfWXOlvjDKS");
    izdelaj(nizi, 122, "MqtoZmqf3zocEj_sYm1irCfSY0yUDrzGnBJ1bN78jI5ir45n9NcwrdLJ8JKRP0");
    izdelaj(nizi, 123, "l84uDntyLCtfnh");
    izdelaj(nizi, 124, "LXgFlt_71zAS1sjHE27qO5mZ8M3LrBoIpIZdLXblx2CPq8dJQPLCcfUavY9LBAIN8ze");
    izdelaj(nizi, 125, "dmOCNXFGdaUaJWlhkMmOZQR");
    izdelaj(nizi, 126, "0SkIVHdZ");
    izdelaj(nizi, 127, "rq06Gmadjmx47l");
    izdelaj(nizi, 128, "rddxcXr5wh2yY1CoQql3JiE2uCQS89_KmvASez");
    izdelaj(nizi, 129, "yowt3hjHcfqq_9f350fRC3WC1O");
    izdelaj(nizi, 130, "rq06Gmadjmx47l");
    izdelaj(nizi, 131, "0SkIVHdZ");
    izdelaj(nizi, 132, "63hyKVmVWzkdNMjj1jc8vTys269NVz4q8aSNRHUFdC");
    izdelaj(nizi, 133, "rmaDwS9ulO_nkBm");
    izdelaj(nizi, 134, "MIzlXL180u9gqkQ9QTJ5QAIEe800DkYjo5ES6av2M8rzml5KWfLK5ycHeFauPkVm8UbQx5Cn2yHrys5T_H3Z0y");
    izdelaj(nizi, 135, "iiSux4YG_8DvmGSyB1tr2XlCig96KZ5UMD_6I2VEACYi4Uzj0yNJg_zhZN5DW7KT4QwdTQecS");
    izdelaj(nizi, 136, "3N1MWNv6HuGQ3B08tDbtYBj");
    izdelaj(nizi, 137, "rq06Gmadjmx47l");
    izdelaj(nizi, 138, "tEhbVvfYTDq0xwIszvTSU");
    izdelaj(nizi, 139, "5zgtLqGn3U2rABTLdOhQbpc5ORMMge3xwtcGkYbjxLkFZac");
    izdelaj(nizi, 140, "YCwv");
    izdelaj(nizi, 141, "vYnv179JbUFbpwUbbd0rrIQ8YMv2LAB4aQuRCc2Gdiaq6fA1NuZ");
    izdelaj(nizi, 142, "RgSMt5KhteW1jJdKIROixcvyRq_W5ePY2rM0NGECLnxCYJDp4JUFqFH");
    izdelaj(nizi, 143, "rq06Gmadjmx47l");
    izdelaj(nizi, 144, "uc89ewS4V5XJtbIN0GGSd76l5bf9MerW9XZtBkffYuKCgUn8AFbDqzUufF8_PvHgp5M23IkxB");
    izdelaj(nizi, 145, "mizT47UQjeJ");
    izdelaj(nizi, 146, "pRh_SrHppdnrsQ5Xn7BVJtI_QO0g");
    izdelaj(nizi, 147, "WGumtsm9ga3b");
    izdelaj(nizi, 148, "_nXj4yTBv7VejAoJsjfytASpUPXR3idSKmgGvzEpYxrhM6PwhUA10MwD5gp_oG6usSPs_l5c5hGLi3dEIGwUa1Dpbn1iX_0kDZiL");
    izdelaj(nizi, 149, "7rGTspHuAhjjmkktVn9z8K2jLZY1VGJoRqL47h2n98p");
    izdelaj(nizi, 150, "X1pRQWbcI_9CGvuSbYDsCvtml16GUiRb6ExR869V6jEoQs6gsAtpvw8rKEX1pGTs");
    izdelaj(nizi, 151, "2KRB2rbj79x1iCF5J24oFB72EGAbHTjHSABmhaLQ_bHCyM28wxuL94rz847l5O_wbVVO7XZgdwxAkW8mSQy3Xb2OND_PPqY_O1");
    izdelaj(nizi, 152, "2konywSJYmXPM");
    izdelaj(nizi, 153, "2_MBDxlMVNCkFXXC5132PpL0G5LrOwNBcQNXw93wwy");
    izdelaj(nizi, 154, "5zgtLqGn3U2rABTLdOhQbpc5ORMMge3xwtcGkYbjxLkFZac");
    izdelaj(nizi, 155, "HfhTRZ2Q8Cs9UXs5bKA599z2sttViqpqXct6FQMbpPcQD5Gx4SZEsCRlPsI5Rle5Kf3ry4_PVL10Skuf8");
    izdelaj(nizi, 156, "0cNNj5Nd6d9O0ewj7c3vxyKFM_3gnEZtfO0lovv_Uq794nlZYNFwDThNqApQx3PYw1VioFge7f41sYMD4qrJ");
    izdelaj(nizi, 157, "yowt3hjHcfqq_9f350fRC3WC1O");
    izdelaj(nizi, 158, "MqtoZmqf3zocEj_sYm1irCfSY0yUDrzGnBJ1bN78jI5ir45n9NcwrdLJ8JKRP0");
    izdelaj(nizi, 159, "V1VKVjCcYCTV6DUwNVAXK2H3XVL8L3NLCnsk0ngZgI6tA3y1LhvXDp2jnxeGQmxvZhKCDGI");
    izdelaj(nizi, 160, "uEwBWyV4TiRfJ16rm6ebeDsD2X5r_xm2PonBGpT0HMFEw");
    izdelaj(nizi, 161, "0cNNj5Nd6d9O0ewj7c3vxyKFM_3gnEZtfO0lovv_Uq794nlZYNFwDThNqApQx3PYw1VioFge7f41sYMD4qrJ");
    izdelaj(nizi, 162, "WGumtsm9ga3b");
    izdelaj(nizi, 163, "C44Z3I5ASmYuF3jJ_J5Aoo8ic76SX_DkxTzGdBxaXdczcmCR");
    izdelaj(nizi, 164, "mizT47UQjeJ");
    izdelaj(nizi, 165, "BU");
    izdelaj(nizi, 166, "w_SAZ3V6C9yIIbV9ArsE5VZcrtgtNLXMKpFaa6Qtfw9KyauiH1PcFARcZnQjG");
    izdelaj(nizi, 167, "kvuSLFq9z6peZ6CfGt7KzX7yiSniBDOfFwLys91ZNBel9SgrNRJwFfWgC4xFaXgVJfS2XWuOlQdil");
    izdelaj(nizi, 168, "key3mBAVnq6rZ3gHfm31j1agVzeImYCMnBxfy1Kug6IdUwr2cp1Etg6jrUMUW_gykPEIX9TVF");
    izdelaj(nizi, 169, "gF_V4bbCHp0WbQbIc8VVS96xQl8rAYuOgYENW8rwJMM0HmM6N9um_KV5o22imzVslVnuz71a6hOs5nYBC4");
    izdelaj(nizi, 170, "i99dbtKmII8hZhVL1TJHTjRGAUn30So49wCDAYBd7iVM1bmZ1NoNrSoa7TqdeJMhQRywyqt");
    izdelaj(nizi, 171, "0Rc8QGDiKbWg0z");
    izdelaj(nizi, 172, "q2O6yyPbdG7");
    izdelaj(nizi, 173, "V1VKVjCcYCTV6DUwNVAXK2H3XVL8L3NLCnsk0ngZgI6tA3y1LhvXDp2jnxeGQmxvZhKCDGI");
    izdelaj(nizi, 174, "2KRB2rbj79x1iCF5J24oFB72EGAbHTjHSABmhaLQ_bHCyM28wxuL94rz847l5O_wbVVO7XZgdwxAkW8mSQy3Xb2OND_PPqY_O1");
    izdelaj(nizi, 175, "uEwBWyV4TiRfJ16rm6ebeDsD2X5r_xm2PonBGpT0HMFEw");
    izdelaj(nizi, 176, "TreEUHVEO6MObcrtIeLTpKX452M6q19ijZ0xNyM0HtsxJv3pnCECU840II9rMQfAD0oOrXEhhvItki");
    izdelaj(nizi, 177, "mEfO349fAUeU_5GFxpdh7");
    izdelaj(nizi, 178, "FrcZjwVy1a6SJOj6oQ64rk6eJImVyrJ1f5M_Ia8Y4BuJMyZrLvYBAGk6RTYgHYHAkrGWII4izK1xMHINeBIw41zEx4VeI05");
    izdelaj(nizi, 179, "HtTaT2P6VS4w53C2jd1teMLnYmch_SfeU5oJxp20pNBqsMtZ85bR3_YY9pzJJAhjGzTqXGMOIPDdCXsuAU6GSqU");
    izdelaj(nizi, 180, "fKVKo31SKpsEvvp42HEEk3qvFYMhVewA_BsUNuvlPj0G75FGXenj07hdBIie9kWJ29N22ijC3p3");
    izdelaj(nizi, 181, "ZBw17XQPXAnWvjs5Qum_PjnJrnKvMrdyqH8eksTZ8ZhzrApjmbTrbcuDC6OoC7t1S76vs");
    izdelaj(nizi, 182, "2TAMShFZzof_6niD9IoyWrmhqSYTPjVdmmNQ6hMHRX20jOrsdmShNfVY01A");
    izdelaj(nizi, 183, "pij8b1b6rtZmDA73QgM8bxJDDlYRSSSZt_8");
    izdelaj(nizi, 184, "IbFpMrNbd_tbLtuEy0W1pgvK_eG_VrsM4sK_byi");
    izdelaj(nizi, 185, "WGumtsm9ga3b");
    izdelaj(nizi, 186, "_tldiVbZAj1XIRrDJ1K0A0x_WwjNeqlG6kKB_Useivd1eIpXitozgdiNAeb6INSI3TXZrkPbetD4eKlf2IAiNQP2Az2ffLRY5ZtW");
    izdelaj(nizi, 187, "6Y3of8QB5gELHAVI9mvEWzm96bkRPL9mcABSG3j0ca2TFfEe9CP90H2rNiqA66Zm0daOMZQUoWSJ2Bk88");
    izdelaj(nizi, 188, "rN4iYt9aPgXI204g7o6eUErc1DT3YiefR7Ad9CAcVIpOiIdrXuhluoPbinsxtQA7FPAxNP6Logr7furEeVAKje_");
    izdelaj(nizi, 189, "_nXj4yTBv7VejAoJsjfytASpUPXR3idSKmgGvzEpYxrhM6PwhUA10MwD5gp_oG6usSPs_l5c5hGLi3dEIGwUa1Dpbn1iX_0kDZiL");
    izdelaj(nizi, 190, "_QlxU9ofOUDYkJvRMbVZyTFsaM7KVqi3fbxKtgESkgARqGu2b5ZUG");
    izdelaj(nizi, 191, "R7WzgMLz_F");
    izdelaj(nizi, 192, "Nk3t_oa42xdn4P");
    izdelaj(nizi, 193, "oZjgWJdK");
    izdelaj(nizi, 194, "Ks7qsG2V8RoKPcD1XczyZbVyii2HYr9kKndVgHHLyw15Fm6wG5rZkhw7");
    izdelaj(nizi, 195, "5iIXm4ITo4ZMlygexbXY1JAwSO1N_4Bs");
    izdelaj(nizi, 196, "b0S7MAcafnzPk7aW01rfXEG9EmVKS68IVvHdBCPYQZg4tZF");
    izdelaj(nizi, 197, "0cNNj5Nd6d9O0ewj7c3vxyKFM_3gnEZtfO0lovv_Uq794nlZYNFwDThNqApQx3PYw1VioFge7f41sYMD4qrJ");
    izdelaj(nizi, 198, "t82XLUUfgwMff0RJVMAt2G8_M");
    izdelaj(nizi, 199, "pRh_SrHppdnrsQ5Xn7BVJtI_QO0g");
    izdelaj(nizi, 200, "mseBhbrtVfoiykaPMDpw76MpKzg5upwDW4KnXmUXcI");
    izdelaj(nizi, 201, "YellJgg9353Jwhq9");
    izdelaj(nizi, 202, "ExR29s9VH2hVHYGl4n70sfX");
    izdelaj(nizi, 203, "yowt3hjHcfqq_9f350fRC3WC1O");
    izdelaj(nizi, 204, "xFyGB5v7QEeON_NPZpjYZGUobBprXL1MP0VWM");
    izdelaj(nizi, 205, "5dJ_JYmzfonj_bYaKoOaL55VfwDOqsHv7UhAJsLHnUPz3DgVx1oxJZay");
    izdelaj(nizi, 206, "NFLTP9IeujiR");
    izdelaj(nizi, 207, "zew0TQI21qJdwa");
    izdelaj(nizi, 208, "rmaDwS9ulO_nkBm");
    izdelaj(nizi, 209, "rq06Gmadjmx47l");
    izdelaj(nizi, 210, "0flhP1XjC_UIIyVjA59JiMTQ");
    izdelaj(nizi, 211, "gAB6mgoydq0n4Q2ffAPKmYbfwZX6KMbSKHwoahhmAWjAckB9b3yqYZLuVDnq8q1vj8pNSkEWU");
    izdelaj(nizi, 212, "CWw7g89_VJOHgncLr");
    izdelaj(nizi, 213, "KgAehbf4KMfyBIFErgFCN3AJD_8CDpGdFxXLD8hoYI2G");
    izdelaj(nizi, 214, "E7Q5Rz");
    izdelaj(nizi, 215, "DvIVbh0tvqQmIWychGJEb");
    izdelaj(nizi, 216, "vdiR1kmsKuwSDY_JNdkXiAwOWjLib");
    izdelaj(nizi, 217, "CrnoT8OaTOasVX");
    izdelaj(nizi, 218, "wqhLOqv4JZST1BiNGhl1bnRVeKWy1xO2Jm4HGDRaXRpCBihjfXckSZYsk6poCi_uddL_HRGnxQBQFo3bs7w");
    izdelaj(nizi, 219, "sFCWxOlp8d");
    izdelaj(nizi, 220, "6ovIA1iawfRBIhzIF6JCUIKqX5AYusnldbe1d9Zp4_0");
    izdelaj(nizi, 221, "fKVKo31SKpsEvvp42HEEk3qvFYMhVewA_BsUNuvlPj0G75FGXenj07hdBIie9kWJ29N22ijC3p3");
    izdelaj(nizi, 222, "jQoI9QcukO6fHMbA_sIsWV5kT");
    izdelaj(nizi, 223, "7LG9GVFtlnenvBdnDtJWxN5zwn0zy3hQDfPutX7YACxc23jqnZrzNnLTKd9GIz9dxdV54tKia45lDDWSvfRgLOLnLrOFBxVmbXu0");
    izdelaj(nizi, 224, "urSjms877V83vpTar3aMl8s_yJpi");
    izdelaj(nizi, 225, "RgSMt5KhteW1jJdKIROixcvyRq_W5ePY2rM0NGECLnxCYJDp4JUFqFH");
    izdelaj(nizi, 226, "mEfO349fAUeU_5GFxpdh7");
    izdelaj(nizi, 227, "5zgtLqGn3U2rABTLdOhQbpc5ORMMge3xwtcGkYbjxLkFZac");
    izdelaj(nizi, 228, "E7xmFqvo_q7_KOTciqHyD68ivEtD9Ej0DEHdwPbbR0X8QYpFi9uAGTMhVCNwlYA0ofob8Ihtk9laoH6w3LSmtFckj0YFOhLc");
    izdelaj(nizi, 229, "3gax8");
    izdelaj(nizi, 230, "qipJRQSzzuukBjMm8p36KWftqDhs8JEORDfClM2QL4b8RieBI0TTVUrALd6DxhQDsgJwZn9");
    izdelaj(nizi, 231, "nAyfsp9L9OBFz5E54iX86Cj2YUgnxjtpdNuQqCD4t4USD1Gz7TV7QkgK8UFsE342DVqHebJ3t8J_8vdHdt");
    izdelaj(nizi, 232, "Yblisz0uGMNhDjHaPmWgUFFPvPqfl_1AmyrQeYg2yO456Ofiym7CtogWegW_vEN4lm6vnTShsKhh_tB6U");
    izdelaj(nizi, 233, "bdWgEh9QJ4zZoymiDvxGWD7boTJnC_om7twPj8d9eBrsgmBSilRAxaPBFbds7NE");
    izdelaj(nizi, 234, "V1VKVjCcYCTV6DUwNVAXK2H3XVL8L3NLCnsk0ngZgI6tA3y1LhvXDp2jnxeGQmxvZhKCDGI");
    izdelaj(nizi, 235, "uEwBWyV4TiRfJ16rm6ebeDsD2X5r_xm2PonBGpT0HMFEw");
    izdelaj(nizi, 236, "s3Y_R0n07nSeuH_x2ZOYKP6tZQIZKuDMvrYxGfyMkvIpVWld3pZ4I_WxAWeSnIEeq6qr61GA5S16BsBsQjq2lZcxteeX89WydK0U");
    izdelaj(nizi, 237, "mizT47UQjeJ");

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
