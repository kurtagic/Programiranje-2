
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "nFAuAqGg8B",
    "7erXPfxdPEvdr8hrzXgXY8UTv_H_fPbpdkzIbuaO7kSysBHaiZsIJPcnVeJkdCN27ced71Xw3EHGUdm",
    "kwi99QZ9WDowiI53zrX81bdKoZ4KvrBKMXcjqETIojhfZPZCe10TOb0XDhhhSB9b8mjTdX7aoX85",
    "LbANPV45taZCra4IEhcwCa3ZKhW1mIZ0O78GcGf4MWElOs1TNcFjl7nmKFbvGGONtm44QGIG",
    "zw0n8ZysyHO6qvZspLb1CD0LRWj3CqNewdN9vPXec8uFPMBfBgGWH9sM",
    "6Yysu195yImM1tD63lWs1we4YXXn4lxubOFBqBKG_S70uhFKGvoKsXQuy3fqva7P8G0aR71_zd1lOd",
    "EbWlueiIj265p6kSmyzfpmQFlDI",
    "Rm684DjmEkiS_yXhQWuEcYhFO4x0QVJPd2uU2dxj",
    "lhNM3XTUzlucZ8QO0RPzOHZmJPh2q6hovI2Ak1etEAf19pQO1EA0N8fj2OtSFhGHEfff1k1Jg1ZsG3R8979_OoRO8wS5",
    "6L43ZYoJW3CAIAWIlHw7jVdk58ymjEy9juhf6RDg31pjm2ciQza7sDDe4nNs3zeOvIjrcUaiwfxQ30Wfe",
    "Cb9gP8QpmaqlRJCjCE4bHdPyKJr0jhHKkLeU7x7DpCIaebWfMS3IqRm9pl",
    "gEXQX5s1pYi1Cc9O",
    "H6XiyYGa1v5NBU2kW90kn5HEYhmO63N9Pm2",
    "uh9VL36YfIRf_MwlVx_s8ESzjfNN5Wqcmon2HB0ejBhipJyx05ioGJP1Tbdakfd1P",
    "gAZf4nAMKbX0C1Lolh5Cv7anuwsxUKEGg8lhtn7zOmKvHac7NBFUVwuodiGxNSIqDDcsF4CeqIe2I5jRnxYAkjJym",
    "fYazwUDP9D0hqJAarSGkYd9EXI09R2vQlBKAKgxTy",
    "78WhkywCgRXRX3Oxjv_uhurxo0Pv_XqmkYtyS2BfSUKpu2OzfYGsAbuLqYJ9wDWfmmP4Jc4aKVtyWpamwoRevN1RN",
    "RId",
    "MmXEyzK9Zsg_rpp30gejQ2BbzpivsQi7LUKyXu0z",
    "r62aIl3nj2cwvpadUzVYfEOeiqcugG6vIAl5Bb4rsssYX41CwnfNRwY48LZ",
    "mpXPDrgMWAmfjNxVNWAtUIkxkryLjwA7fBSUErviJEwOUlo8v3ofpEKkozCubT7iRirPHDbQCnsczf1ZaSg5Eh3iABm2t467b",
    "5tNJnCXDV_5nndRxJsxtOOT9wjbMoORw7tKm29Ylx_dV1446OgB0TjtVjghc1FS40r",
    "Xxf2M",
    "EZ3GnQ_QopsKkHjZNKxeHy",
    "HOmQP18ywXgb6gCBnt5eWJQakvs_Zrmt6_cJt_lVyFTHkSHu5cnU",
    "av2RI6ABvhr4Brvl6lDxmPcUe5tGgfrbDfwhMtTb6WZqNvLas_EYvp7_UXHPKVJHEW0J",
    "7_6ji6OkZTfHoctOx_8zZ9QqQVc54SVexOxmpmsEswlJHFBLE",
    "CX8p",
    "Nd9OhIv8T5qEpkLc6IcR17DOsTunv_Hi50TANlgjoYKfH5un8",
    "AQK1KxMv21fEa0AU46q7RVkIP9pArzqgtSO4GiFUD4W7SWnRLmrokhPuqTrQPdJNoOJ6E2BmGJRV_jSaokjgAfldaqKPVMWz",
    "GNqoEvkbYyxf8BFltSD0Kbr6jJjcGOss1lUUDJ24HygUOYtxUHyZhpdnIRp2PIcn637oRElXvsHthvwlLlEZ",
    "d6nSR9yBZTJc0zXl2iRbp",
    "v",
    "cuuXUOVOBR1KdTdZtY5hnzqReQXiGKCp",
    "ZrWNW1gn7qwfRtPNTcBQcgmNh8DGMt96iyXQhbroP7gn0uXsE7",
    "eZ7X48N_Z6rX1TIPjDd4eWkzEh7HzSszWIqj28wiZ03str",
    "Hnvqy6cVjuqGMdxOS0IcEzKGgEVsfEMjk_AGToM97lLiJYpyl1HYnm13YuFFFyTiRepqZOLddoxnY2VPpRGZkUMdKbaiVdIFHSoW",
    "4Wm9EsdoJ3CK1A6hogQ7",
    "sNjBVQM9zEsBPkMvcSQJs9HOHsJgqB6rasa1xvLNSMbNs2Dj7zN_EP6TSiqkurzYMggeV24OF0c8rp5nUg2pYqcse",
    "5EToiYRJCmk45PBXiT_rGvXk4XF1",
    "BW72nnGqTaPqPSnsL41H5DBt0MIPyDeBiwpmIrShaB7I6jBnUOr8kqMi1Oa66N5g4Dqp485xir2_j",
    "UIuK7frsISO4yqgLcBITeZlqTvK875_0lmzYcwcZ6zTGmeNM31VcZNMj5E8irE_62F6Y5xHPsd3I",
    "RMbrAD18iLgPf9jGcw7JKxxO",
    "TgR0ARflf_kuBb6EplYdocyLfSxTHVqZjnosQ",
    "z37xDUNAjK7ivzLZQymRugNtqYSttAxOET07490K_QdLvNK8soAa_edLGTem58gKs3Rw8AaVK9LY3ztBF_d7cGhkpaaqKlc",
    "Ml1i4FW",
    "lPzVlWBGQajjeW3SKLgV",
    "8acyTQWVB9LzBwobasxoqEF6pDOnPEVcg1R7guwsKc3X1frKwVJTdmUa8Z06Wx",
    "nHL1H54_5lZqszAnu5JIpjXnHvPSDLvbrp",
    "PyMcVnTkIN_2bDgzifJez4UQGjruYeLuLtay",
    "IZUgW63F3s1Fcd11XmVH0FO",
    "E0rH0gnT_LMybQILZ4yWHwX_Iq66gvmOuvNVotNpzPwTKb6LGhech344",
    "AuzVKwpPyRPlrCkbm9p9",
    "yRlq0t9dzZ1Xb4ZyUAv3tF4b7BQpi",
    "McpXHCw0EZaOVdJ5wR3V58YThri7G12HRoETgUDkWKn66QO0c4AwjGHmSgp0T7LqNO",
    "vYeasaIiLCBvOtBZXLhoVxBaXtFAMMJ1HfOEkeuU0KEJ4cXF6Y0DHwdN",
    "cUhmgRYlUszcnntsCF",
    "G3yIICBiH7Aa8AgpEc9oSnpiQ2zHIjAJd8cQS_SCBLk0CVmkT7kU",
    "guqH9VeJBu6hU9iFetA2aGJM1yArDS4fRP7ZbUUtWwhyj78LTyeG5Ij6iXc66wC69ZoXL5f",
    "Kc4RiPKWknwwShUxSrYERcbmXQ0d9q6nNccn2ShpENs5j_30O4nM98AmM4UDL",
    "9EEpyZeQh7Ki9wqn3ycYEXB2_3gixwxFAyRheiVyrDOR1T_RNmSDIuSbVcNY3HTnEdrcAtj7QFn2_slN2T4ar3FCW4xR",
    "fOJUOKi_M7TOKJVxI",
    "0yqmxGFox7Oz9CE7",
    "dlZEiHE4V2y4ZcOxoaEc72kZTJ0gGd55DkMBtX1",
    "DL1Sf_gsoLEfyzVH7F4hZlHsDFGDPkgzfanYofIAdzgJLRw7HhLWf0kM",
    "3mNieyMASrGL2_i2sMV2V9WYcslpbXTsa_6Tzc",
    "yBcjm5uw5_keRv8C_cXmpmL8X3FoBKjOKCE07OHW4sqwl2pY9iwI_LzhbBZaPaLUneV2S",
    "E58JVQXkGwmFBUN6anbI2awZqeTgKgRW2BcRapkhYEG6dK1Laokl1Qk4E0XlLd7VVC51tQn3ka",
    "wnN6UFo9tJwHdylvptd0EmDtVTlqopZ9XaVLrp0_cFTTq_hoWFosPd28wOqrIuuuptyysYMbCAiuby",
    "Lopgv4r8kf3d1GhDYGZ6VWvyJ2hVCX7FE5QSMBQ",
    "_Pyj8tu9dW98INUoVo",
    "pOcpjPzddsGD4VEUIG6CquZ1EPPhc",
    "fHuM3XB_5ybIRXvmDUuvpg7vs0uD7LmVo6DVSXlfjLvSzwi5Zg4AC8vP7bX3mVlbD1COD_IlrvvYS1WcmrBMTSI6",
    "6OVKnYs3Y7iiy5WuRVadX8ihoW6IPWXCedGKQGAmyZz0qPwp3OWfaWghIItS5t37VnBveILD70I1Cdc_NvuQSgnC1inLQMnd",
    "b2ipXDWvRB0lC5moirWZts4N",
    "NI_GX3c1HJSL7QZd",
    "pH_udQ",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 273);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
