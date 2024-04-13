
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "Lzppd7ThOVToURxsIKxiMJkZV0SfbtO6Ze6dthn_uLdXnFh2GLLjMf8h7LPyKPfRvZIND9U1eL8CvMtC",
    "stDg5tLbamrp4zSMqv7kqImO0V0fngk0Ye8oPArW3Jac_2yVPIePryiAvD08",
    "TyTRBthS22rchVcCb314QAxT5DK7GHOUcNWz7yJyi9txJ1QwqPBMYldGL__RhXbFgvjwkQnHmpDTwQzls9L0RfsL5kYpR9CUxH",
    "NeEFyHsovyokoKdfVVH1zDlQZjkAzzNTBcHrPwe7QjfIHDmm3BoUFAyLBzze_157aP3YjDHqqCPI",
    "9SibFOAHkKBFRe8Akk9clItnbEePhI8_s436",
    "7b2GG",
    "NPbA3B_Ix6apjzXbRd6gGP2QzflmYIOWSRBRWRisCukWAM7HBe",
    "XsBz2vMXDgllwCA7cdld9_UUAErO8mhg4nN1udxfRY_Xii4CiJjv",
    "f7dd6xM9ZPepHw_X0eaJiCQqhn4dcN5zyu_wzIh7J5GJmI20T3I93Fc7ZJTi0lj8EXxIiAyKBfnz5zm",
    "asn2c6g6OD1OtxGlWpw07Ph5ZK9a6tOrbDjvmLGxNVdiqd2ZYSPSghnMrFTrXXx",
    "SoGmXZ1YdLbabBT7gGbIgwLLUVyYpt8Oh60nvOmPpHjYJnJYYeFrcYAyiZnowaTj35o0w0Ig4jHNxKn3hp0vbO",
    "WeUtHb66BfueddPs0kCHwJ1fDufVi_JkD8151p",
    "o3sQc9IVkG1qof_WhKNv",
    "jdelps64qLEn6Omr1ai3RpkthO",
    "dqW6TMkryA27HB5Ho4zmSZeqWgUIhOM6E5iI1zMtKJa2Za580jRIKaA7gv4r68h4HOJCP4fjg8vVs6xQUe",
    "zRuwlVCcCGhe3NrC5jsh6D3zwEpec",
    "zaU2GKMIVcgNn5W5y97co2YSHn14kCcVmvyu51NtLylPTsn6HoL1oy9vv76wP9V5XBlKWPXP0tML_v1C57B4",
    "bb2392w4G4B7Z1D4Sbn7s2mjIqD1gI1MhtbjjtJv",
    "xP8x4bWjMMTCte4kIkHSdaxWYhMFvNTCYfucHiQ5sNxKKvy7X3dORvfdNAlRC9YsXwWaS4ceNaQpsgEkSS6xoBXaxUBCO5F7vz",
    "8hWPGHjZ5gOARVS2rfbznivdp2kXuI3dzKkj",
    "veWofY30myPCGnbO4AISLHwvSnz8xK",
    "Ao0T2WHjtLA3ZNwoKkvHdRR4Hc5ZREB6thauUiggNBf4OpMUWuEzE2EQlS7mNb4bDN45oMusbLGHgbdkymiu8Mf_FRBBF",
    "ldprhp6cCJ71WlU5KA09iMfBVnz3tGLRuRPs2mDUwB46JXrjOTDgV",
    "EXZDdZaPm0FBjineoFrtBn7TWynyZ8Yg54KSaaAvxO3OXqI",
    "vTo0HWcRvX7m6yuwtTm7oNO0CwBdHmbmva1QfzVPpieFxHKNxnwVxJyo2Jmqa6qih900VNDKmIPapEPL9tNj_RBGjbjyucF",
    "kDaxGX2jY_vUnL5SE38rv2BHGGpKhjCmqwQq3zXuSABIIrbxQIfCHAkHOz1mPl",
    "8lMHN2rEp5zzfwFtaVlNdmptrfFvkYHjB9essQpth39",
    "zCEgDmvebukWFm5FN_aPvTOq4YShYKyb4sIVaFc2sCDBVESU6F72yPxU5xfV9mhzH4Y3BRRdeEz4RdFUq522Vfsyq",
    "hOcaRl4bB0z37dikIOwwWWIGKwgj0uFId8C5yhg_TRbGvF_69LfJ9",
    "g_PXwXhgjyjL2iF_zO4mICAmmsWn8vyQc_OrZ",
    "mRPn0pJe4qAUzx",
    "ZUa3NgWOmIUZSw9Wk1VX46D68_QzSxSoOtLE7SAYLCIJEGrBqmr28rckhfUoCoiHfN76YTY3gSW3S2Y0_RBMQT",
    "aOB",
    "qr273eliUsw_WD55gPbECQxtI77PAYDJeiFGMs9oypA8CPYazB5N6MjzhqSEQJVLcDMT_oyMfs",
    "aIfqcbYHnU0L9dVnpw_P4ZhaINNGFeQssf87YG3upimzYfy6r7WHluZU",
    "l1Co9aCY0hr4G4cXnKoHnlCnS1hKqU",
    "frPCSAzavfbQX_3W2IvSKRTqqGXqezkGuSuUCLVlMe5K1rrOIfKddYC7Hhurqs99yB4A9rTb3vjSLbEaBj6k_L5pIHXA3sg",
    "2HB4sQkSAwyEG8YcDdfJA2kSWC_CzfvDoIkEn2AkKnM_xt8Mh5GhmElaKBggQSD1_t9YyA8rsWBK17",
    "J5f1JvxM4dVFxkkTWv9gIDTLlsbN7C8aiYIxnRlkoI9eiWM66_jnH9biD9c0ktA9TjiUOHUv2",
    "AD2I1sRDX88tsE1RrmT0E7bqmKBHwLsfcaitUUrcWhCNZZMkRD2FB2f7DRfH9qsICh75RmzNaUEJ3rCEb4sBxA5ycyTbut0a",
    "W7_AHlZ0uOR73WmfoSRyNRU_zj_Lwk4J_5xetqxnhhMecQsxT3wBk0r0j_OptEPUwtwIS3c7RSpiNDM1DxEbPxiuQ5eXe7",
    "eNXOhEwRuXyQsodKMY4",
    "p6nF_wzD2vqslosyGZGDQws0FynCcbkt",
    "QCqGgiqRY",
    "OULsAMslUdWtL_L9uvSmOW6LmVnpwVE7w_bmGC0yrRR",
    "P44i02dEFu1A4jTtH7",
    "ZsIw2NC1bxG3IAjkfNtLmLF0B9",
    "e2eSFBB0laqPi4yv8SdhLZZaL95epDRijMcMjnkWSRh4bMDYvDdnfdtQ8VKWhNcPvGRSBdDo9lt3qv2Sy1t4F",
    "dfv82NUV9lBFzd2odVqql5rXwfg2lQtbeFTxc",
    "h_VaonZsxbTN3pkDzt3GI6a8rtWC",
    "cj7qKhzrr20xzCOTVIRvWNWdrfZHf",
    "cpfB5g7Fn07UpFrJpWq0ZM_Bt5966OXZbmyWoSsqqgOgB_3XUAM5WSYwphqXIlJKyu",
    "BS4NC91NBOQrlz7cvOXruRSMxNg8btdbFmt5p9JBF8mSt8MOxUDPfmP1kQqC0WLZsPsCdv4eI1Krssayqnwkh1WfYy8dMOh",
    "10IB_AQ_FgxvBkNTenJ_zi0hZDfqdNwhyh",
    "arbCVKLc4K",
    "ORnz4p_2ShQXMRPNLgu9ouKaWiCFdbZGq92Gem6ce1",
    "fxyrx0cBX6fcnDRZl7rS0YIZn6G9qzwqLiSkUkTX",
    "J4fI_WQ2syBZ80tHt8lLwVDLdQ_six8yoz2EcqL_Az7LvR8AM",
    "jwN_TeLmGW50WY6GfJyjxExNTmtbK0EnCtuh0TzeJJTg8d5tsZOgfRAQR5WfZXndh93I8JWBrMo3pF",
    "NNZAGawdBtTthk6GhG0oDV6oMvusJZOoBLir6rZUrdBML_8vumOKWveAX600oo",
    "FTHerh4v6F48HItAaBSV4og",
    "EHGKAK42Eu9wmh93mzwJv8ycTd1fNJZEZ1pgkxBOQqZGzQs7WB8JRjG2RScXVQ6e",
    "rF4Aq2oiDHb0f9msngsyYHUWRsYN_63d5Mshg00EcJ1kusQsKV7_ExhBmTmaPiVyTMNafK1",
    "s2cMuUjyF8dRUMpfmY",
    "j23ElbeVoJYIeFOUumM6ZjbNqAMOY1DjGLEHwynYVCF8blcb9JvEmsyNGf2Cgvb2gr48m7rKOCj_aSvQNnJxX8MP",
    "5iYwJLfc0GCCdQJmBgl_yg1OPKQWoIgWiMYG0zxcPCGUbjz4oBVFjcklE7MXr7z6AiL_4YuSX",
    "TohzFcthG99hqgXPLvA6zo4yxlXg6EIB1w8r8egsgnNkHgHkwSHErpTuJHrlXxcNZ0c72_r1P_ZZxzYYzKxgJ3qO3AGBQTQRhI",
    "YyUnnIpDsSPj7SfaYCowDnKnZyJZbEKPYHAHKfk0M7V7mcdskKLuGXkLsDyxSexsZpGX0llSj2VJj3yyVLDGOS1Lggw3_CFZQL",
    "O6RuSoMbqLC",
    "8YLacQM6SFeMDSUDZ2s5Pvhy32dDD5WuqqrdINxRqUYRdr_kCH79Vzn_awnZaHXNVZt41hSch1DxkdMSUzb",
    "PfBqTJ4",
    "2hVOyQod_6wn68xLPDDo",
    "tfaX0VqUEeRfFwTJRUN5zes0s_PJ",
    "OpN2nFFDfkc7ErKet7aMvGqFEHekoMrv2lUJBbT1KY1dJVj2qwT_TWNV56rwZTJl2_g3zWFhXKGnIB18LSrKQoXwh",
    "QBprJ",
    "eHHO4nh",
    "hMXEcy2ya489oswH_4P9M4Wp92C33O76103xcx1fUElNeheHJTwzAnfEjEmKoFyoh6VnkYVM0ErS29dN",
    "Og0a7g8HQXnDxV5UKwM6vUSu8k__wobs7Ft_kuX713RRRivqyTuMF1QU1vm_xNgz0RRwomegGfeRzLAFdWeCGMqUHHph",
    "7ahBVSKY6pNudKZwRNhydpXDczRozIzIwYBmujHQv9kQgYREbvx0gzEf9sYRDF3jZSxDWB6cwr3C8ajZQoEwYrIkBt0qC",
    "9TTC5xFS1Ux2VTozVizsa_gAqmAZKzZkeISxwpn6ilw9hv5bu0GpN0cr",
    "7CCDF_KG5SsUT779pw57hGkLdQtETJSlBlV5d",
    "y9KLtoOFBA9wbkXItLMtO6wY_XvVQ5nldFIt5w8dYTNnQcnG_5PiEGwILWiUcu0Aiub",
    "b6MjJ7XwI4NwQJ1ybkbnu6CMgLlc38v0WB9Ks0RuIMvTKLzdBo8ooim73dme6LNw8oVIvBMI9wFGXU_kAMVUrMZSPz7ABF2Vlg",
    "PSaH",
    "S9JrwcvbDFpwJNE7qSBrKR1BQjzfy",
    "ZCvUkKUc6PD_s2edS5V4RPPxZNeQX0XA11fS5Q4kT6bBmPNfepSTKoqh_t3yp3VH3dGcVEMQsWjAqRLz",
    "NbnLZXJGjsk_HYzITNOjzD4fnt12OF7iqOzkSDl4B5hw7BKKGh0a2p6KjaAvdolEMi0MOcYfBH20_pPz9_TPdRBXOAN",
    "gfHuJhOQIbxIIRWNNRkKUcvg7sgfxuNItvjIRNVTC",
    "4o_uKANMHW3gJJeziJRewLzxQqXMaWGwR",
    "NTjiEsRkvEffEP_fc7Niv6RfL100k4gIFP79prmk6LW9wFNiEbd8zimTKkk_NquLPS",
    "Xced_49j3QdsqkyMTgENs5f8bsNo2214QjuhcqXw2BufI_VPuYHewLxnJu_aoJV",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 522);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
