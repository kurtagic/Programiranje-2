
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "9bcdijDs_MsK8gISsh0m0Lz3WEjTQZacZ0kVSLu43a7P1Mg44A9SENDa5ZwgTzpGSE32BQ",
    "P08ZTc2GA7jU4qnPCUMVsGO1wg6WJkPuc8u09gNoGRr_BNlv4it8k22YKyjz7Q3ls5cz_k",
    "qbOV6kXKYPNxK_HQWcyPSMqs0BB7pP8hMQlQLVIJ_2auLcw5J4j0Pn5qmwseyis3Su2Tkg",
    "DUD99Cjpt4J5rLfEkAU5LnkgC95Hf8z2sSDrUYLzONzYbXrsyQf29t46QAEdq4SUevssRj",
    "VxKWnagktcKro2qke7umO_z7M4VG28bV_CYFHU3KjqAVzHRxnvYAN3C9ztqGGtUx2lCuw7",
    "VDDcKw_GSkk9EAeY2DSNvJ2EeuH5KDa9Tc7H0_rvzHPvaNjKsn0OuNgN9BR99FYi1zGGms",
    "_TfwktqDMmdcJ8FffncwbUZa0oRI2biVh4eoqK1OL8_K5BFxY0SKIf8WOqdBQi7BpG9ooy",
    "vGlQq85Firb71d86jvZbLCclWMsAlpqPGVK3y4GILeZoofobsKMlyFGatMQnLJrRZsEK2F",
    "mrPE3KIvPITWBS_HyBrjrD4mlzRVDwsVjKZLbVUKWWqvEe6mT7CSQ257TUq6ycWDncfdZ3",
    "nsRgfh58jO19AOTUGnZqrbN7ec8uMX9v_pGMHzgnZ5SwKVtG_N7RUsmD_9SpsdIFhI4evd",
    "HI5398ZcUXDrB2KdisrOQneF6rruvV2oOP_37kUqCvyisYvFmgulQpf2LVIVQfprZSgCTl",
    "yHU1vvJkdKfOv4IQcrbDGV3_Z9Fsvox64uw9OK8LhU_FDWAnoXNkEbnPW0jc2nreR9msSA",
    "lULIxmMlHoaeUbeiSuItmfl70gXdjPrSJhA_vvOLYfDvsKntUusGK7O7o3B6fn7cUYaWFR",
    "UVbURcBD4Dquj8vXYbxay2qn1TEMm_EmoeEO7QPP4VSUo_Y1LwXZB3YxM2VWrlcVa4mEIb",
    "HwvFktn3HppyFiI6VQaZQ4AFANiTPGT4RZr7tnVwmoehHQcEuwpXwlkwAok_mUVgrYe93A",
    "vsoVi2PD1ztfdSmeWFUTdugjInmu1Yvx8psjnxAkTaLy6ib6Gkl8IJnCpR2apRRfP77eZ4",
    "xrcZ6cKoJPhbXHD2T9Tcv8s9RU8iqG2x7OKHwQxhtYK9o1z0tKPs4c7iq7yRCiT2RzE3rZ",
    "qCX6JjbZwBXbjuup3ZBqUpFDETnEBUvOqjMkB3pI744oSVbUo8aJXeB2D4IVgMrBV2HxX5",
    "L0klDWVdtRnqdJuD5Y2R5i60mtpfAR4aO92z_RuQydWvpDExt2WuKEQ7XOwebcMlVt94Rw",
    "PzvS684X8L_m2osvgZ4Jl_g0LILRY2TgfZSIvsc_E0fQskUd2jH5MVsb6W1N1Mdl3NVX3i",
    "jy1vPz0pj2LYiHR0bYHwFFyfWitv7RbcuVDrTpNk9_sQlzsqkc1Roni0haRLrb4INC1VX4",
    "U_wYx8EJkeq2Dnp9pHsmTeXMx9dDXyzt0OPGdK8ZzQmkQFjNAWnC94_UN0ynVVvXyMNar3",
    "YJsDjSsYNX9St7BEDUFPN68mW7L2q8_4_1d17C0JVbO37tIe8Gx7u_ZR0iTvnz1h8mubSz",
    "7mNJU0DUMz6poEkALNOIodet1vGX5hmEBYSdc3XOD_0NWjY8DrMaZE6mSXhwFQxB5mAgew",
    "QHy433dQVD50RETspBBK3WKafQZYXPcLNgdj2MlWKJCxcvNaztxPTkPSESbWvOTJJIugNH",
    "R30uhH_ZbxBVOVq6p5cbl3KJdqi5vVHgdpzTqKDfNOCHwK_a58cf1ujJypeTeuTt6sFgqN",
    "_stbeoMhvypYUKzWbcvT6GsKOxnS_kwQex8E9lO0lMyHyfNWp2_GQ23HhiqIlE7NgUnZVO",
    "9sAOZ8gsa1cEuPzfvI4SJuK332riIhKkfIg0uudezYpJBETaZvSfo2VfTIenuleeWklEZV",
    "MqQPM2F56kW2HhcPdKBavBjmFopBLtmx2B_k8ZdBuh029UpzShoRBOtxXIiS9M1OzlT2d6",
    "r_aMzHPRjDD3LeUadKsvA9Kc1eXAAUDnDVWZEyY8mT9nI2KXJ6PR7FIXyXguQ84PW5Uton",
    "XJqLFgnP0qn2TZ6_LGD9vwPXFukMYT2QorAkmyKQi93L1feAlv0DKTysU7fX4JGYXkdrii",
    "IEYRcJrOJjcTQLSbYlJ_g1yL86ovQpRseMjcgYJGKkqtZQxqywOoVUEvmr48ojiGgYL37x",
    "iPdaK3bmTRxN5DkiFqiK04XHEMGJOPKz4rXexQ_uZtJpA5zYwriX5i4d7hwFW3MH3s5PEm",
    "UC491Yd4T7VlO4QIG1YJirUuOTXaPauFbgA27aHpVHoumk6AqaZ7BB5Zg3XNDWmNKnvqSq",
    "FRE8SAwHJf8JN6BlBoz8vsSBW8AHxGurZB1vNzZImG7mjTquoRpoNiK_SgSbq1xVyNyN7_",
    "7lGWQkAQPd82BGaD3yLdlgRDtVogp7aIDR8YRbZ7QQ0ymqunXMRkCIEHMamfXZGfERDXiW",
    "vbXK3D6bxx_Ti55nBDp0uTAXRVyMB2ULfZkiYi8WdzKpmua_FgWqxMxTR4d5xxlB7IDhgr",
    "erWBsKSYauYc59RyqbPhKGMKjd2I1_5bQZGyHVvMlidFsN8sJcIWmjT5cWHR98TZvGpPxU",
    "9O9dWLFNc7pYj82LbCqIzugEfemVIx6yuR0aUxVhfmb_b0UKbhWZc61cj5yVW0sgtXJvzw",
    "CABnhGyZhsB79MAc4unqq62HbQ6S9wYdmdEMoNNTEwNejkcAj2SjNbdRcQxrVs4wY9gPpC",
    "6cRyADJDSC6G1SxVB0GQDzmFEhRaVFWWQ1trdUS_B_icLrmcTYxWDWmC0h6L9g6RYDrs0p",
    "ba6g2G7MN5jNUl56A1KK5dmkAFr3fawtIH0w5Psio4A56qV7SCuu4AuTaci07Iarn9VHo5",
    "0Ufk5QYaH4PVnzAQB9s51agOxdlvKB_CJKDrtlsjZVrDyIECYIv2vpEn61Uyo2rnkvYbHp",
    "kjC7S1BWwv6ljIVpiCT6sh1YgnSuvrqWXTb9luVyl_SAHSV5pVQo18EoIAY4uJkHSobZKk",
    "uHBzOZrVYdkbzf40lzB7QlasiVKOWS_P5drsQc3UECeFTAQuQ5_Hgr200Y5ZHF6b8xySK2",
    "OqVQEXMlws6J4yBCSSsyYE1MmVYKdoyVWKzB7BhRCKzScyHAVDsmK8aaHZf0eKMjzPA5Xf",
    "EXvvn_LKvhxZTM7xPeHZOavMBNx6Bxvp0uslFncGWRV6jnAl4esM8fVNFR1YVgCV5tG5eg",
    "531e_7v2Zkp8UKDaiIwnhX2KVuhowpihWWANwx1rqFQ9wVEzHi_XAZnJJQUfG3f3u98ySo",
    "cBZjs2nMMPq1Ik4CevCfY2DCzRFG4iFuu_ojnNaqZA63UbGX8eLo8cnfYFwpKdzDBbuKEW",
    "Ydgbb8iluVxOhcThWjytEZv50OgzslDodHXwdzI2EX4WB1lvi53eSPsEChvIPrGO7wxMcC",
    "N4qSOsPcNjOo_6GxblsdqK_sXLuvWnDqhyGMMmnCzvHFIPX3iKB6vTdOqi2OD3daQRVVgh",
    "PhzyYsid6D08GtVgNywGMJIf1uBV3IHbmAdLe29VCj5aIb1VndwRMbI27XSlr0WNHSzsZp",
    "Aq8Ad5sN6o_jpAc4BrGYK4Fh3whhYGMPpzN9xa463UwtyMn835uQwtsEZPd0_IeKCLi73M",
    "vA1JOygBbnFIcbNsO9wRWfrOX4gf5z5Ph7PbP3nHUA0C8dM8sTEv3iW8z0XmIcb7zzfrMz",
    "8sQ3xeuDXC4vV6P3N0ScFLK807eG388vYlnzqvgiiKVEw11UbWZai_D_n6tQzMwM9MSgw1",
    "yPBx3e53q0OPk0Se2OUk2MBhG_ruMuOzt4P_9wLZcKXw8q5qGnQWGXuPYmqSgLPqoAWZRR",
    "cYdIKKIgBHOuKBHbOYeWSGjHBOxsV1VpUHzZ6mbFurFNh7VqZ_c7143FUVa0C3DkheYAwS",
    "mwTOlEW8adU8RjUWpzFIP5vDkK4PseZhmtwyHlcNglsd8_ZZuIQyYjL70O6epNVAtOVAL4",
    "1VldA7OxZlkrYJWR24aDQnkb2UWDtXdhXYYsFVHxggr3MxtLHVsXTQeoB7EZUQrFaAoH9a",
    "coQ1rSYs660Dy0i8wE2KOYxDWlOsBhZUYxaP9gPqirKWfxIK8bqrJPr74uKegVWfoiJCIH",
    "ePjnxdhJEiz4qHguWl97s0fUvLHG50KZlk1LZkiuIHzgRSCrdrtq8dSOk3giWGl4PtwNQz",
    "yCq5fi_S4CMK9dnbHSZrCkTUr3cuf0cS3IEqPMxafmskkN1vzMphIhBRBaJhoEBOQ4s0wO",
    "SJiUn5cmRnz6UBddvBHL4Otc8uWDIe4EoKuoQQBI_Jv7YYCilaV0meKtnk5MB_kb91cmiI",
    "iL2RTk3SN8qvZk35ODmBqPTX1jQSkPKoZVDtXwoL7O_06isLGwh6WxmjB3qyPxovRBvIwL",
    "wOFtpv0GlGtHuDrjzStCZ3fXBRTbLli2qPlHQxoUI8CXgI2LZc5bYCWRK0erhpGtzgWW57",
    "C5AmT1bNqycsnZpEEAgRaH18GHspw63wnHzOrjFyAmeZLb1nfLWqIgXFiXkzOFWnWPdNRp",
    "0Um4sxytNLlvg68L6yTMmJqCwvrHEw6O_k13Yvid6k3af6ACqc4HChOH50cA2GxPL1efOh",
    "dNXigklR2TPylEZiblay5RUQoSKBK4Ehrg4wcIVnDrc7tK1tjKPmHTJQ8SP5rIi3ncN_b4",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 70);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
