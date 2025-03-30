
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "5PSm4RLmrGqTWEFW9PqlLZAyYVWOM_QWi8xq92z",
    "ckldYJDnp4",
    "C9lSOH8tzjB7nsJ",
    "TwDVAxjUw5ZkSZjb1zVsCBHiNrtrdZ3cVS2XE",
    "tTexn8c3zPLLM_v1VtUuOp9jjD15ULRn8lXCPr2mwzmI09eCSNvOeUvFa3bDJqtmeEQYQz",
    "QMXSXLghNzyMV62BSWna94YWWxOHrRzYBsAEGJ4x_fuIpdXbfchjhwiyPVyS",
    "aiI_nW1OWFv2asFL650BXt8eNdRChpTRc2938NBmY3eVDlqkk1AAqoKQDMGsHW1bwB3sV_fl",
    "fBT159j4AOrSRDR7i0p7pmZIc81DoOYoWtOhcGa55ReIQNaUF5AqnrZstg73J50hCie4KgjN1ezLDaKmKz",
    "qT1xFk8KaeUMFPb0L6YqVOHEAvWq12Xv03JFOD43RkV4cnyf7mfpdI6B0aJl9q7aiwEKo98eaLptjKtQGSZRxDg0vZp1IGI",
    "Yw1PwegDzhBGmUbR3DDL6iNnevIpaa9YkDdmCwqxhxaDceT4Jtr4GcSccw",
    "cvdz9GPzt3ndDKXM96BCyo59QsgualRjkDhmCHCpI",
    "6CK8WVfPElzpnbo9UL",
    "ExddCdYcDJ5Xr6WyZAL_66rXD",
    "SaBRfm12Imn35FSfCHlFR5LQuhMwQKLSEM0Gy9v15toR2",
    "TbbAR8103Jj5vmvtq7Vyt5LRwR8yxfg",
    "wTK36PZjwLJJgkhAxcGwX14mMaBMqeYp9crFuHr1Qntri72ZgfAU_tofgzV8ffS7WQXNiZ0UmW5JsSujZi40yO9b3bT",
    "fIeTAUcc3ct4dFdNesuA_cia2WAsKhW36pR",
    "19qIohx4qg1oLnxNcQCJz25G6g6SeUWLvx2gp8aDLqu_UVMxDnCg_9xId61RA5HsHyORh2TkU2D9tv",
    "N9KAkU9kora9xQ5KCDT8uXrxSWOZzDMe6NGoveYwTOkt4PWdaIovGS0",
    "htxT08OS3iYxXgCdtpLGKUeB6VJIyr156U1I_3aP",
    "x",
    "oo8u22SJE8x6CIDO0V9WjBX9KGtZY5haWaRzag0n2PRwQfyLZLyXLqhmkBUh",
    "l6VwqqRpPTkFe8e_4zf0Y8AePPBwEKl6olGNxLwfwXtiHeSTeNm1ZWIeZmvDcgCs6WxHk2RYxl",
    "y3IaXv7A",
    "nUM",
    "i7Mz576TPFMyCRsAJhEU9aW181arTJDq5LBjewHzWwl6Gk36ZlbKvWfgUjMEOxe",
    "LKII_A6fSoZK_EgahfV06L9MLxeuvuavCWuaBBys2gRcKR6O6IRVJHhvTqonWXaslHHuGchWrQXH2kpLGGXSFdgHoQ3ivpCO5J",
    "1v0q4RIhSI8OFx9jfys5Tl6tw5tXTVooHW_GVChSUui4c24BqeOfVRBEvzDi_5kO3JUOlAMPIBmlPwImbpLOz7qtQL3oitTbeaA",
    "9sUah1",
    "QurL8npRHbHTgcZM0Rn_cPM0b28H85Y5nPGu1ZpgSu7IxO1IflvSun",
    "C1wVLzLOd",
    "uKnufOckHG95ICwtzIZf83_iBGHGWcyapMcl4hx4qaC2ofL7zHF_HNQv6",
    "rQ3ldmHsqH5tBavDxlT0UXrhdSg9jUvx9CIfV7tD2ExtyuS3r4nSvIwPD6vEna7F7",
    "diZIkjtVY5j",
    "3IHbgbEgkEvzC27D8RhVejcA44",
    "Q9UQREpUjKsTNNygssp0D8eFaF_zZJJRtkUtPkS9WLY8RPPf6RRADFbhSyOQTzQwzCGOmcl",
    "Pqj8oABCAq_UWvI5ryhFu3bBv30OWKPr07OIwgVfVd906YPpHnsqBwrnwMvpgcv0XyFm3THAvXVs",
    "C",
    "e",
    "guOcL88DyeDHsZYOdJMOsNe4tSqZ5tbeySRK5cKqGOxvOJ3SagymDGfGpgOrgaVzB4rQYYl",
    "7ivNpY3Yaj5_yiNpdoVLXjsblG0Yls5IOtybJQf6dkaRQu5BYBm2ENmVMSCqn3vrAC7cgqR",
    "PvORIrSH5fzAy30BqMiCCJge9vUhtNqMOU9AJeOTIXbSppGY3NNzGN2d0GxRxNjWgrsLAe4xWcsogCpZ6uP_24l",
    "M9H8EhZ6lHOK36PsdDEunTsAvyH_7zmE6C2cQPS8qhWx7KQ3JA577GTYaeXEdSPYu6PtctGzESydkxC2c2",
    "ic0QOVeqyT09ppI21c583ZJ19",
    "7ZcgOIeFDwgnQ5odFCOyvpiSpIaGGeBz_EzbuLFl",
    "RFLZ",
    "5GYSq3HrTgg0lBI34uJ_jMDC2I5yozYrxe7VjauNmi1D7VBxZru6K9vsoKYKS5EBnv_JevtxbTiSLtg_T44",
    "p04LyjeJ",
    "DAu1GHLZuXewR373YA1lcb4S06pszK4e0aceErv1TCAVHpOHID",
    "I38HbVmCVqBf2cYagcbD5YWclylGvA8W9bvaMd9KKILYBl2kN7tMI4QO_TJJ_d2hnzOzYGDRlT",
    "O_6FaLtBS6h0CzCUzBJ2jskTdqqzTKvz95A",
    "WO4lLDGEkA7FgdQH2TWDO2JCTim4ioBqIfWYvrcB1iCxNOtcYx31hx5DgwIpeW9j",
    "N",
    "IEsPdTi6XVQ",
    "z55YBl7w60zxtvcQadgFdn467SzprE0gIcon7it3H9slq25BZ0",
    "YHXBoR391EK4jxsesWGLb",
    "X",
    "i40slBJ1BvYBA9jYHYmuihL9uPw0qS9pfOpinGUlo6pC8go4LhEYbe6Y4I2MMTBE6BNL8MP4M2mO_R",
    "xiYAvwVDZ5KsfERKTJpk5xmxh3rnz59EsGtPitxmWo",
    "5B1JAg_7ssacwS2oaoQ4_BBIdNdJhdB4YpQGQa4leKQ093sSp8mWlUpgsVJ2swoveSB4IA4CkWreqdwLtXeDevr",
    "mIHIdfw",
    "5QByZtYXRLCNBdCZDh7_F2BEu1q6u8syAcmRKi1Eim6cAwxsgvnu",
    "k1PSYwvPz8DgaH9GJWDe6mCMXt3yo0sQZgldXVzly43FInmZKSnQrvAv7cQDXSPmNMyDn9Ie5cFaQNzuKFSG0sF8OXqP",
    "VqP3Af_83D3lvWiXsI",
    "jg4H3OCaadEHBD0Edl90h",
    "PWVtjG",
    "q",
    "oYm9CGiic5Ea6b5q9l_Qz9rfh9It",
    "bZ8LTBlygo6sjHKMg6lhwCvuJSSQcRizw6d_1tDYHrxQft6LVcbpKYc2OAnCWbVFFSBp_YMHqNjvHydcfB9zGSoHPIEgcn",
    "NakuRAqPks8CgQj",
    "A4rK2PcFzWkYlbZMzClaPzR66MuXiYV_A2rO5nGzmFf9f",
    "bgr129mSGk7i08aRjboWlEDRM_RDomHFCseDZ0lIdHPjqpSlko",
    "_k9q7jJOsjjBNwww9H4GXz7ncZholAJsUHO9oOnq4hJPEeaS9hFKfROkEwxuJA2jMRwsDSdMBX5mv8c5ifnkFE_z",
    "0A5KGkjHDF9m_SZjeFbgMoz7gKzogzOJi1VJVIz5cdMBCkQKD1q8FWxsBElBIFdtdWjl9tceZJDk",
    "cr73kSDUeJeJWBG5_308VhERDCYnUEJy6Ul8GtRfDK3f_wTq3mX29XcQVwoeUHGcLsOzCdOFfaFza2bdu",
    "s4O73Kz8vb0G0OcYKQ5UhO3Uq9kEDztDcXo_34zzD4VRsWJP",
    "2P9EqKFt2ipFV4nZ_40NJ",
    "yaF1u6_CZ89v63YbHQV4pllxxTNKmZu5mY_Ktdaktj5J0bLqh3su",
    "QApkJ9H4nicbi1gucYZW",
    "jFWdQ1_Cfwf3ylJJ2Lh0cGloKAfAEPawUG3o06kCBsIK45kYYtuCAQEQzyAuok3pjPuPTP4eAKokQk0jB86VMek6",
    "Yvh2zDbWnRMUK8moLGL2",
    "6dcRrm6K9kd5ugC760qm__OIwyWd",
    "BscWaYkS5tJRoGM09plxpO",
    "dpI5XHJJ88fQVCZyV1pixbCfr6mE_Gne164Y_8C15Wo9vYS43TiKD_cPxZXpPoAQNHfbXnepqvRo5Ip",
    "od59NFQu4Y5M2oJVf7uvfnFJ5CArUmseWl91jsi1yUe8upEKV_PVYM_9ykpfX0sWLAJ9eGHKfzW3JxI6S",
    "ioI5eemPMdoYsfTKk_TbSacQD6X43i8VzlcRHteHgP3Ln8lFU6Z_hD6",
    "AHX16zZwZvqtUGQ29IeBAfrDeojQmknRV1DeucVwtO8kYdkJ",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 648);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
