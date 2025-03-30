
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
    int n = 187;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "vRFEFOK43FQA9Gs");
    izdelaj(nizi, 1, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 2, "NxKKEvgAoziji5INk5jNkEE54PjIkNMAfJkIGT5ahYjEWuLOmA1oCdwlBV69SqhQar4ZEXhrioF2IaXP50JENuQ4a");
    izdelaj(nizi, 3, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 4, "NllJTTu5OZGlVLGJs0kc3DkTcmGdMEmgsp");
    izdelaj(nizi, 5, "vRFEFOK43FQA9Gs");
    izdelaj(nizi, 6, "OwDaYcsilp6BQJVFVVI6CW4c90bStcdlK45rayQvhi8Yn8bkX");
    izdelaj(nizi, 7, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 8, "3Q6ZKnfotCZN5I");
    izdelaj(nizi, 9, "Wh6EXANh9oPvdTp0cbpvMFkrJcFcFd8RjgbX8fPL6_o9u1Sj6lVHw_s9kkcdYK2Zpo85E14CA");
    izdelaj(nizi, 10, "JVbaOpWM7MA8cqcmwyEm8ed6z7_jFU00VV18EDKbEaHW2pvyUVrv");
    izdelaj(nizi, 11, "lMLCx99kTE9AwjHZzKJg6t25cq8jHWs7xStQhlPU3ApMPcnenMC4IM0sFrNZGRzfnVghBGYDRAZ2");
    izdelaj(nizi, 12, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 13, "pcm4DSitPqyokdGrA8tKjB_JgvWlG66pDNAaYcLPi9j1SAUYfZFB");
    izdelaj(nizi, 14, "1kJnDN8LxON9ZGpEbL9KQBOTASPkJrJ7AyzB2Yu");
    izdelaj(nizi, 15, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 16, "vRFEFOK43FQA9Gs");
    izdelaj(nizi, 17, "m9AQg8qI8o_7DqSs2BABhTS2O33KsSgLrC2UdB583ns0WADvb2ZUQ0B_ew");
    izdelaj(nizi, 18, "vRFEFOK43FQA9Gs");
    izdelaj(nizi, 19, "vRFEFOK43FQA9Gs");
    izdelaj(nizi, 20, "pcm4DSitPqyokdGrA8tKjB_JgvWlG66pDNAaYcLPi9j1SAUYfZFB");
    izdelaj(nizi, 21, "W5BogzalLZo");
    izdelaj(nizi, 22, "wufxKXhXDfiyueZBz6g4IpXbCNYENFfe6fzFZyAYBJgrPxoho4opa5v2iu6EXT");
    izdelaj(nizi, 23, "YW7E0JkPIjkgtCU9XDWuLkLuWzh6zF5nSAocfX9XaWVrd1XGJ_bQIrer_h");
    izdelaj(nizi, 24, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 25, "N4kOKB7Q5CqDDO3BUeBMqwxCUi8__d2BkLk");
    izdelaj(nizi, 26, "OwDaYcsilp6BQJVFVVI6CW4c90bStcdlK45rayQvhi8Yn8bkX");
    izdelaj(nizi, 27, "wufxKXhXDfiyueZBz6g4IpXbCNYENFfe6fzFZyAYBJgrPxoho4opa5v2iu6EXT");
    izdelaj(nizi, 28, "lMLCx99kTE9AwjHZzKJg6t25cq8jHWs7xStQhlPU3ApMPcnenMC4IM0sFrNZGRzfnVghBGYDRAZ2");
    izdelaj(nizi, 29, "vRFEFOK43FQA9Gs");
    izdelaj(nizi, 30, "5zkcTWsdD01deOgU3kHSbL_d07FRSSWUX_ErJRwddFlJO5N_0mV2fErWVhnytK2cYBMeNMHcOJ6e6ttHj1LsT");
    izdelaj(nizi, 31, "MMuDB_d1Jn");
    izdelaj(nizi, 32, "m9AQg8qI8o_7DqSs2BABhTS2O33KsSgLrC2UdB583ns0WADvb2ZUQ0B_ew");
    izdelaj(nizi, 33, "lMLCx99kTE9AwjHZzKJg6t25cq8jHWs7xStQhlPU3ApMPcnenMC4IM0sFrNZGRzfnVghBGYDRAZ2");
    izdelaj(nizi, 34, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 35, "m9AQg8qI8o_7DqSs2BABhTS2O33KsSgLrC2UdB583ns0WADvb2ZUQ0B_ew");
    izdelaj(nizi, 36, "LQcOEBrnnzk26cBA5C8wkO0j0GhO5YKGNk1gX9Y");
    izdelaj(nizi, 37, "m9AQg8qI8o_7DqSs2BABhTS2O33KsSgLrC2UdB583ns0WADvb2ZUQ0B_ew");
    izdelaj(nizi, 38, "1kJnDN8LxON9ZGpEbL9KQBOTASPkJrJ7AyzB2Yu");
    izdelaj(nizi, 39, "Bs4r7gT3TDqsph2HGyBTnBodjaAMsQffkPrckzWkM200zGMTd7Dl3yeb_EkJjvXk");
    izdelaj(nizi, 40, "KHmcVaBtZVwp1Ic2cLYOvUNpotjx");
    izdelaj(nizi, 41, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 42, "amkFVmdMvUznQvtQMIzKryH");
    izdelaj(nizi, 43, "Ns4EYv9zuJ_PCu6FMbcORbb02VHNhR5nyGaxy2FuCZHgi3aI8PCwIsdtoKdEM3ccuNNsl6QyBlnD4");
    izdelaj(nizi, 44, "eCyp7prY");
    izdelaj(nizi, 45, "1kJnDN8LxON9ZGpEbL9KQBOTASPkJrJ7AyzB2Yu");
    izdelaj(nizi, 46, "m9AQg8qI8o_7DqSs2BABhTS2O33KsSgLrC2UdB583ns0WADvb2ZUQ0B_ew");
    izdelaj(nizi, 47, "vRFEFOK43FQA9Gs");
    izdelaj(nizi, 48, "kjg1AcknhKPXx7yc9Uh2AKUd87ZdqHzzpCSkgsx3uXw4JGs4vFisQahJIVLrMVp8LwbYJ4cQVrpL26EUTST_f");
    izdelaj(nizi, 49, "Vj1Ul_L1afgwvynDSVZpe2fX9RZdcYC9M8uQEnf5rPbiXR87IWJ5ruGiFrFKX5faduooz_uoBrXWr8oq1ZCsCJj");
    izdelaj(nizi, 50, "rtCFlu9vk35P1MDk0Q7lwDTXvAWuKtBHBmuO73eBWFBwBrVAIH7k5eoIaJlKMN_qErugO9");
    izdelaj(nizi, 51, "Vj1Ul_L1afgwvynDSVZpe2fX9RZdcYC9M8uQEnf5rPbiXR87IWJ5ruGiFrFKX5faduooz_uoBrXWr8oq1ZCsCJj");
    izdelaj(nizi, 52, "dEKNFOXGUK2Z8IOTpQyi8FDJPQMZzCuJo57xx9NX0SLLvie1");
    izdelaj(nizi, 53, "eCyp7prY");
    izdelaj(nizi, 54, "5bZveiK0hLEUbVFHNe6I9_C8ONnNk7G6X4ykpPw8mcEqHljKlYjDcp");
    izdelaj(nizi, 55, "vRFEFOK43FQA9Gs");
    izdelaj(nizi, 56, "5bZveiK0hLEUbVFHNe6I9_C8ONnNk7G6X4ykpPw8mcEqHljKlYjDcp");
    izdelaj(nizi, 57, "L_WCyAXFXTyUa2JyRmti2PtNZakb9KvQHrDmhUfzDVCEQ4jbuToT");
    izdelaj(nizi, 58, "L_WCyAXFXTyUa2JyRmti2PtNZakb9KvQHrDmhUfzDVCEQ4jbuToT");
    izdelaj(nizi, 59, "OwDaYcsilp6BQJVFVVI6CW4c90bStcdlK45rayQvhi8Yn8bkX");
    izdelaj(nizi, 60, "Ns4EYv9zuJ_PCu6FMbcORbb02VHNhR5nyGaxy2FuCZHgi3aI8PCwIsdtoKdEM3ccuNNsl6QyBlnD4");
    izdelaj(nizi, 61, "MMuDB_d1Jn");
    izdelaj(nizi, 62, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 63, "Ns4EYv9zuJ_PCu6FMbcORbb02VHNhR5nyGaxy2FuCZHgi3aI8PCwIsdtoKdEM3ccuNNsl6QyBlnD4");
    izdelaj(nizi, 64, "O0LGOTC1PvwYVPzHgsJbVEVgF");
    izdelaj(nizi, 65, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 66, "alZ6yDp4i4D");
    izdelaj(nizi, 67, "v_L3cy6G6w4ySqGrAxJ8PwqAKruLu1LZ2Kt4zQ3IPfdH64enfku51WWlMkTKSV61FbGkKduiu52wFKVF0ML1DDkKp8bxzV");
    izdelaj(nizi, 68, "VKZNcSOEujZlbaj5LgwfhLF8sg45bo_FQF_VOXQ8XmK_2k3NUfIIAZ70pADO24ygcV9h");
    izdelaj(nizi, 69, "pcm4DSitPqyokdGrA8tKjB_JgvWlG66pDNAaYcLPi9j1SAUYfZFB");
    izdelaj(nizi, 70, "bar39F7sKinCj7nwrso1oSUftHYRvbY5SHmfcTpAiqVKC");
    izdelaj(nizi, 71, "0EwUBHwGsPlt1UjtU2VEnNmxR4B2WDfCU8");
    izdelaj(nizi, 72, "P");
    izdelaj(nizi, 73, "nnVpv6VkmeN_5JDbnfvFq1ZDhC");
    izdelaj(nizi, 74, "iOJ3k9rhT6ShJYBy15lIGtpKt5bmujx");
    izdelaj(nizi, 75, "YgXQ5kTxoFf0I8UA6duRZQaryI7X5ULd7ARDms4Y1tY4v4o5rnxaUvRQPFfWcyMqHFQX6VhI9WQCqDSUh0TRfvJIrXbFkBh");
    izdelaj(nizi, 76, "Vj1Ul_L1afgwvynDSVZpe2fX9RZdcYC9M8uQEnf5rPbiXR87IWJ5ruGiFrFKX5faduooz_uoBrXWr8oq1ZCsCJj");
    izdelaj(nizi, 77, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 78, "Mie2W");
    izdelaj(nizi, 79, "SUAuLwGINL4vQ4XDetHLogTpUjHqmkLs0Hu3MNG");
    izdelaj(nizi, 80, "RxE9mLE6Bb3fbd1oZTHy5wnMnRqcQkq4i7ieA8G7ho64RF0prpCrFd0FiFxi");
    izdelaj(nizi, 81, "yxHGV1lGsCkrrsN8giJaiO_kfj");
    izdelaj(nizi, 82, "lMLCx99kTE9AwjHZzKJg6t25cq8jHWs7xStQhlPU3ApMPcnenMC4IM0sFrNZGRzfnVghBGYDRAZ2");
    izdelaj(nizi, 83, "lMLCx99kTE9AwjHZzKJg6t25cq8jHWs7xStQhlPU3ApMPcnenMC4IM0sFrNZGRzfnVghBGYDRAZ2");
    izdelaj(nizi, 84, "rmaDwS9ulO_nkBm");
    izdelaj(nizi, 85, "oEF7s");
    izdelaj(nizi, 86, "_jise5HssOfkz9kr6z2t0p3uFattlDbhSQ6Q_em");
    izdelaj(nizi, 87, "d9GVabE1J3w4jzYFfuOerReqQmPyG4iF");
    izdelaj(nizi, 88, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 89, "eCyp7prY");
    izdelaj(nizi, 90, "vRFEFOK43FQA9Gs");
    izdelaj(nizi, 91, "kCxKvL63EbOqtqvnXffWC7HGtA_obfa");
    izdelaj(nizi, 92, "Ns4EYv9zuJ_PCu6FMbcORbb02VHNhR5nyGaxy2FuCZHgi3aI8PCwIsdtoKdEM3ccuNNsl6QyBlnD4");
    izdelaj(nizi, 93, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 94, "rTneG5jKJx_g4ko");
    izdelaj(nizi, 95, "5styi");
    izdelaj(nizi, 96, "5gv5b4SvnngQENpr24");
    izdelaj(nizi, 97, "alZ6yDp4i4D");
    izdelaj(nizi, 98, "zEFkPH9F5mIp8pPIKlCE6Pau9E0k7UYZLa0GvR7sIiv3LmvXEzfGKFC8ZLCmVONmGPL6OMITd");
    izdelaj(nizi, 99, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 100, "h6DXHjLJLrqkkjyzAZZxcABTBg_frlVcdOL3vpP3y8g06K8_mQpc");
    izdelaj(nizi, 101, "vRFEFOK43FQA9Gs");
    izdelaj(nizi, 102, "_M");
    izdelaj(nizi, 103, "D5OEwpg9c9N0HhAy");
    izdelaj(nizi, 104, "1xd6R5f1TjOdGhbNzPkrO5rn");
    izdelaj(nizi, 105, "fVpV8rQUUY9r60L6L6oVji1ZOW_g5r2qiH4ZwUz2eT0HZ_1RzMgACaPbQ5Kk5JUdwtha_aLc0XsW7Mg0");
    izdelaj(nizi, 106, "5styi");
    izdelaj(nizi, 107, "7QORRNUzppnyb");
    izdelaj(nizi, 108, "h6DXHjLJLrqkkjyzAZZxcABTBg_frlVcdOL3vpP3y8g06K8_mQpc");
    izdelaj(nizi, 109, "0EwUBHwGsPlt1UjtU2VEnNmxR4B2WDfCU8");
    izdelaj(nizi, 110, "Ndali2aqhoO31u1eGBbAFvr1bGR8UHsEswpZzBP5GmrEYNj6WlBv9YohMTEm_JR");
    izdelaj(nizi, 111, "yyQW4y3sT8wnVm2oSVH778gJoSstx4_8Dlfq8YxFyQjgMneh7XHx1NPMCL8lEJEG56eiIH4s0A3YrAD7z6");
    izdelaj(nizi, 112, "BgWxBHI7x53KrP7gsDJfTyEilYur");
    izdelaj(nizi, 113, "vRFEFOK43FQA9Gs");
    izdelaj(nizi, 114, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 115, "6Br9EjEk6XCedGPj5u60OIfkwy5jcK63EqJ3zGW_8dZ5cK9hT7m9FMF3Rru");
    izdelaj(nizi, 116, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 117, "4VVewQxwQbssdjEDsbYgCtSiRoYWfVG2pZgiTTz9rYaj0knLzmq6y2oJPL7bEFWf1sa5c26aQl37hHfROdS1vQjwQGs");
    izdelaj(nizi, 118, "kjg1AcknhKPXx7yc9Uh2AKUd87ZdqHzzpCSkgsx3uXw4JGs4vFisQahJIVLrMVp8LwbYJ4cQVrpL26EUTST_f");
    izdelaj(nizi, 119, "2H9mvlUcdpjDgRiD1LhwikyTKS1N5fHQALsCdzWxWlH58mPcLapkcF5WFMouwXGQRkMrsY1Crj");
    izdelaj(nizi, 120, "3Q6ZKnfotCZN5I");
    izdelaj(nizi, 121, "_jise5HssOfkz9kr6z2t0p3uFattlDbhSQ6Q_em");
    izdelaj(nizi, 122, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 123, "m9AQg8qI8o_7DqSs2BABhTS2O33KsSgLrC2UdB583ns0WADvb2ZUQ0B_ew");
    izdelaj(nizi, 124, "vRFEFOK43FQA9Gs");
    izdelaj(nizi, 125, "mrJslZZ9X6_IAkq_Xf");
    izdelaj(nizi, 126, "5bZveiK0hLEUbVFHNe6I9_C8ONnNk7G6X4ykpPw8mcEqHljKlYjDcp");
    izdelaj(nizi, 127, "TNQhQt_EgxiIvdP5zYEPxD5lPsZwe3hTbTUwipc9Le1S6qhYDkICVNbAa74rLTFOmNgcLyiGcSY7aJhD53T98h6QTsm6i29QXi");
    izdelaj(nizi, 128, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 129, "BgjTl0zQHuLvf0SLAI93FzL1xpdb3scJCc8k0eR0VGkS9QdvCoqJjeWtLg61sFJagHBDREXw_bRjnwSsbyg6N7HXAoQ");
    izdelaj(nizi, 130, "muK7cjZteGFZ6niIv75tFfldj8XPSm2LNKs2ccCV8AUmRj1o3_Csaw0QuomLwBglDs7sj2Ivtg1ptkYSKjzQjUA");
    izdelaj(nizi, 131, "C9r76DN71HXRV1Gdza_kkfKBLnsDV0_Rcr");
    izdelaj(nizi, 132, "imNoLRdWnlhoYllMM_xdfG0BDruTNFayoR8Eewx_9DDuznfwjsMXBzpbsIYO7Mz4wDVUUak1Udi0qgqqgURdLitqr1WhNUK6");
    izdelaj(nizi, 133, "yhIhSDOVym5nZz03Jhcz2xPcMSVsrhDj6PwgGeHtMy");
    izdelaj(nizi, 134, "vRFEFOK43FQA9Gs");
    izdelaj(nizi, 135, "nnVpv6VkmeN_5JDbnfvFq1ZDhC");
    izdelaj(nizi, 136, "ahY08qKi3tY2jQzja9RcXemy");
    izdelaj(nizi, 137, "q1q2Lrf54RVrNKo1eMtySGVdIqILib824rrHds3DZHjWDFNO7DxF");
    izdelaj(nizi, 138, "lMLCx99kTE9AwjHZzKJg6t25cq8jHWs7xStQhlPU3ApMPcnenMC4IM0sFrNZGRzfnVghBGYDRAZ2");
    izdelaj(nizi, 139, "xcd6kIlO8tafx");
    izdelaj(nizi, 140, "ulZkQcCU_L1IKoHsSSAZ5GLKIeCkCxn7h6UrFm7W5h1jdD537dcVeWzqJ");
    izdelaj(nizi, 141, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 142, "NxKKEvgAoziji5INk5jNkEE54PjIkNMAfJkIGT5ahYjEWuLOmA1oCdwlBV69SqhQar4ZEXhrioF2IaXP50JENuQ4a");
    izdelaj(nizi, 143, "1kJnDN8LxON9ZGpEbL9KQBOTASPkJrJ7AyzB2Yu");
    izdelaj(nizi, 144, "YW7E0JkPIjkgtCU9XDWuLkLuWzh6zF5nSAocfX9XaWVrd1XGJ_bQIrer_h");
    izdelaj(nizi, 145, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 146, "z9NSYVUTsZ4bmqWrhFvUBIV8s9qFAhkZE9WnI5k");
    izdelaj(nizi, 147, "Bs4r7gT3TDqsph2HGyBTnBodjaAMsQffkPrckzWkM200zGMTd7Dl3yeb_EkJjvXk");
    izdelaj(nizi, 148, "eNWk6KO_NFxu");
    izdelaj(nizi, 149, "nRUZxtTkGTWPd3ObaHfISG");
    izdelaj(nizi, 150, "ic6mi3dyERqBxwZINHAOi_pLsOZCB9keohSykHBBlnJ4wNE5eiw1J3u_Ijv8xomZgl7zlovOYeFf02TYU08JJ3");
    izdelaj(nizi, 151, "zMv");
    izdelaj(nizi, 152, "F5OKnkuDG4fQqYMEQp13h2T9GyC6MBYj1ie0bDoNt8VkKLk0eAcHDC8hQvg1my7sBgQr");
    izdelaj(nizi, 153, "3g7pe6XpBa03B8628SQ38kTlab8T17QBJ4VcuqJxh");
    izdelaj(nizi, 154, "uvCkzSifl3v6h");
    izdelaj(nizi, 155, "yUfrjn6fVYmbaIdZP2ItNEdBy005AgmhF6ap5I41QrQJiM3HaCRYRyIvKGihOq0wJyvVC2");
    izdelaj(nizi, 156, "ti7MZLGCgS0xpWkyFE78mWYibFyLGw");
    izdelaj(nizi, 157, "OwDaYcsilp6BQJVFVVI6CW4c90bStcdlK45rayQvhi8Yn8bkX");
    izdelaj(nizi, 158, "xcd6kIlO8tafx");
    izdelaj(nizi, 159, "6Lh2D0YPIaRd9no9FGAV1R6z3GGaz3SmWtsgZe1cczPU75INFKj5SQw2Yi30iBO6G6x1r3gJG2I9QUvog0QVykVXl362QlbVF5A");
    izdelaj(nizi, 160, "HGYnn1bzPl4q0ledJz8jESax2Q1rgctdVrbTpv9F0yfNzWNe8YSuVFkE195byAsF5a1bPgUis");
    izdelaj(nizi, 161, "gqGkchsFbOZeEht5L_bXp3raiO1Zu47GARWGTt5SD1ET68AKHNrmYv");
    izdelaj(nizi, 162, "iJgqE8iSmNplrNzylq3k50I1VwrxBLNr4YN2L29Me");
    izdelaj(nizi, 163, "V8H26SVNbdeNzGH2CMr1tq8n27fShfsRQbhNfFSY6RBDjMC0SkbpV");
    izdelaj(nizi, 164, "3g7pe6XpBa03B8628SQ38kTlab8T17QBJ4VcuqJxh");
    izdelaj(nizi, 165, "kCxKvL63EbOqtqvnXffWC7HGtA_obfa");
    izdelaj(nizi, 166, "u1XMZOmc6tMGhAPx_Q0QHTSteuSxWGJeyGYFQUdWQ6i3Of1LFcJunNWEquaXsGXMkS5FBCmB");
    izdelaj(nizi, 167, "q1q2Lrf54RVrNKo1eMtySGVdIqILib824rrHds3DZHjWDFNO7DxF");
    izdelaj(nizi, 168, "WYsFR5ogLs4RzxGxr4QDNerA0pr56_x2OdOverShP4HXRPLiGEfjb8Br7ct8Spi7l");
    izdelaj(nizi, 169, "qy6zlmoEu1SzQiMj7qyvpMdoiQbrp9");
    izdelaj(nizi, 170, "rXRqpHiOoyn_ZmpLLwLdyfr8SU2g6");
    izdelaj(nizi, 171, "WCLQ2tu33fHpBOIvyWSOW8KlbThhoDTyzhQvB0pzSX4F3jCg1ezHOFwtScq3yLLGnTLC9zYJ1OIAk6JqPXJ8CK");
    izdelaj(nizi, 172, "11OiDkCywBnLcleNhrtufWfCzjLP8y22XPotQc1GsG");
    izdelaj(nizi, 173, "Xia5V4j");
    izdelaj(nizi, 174, "D5OEwpg9c9N0HhAy");
    izdelaj(nizi, 175, "lMLCx99kTE9AwjHZzKJg6t25cq8jHWs7xStQhlPU3ApMPcnenMC4IM0sFrNZGRzfnVghBGYDRAZ2");
    izdelaj(nizi, 176, "o9S3b5pzW_HsICinGwFRNC4f7S");
    izdelaj(nizi, 177, "WYsFR5ogLs4RzxGxr4QDNerA0pr56_x2OdOverShP4HXRPLiGEfjb8Br7ct8Spi7l");
    izdelaj(nizi, 178, "9P3iP2i1fMNv2cRIPCWWbmeOkbVK90gSNa82z_55kUA");
    izdelaj(nizi, 179, "NllJTTu5OZGlVLGJs0kc3DkTcmGdMEmgsp");
    izdelaj(nizi, 180, "zlAFr2Xfj7_4tnMqNepsfCSj1lYwF4kGjyC4hi6hDzJoj");
    izdelaj(nizi, 181, "1luunDiD6kHRWWZLRmRJ");
    izdelaj(nizi, 182, "9P3iP2i1fMNv2cRIPCWWbmeOkbVK90gSNa82z_55kUA");
    izdelaj(nizi, 183, "u1XMZOmc6tMGhAPx_Q0QHTSteuSxWGJeyGYFQUdWQ6i3Of1LFcJunNWEquaXsGXMkS5FBCmB");
    izdelaj(nizi, 184, "_3L4McNMB3Z4xfTk2zJHsk3_VnVKe3O2lrVVnQXPNS4gMbgOq7gUAxTy_NRgAoYziCx8vo_jgGL1VFHJOetWXuVXr1rX");
    izdelaj(nizi, 185, "INnHvG0hIdEDibUgBH94l1g41MPUWNxX5GrIfA");
    izdelaj(nizi, 186, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");

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
