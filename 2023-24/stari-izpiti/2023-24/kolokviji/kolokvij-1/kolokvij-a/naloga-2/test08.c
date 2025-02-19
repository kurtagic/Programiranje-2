
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
    int n = 249;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 1, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 2, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 3, "HO6M_6HfWkGA4GSB7LN2rIjQvEGosbfbHvwdV0uwuRR1HHqLamV8IFKRLz");
    izdelaj(nizi, 4, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 5, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 6, "HO6M_6HfWkGA4GSB7LN2rIjQvEGosbfbHvwdV0uwuRR1HHqLamV8IFKRLz");
    izdelaj(nizi, 7, "HO6M_6HfWkGA4GSB7LN2rIjQvEGosbfbHvwdV0uwuRR1HHqLamV8IFKRLz");
    izdelaj(nizi, 8, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 9, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 10, "LjDrIkuzNR10vETplvDr9bZaFQ9DMipudFhNV35c9lP37y4FlhFcc6B9S30V1dzsPFlEa9QyhPxmOBK1Cb");
    izdelaj(nizi, 11, "Bs7pRPavLWupsMbzbc30at5M7vftU4mz");
    izdelaj(nizi, 12, "Bs7pRPavLWupsMbzbc30at5M7vftU4mz");
    izdelaj(nizi, 13, "Bs7pRPavLWupsMbzbc30at5M7vftU4mz");
    izdelaj(nizi, 14, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 15, "Bs7pRPavLWupsMbzbc30at5M7vftU4mz");
    izdelaj(nizi, 16, "HO6M_6HfWkGA4GSB7LN2rIjQvEGosbfbHvwdV0uwuRR1HHqLamV8IFKRLz");
    izdelaj(nizi, 17, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 18, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 19, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 20, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 21, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 22, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 23, "HO6M_6HfWkGA4GSB7LN2rIjQvEGosbfbHvwdV0uwuRR1HHqLamV8IFKRLz");
    izdelaj(nizi, 24, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 25, "HO6M_6HfWkGA4GSB7LN2rIjQvEGosbfbHvwdV0uwuRR1HHqLamV8IFKRLz");
    izdelaj(nizi, 26, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 27, "ngrOQ7QjF4bbKzP");
    izdelaj(nizi, 28, "kCTewstsCabZWBW");
    izdelaj(nizi, 29, "ngrOQ7QjF4bbKzP");
    izdelaj(nizi, 30, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 31, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 32, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 33, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 34, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 35, "YTz0u_4hkZb24BC1gDWMie64pv");
    izdelaj(nizi, 36, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 37, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 38, "Xq9mOR88UWBwJRD4UHbcq3tS2YzrZMFvtYkbW1nZUEeayduS5Ym_R6_uNgLHVWGmuQnQDcri");
    izdelaj(nizi, 39, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 40, "B1s0ITDRbbyEBZX");
    izdelaj(nizi, 41, "WploG57auvroTAP9XpcDyF7eduFvCnqwl4VbbMLhr0LvDkw");
    izdelaj(nizi, 42, "LjDrIkuzNR10vETplvDr9bZaFQ9DMipudFhNV35c9lP37y4FlhFcc6B9S30V1dzsPFlEa9QyhPxmOBK1Cb");
    izdelaj(nizi, 43, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 44, "B1s0ITDRbbyEBZX");
    izdelaj(nizi, 45, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 46, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 47, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 48, "ngrOQ7QjF4bbKzP");
    izdelaj(nizi, 49, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 50, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 51, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 52, "5M1pG6HFr9pQeIs4ap");
    izdelaj(nizi, 53, "5M1pG6HFr9pQeIs4ap");
    izdelaj(nizi, 54, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 55, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 56, "Bs7pRPavLWupsMbzbc30at5M7vftU4mz");
    izdelaj(nizi, 57, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 58, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 59, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 60, "ngrOQ7QjF4bbKzP");
    izdelaj(nizi, 61, "Xq9mOR88UWBwJRD4UHbcq3tS2YzrZMFvtYkbW1nZUEeayduS5Ym_R6_uNgLHVWGmuQnQDcri");
    izdelaj(nizi, 62, "Bs7pRPavLWupsMbzbc30at5M7vftU4mz");
    izdelaj(nizi, 63, "LjDrIkuzNR10vETplvDr9bZaFQ9DMipudFhNV35c9lP37y4FlhFcc6B9S30V1dzsPFlEa9QyhPxmOBK1Cb");
    izdelaj(nizi, 64, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 65, "Lc9G1Gtyfi5M58UOJYzBcs5YomKV_y9LGsxpeeleQuNrWEEUQJzt97GErc94MBK");
    izdelaj(nizi, 66, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 67, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 68, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 69, "ngrOQ7QjF4bbKzP");
    izdelaj(nizi, 70, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 71, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 72, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 73, "B1s0ITDRbbyEBZX");
    izdelaj(nizi, 74, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 75, "5c1BBF8cmvGAJY_qeWmiUdMaf3oKHRlvBfALQdq1YtuYc");
    izdelaj(nizi, 76, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 77, "HO6M_6HfWkGA4GSB7LN2rIjQvEGosbfbHvwdV0uwuRR1HHqLamV8IFKRLz");
    izdelaj(nizi, 78, "PU4Jm923sBt73JKqV1XKblY_27X2GbsySJ8FxybB_aQcNp6tyBNVcPH_Hr07CKQzQOh5bWv");
    izdelaj(nizi, 79, "ngrOQ7QjF4bbKzP");
    izdelaj(nizi, 80, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 81, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 82, "keedxkRcZw1kgaNpW_jgrQVJotST09nTbKO8bGuYiK4ohLnPYzx94Pbz6oH1oDsL6WMr5PK0mL2c1xfOLPgTB7ioEuuekMpTbc_");
    izdelaj(nizi, 83, "B1s0ITDRbbyEBZX");
    izdelaj(nizi, 84, "Bs7pRPavLWupsMbzbc30at5M7vftU4mz");
    izdelaj(nizi, 85, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 86, "LjDrIkuzNR10vETplvDr9bZaFQ9DMipudFhNV35c9lP37y4FlhFcc6B9S30V1dzsPFlEa9QyhPxmOBK1Cb");
    izdelaj(nizi, 87, "WploG57auvroTAP9XpcDyF7eduFvCnqwl4VbbMLhr0LvDkw");
    izdelaj(nizi, 88, "0a_5GWxYxZD0URX3YhRVb9R0VD3yE28K0HiJsNihJzgaVYJpziWoJK5HQ0lIihI5qoYVkM2im");
    izdelaj(nizi, 89, "eQpSV0Pb5m1ncefTaCMEuvWspeE2xkUHkdpXkvR");
    izdelaj(nizi, 90, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 91, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 92, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 93, "keedxkRcZw1kgaNpW_jgrQVJotST09nTbKO8bGuYiK4ohLnPYzx94Pbz6oH1oDsL6WMr5PK0mL2c1xfOLPgTB7ioEuuekMpTbc_");
    izdelaj(nizi, 94, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 95, "HO6M_6HfWkGA4GSB7LN2rIjQvEGosbfbHvwdV0uwuRR1HHqLamV8IFKRLz");
    izdelaj(nizi, 96, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 97, "5M1pG6HFr9pQeIs4ap");
    izdelaj(nizi, 98, "B1s0ITDRbbyEBZX");
    izdelaj(nizi, 99, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 100, "5M1pG6HFr9pQeIs4ap");
    izdelaj(nizi, 101, "B1s0ITDRbbyEBZX");
    izdelaj(nizi, 102, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 103, "B1s0ITDRbbyEBZX");
    izdelaj(nizi, 104, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 105, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 106, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 107, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 108, "GgHf2SiHpvwuZQkEKqTqhHtJ9yhqqVpAwvzBX");
    izdelaj(nizi, 109, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 110, "vt");
    izdelaj(nizi, 111, "B1s0ITDRbbyEBZX");
    izdelaj(nizi, 112, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 113, "Xq9mOR88UWBwJRD4UHbcq3tS2YzrZMFvtYkbW1nZUEeayduS5Ym_R6_uNgLHVWGmuQnQDcri");
    izdelaj(nizi, 114, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 115, "5c1BBF8cmvGAJY_qeWmiUdMaf3oKHRlvBfALQdq1YtuYc");
    izdelaj(nizi, 116, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 117, "xSMmiKjWO");
    izdelaj(nizi, 118, "p1KZ2pAOKc1E3YMiXd0OY1vj9pdoNtMZpNqaR1xXbEoZXdD9Qws3crp34h78IQP2v8DefY_afYE_AtDbMCoj_1vMTWi9HB");
    izdelaj(nizi, 119, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 120, "LjDrIkuzNR10vETplvDr9bZaFQ9DMipudFhNV35c9lP37y4FlhFcc6B9S30V1dzsPFlEa9QyhPxmOBK1Cb");
    izdelaj(nizi, 121, "5c1BBF8cmvGAJY_qeWmiUdMaf3oKHRlvBfALQdq1YtuYc");
    izdelaj(nizi, 122, "L8NvmPT7TvOzLS2oWPMcEVRYRoFbxiSsmJcxqZvphH0zHi5quxF0ce0wLcQL7hWXD");
    izdelaj(nizi, 123, "ngrOQ7QjF4bbKzP");
    izdelaj(nizi, 124, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 125, "Xq9mOR88UWBwJRD4UHbcq3tS2YzrZMFvtYkbW1nZUEeayduS5Ym_R6_uNgLHVWGmuQnQDcri");
    izdelaj(nizi, 126, "keedxkRcZw1kgaNpW_jgrQVJotST09nTbKO8bGuYiK4ohLnPYzx94Pbz6oH1oDsL6WMr5PK0mL2c1xfOLPgTB7ioEuuekMpTbc_");
    izdelaj(nizi, 127, "kCTewstsCabZWBW");
    izdelaj(nizi, 128, "5M1pG6HFr9pQeIs4ap");
    izdelaj(nizi, 129, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 130, "0a_5GWxYxZD0URX3YhRVb9R0VD3yE28K0HiJsNihJzgaVYJpziWoJK5HQ0lIihI5qoYVkM2im");
    izdelaj(nizi, 131, "HO6M_6HfWkGA4GSB7LN2rIjQvEGosbfbHvwdV0uwuRR1HHqLamV8IFKRLz");
    izdelaj(nizi, 132, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 133, "5c1BBF8cmvGAJY_qeWmiUdMaf3oKHRlvBfALQdq1YtuYc");
    izdelaj(nizi, 134, "LjDrIkuzNR10vETplvDr9bZaFQ9DMipudFhNV35c9lP37y4FlhFcc6B9S30V1dzsPFlEa9QyhPxmOBK1Cb");
    izdelaj(nizi, 135, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 136, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 137, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 138, "B1s0ITDRbbyEBZX");
    izdelaj(nizi, 139, "LjDrIkuzNR10vETplvDr9bZaFQ9DMipudFhNV35c9lP37y4FlhFcc6B9S30V1dzsPFlEa9QyhPxmOBK1Cb");
    izdelaj(nizi, 140, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 141, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 142, "XkOjsyhkEQKK0oEu956DbKeDfh6C_fN4T575csvQNGOklE17");
    izdelaj(nizi, 143, "HO6M_6HfWkGA4GSB7LN2rIjQvEGosbfbHvwdV0uwuRR1HHqLamV8IFKRLz");
    izdelaj(nizi, 144, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 145, "HO6M_6HfWkGA4GSB7LN2rIjQvEGosbfbHvwdV0uwuRR1HHqLamV8IFKRLz");
    izdelaj(nizi, 146, "HO6M_6HfWkGA4GSB7LN2rIjQvEGosbfbHvwdV0uwuRR1HHqLamV8IFKRLz");
    izdelaj(nizi, 147, "B1s0ITDRbbyEBZX");
    izdelaj(nizi, 148, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 149, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 150, "r9zwfXPfRBWfdcLb");
    izdelaj(nizi, 151, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 152, "keedxkRcZw1kgaNpW_jgrQVJotST09nTbKO8bGuYiK4ohLnPYzx94Pbz6oH1oDsL6WMr5PK0mL2c1xfOLPgTB7ioEuuekMpTbc_");
    izdelaj(nizi, 153, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 154, "keedxkRcZw1kgaNpW_jgrQVJotST09nTbKO8bGuYiK4ohLnPYzx94Pbz6oH1oDsL6WMr5PK0mL2c1xfOLPgTB7ioEuuekMpTbc_");
    izdelaj(nizi, 155, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 156, "ngrOQ7QjF4bbKzP");
    izdelaj(nizi, 157, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 158, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 159, "2NNJTfaBKIWL5tEIJ4f30QXI6bqVXxUq29FouNeYQUBSE79IMqI9dZkMHJEzVjhUSGoL__iIVDveLo291D93wB");
    izdelaj(nizi, 160, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 161, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 162, "5M1pG6HFr9pQeIs4ap");
    izdelaj(nizi, 163, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 164, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 165, "Bs7pRPavLWupsMbzbc30at5M7vftU4mz");
    izdelaj(nizi, 166, "u1Ifh1ouwyapUJjLXTrtEOdZZRQAW0IwTwbMNuMziI_1FMGC5OUZ1ddnwWCf8HKCYZFhzfj6xkZsxWVNPf");
    izdelaj(nizi, 167, "5c1BBF8cmvGAJY_qeWmiUdMaf3oKHRlvBfALQdq1YtuYc");
    izdelaj(nizi, 168, "WcII06PPBCgBx4r8tYo1Jv4gz0V5tJ0n94XIHIOcoSYsUPr7Bom3");
    izdelaj(nizi, 169, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 170, "Bs7pRPavLWupsMbzbc30at5M7vftU4mz");
    izdelaj(nizi, 171, "icDp0hHBeTOKkOdYSwiTU67KpycbFTW_fiqBRRskNIB_n6tqjvPsTp_3WRqzHLbqXN8Wp2b9P1Y2xn");
    izdelaj(nizi, 172, "5M1pG6HFr9pQeIs4ap");
    izdelaj(nizi, 173, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 174, "8RDqZY7wuaXAuAidkm6CASoIbVC7hnr1ITwXKgEYFRKSTPBICbRzrRyvVg6wj6Gf6RL15tM880ol4");
    izdelaj(nizi, 175, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 176, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 177, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 178, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 179, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 180, "B1s0ITDRbbyEBZX");
    izdelaj(nizi, 181, "Bs7pRPavLWupsMbzbc30at5M7vftU4mz");
    izdelaj(nizi, 182, "Lc9G1Gtyfi5M58UOJYzBcs5YomKV_y9LGsxpeeleQuNrWEEUQJzt97GErc94MBK");
    izdelaj(nizi, 183, "WploG57auvroTAP9XpcDyF7eduFvCnqwl4VbbMLhr0LvDkw");
    izdelaj(nizi, 184, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 185, "keedxkRcZw1kgaNpW_jgrQVJotST09nTbKO8bGuYiK4ohLnPYzx94Pbz6oH1oDsL6WMr5PK0mL2c1xfOLPgTB7ioEuuekMpTbc_");
    izdelaj(nizi, 186, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 187, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 188, "ngrOQ7QjF4bbKzP");
    izdelaj(nizi, 189, "2xXAeXSfCkoXzzlNlRutreXpy_nlbJI5gXGX__fCsqL");
    izdelaj(nizi, 190, "eQpSV0Pb5m1ncefTaCMEuvWspeE2xkUHkdpXkvR");
    izdelaj(nizi, 191, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 192, "qTCAS04C");
    izdelaj(nizi, 193, "r9zwfXPfRBWfdcLb");
    izdelaj(nizi, 194, "0a_5GWxYxZD0URX3YhRVb9R0VD3yE28K0HiJsNihJzgaVYJpziWoJK5HQ0lIihI5qoYVkM2im");
    izdelaj(nizi, 195, "HO6M_6HfWkGA4GSB7LN2rIjQvEGosbfbHvwdV0uwuRR1HHqLamV8IFKRLz");
    izdelaj(nizi, 196, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 197, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 198, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 199, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 200, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 201, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 202, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 203, "eQpSV0Pb5m1ncefTaCMEuvWspeE2xkUHkdpXkvR");
    izdelaj(nizi, 204, "LjDrIkuzNR10vETplvDr9bZaFQ9DMipudFhNV35c9lP37y4FlhFcc6B9S30V1dzsPFlEa9QyhPxmOBK1Cb");
    izdelaj(nizi, 205, "DK9cyMn1PdUgogxP3RShI_PGHiXbX33lR7SGeWmyiy");
    izdelaj(nizi, 206, "n5yNHJ3aG52XU16Hk8bc_fl45KivkHTqumQXknkBcPk68qXqZVqBOWSvFPwMdzD8");
    izdelaj(nizi, 207, "HO6M_6HfWkGA4GSB7LN2rIjQvEGosbfbHvwdV0uwuRR1HHqLamV8IFKRLz");
    izdelaj(nizi, 208, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 209, "B1s0ITDRbbyEBZX");
    izdelaj(nizi, 210, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 211, "B1s0ITDRbbyEBZX");
    izdelaj(nizi, 212, "Bs7pRPavLWupsMbzbc30at5M7vftU4mz");
    izdelaj(nizi, 213, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 214, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 215, "HO6M_6HfWkGA4GSB7LN2rIjQvEGosbfbHvwdV0uwuRR1HHqLamV8IFKRLz");
    izdelaj(nizi, 216, "5c1BBF8cmvGAJY_qeWmiUdMaf3oKHRlvBfALQdq1YtuYc");
    izdelaj(nizi, 217, "Lc9G1Gtyfi5M58UOJYzBcs5YomKV_y9LGsxpeeleQuNrWEEUQJzt97GErc94MBK");
    izdelaj(nizi, 218, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 219, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 220, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 221, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 222, "v9Cj88ebGAn0rvWYFKFomAPDE1sbt1N7d_JVNU968JsxpjriZhzjugKA4ckvNDLUq0C8FJ_l3BIJ8o");
    izdelaj(nizi, 223, "r9zwfXPfRBWfdcLb");
    izdelaj(nizi, 224, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 225, "HO6M_6HfWkGA4GSB7LN2rIjQvEGosbfbHvwdV0uwuRR1HHqLamV8IFKRLz");
    izdelaj(nizi, 226, "A1bP9aCT4smoId");
    izdelaj(nizi, 227, "B1s0ITDRbbyEBZX");
    izdelaj(nizi, 228, "5c1BBF8cmvGAJY_qeWmiUdMaf3oKHRlvBfALQdq1YtuYc");
    izdelaj(nizi, 229, "LjDrIkuzNR10vETplvDr9bZaFQ9DMipudFhNV35c9lP37y4FlhFcc6B9S30V1dzsPFlEa9QyhPxmOBK1Cb");
    izdelaj(nizi, 230, "Bs7pRPavLWupsMbzbc30at5M7vftU4mz");
    izdelaj(nizi, 231, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 232, "B1s0ITDRbbyEBZX");
    izdelaj(nizi, 233, "Bs7pRPavLWupsMbzbc30at5M7vftU4mz");
    izdelaj(nizi, 234, "Bs7pRPavLWupsMbzbc30at5M7vftU4mz");
    izdelaj(nizi, 235, "keedxkRcZw1kgaNpW_jgrQVJotST09nTbKO8bGuYiK4ohLnPYzx94Pbz6oH1oDsL6WMr5PK0mL2c1xfOLPgTB7ioEuuekMpTbc_");
    izdelaj(nizi, 236, "8IkNnsuFKEhUT3AcDevjPyDF");
    izdelaj(nizi, 237, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 238, "B1s0ITDRbbyEBZX");
    izdelaj(nizi, 239, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 240, "HO6M_6HfWkGA4GSB7LN2rIjQvEGosbfbHvwdV0uwuRR1HHqLamV8IFKRLz");
    izdelaj(nizi, 241, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 242, "iV2uFKmy_ys8fTYC8bHNa89nq3R27DTmonYPfeWU2ca2BxTnh2");
    izdelaj(nizi, 243, "YTz0u_4hkZb24BC1gDWMie64pv");
    izdelaj(nizi, 244, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 245, "HGw8dDLh7uHj3NK8drSA5PSZ4j7NaEq9aOgcSb38ktrt7cyXFpwoei9xgctIpySWnusUt59zvTmjSIX9LlrA15W8n7");
    izdelaj(nizi, 246, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");
    izdelaj(nizi, 247, "Bs7pRPavLWupsMbzbc30at5M7vftU4mz");
    izdelaj(nizi, 248, "oQ2fPsyaLGgV9eep8OKLZMNumNHocqJdMVBRURXnddURcLGEO");

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
