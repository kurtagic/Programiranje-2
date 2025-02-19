
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "KDVz_F9E4ayXWtJpagQD9LpHelENpe3SVqleqU3fc1bPlzqAoBSFbPOCfTgnmgw9wz23ulnXfyyiEuUMj5EY",
    "7jZKbcBxKcb0ghrZqX_MA5CQTp1mFRRgVpksxVATfKohtQbv1ILDQsa5Z5lb49GRhQgFKBli5z44_PIZmO3Z",
    "kjttnW_G7MDuE0NvSUWmPwtPOkywcuvOV4eZh50NGsl2eDmEZ4fhuANnXRt1y02rAuV7_sjuDxJvStyZPKgV",
    "FojX3PhhUWFdl0XVsiAmUYaa54YPNIi8ubjbskUAqSsCSsUUGrLBWOXCWAlJx_Rpe7OFxCpN1cj88iFIC9XZ",
    "dPxVI0oRma8AOrbEOZ_zrYCfw7qVc3iRe3ppjZe4Sk5ub3zBzpJul3IMwFsj50bPwxrHUmZZTi12EV3C3Jiu",
    "c1k34B0Q5XxoZFYmhx5L_pEF4RDpi_FMG22QBt7rguxUTv7qAdJJSTDqLzyMzDCw7Ltg4kNe9CcqLbxsLtOk",
    "ifG3g_hlIZYe5uOpX4LdkVnyWP5YIO_NFs96RW3QEqLxGoxy8ur68lMnuQhQgINmXIe6kofsB1Hy8NrwUHEu",
    "TiQwVtekRxcMqZHojyBanuSWu8ERSVcQo0Ix9o8vw9LNlbAfOCLvN3XXx_Zc8D5B_oixJISODkyrHRq40Wu9",
    "BrShUPyt_nzRIEAU2psgwz1K_Dh_p3KZeueN_tm2mFSHSwZgBTZAwegupNgvIkPKPOn8aILcTzQMNKL48Y0J",
    "9djUqdveHZTpUleOEjYfx4TlajVB4b3D4Yj4rwbTIJJsoltGBkv8J_wqZlClHcq13bfFf2QZ65ceFTpUTYCg",
    "bm1bRUh4Iau472tldIh5Lvs_B5rA6TVfNePDfjvGh7rL2DmHlwkWnjxFU9ix9lQejEA0xNznksAsJmjzIOjL",
    "SxYpPVNAaOWXpeT1E7f0W6WGv1D3SeYjtG3IVKDSEPuprNwzJ1HZSSquplw22h0V47bMVq9polcr9DYTkTll",
    "ANOhSrFvDCnREJ9sl0bGVigCRxJdHBBVLl5rPpunQMV6tTXcBECbb7fHZUPzZ_n58SRonTeUBOc3efhIXQKG",
    "l9qN3ahfvGqRsiFkkp3k54isQDGMmsOgG_H4thIAMbLvPuz4cxl_cYMUs_uKO7foabgJpahWJXnRZAMWwpjj",
    "qabAgS31802TAttU3RaWoUGbcebx6NxkvGAn8FdFgNGDuGKFRsRV25DEZPByvQOXnaaEg8DKfvLz8y1kf6Rb",
    "ZnE4FnUBf3XbXqs62fBXn1gNhDyoIYgtKwJmi17N7Nm0FS9jyehZv6uGv3raNvfxig8UcL5XfBfn_XlbHjH_",
    "KkmY49DU2B_1ytZ8li6KK8am_KhS1XA_W9R2imHmY2TSNcm6BP69o9jTxCBIl6DbNNglq7G2vZ9Mo4XLFeSz",
    "rK7BvGg4Vwfq9PWETj6d8muboZX3zOqc3uRYUToK5Tb6_V0cwqn738dU_bL2QUxlYAfHxPPBLcrdf49wm6Lr",
    "HyfGHduRtCqBDgpr_JTBawRB_o2xXK16ztZKbIZY4jFWp4NW7jbam4ILIC7qhySzd00BOHbo259blHBDMUun",
    "sMQCSxTttpywSaoBT7o20Xd2fAsdR3ou2v8kovu4IONWPqgcu4kTIYRmNU6FANaRi0p1xE3yVJaoJA82rRIf",
    "0nAlVWR8eBZ0bbC0pMsVGprLtpHwg1YfHxNHTlvOm4LOWFdDoEEpJuX6heZC1a7Hm8NNka3MBoiuZJnRlt7m",
    "g4Egd3ztd9MHv6oRIvSlYIzuUTPJeUEirM8duUDZ6zlgMtdQmNNQKDeJxJl2BoEqd2NYudJl3TQWFcd30LMf",
    "4Y4CY7OUyxRNhMCLSXRdU63aOvSHagY8s9LNAQZffc6NT90jnUj121nIJPpz2K2jRskYoiy4OEReNDiTl6eg",
    "mbGsk6M6F8cqcFsZPdxh7vYVAhXTEfXy4wxeKM0NseACx40WYLPE47wZ4dSsvqmCybw1wSHVfZ_I1Tt_drUe",
    "2ZAnBmgHfi_APE8hXJjs0gziWicWng_jFD3BkFJ3p61bV6rK89CSYL6p8vlegkuGcURLpdQ4Z_CRoj2szG6n",
    "NXc1cirtdaNtJglcPbaVGcrWY_hkJnbuaorS41J2sMlhUzwEiYweOGktnnE9zAeWC4w0NnE5e4U7ix74Ol5c",
    "K2SgHyPPZEfmtnNrXpVozCFGyYfnZPCdf8WkT3xWns4TyVARuf58v_nWXBLNbOyosjkBcjqQL3UvqhurOd6l",
    "tJUlH1YLe8gloMJG0rD8hPF_AWJOx5Fcjuqdse5ur5EwLhKobmcBV3GCvgACAk_9ojT5AoyZGJOH1gsTg5Zi",
    "eRkfZGPHjSDSe1IyNBLNrYPrrkdAVtwJzZsA3GRFd_NDjX8_5gcgWQfvYntIRwXkQbjsnC0qocbkPOJcLQhf",
    "NqZeG3YsqSnKcxv6aXWCSMJw97E_iim5T5zv4awaan0eoKrRHyM36K2dqerlTLdtOJRlg9cr50Mj9qBXhoKJ",
    "HPUqUvs0xrCrDyUytYFLJdGW78RuFJEMkkq96XxQSivDoBFtaAwgBgl6VUCvhCiKnUqiovQK4IQbBwsYFTJj",
    "ld6zmvE2JiZn_nzz4iKIs4Evnq7OQQ10PAfShPOyR5VXyEJFZ_jrCK0ydQJItEqxjTHI6S_VOy8oSFVd_ZpC",
    "BpHP0EpnIE5IffOwfBbO8AHH30pEzu6nihCLJD2oKQem0ZtacDKtDR1fNuRngoufv3hvmC3KerIhrPc7pJW_",
    "SEYzYZceSLV44_g4UQP69cFmTJ3nmcBAZ2C5Al1z2R5tBo9UJAEyuVPvKNJJz4g05MZAbre9kd3X3mUrAViM",
    "hvOiUWVE0zwXBPjZa35J2oPgWypYpMmKn8GexkTDXWxdmWk2bV9l9K2AV4WTJoWbcQsJ4fwg00EEsSGAtwjJ",
    "4nVbS5WXdaGG533ojVpDaVhb9L1a2sreEARt8gWArVTAE_7Tf7EGYdn8L_JCvnv8xH4ucRjUFo92VrV2C6QV",
    "7Ennpq79ZtUxIoKeHW0tSXlUeDxkdQe7EuFkQPYUibM8BMF4j9ZFpXFBVFMPz9_xrAiAJJ4k7QvQ4iPDCvbl",
    "lP23BI5cabjiU9r7oYjNUpxZsF8A7Z2pxkAYPOmWMj2kuezMKnR9kYrojL4B0tSRCCQ2A0i_VrGSQeq29Ex5",
    "5tHkCLHHyj2f2UvWvywcWMpvqG8EXXzzxXPPeJ8xVAnY13TmKS_segsjvV0FmASKtMrIkUrNmoHjOB2I0CO4",
    "lIEklf0JRAEaIXINWLZWwovKWrKMfFCTkpU0r9zKlpmKabBM4_Lw9E1w49oh1d3wHFvdzMhWIvktEoJ6RQ21",
    "j3JZCl7qgRECWHJC6V3sfu7oOBPAEfEtsg11DzLo7QKL9qpNjAQBVJQWomggXoLR9CVUlnJTykQYSe7zidkk",
    "5G9Zsuo51psbV9PK4RuqTKpB6E9qIhebzY6HNREPoSg2jrHugxNBzdQyknaBJ3eaUvIXNsoMxaFBWXK5BBOB",
    "saHdBk_K4YU_M4b9F0UZDIEd7hLr6GppYXOqRlGQRxq1Pu36VTV6Jde7OAb14pSPIkTRCaLXvkLFBryvNQ1j",
    "l23cG_ptTltBWJFiWFCwr7jcq2wOgnoX1L3Rmlugu8NwmK5NLT36U42KrGShpjS8P_SPhdzHDua7Do6_biki",
    "V5bmRfwph1qRwLtov3uMn5opL2QQ7CVSEnBwNtex8FTU14tSzdpVhu31Zz0AE4C3XFiqoAHDpdJvrZHpm9Ty",
    "K_3UIXYWlFOsvYwLl0gBu3of3VaFSfMk8QQIDjTpjboDwIZdqypyFZV6Q6W8a22VjmwccTM3GVNePkI1mRK7",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 84);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
