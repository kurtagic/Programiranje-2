
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "DolDDxsJe2pyGWT8IzTdkMjPyziBvYj0w4sH5lol597Z1_JcHUgyQKnzPexAWaq_9KigssAZDw_OWyBAr9",
    "a7twoLGYaBvrwTU8PNrZ6sSJAR5MTYT9nI3O7b2fyOi8AOUHv",
    "3b6a8sBpUSMn3CDXPMcMZF99Ozj0A115cRUpTIpTADjXZRVloZDHNXhExx5AfDePwYblyr4AyCnLZNMHjnW10agHEw",
    "hk1",
    "arS2flnv8xtfkQZ3HvWOVESjP2ItMcknbHogvN4F5PXdnYVVi6e12M_e",
    "p0FsqYoPEZr3Fj_CwHxa19YV1B4XbDxhBA1oeQ_",
    "HgRSEH2AyX_zSaDZ0qn4cNhEiMtfyB_UbKNorcgqnKfGqDGJV5l1SETNEjTYliAp5rkbY1Cu8",
    "TVcyuytesSATsMEGueqIiADIX4o31tQzymkf4wVLp879YEkPpK2Rc3AiXG",
    "ois",
    "ivKTDT_BDoHdrKAdtm9wcVvF2FdQqmXfkBaoCzKVi8zNEZU8yUmFpIV3knASSo9MZwtg30F5",
    "DbM",
    "o0YuVqECzuQkIXiVZ1mmGEO",
    "jzTXpBLTEiHi6aMXoAm6eWENWwliafQk30btzJ7EGGvn7REve9DRAzhPaDnlPe69N32Vb8PzckbFch",
    "XvSI_JMjvQR6CoBYo6I1y_CohmHCFo9J226zMLGFjPFmQq862lBp3cMrA3lzma0_76fd2jt13_KOiwEkoTrP6nkdl",
    "UD3ECrMje6k9Bm959J4cmWdR4NSWJKHdkYG5HAYvMy8DGrXjKkLRoD1HPcrrtkNSusKwWD1i4rUMRjJx95RHhUpbqFXrMjY5r1SC",
    "taxL61fl744JwoenGOHHyNxdDX",
    "g1_xeVz1VFDOHttElQQp5LvEz",
    "VsjbF2u5ma3ZwjmnNoj0DxBiNqJSpGfOfkcPFUlw4ZETSmQdvQbX3igiY8XIjGKt",
    "DKCic",
    "qHIemBmDGr2Q4okn62MYg_REe9f5c2I4NPm0xZKdAGnm3zgamKjuO_Wk0YizYY7EhuUZYMwXNi0I89wRWe_dwH",
    "Ba6AyBu6tIQBhb63r4Tbe1szmx1di4BeILtVPfqXSZXKBq03fv1pvnmJQIaN09NTBB06aX_skLDKeImLvNR",
    "M9qz",
    "cm5Jv1ViUC3I0PJSP9cZ5XuCJo3s5uf1fIEkE_G8vSW_pIrh3YBdlMiGvu",
    "9SVibTi0p0t6aa1l9Jk4N6vDmx7R22V7uhPr_Vioh0fKsJA19CoFCRrbCA4lpl",
    "T2_yyjVDHlv1ERAMBIcyF0GVV8gFg2D71PKVaKaxpxXp5BEQDY",
    "sgl86_1Er_q2rTdDt65Dt",
    "MeMYKvNXHx33B8FV",
    "nJeUvGQJZ1w8l2XWCZ3w9Nt0JMIEbIBWVzQ3iuaZiBNCNeg0RTVj8KWg06bEi_D2y5O7RqjxskciRoyYXqhHRCj8qj",
    "xVR1PKPkweOccKFKnOj8",
    "cFNo40wuPzYRR",
    "Fa6zDoZYWfIDGDjIBP6IPtiZvhN5bJIDXqVIXysz9jtk0QgaP",
    "OuOQFDfJ9kyygSHlWCqIoYmg0DKaIcf5O4BnfJgyAg5fwjAlIdZH41geSd",
    "iFxFPdGQTyL9vQVWDiynfHFmnME44ib_TBfEPfQFFFefYxyZtXFU3zmAHKEBw",
    "28k8ns5lxc72_aJWy1ddPZFDP8cIYiHu26co6cXdQBuGokgSIUvDqDpF8QnwwOa5FEMfz5GWlYEVBCn13zJB4H54hmepWnUM",
    "PQeD3ZV_XxdIKJvLx9CqGViH5OzUphuNngBsXQU1Y5yzOtXe6mzyziCPfAfVK9zE7SFHWxbk4azDfwFYM",
    "n4UsdcdoJUV16D3eg9wryDMMUmNqo0DEvMLhUcrwB5HY4hNXLySvXtJpwhL0ZW3RY0Ylg6qxKJR6GBA307xkao",
    "KC_",
    "Nl9I9v",
    "KBDDDNJN9CWbGMtZNZyTG2m2_D3NPtaMYXO9RnArAoVYelXHayPIxrcjDlZ2osArjRr6RIuug8X6FM0D3M3_vdx__qH568htlFm",
    "MDkoSglY9RNExJ7YX",
    "18Ipz2CkiGWygt3B0lMBqTlBNNgiEvamAmFCpvdiZlkiYOOJM",
    "VwEUdAYjrnfsbIyAtMHFnMA_9g1BBKUZ4X27r5xZRyNGswGYlAyjv7vkLp4cdsCTBB73pErWbkR_qTthiVUepEV8vJ9B_8WS0Mu",
    "zb39eKfLi3NfFVMhlfJt4m9b6b9Q5NJGQacgD1FjPlYJRZF6kJL66Mj3QS6usotq",
    "02Ar0137cxaBYjBBI6KLgP9UxmSd_JoaFRvB",
    "Nut8d8HBUyAgL2Dk1thttCdokiAGi0Xk",
    "FPgr6vxAtb39pGa7PSvjjeDFCEF_Npb3BKHNywVVL_G7ZZJh5eDzG",
    "YBFYuo7KN5JvQJZ4cHemdlO9ggTXU_uTXacnIffbXWFrW1N0",
    "iKUGITJ4EmhpN1Zsepox977DADuoHTqpoga9mNujut9TTSFl6S7wsXgdJQpsc6KulaAv",
    "aV2JgB_nsvjyAFo_E",
    "pNGV4cmnYSP5mQRyPAajrJ0Q3hP8NKj6WBcyOxyCGKAzsVHWHk62u4LBj92Wica3nXoqXZsDDJZPChrN7FB9wsVLmC",
    "SjY_s6SDe4H0WoUN20NE3D1Q1O2nwJYm38Ew7uHPjh9gOdfD3pU5CPyvL7dGz14dryisAsLZne0Jf7Ci9KzSpP",
    "uT",
    "IrS5Mf0TW1pOmsl4YNTA5WuLppcFnXqdvjnmdb3Xyb7USHwSr0twczhFDTHYHjNfok",
    "GVOgaubOitHUQCEpumdnnNZPP8dBgE6EvZXU_HKav8dvGtcQalqNwfl_5vW1fkUCpFI00sJJf4m4MU55v6MptOy",
    "YLFXRNvRe0lB3P5prBmpOx46Cu5KXt8Sxn7FUhPYyi2aqzKbcRrwBXCOHl_CazI3Pya2eDoFxCawRSfKI4BrvfjklgTIAkXao1",
    "1uNlFjgKuBfZJL7RNEIOWp2TG4ZzHo9VGLSc8A1sHqja",
    "iE5E5qjZaDdixTKxBSYywBJ_AjbafpRJIBaY",
    "u6WdMQJh7o94sL6E",
    "fCfpneJf_oHlXQUAWqNC0TcOWF5HXAXotMo3_5Kyc",
    "DIOk6SfZLfs8mIoAex4WeiSkWpRMlf45R",
    "gewjE_jjS7Wx2A4DpV4gNEQh1ddltm054KHnhebYPtO1vw2hCf_EXG5V19nu",
    "SCKl0vl4m6aoIfasoLZ4qeJGmZ39wFwVXEJqy0kq4gpeVbgflzUz8R_je8ju7QLmgJlANH5",
    "dH8qqpq93brGZNpygm1j6TvPm2Hkg5f1p3rD0iPzgnjM9EGgpyP8cQg96yS2P24",
    "bOCwVG8MTkn8dv2yHhjLQwxbAltRDhEnbI2kbrOxhxebIfe9Y70q1FkbVDRpjJjHR5GHY4n3AKjsG0_Yjglvg7JOoBR84I",
    "9kP9",
    "U2CgQnY73fmMcmu3wlULowXLBCHZqhFFwLMfgStUWV1PUInXWqkUE37RwqsyYmYlW6l7At",
    "mBfuEF9ixNAaGjnr5kC0HyvLmPKsAXuZXxxtz3zJYxNBYL1hGCn4WeKstbVggisTmnFzAQ5cwrB",
    "jzlj",
    "KJkrxFyHocznseAY5Rjzhk3IsHIKZwz7M9Billx1pSHZawtkwdzTnMJ8x0s0LR",
    "RC8A6VaO",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 320);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
