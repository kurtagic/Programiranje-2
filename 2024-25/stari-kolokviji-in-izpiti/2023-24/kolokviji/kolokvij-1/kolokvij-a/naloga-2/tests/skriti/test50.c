
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
    int n = 183;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "O9a2m59k8YLEDP881d60wrDRupSn1f32mAL0dHlnYRPEob5fg497sI7Ejyk_mn04vrdE12tUtnifWxpbTkWpnm1MQoG");
    izdelaj(nizi, 1, "SVC08BM2PXsIarrb");
    izdelaj(nizi, 2, "lEBKPuKZP5ekEDV57gL9R0W0UXgwcNaTRQRuy7DPg");
    izdelaj(nizi, 3, "3ul0Aq4PUheYpU2nNJN13vJcHLIwYO4dwn8CBqfw8nZlu5bm");
    izdelaj(nizi, 4, "TMSX3SlzvOZE4SXZPacB");
    izdelaj(nizi, 5, "TMSX3SlzvOZE4SXZPacB");
    izdelaj(nizi, 6, "Y9mTIXEBl1J6AZ02hQ31089HUtjSvkiZJ_nPh5_3QeDQkavhdhaFgxd8lX4MWN1I1BMv4W3ZGpNSjk864CtXOluOgHmNvXcN");
    izdelaj(nizi, 7, "fto__WRJ0v2Zs0xpbd7skLMuxHZEjxbJJjR5Idekth2ojdZmHVSWCBFZFlKi8f2OWcQHWabwfb6kNlUzSASAx7D8");
    izdelaj(nizi, 8, "b2hGawvYYu710_6xted8MT");
    izdelaj(nizi, 9, "lEBKPuKZP5ekEDV57gL9R0W0UXgwcNaTRQRuy7DPg");
    izdelaj(nizi, 10, "mizT47UQjeJ");
    izdelaj(nizi, 11, "0X62FpMdAm7YFJDoyPiyZRy8OrJ_kpaCvF3e9e7fmGl60Dsc");
    izdelaj(nizi, 12, "vOCK4TkA4XB7xsrem2vqHdoxYOY8S8pGMROWcC9uIkrSdenk_G39wK8o5I4HSN5cuT");
    izdelaj(nizi, 13, "3ul0Aq4PUheYpU2nNJN13vJcHLIwYO4dwn8CBqfw8nZlu5bm");
    izdelaj(nizi, 14, "eGLf");
    izdelaj(nizi, 15, "_yLuq5QUTSN_vGvmmX3pfvKEUBiE2r69lauxT_7t85x");
    izdelaj(nizi, 16, "3ul0Aq4PUheYpU2nNJN13vJcHLIwYO4dwn8CBqfw8nZlu5bm");
    izdelaj(nizi, 17, "wsV5Gn2i3ucnMJpNoTuy1Z4L9Hj5Q0fBx4d4pqu_gPhoUt9QYiOa6ychAx6OEboWuMmKnTwBSUBDcjij5t9kaIa0");
    izdelaj(nizi, 18, "6K4FxVZ_L5_zQx5wHDA7epcaZGz3klal0IZmviAIN2O4PRPv8beAKZDK3ZDkAvZsSBneoZ_FLtTDey1Wx");
    izdelaj(nizi, 19, "Y9mTIXEBl1J6AZ02hQ31089HUtjSvkiZJ_nPh5_3QeDQkavhdhaFgxd8lX4MWN1I1BMv4W3ZGpNSjk864CtXOluOgHmNvXcN");
    izdelaj(nizi, 20, "Ci2icGeLfdBHJGnOha8C9_F0_RRcI");
    izdelaj(nizi, 21, "ZCuAx2ri");
    izdelaj(nizi, 22, "RD9OcgXcIzJp0ZpwEwnyV47smMwKZxI4FHG9PtBGpJjUy6N9INumuYGN2dO");
    izdelaj(nizi, 23, "TMSX3SlzvOZE4SXZPacB");
    izdelaj(nizi, 24, "my45S2FnIohAvJmk2SCXOLjoOA1Le8hWlCOr2qI1Gve5f3r5ZHS3FRTL");
    izdelaj(nizi, 25, "eGLf");
    izdelaj(nizi, 26, "gWWDtEcoMjXRQ3uH9H4Zodg2Yy2t_s64VZal9C8oU5okf4TxMuBnMP");
    izdelaj(nizi, 27, "_vvC6_Qln8wj4Elu");
    izdelaj(nizi, 28, "wkTRHo7ysK1kmEefWLofhUbeMjq_uw8");
    izdelaj(nizi, 29, "amndU20AcIrxVJUt2wzEouejaJdMUb0UjcyADtCRNnkWidkqEKxh5i8rd7ZnoioD98DqUKIlizlunTVraOpTI9g9");
    izdelaj(nizi, 30, "TMSX3SlzvOZE4SXZPacB");
    izdelaj(nizi, 31, "_yLuq5QUTSN_vGvmmX3pfvKEUBiE2r69lauxT_7t85x");
    izdelaj(nizi, 32, "Gwc00NipVHeJBW9ju1NuWfhmQeH");
    izdelaj(nizi, 33, "TMSX3SlzvOZE4SXZPacB");
    izdelaj(nizi, 34, "KagVvNq2VJhzqpm69fKUvMXi0OX5YuWzYSUBEgLQLldP6hEWDIjV3xjpPJxbp78pElBG9vkt7Qf43qq1ADxSzuAF4f");
    izdelaj(nizi, 35, "Y_zKNbRqgk7ZY4AFJFBEaB");
    izdelaj(nizi, 36, "3ul0Aq4PUheYpU2nNJN13vJcHLIwYO4dwn8CBqfw8nZlu5bm");
    izdelaj(nizi, 37, "OiRiYe");
    izdelaj(nizi, 38, "TMSX3SlzvOZE4SXZPacB");
    izdelaj(nizi, 39, "vOCK4TkA4XB7xsrem2vqHdoxYOY8S8pGMROWcC9uIkrSdenk_G39wK8o5I4HSN5cuT");
    izdelaj(nizi, 40, "TMSX3SlzvOZE4SXZPacB");
    izdelaj(nizi, 41, "TMSX3SlzvOZE4SXZPacB");
    izdelaj(nizi, 42, "Y");
    izdelaj(nizi, 43, "OiRiYe");
    izdelaj(nizi, 44, "Gwc00NipVHeJBW9ju1NuWfhmQeH");
    izdelaj(nizi, 45, "0X62FpMdAm7YFJDoyPiyZRy8OrJ_kpaCvF3e9e7fmGl60Dsc");
    izdelaj(nizi, 46, "TMSX3SlzvOZE4SXZPacB");
    izdelaj(nizi, 47, "yZq1S4LGvyP1d5WUI8nMp_vAQJoMghlxuh2e6BfYcUCv3Ze4Jnh");
    izdelaj(nizi, 48, "my45S2FnIohAvJmk2SCXOLjoOA1Le8hWlCOr2qI1Gve5f3r5ZHS3FRTL");
    izdelaj(nizi, 49, "qdiqy11vJ6sV5IrlejBZKjE4");
    izdelaj(nizi, 50, "ckPV424j56VEbLvK0I_JDWVG7InWIJyDP7p_eBLVWuyVEbD_63z");
    izdelaj(nizi, 51, "oUkOQYlV5rNxSqA4hPhFySEuUqkreKqWjrj8qJlTU1J2SRhrwABxy5EJ7W3lFzKCE8Cg5OJ3TZteeB65YTcpbFvWRvgrvD");
    izdelaj(nizi, 52, "01KDOyFBUNxk3sPU_HuRCa0U5RR68P4");
    izdelaj(nizi, 53, "X9h2zQU_1IFvB_I79K7Na3ftdVe3YrpqnrLqHUQms3w4ZZePJIeotTmC0ooQz0feGb8461fBu5dYET3jX");
    izdelaj(nizi, 54, "wkTRHo7ysK1kmEefWLofhUbeMjq_uw8");
    izdelaj(nizi, 55, "XFICZ5eTx_tmi7IStVBlmGCW");
    izdelaj(nizi, 56, "UyR7aP2uymS7y4X2RT45QYFjRZfMNEKK0D2ygvJMweT3yYWvt7eQ");
    izdelaj(nizi, 57, "lluV9zy6t3ig4WA1oSEOSnHFOJVUoUw4lxNvdwYTipcKGG6ERAxMH7tiyGXK");
    izdelaj(nizi, 58, "mizT47UQjeJ");
    izdelaj(nizi, 59, "k_wL97uwwztLVH45x8y6Sfy7MGTLVQkPDTca1h3rW481uEgs9X1LCj7IFcdSNQi2dPH1Uln");
    izdelaj(nizi, 60, "7VY_JYpSL5PC9UwQR_Yrl_R9E30kUNINYiBqjDqRAe0RYwFdboc_DmX0AuFhjRYirvYIDq5EPOGqIzSVMwJXLW3yR");
    izdelaj(nizi, 61, "RViXPuCmIKa8v4LniPyV3wH6iGKoQuHJ_zLKw_VQtVF4IUtaFH34ssBVXhWMX9GAX177kWFhVBBDyMAvwn1");
    izdelaj(nizi, 62, "BQnL91LEBrgqjfYVXI8wm4wTkU3HBOJf4dAYaCmxs7OTWn");
    izdelaj(nizi, 63, "HvprcilRJB02mvOjJuQG4Rtx8VA6S");
    izdelaj(nizi, 64, "sZv3BlIuhikxa8Xry9vokgmRarnGdtH0pIsJzVf1olrmjGXGDhTKDcEOTkghMrRc2MNFVgmy2uwWdpniGfhcvudVEgImoz6");
    izdelaj(nizi, 65, "UyR7aP2uymS7y4X2RT45QYFjRZfMNEKK0D2ygvJMweT3yYWvt7eQ");
    izdelaj(nizi, 66, "amndU20AcIrxVJUt2wzEouejaJdMUb0UjcyADtCRNnkWidkqEKxh5i8rd7ZnoioD98DqUKIlizlunTVraOpTI9g9");
    izdelaj(nizi, 67, "sqEWaiDh_uB6zgLcTyNrfjTKuL6nHqbunnwMVNVWaliyDaYt7dwtO6Uw1HSPxjWe2ovrxdQA9NUaNvU2n3iSZXq6WOHvF9vR");
    izdelaj(nizi, 68, "wsV5Gn2i3ucnMJpNoTuy1Z4L9Hj5Q0fBx4d4pqu_gPhoUt9QYiOa6ychAx6OEboWuMmKnTwBSUBDcjij5t9kaIa0");
    izdelaj(nizi, 69, "2KbuhBcyz8bQ3HKk");
    izdelaj(nizi, 70, "CbqNT7K82nrJqVYJbts7QnROaUY0OujP1dzKaIBatJCdLF_Y_he9z5jSkH3c9W1kZCANjTPrWRvsn2eglTkzpZU5TqRukXXnl9");
    izdelaj(nizi, 71, "xq_GVM6");
    izdelaj(nizi, 72, "Y9mTIXEBl1J6AZ02hQ31089HUtjSvkiZJ_nPh5_3QeDQkavhdhaFgxd8lX4MWN1I1BMv4W3ZGpNSjk864CtXOluOgHmNvXcN");
    izdelaj(nizi, 73, "mizT47UQjeJ");
    izdelaj(nizi, 74, "OiRiYe");
    izdelaj(nizi, 75, "5AIHlm9o9UbpRiBiG4KHBe");
    izdelaj(nizi, 76, "gWWDtEcoMjXRQ3uH9H4Zodg2Yy2t_s64VZal9C8oU5okf4TxMuBnMP");
    izdelaj(nizi, 77, "qlbeX5TgdpYtxLrlwF3LqDiyfEO02YZIK_k9JGgcdSUwxYy_NAlEnKr8u4V6NyQ8crXxOOVo_6HH2fu5SOmfZz1c");
    izdelaj(nizi, 78, "9_MfOfxlHjbAr4e5NHtO4pEBBEXPf_5EyhFz9O5u821sjY9");
    izdelaj(nizi, 79, "aLPAZxFZGA0WoRUmyGxHxXGrvpS8cpfgCFxlxRYoy2N74gE1V00RxdoBJpwFLqaUWQWTn_KbZbI3E5M");
    izdelaj(nizi, 80, "3e0XW2M6r1IDDyVFVJXOQVr2SBadRVhibiW38_ph_7BCmXBr0soVSBdVOT7cWiCujO");
    izdelaj(nizi, 81, "ZJ2pSnuTh9LOfa26mnL");
    izdelaj(nizi, 82, "gKWXW85bYMfaZGECisieKEywa7zrltmHe5yoJpIjtsLaQEQS");
    izdelaj(nizi, 83, "oUkOQYlV5rNxSqA4hPhFySEuUqkreKqWjrj8qJlTU1J2SRhrwABxy5EJ7W3lFzKCE8Cg5OJ3TZteeB65YTcpbFvWRvgrvD");
    izdelaj(nizi, 84, "01KDOyFBUNxk3sPU_HuRCa0U5RR68P4");
    izdelaj(nizi, 85, "9_MfOfxlHjbAr4e5NHtO4pEBBEXPf_5EyhFz9O5u821sjY9");
    izdelaj(nizi, 86, "Odt6bdkSlwf4led3nJ0Q53juxjUpsiTRNXhRV2vX");
    izdelaj(nizi, 87, "Rk5ki8v7m2xCNb6FFFdwSZaJflq4aLp0D7fR0qH6cfimFIs9hwy9HqQNRjckA");
    izdelaj(nizi, 88, "qOMMlGOZfkoeIQiKxeciF3TZe3E43xyhNBoym8yK5exGFJUnnQ6mDO");
    izdelaj(nizi, 89, "aLPAZxFZGA0WoRUmyGxHxXGrvpS8cpfgCFxlxRYoy2N74gE1V00RxdoBJpwFLqaUWQWTn_KbZbI3E5M");
    izdelaj(nizi, 90, "6u3hbIZof0pXt_ohF0JC360cQMhMHcCYBYLCEQQJA4L3Wqx48N8xOv1V50q8xJQ");
    izdelaj(nizi, 91, "vOCK4TkA4XB7xsrem2vqHdoxYOY8S8pGMROWcC9uIkrSdenk_G39wK8o5I4HSN5cuT");
    izdelaj(nizi, 92, "D7cpuj2C8ZaVn8nxsjq7k7OUQt48mU9NaF738wirJcBpv0xtHpOY1iqThVtU620lsgMQwoKneQikadfOqH");
    izdelaj(nizi, 93, "6K4FxVZ_L5_zQx5wHDA7epcaZGz3klal0IZmviAIN2O4PRPv8beAKZDK3ZDkAvZsSBneoZ_FLtTDey1Wx");
    izdelaj(nizi, 94, "TMSX3SlzvOZE4SXZPacB");
    izdelaj(nizi, 95, "b2hGawvYYu710_6xted8MT");
    izdelaj(nizi, 96, "zfijeCvSLfax5FTQrmtr0ylgpSjbvVLHjqG3Yvt0FESyolUS9ii8monXKA_dzJQZapgl2o1GQH");
    izdelaj(nizi, 97, "v9fJ9Lq1aWmQrgylUzlhtr5c99YT2PO0TrUgPcoPsZxkguKD_XK6Tyi");
    izdelaj(nizi, 98, "TMSX3SlzvOZE4SXZPacB");
    izdelaj(nizi, 99, "OiRiYe");
    izdelaj(nizi, 100, "nR");
    izdelaj(nizi, 101, "3ul0Aq4PUheYpU2nNJN13vJcHLIwYO4dwn8CBqfw8nZlu5bm");
    izdelaj(nizi, 102, "aLPAZxFZGA0WoRUmyGxHxXGrvpS8cpfgCFxlxRYoy2N74gE1V00RxdoBJpwFLqaUWQWTn_KbZbI3E5M");
    izdelaj(nizi, 103, "2KbuhBcyz8bQ3HKk");
    izdelaj(nizi, 104, "yPKsoAxIZ8ii2mJbb0AgHGldEtrnAOGpwomase9X92jpKIgccIxlvv4u_fk_bqVczkrFyv");
    izdelaj(nizi, 105, "OiRiYe");
    izdelaj(nizi, 106, "Rk5ki8v7m2xCNb6FFFdwSZaJflq4aLp0D7fR0qH6cfimFIs9hwy9HqQNRjckA");
    izdelaj(nizi, 107, "aLPAZxFZGA0WoRUmyGxHxXGrvpS8cpfgCFxlxRYoy2N74gE1V00RxdoBJpwFLqaUWQWTn_KbZbI3E5M");
    izdelaj(nizi, 108, "NvUVecvQT5");
    izdelaj(nizi, 109, "9hfnvwzRAspJgCxHg6ys5_HKyw");
    izdelaj(nizi, 110, "Mc6Costgpm2Lfui2yI");
    izdelaj(nizi, 111, "ZJ2pSnuTh9LOfa26mnL");
    izdelaj(nizi, 112, "FwaTSwX520RYLJvsu");
    izdelaj(nizi, 113, "IRY4BkFNu7pFIAZLu2n4emQq2VCBTqUWzwmJlCipX1CXYDF86LtqZ2Nz8Lg");
    izdelaj(nizi, 114, "k_wL97uwwztLVH45x8y6Sfy7MGTLVQkPDTca1h3rW481uEgs9X1LCj7IFcdSNQi2dPH1Uln");
    izdelaj(nizi, 115, "b2hGawvYYu710_6xted8MT");
    izdelaj(nizi, 116, "HGYnn1bzPl4q0ledJz8jESax2Q1rgctdVrbTpv9F0yfNzWNe8YSuVFkE195byAsF5a1bPgUis");
    izdelaj(nizi, 117, "qlbeX5TgdpYtxLrlwF3LqDiyfEO02YZIK_k9JGgcdSUwxYy_NAlEnKr8u4V6NyQ8crXxOOVo_6HH2fu5SOmfZz1c");
    izdelaj(nizi, 118, "MtschXBUkpcoMzrgl_cFuLdua6hIs2W6Jej9rk");
    izdelaj(nizi, 119, "81nujnhXNtYvwb1264KWuEQmy_GB_gvxC9OPJZ5umVHEQyCZ8UZe4KA3LUvmt6Lku84TXp1QIwrtsY3cBai8FEeIh");
    izdelaj(nizi, 120, "eZrB4zMUygnjBSJXmUop2LBQiKW10g9fDJED0C_rZlJDjlJ_ifD8hUs1zaICTVJLjeQaUde7uB1Ecr87dcAkLi6JOG_Hl74N7");
    izdelaj(nizi, 121, "x6H");
    izdelaj(nizi, 122, "3ul0Aq4PUheYpU2nNJN13vJcHLIwYO4dwn8CBqfw8nZlu5bm");
    izdelaj(nizi, 123, "c_WFzBPDiTVtt7MtxUcN0jOZB97uDJFFz6oG");
    izdelaj(nizi, 124, "fto__WRJ0v2Zs0xpbd7skLMuxHZEjxbJJjR5Idekth2ojdZmHVSWCBFZFlKi8f2OWcQHWabwfb6kNlUzSASAx7D8");
    izdelaj(nizi, 125, "iiQ5f0rCSURANThe4gmIyGtBePAVSpGNw9fnNDQDDtQJhCKz44jIODoYZUYne3IqhE2cGQakM");
    izdelaj(nizi, 126, "_vvC6_Qln8wj4Elu");
    izdelaj(nizi, 127, "zHRRwJA8X9_tWzLZpwgj");
    izdelaj(nizi, 128, "KhDzG2U1rTZcXmPmtdLLF8JsPctENn");
    izdelaj(nizi, 129, "n9FlMbzBm2pEvPTWK3t4wspHwV5Pcf7PF5Dndp");
    izdelaj(nizi, 130, "lluV9zy6t3ig4WA1oSEOSnHFOJVUoUw4lxNvdwYTipcKGG6ERAxMH7tiyGXK");
    izdelaj(nizi, 131, "v2IvB49p7j2rmANs0rg6QPqVQ5lbXgepr2XI41gnMkQSQ");
    izdelaj(nizi, 132, "7VY_JYpSL5PC9UwQR_Yrl_R9E30kUNINYiBqjDqRAe0RYwFdboc_DmX0AuFhjRYirvYIDq5EPOGqIzSVMwJXLW3yR");
    izdelaj(nizi, 133, "O_BoABuCRLplZ9M62z2CUVRGh_PY7fLG2PPmtFDcP2BaC_bL0yoRcGU69zsowCnYUuyLPYPHYRmsNg3cZ");
    izdelaj(nizi, 134, "fMcnvJi18beE0i4_v1lFpRw5i6hdxioXoY4xFAj");
    izdelaj(nizi, 135, "QiTMsC7PW4Pqa5E5gE21MyGgqKoJilkzSU7d3rr5F_kVjF8w4PcKTwjwl1oMY5ufo0FZcLBxMMB8cA3upiB9RgROp00ob");
    izdelaj(nizi, 136, "pij8b1b6rtZmDA73QgM8bxJDDlYRSSSZt_8");
    izdelaj(nizi, 137, "34Rfn58xoSqmXzO");
    izdelaj(nizi, 138, "2qvjCOh6RMZwhk9YKDRH88BxC0qBXLT0QzM_90EHx0bqN0br60khzR3");
    izdelaj(nizi, 139, "QiTMsC7PW4Pqa5E5gE21MyGgqKoJilkzSU7d3rr5F_kVjF8w4PcKTwjwl1oMY5ufo0FZcLBxMMB8cA3upiB9RgROp00ob");
    izdelaj(nizi, 140, "CbqNT7K82nrJqVYJbts7QnROaUY0OujP1dzKaIBatJCdLF_Y_he9z5jSkH3c9W1kZCANjTPrWRvsn2eglTkzpZU5TqRukXXnl9");
    izdelaj(nizi, 141, "J_LTxqnAPahg4tz9NnKPXNdVouvYxy5bgr0a5q");
    izdelaj(nizi, 142, "vOCK4TkA4XB7xsrem2vqHdoxYOY8S8pGMROWcC9uIkrSdenk_G39wK8o5I4HSN5cuT");
    izdelaj(nizi, 143, "0X62FpMdAm7YFJDoyPiyZRy8OrJ_kpaCvF3e9e7fmGl60Dsc");
    izdelaj(nizi, 144, "pTRHLNRFcilZa49ec2x543KZ9Po7igFSERjuONjSpq");
    izdelaj(nizi, 145, "FwaTSwX520RYLJvsu");
    izdelaj(nizi, 146, "O9a2m59k8YLEDP881d60wrDRupSn1f32mAL0dHlnYRPEob5fg497sI7Ejyk_mn04vrdE12tUtnifWxpbTkWpnm1MQoG");
    izdelaj(nizi, 147, "MU4wODGeanBse5ip");
    izdelaj(nizi, 148, "TMSX3SlzvOZE4SXZPacB");
    izdelaj(nizi, 149, "JcbgfynkEOiCD4nLICetJcPIosglnZ9QPWz");
    izdelaj(nizi, 150, "HijWv9cRaUvtFdTbR1CoLS");
    izdelaj(nizi, 151, "sdmfpuAWTZBGCGLfZabw8EEys3LCSqPET3R_Y9rtO4XqnMB7aS_bRRdtmujB6w6R3kN2jadU27gPluEFn615jZO8NXM5g");
    izdelaj(nizi, 152, "TMSX3SlzvOZE4SXZPacB");
    izdelaj(nizi, 153, "kyfRArs");
    izdelaj(nizi, 154, "BQ1Y6l1g_q9Sz7YXRouZZ19Ynrx55_cbrcNwxb20lyS7B3dqv8eeU7KiQY8ItNSzmbfbPySTSftRJHW3U7cHwoIp9xLRBuoxxpK");
    izdelaj(nizi, 155, "dhIvEyRA8PmmLEzgzqQlLc0uEJBCg5o0_xovSWwS2vWL82mR01SQ");
    izdelaj(nizi, 156, "oCcKLLR6NMFQyhlt80j4AdONWWLeO7NL76Q85rXiaE0egj7Ke7YN9fWeiLhH");
    izdelaj(nizi, 157, "34Rfn58xoSqmXzO");
    izdelaj(nizi, 158, "b04Kj98wJBFtQUmsmQ7fOD4qYHaIwh5ebNWwqJh64Ll9f1EDyl_4KTWLipvlieH_JSFcw4SzVbDu");
    izdelaj(nizi, 159, "Zp73jTziP9jLi4FHlGp");
    izdelaj(nizi, 160, "vrMz4lAzQvz2jQnM");
    izdelaj(nizi, 161, "6K4FxVZ_L5_zQx5wHDA7epcaZGz3klal0IZmviAIN2O4PRPv8beAKZDK3ZDkAvZsSBneoZ_FLtTDey1Wx");
    izdelaj(nizi, 162, "XoXwWL9Qtq_qMWeZcoCURbiM6jk2pIaBsN82DJPb9PUwqePWjmUZ5gljJD2lCJGyJOPayv7P9FDcQsDqy6b");
    izdelaj(nizi, 163, "TMSX3SlzvOZE4SXZPacB");
    izdelaj(nizi, 164, "ckPV424j56VEbLvK0I_JDWVG7InWIJyDP7p_eBLVWuyVEbD_63z");
    izdelaj(nizi, 165, "aLPAZxFZGA0WoRUmyGxHxXGrvpS8cpfgCFxlxRYoy2N74gE1V00RxdoBJpwFLqaUWQWTn_KbZbI3E5M");
    izdelaj(nizi, 166, "zHRRwJA8X9_tWzLZpwgj");
    izdelaj(nizi, 167, "lEBKPuKZP5ekEDV57gL9R0W0UXgwcNaTRQRuy7DPg");
    izdelaj(nizi, 168, "zfijeCvSLfax5FTQrmtr0ylgpSjbvVLHjqG3Yvt0FESyolUS9ii8monXKA_dzJQZapgl2o1GQH");
    izdelaj(nizi, 169, "ojCixGhOVI72dkB8qcodcrJoGD3Q12c9FhHhLsQVKYA7hUH2c0dPTNsg6v");
    izdelaj(nizi, 170, "2IQbl8UN49BphuJbLjdKJmALad45HbOtHNWNVjsSLr7OCG0mYAVc5b0Z3zf6RyQLbHB2iG6V49yF_Sle5ar");
    izdelaj(nizi, 171, "TMSX3SlzvOZE4SXZPacB");
    izdelaj(nizi, 172, "R");
    izdelaj(nizi, 173, "aLPAZxFZGA0WoRUmyGxHxXGrvpS8cpfgCFxlxRYoy2N74gE1V00RxdoBJpwFLqaUWQWTn_KbZbI3E5M");
    izdelaj(nizi, 174, "BQJYCQE76QKznWpY74YJKX");
    izdelaj(nizi, 175, "Q8E6pcX3ATPvjg0vj1QM_wQBwaU8TGAzB4UlI56VExyYEDMUSdTxNFyGfIvG9hQwcBLvi3KRL_ZlvRSz2nFYMds");
    izdelaj(nizi, 176, "fto__WRJ0v2Zs0xpbd7skLMuxHZEjxbJJjR5Idekth2ojdZmHVSWCBFZFlKi8f2OWcQHWabwfb6kNlUzSASAx7D8");
    izdelaj(nizi, 177, "nnJ9xNp9h7XCz0980MXkB5CvxCPxqmk3kZ");
    izdelaj(nizi, 178, "6u3hbIZof0pXt_ohF0JC360cQMhMHcCYBYLCEQQJA4L3Wqx48N8xOv1V50q8xJQ");
    izdelaj(nizi, 179, "sW01KHYqc0NaBo4xE2ByJUdi8txhUpQwtF");
    izdelaj(nizi, 180, "6K4FxVZ_L5_zQx5wHDA7epcaZGz3klal0IZmviAIN2O4PRPv8beAKZDK3ZDkAvZsSBneoZ_FLtTDey1Wx");
    izdelaj(nizi, 181, "0X62FpMdAm7YFJDoyPiyZRy8OrJ_kpaCvF3e9e7fmGl60Dsc");
    izdelaj(nizi, 182, "rq06Gmadjmx47l");

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
