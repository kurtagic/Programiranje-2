
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
    int n = 216;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "Bcs5SMsHsxKghIwZPSQTvmE36z7DAdgd6ONOrR8CXY7SIryGiGuFe");
    izdelaj(nizi, 1, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 2, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 3, "TrW0gtZGrEBZzF8kwXSB6SvqYq5fvAWo7A2RDejnLl3v54HM5sy");
    izdelaj(nizi, 4, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 5, "TrW0gtZGrEBZzF8kwXSB6SvqYq5fvAWo7A2RDejnLl3v54HM5sy");
    izdelaj(nizi, 6, "lbxjn0vZ5oiuOrHV8m36LVODkjVE3vXGh65vGPd45dYw4vyFvSTiv2Sj");
    izdelaj(nizi, 7, "vaH1EeRmitbLVyxGbM374vr3wGaloyd1FkTA7gRlNIzMD");
    izdelaj(nizi, 8, "ErRioiHeUt1RprSjQQpbEE3QwQS6qSGvhMP88KynVZuu");
    izdelaj(nizi, 9, "8AS2ReEGcTVuRN2DBT0FIJwIQkSwdmdkrqdJIQMfYHyYW84bedj");
    izdelaj(nizi, 10, "TrW0gtZGrEBZzF8kwXSB6SvqYq5fvAWo7A2RDejnLl3v54HM5sy");
    izdelaj(nizi, 11, "TrW0gtZGrEBZzF8kwXSB6SvqYq5fvAWo7A2RDejnLl3v54HM5sy");
    izdelaj(nizi, 12, "DMXoIGTU0Bksxz_l1rgOYRWG1Mcql69V56Bblaf0luXQ");
    izdelaj(nizi, 13, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 14, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 15, "Bcs5SMsHsxKghIwZPSQTvmE36z7DAdgd6ONOrR8CXY7SIryGiGuFe");
    izdelaj(nizi, 16, "KEnv3bmZ9oJdQnzTeq5DNrrk93ikLa1t6");
    izdelaj(nizi, 17, "zXgWIiUXGzLpN9rMoc4vNSgHP1tCCJvPHWGqsc5ww_NcoviisCPB4b4pxwIrVwp0ioRlDYC3gMHaTCTp23F0lyLqIV9EGUDUY");
    izdelaj(nizi, 18, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 19, "KEnv3bmZ9oJdQnzTeq5DNrrk93ikLa1t6");
    izdelaj(nizi, 20, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 21, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 22, "yqiqWFIswW8kwAvqrfqP8yLshaDLdKtDP1MF9kCp5hq0Ctgujrwv2DcNgMx7pV1yZUn5RU5LKEdq");
    izdelaj(nizi, 23, "yqiqWFIswW8kwAvqrfqP8yLshaDLdKtDP1MF9kCp5hq0Ctgujrwv2DcNgMx7pV1yZUn5RU5LKEdq");
    izdelaj(nizi, 24, "DMXoIGTU0Bksxz_l1rgOYRWG1Mcql69V56Bblaf0luXQ");
    izdelaj(nizi, 25, "HVEjkkhVVLd62SYxYvDG0hDraPnZ5xx8Aaz583BGJodOlzsxLoenyR2Caj8vjuNTe56hno2BnaW3Z");
    izdelaj(nizi, 26, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 27, "DMXoIGTU0Bksxz_l1rgOYRWG1Mcql69V56Bblaf0luXQ");
    izdelaj(nizi, 28, "ErRioiHeUt1RprSjQQpbEE3QwQS6qSGvhMP88KynVZuu");
    izdelaj(nizi, 29, "B4zV2sZL8o0pV");
    izdelaj(nizi, 30, "I91Ucoq7sCpy8bxqU1b1aBMCqzILp50ZEYFK");
    izdelaj(nizi, 31, "DMXoIGTU0Bksxz_l1rgOYRWG1Mcql69V56Bblaf0luXQ");
    izdelaj(nizi, 32, "pL");
    izdelaj(nizi, 33, "I91Ucoq7sCpy8bxqU1b1aBMCqzILp50ZEYFK");
    izdelaj(nizi, 34, "Bcs5SMsHsxKghIwZPSQTvmE36z7DAdgd6ONOrR8CXY7SIryGiGuFe");
    izdelaj(nizi, 35, "8AS2ReEGcTVuRN2DBT0FIJwIQkSwdmdkrqdJIQMfYHyYW84bedj");
    izdelaj(nizi, 36, "Fbo9ly4USNdfwQWLQmHEC039swgWKFDGQhcoyu73FJ2wk0TpBbrVZnNYjsUFJXEyRaxazGx1sR6LJ76aj");
    izdelaj(nizi, 37, "DMXoIGTU0Bksxz_l1rgOYRWG1Mcql69V56Bblaf0luXQ");
    izdelaj(nizi, 38, "KEnv3bmZ9oJdQnzTeq5DNrrk93ikLa1t6");
    izdelaj(nizi, 39, "4_TM8JlIUjLwcZK1lTIBVcvyaazuZZ2PeS6SmDybxOJtzVShiMQV43v");
    izdelaj(nizi, 40, "Bcs5SMsHsxKghIwZPSQTvmE36z7DAdgd6ONOrR8CXY7SIryGiGuFe");
    izdelaj(nizi, 41, "B4zV2sZL8o0pV");
    izdelaj(nizi, 42, "zXgWIiUXGzLpN9rMoc4vNSgHP1tCCJvPHWGqsc5ww_NcoviisCPB4b4pxwIrVwp0ioRlDYC3gMHaTCTp23F0lyLqIV9EGUDUY");
    izdelaj(nizi, 43, "ErRioiHeUt1RprSjQQpbEE3QwQS6qSGvhMP88KynVZuu");
    izdelaj(nizi, 44, "s43g82TTvKcpSDwnwv_Enu7PUXquouGLbXtW46SKI6kFnusw9L0lZigwnAnVqFsOjnJm62oQ");
    izdelaj(nizi, 45, "UFfqHtHeAi79x7qqfpkt");
    izdelaj(nizi, 46, "I91Ucoq7sCpy8bxqU1b1aBMCqzILp50ZEYFK");
    izdelaj(nizi, 47, "TrW0gtZGrEBZzF8kwXSB6SvqYq5fvAWo7A2RDejnLl3v54HM5sy");
    izdelaj(nizi, 48, "DsbEmkvTr_Pn46YZJQWIyBZL75bvZMMtmtZ");
    izdelaj(nizi, 49, "FdbgAAfmmfiHZGWVSc31CO0rJc2TOP9BBD_YogxVsxsP");
    izdelaj(nizi, 50, "GN");
    izdelaj(nizi, 51, "JkpcuPnmleseQoMGPfJV5o2sGB6yd0foQqGa");
    izdelaj(nizi, 52, "UGSE3EcquWbQGsbAt");
    izdelaj(nizi, 53, "9c16qrOt93x8oT");
    izdelaj(nizi, 54, "DMXoIGTU0Bksxz_l1rgOYRWG1Mcql69V56Bblaf0luXQ");
    izdelaj(nizi, 55, "MzXoPJlUWAeCpjcIIKjIfVE6zSvTzGImrTqZrJ8yg5nvYxA3_XtSi1VltM4azzB9");
    izdelaj(nizi, 56, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 57, "Bcs5SMsHsxKghIwZPSQTvmE36z7DAdgd6ONOrR8CXY7SIryGiGuFe");
    izdelaj(nizi, 58, "lElh6RTSa_S7vUlHJLI4kmArcupVv_TyurzsaBby_j5r7JU97B");
    izdelaj(nizi, 59, "ErRioiHeUt1RprSjQQpbEE3QwQS6qSGvhMP88KynVZuu");
    izdelaj(nizi, 60, "vz914fmIzlMKQK_waX0bRJsMaOOCEid3X82G6bAM");
    izdelaj(nizi, 61, "llzTm9A4Nz8GAJnC4MY5PN8XhjxAnzq2EDPhN");
    izdelaj(nizi, 62, "FdbgAAfmmfiHZGWVSc31CO0rJc2TOP9BBD_YogxVsxsP");
    izdelaj(nizi, 63, "DsbEmkvTr_Pn46YZJQWIyBZL75bvZMMtmtZ");
    izdelaj(nizi, 64, "68GnNACYeMVgTUFCb4MZH1R_fGrqSiHXU3tD_J9uU0jXG1eZRgCe");
    izdelaj(nizi, 65, "DsbEmkvTr_Pn46YZJQWIyBZL75bvZMMtmtZ");
    izdelaj(nizi, 66, "TFa3hQ5kvg4DOCxq1vlFFvF18BfAFTP3cMIwXYw_23OFvq_SW6Yy");
    izdelaj(nizi, 67, "9c16qrOt93x8oT");
    izdelaj(nizi, 68, "Wu4Imnp91tfi4EYOqsawOl7xpZMISUdJvPU6QcMb4");
    izdelaj(nizi, 69, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 70, "eWWNd3dDMcnUBjnCH4gHhtStdVX7l1WM2uaYBpFAXRQna2yg");
    izdelaj(nizi, 71, "b4XjfweTcbWv");
    izdelaj(nizi, 72, "UFfqHtHeAi79x7qqfpkt");
    izdelaj(nizi, 73, "UFfqHtHeAi79x7qqfpkt");
    izdelaj(nizi, 74, "Bcs5SMsHsxKghIwZPSQTvmE36z7DAdgd6ONOrR8CXY7SIryGiGuFe");
    izdelaj(nizi, 75, "I91Ucoq7sCpy8bxqU1b1aBMCqzILp50ZEYFK");
    izdelaj(nizi, 76, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 77, "UFfqHtHeAi79x7qqfpkt");
    izdelaj(nizi, 78, "Bcs5SMsHsxKghIwZPSQTvmE36z7DAdgd6ONOrR8CXY7SIryGiGuFe");
    izdelaj(nizi, 79, "nlwOOs8c49HUesRt_8Z8MmRzX0geRrrb0bipSn");
    izdelaj(nizi, 80, "Bcs5SMsHsxKghIwZPSQTvmE36z7DAdgd6ONOrR8CXY7SIryGiGuFe");
    izdelaj(nizi, 81, "s43g82TTvKcpSDwnwv_Enu7PUXquouGLbXtW46SKI6kFnusw9L0lZigwnAnVqFsOjnJm62oQ");
    izdelaj(nizi, 82, "8AS2ReEGcTVuRN2DBT0FIJwIQkSwdmdkrqdJIQMfYHyYW84bedj");
    izdelaj(nizi, 83, "6lIlxP8H9_zazARgm1EQNf8zLHPOCjPQtEtlwO3aLgWxOFmuT5zFzgQ");
    izdelaj(nizi, 84, "B4zV2sZL8o0pV");
    izdelaj(nizi, 85, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 86, "_NgOc9ccftkvHCUaUOIpR2gjG7dwyjjLdr86QGoupV7UZDtGo1WCDL6d2xJgF3dCf3us3MYkI2lPIGz3p2AGBJ");
    izdelaj(nizi, 87, "Bcs5SMsHsxKghIwZPSQTvmE36z7DAdgd6ONOrR8CXY7SIryGiGuFe");
    izdelaj(nizi, 88, "JqHg4E1LV2ArjvqsXkvGL0hhJqfkuiZ6z1Npz0YHBm21WNUp4UmdFd9imiEY8");
    izdelaj(nizi, 89, "rzlHI91qxCKzQ583_qRcG86");
    izdelaj(nizi, 90, "UGSE3EcquWbQGsbAt");
    izdelaj(nizi, 91, "ZQZTUK8TqBz4aUwN6axWdmmzinyY8FjqAX_qXr0GLaZEwvXKdlkaPYuIoGEOkLiY5Zutg5d9CN50CcGpI");
    izdelaj(nizi, 92, "TrW0gtZGrEBZzF8kwXSB6SvqYq5fvAWo7A2RDejnLl3v54HM5sy");
    izdelaj(nizi, 93, "G_8fUbAdNWCxo03vHgUkqIwly1GwP7N03owXboHJ1o5v6CC6SAwiRqpNwugPT20uzvlvc6poxspoKPbqqj");
    izdelaj(nizi, 94, "bxrujT5otNzHYFxu6A1NEfMBo");
    izdelaj(nizi, 95, "0FdOxKdLWUps8RSfKfgsZtmQUtiQE84TG3LgUdswwDybis4fN0TvON3ERdCQRuUAtK");
    izdelaj(nizi, 96, "nEligXil7pjDjV4EmojyL3jHt9PC3qs3yA8OZArhzsX2");
    izdelaj(nizi, 97, "WjILluGn7EQok6aQdF_itOdVlVcri43bGT_BAQOwkWcGzwqcbXznmqg525q4jeDE00K9jTavpF2sgXgOFkJIFL41QK");
    izdelaj(nizi, 98, "4mMrry1ClQLutWjF9jNzbP3");
    izdelaj(nizi, 99, "DMXoIGTU0Bksxz_l1rgOYRWG1Mcql69V56Bblaf0luXQ");
    izdelaj(nizi, 100, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 101, "b");
    izdelaj(nizi, 102, "UFfqHtHeAi79x7qqfpkt");
    izdelaj(nizi, 103, "b4XjfweTcbWv");
    izdelaj(nizi, 104, "KEnv3bmZ9oJdQnzTeq5DNrrk93ikLa1t6");
    izdelaj(nizi, 105, "9c16qrOt93x8oT");
    izdelaj(nizi, 106, "6y");
    izdelaj(nizi, 107, "TFa3hQ5kvg4DOCxq1vlFFvF18BfAFTP3cMIwXYw_23OFvq_SW6Yy");
    izdelaj(nizi, 108, "yp99j0sMeJrq9KjphPVCoZN3Fk3gz2ktuNr5P20zd_6YTY");
    izdelaj(nizi, 109, "d2JRUnSjpTgGlUqZT_3bV3Q2V2RzAY9LV_5UJNDKpl");
    izdelaj(nizi, 110, "vz914fmIzlMKQK_waX0bRJsMaOOCEid3X82G6bAM");
    izdelaj(nizi, 111, "6y");
    izdelaj(nizi, 112, "TFa3hQ5kvg4DOCxq1vlFFvF18BfAFTP3cMIwXYw_23OFvq_SW6Yy");
    izdelaj(nizi, 113, "yp99j0sMeJrq9KjphPVCoZN3Fk3gz2ktuNr5P20zd_6YTY");
    izdelaj(nizi, 114, "Bcs5SMsHsxKghIwZPSQTvmE36z7DAdgd6ONOrR8CXY7SIryGiGuFe");
    izdelaj(nizi, 115, "6rvTiOqP8f0icyVCghzyn1iHHE");
    izdelaj(nizi, 116, "eESvCdA_h5DcizAb8UYlmzfPe6GbtE338zkrioFctoeS1FPUTjFzsD28VGemtClVXGcdzlPs");
    izdelaj(nizi, 117, "TFa3hQ5kvg4DOCxq1vlFFvF18BfAFTP3cMIwXYw_23OFvq_SW6Yy");
    izdelaj(nizi, 118, "118cT6sxbOwEbS_nB56");
    izdelaj(nizi, 119, "s43g82TTvKcpSDwnwv_Enu7PUXquouGLbXtW46SKI6kFnusw9L0lZigwnAnVqFsOjnJm62oQ");
    izdelaj(nizi, 120, "s1RWt_BVRU0z1FBTXFGbF6J20BfIodd0lI41HXtVnj3giVo6NjG6g4WPtjSqvOb9KEMi");
    izdelaj(nizi, 121, "u4oKMVjWThP4W0rV81KmbF9u8vvqipCPlrTi");
    izdelaj(nizi, 122, "TrW0gtZGrEBZzF8kwXSB6SvqYq5fvAWo7A2RDejnLl3v54HM5sy");
    izdelaj(nizi, 123, "hCHBd9DMCHqlqlrx");
    izdelaj(nizi, 124, "YpGQPpwSnWjpvhNCTpLwnyoqTS1cMX8rd9xi2NWY7Hkg");
    izdelaj(nizi, 125, "Bcs5SMsHsxKghIwZPSQTvmE36z7DAdgd6ONOrR8CXY7SIryGiGuFe");
    izdelaj(nizi, 126, "yp99j0sMeJrq9KjphPVCoZN3Fk3gz2ktuNr5P20zd_6YTY");
    izdelaj(nizi, 127, "nk6NBW6LV3qIVIxvOMg62T4x4rqJOUlRHdESMoKw7KV5_XWgLYZU_wA_xCUQTS6EB7UWyU0xVCnDL0a1o8");
    izdelaj(nizi, 128, "jYEJe_Xm0eZwh905EeZC9xaJcQ8jhT9N2yqNnvrGuHRtQ2oqFvm5uw44YCgOXBGgb34dJsSjKv2oqGhen0OqtI");
    izdelaj(nizi, 129, "dHVrKjyaPo8ZoRaqPPpetkWFRq0KjUbsyUwF3bdoUmpDOw01ZpjADh_QScfnjbBa7j9TpUFL4xbM8p_GTSYB_3J");
    izdelaj(nizi, 130, "2x333gaw6V");
    izdelaj(nizi, 131, "B6d7QcQfDuO3lmjHYzL");
    izdelaj(nizi, 132, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 133, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 134, "DMXoIGTU0Bksxz_l1rgOYRWG1Mcql69V56Bblaf0luXQ");
    izdelaj(nizi, 135, "sOb_Ot3zOJdbH4c2EODK64gk5sFqxV4rKZfSqxE4fPqMoIILzgCSEmgYtF4DK7LFajbt2Y5N");
    izdelaj(nizi, 136, "9c16qrOt93x8oT");
    izdelaj(nizi, 137, "NNwM9lkHFgBbxmzqLeudxV475ADAr83jGI3x7wkW_B8nnsryUks1f5OK3KW46QOwSYslga2bs3xGhaUpm");
    izdelaj(nizi, 138, "a7_JU4MTKxh9QV_3PVVObZah6wcM");
    izdelaj(nizi, 139, "eESvCdA_h5DcizAb8UYlmzfPe6GbtE338zkrioFctoeS1FPUTjFzsD28VGemtClVXGcdzlPs");
    izdelaj(nizi, 140, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 141, "TrW0gtZGrEBZzF8kwXSB6SvqYq5fvAWo7A2RDejnLl3v54HM5sy");
    izdelaj(nizi, 142, "sqZYRtEUMEmS1nxWGUqHjDoEUI85F8WRYHBbOsRXgTpdjGUqqUtHhmyPw");
    izdelaj(nizi, 143, "FdbgAAfmmfiHZGWVSc31CO0rJc2TOP9BBD_YogxVsxsP");
    izdelaj(nizi, 144, "4_TM8JlIUjLwcZK1lTIBVcvyaazuZZ2PeS6SmDybxOJtzVShiMQV43v");
    izdelaj(nizi, 145, "Gs6S406EzeAuHNT");
    izdelaj(nizi, 146, "Bcs5SMsHsxKghIwZPSQTvmE36z7DAdgd6ONOrR8CXY7SIryGiGuFe");
    izdelaj(nizi, 147, "UFfqHtHeAi79x7qqfpkt");
    izdelaj(nizi, 148, "s43g82TTvKcpSDwnwv_Enu7PUXquouGLbXtW46SKI6kFnusw9L0lZigwnAnVqFsOjnJm62oQ");
    izdelaj(nizi, 149, "Gs6S406EzeAuHNT");
    izdelaj(nizi, 150, "Bcs5SMsHsxKghIwZPSQTvmE36z7DAdgd6ONOrR8CXY7SIryGiGuFe");
    izdelaj(nizi, 151, "zXgWIiUXGzLpN9rMoc4vNSgHP1tCCJvPHWGqsc5ww_NcoviisCPB4b4pxwIrVwp0ioRlDYC3gMHaTCTp23F0lyLqIV9EGUDUY");
    izdelaj(nizi, 152, "DMXoIGTU0Bksxz_l1rgOYRWG1Mcql69V56Bblaf0luXQ");
    izdelaj(nizi, 153, "856389R67AOeoAq87XpoutV_HkL0KKNxK7gzvG0f_ebgMxtV6cPZcw13dV4");
    izdelaj(nizi, 154, "eESvCdA_h5DcizAb8UYlmzfPe6GbtE338zkrioFctoeS1FPUTjFzsD28VGemtClVXGcdzlPs");
    izdelaj(nizi, 155, "g91Sz_sAMPBEDhglH9gOJzB0q04lr");
    izdelaj(nizi, 156, "sqZYRtEUMEmS1nxWGUqHjDoEUI85F8WRYHBbOsRXgTpdjGUqqUtHhmyPw");
    izdelaj(nizi, 157, "9c16qrOt93x8oT");
    izdelaj(nizi, 158, "I91Ucoq7sCpy8bxqU1b1aBMCqzILp50ZEYFK");
    izdelaj(nizi, 159, "KEnv3bmZ9oJdQnzTeq5DNrrk93ikLa1t6");
    izdelaj(nizi, 160, "yp99j0sMeJrq9KjphPVCoZN3Fk3gz2ktuNr5P20zd_6YTY");
    izdelaj(nizi, 161, "HDmUfB_RFdoWLuY013THATPhsm0vPcNLJQkGDiIBkI7Wr2JKWeK431up7avSOqxA3Y4");
    izdelaj(nizi, 162, "XWmAJwjj7lgp6MkcmPdN6tIMqpqhaWE6cf4lNWh5TvHmrXw168QOx4");
    izdelaj(nizi, 163, "74E7cXSv5KAPVBE7oqah1SPRBTo8yDIJAGO");
    izdelaj(nizi, 164, "qNScIx32ENESmtED25bkaOEHZhnVtAw2fbLkNMM0vpnt");
    izdelaj(nizi, 165, "JbVh7RgS");
    izdelaj(nizi, 166, "Bcs5SMsHsxKghIwZPSQTvmE36z7DAdgd6ONOrR8CXY7SIryGiGuFe");
    izdelaj(nizi, 167, "d9GVabE1J3w4jzYFfuOerReqQmPyG4iF");
    izdelaj(nizi, 168, "jYEJe_Xm0eZwh905EeZC9xaJcQ8jhT9N2yqNnvrGuHRtQ2oqFvm5uw44YCgOXBGgb34dJsSjKv2oqGhen0OqtI");
    izdelaj(nizi, 169, "6y");
    izdelaj(nizi, 170, "TFa3hQ5kvg4DOCxq1vlFFvF18BfAFTP3cMIwXYw_23OFvq_SW6Yy");
    izdelaj(nizi, 171, "9c16qrOt93x8oT");
    izdelaj(nizi, 172, "UFfqHtHeAi79x7qqfpkt");
    izdelaj(nizi, 173, "GhwbQ");
    izdelaj(nizi, 174, "WjILluGn7EQok6aQdF_itOdVlVcri43bGT_BAQOwkWcGzwqcbXznmqg525q4jeDE00K9jTavpF2sgXgOFkJIFL41QK");
    izdelaj(nizi, 175, "TrW0gtZGrEBZzF8kwXSB6SvqYq5fvAWo7A2RDejnLl3v54HM5sy");
    izdelaj(nizi, 176, "CW5aAYyeUHNzHUXZ20DZWglNk8hqtBIGHraFTp4u72V5xg6S10IAnEoMgz8mAkRPtdHSaQQ12xDlgco7F6LOCsPNEOO474L");
    izdelaj(nizi, 177, "TomBPOOJ");
    izdelaj(nizi, 178, "B6d7QcQfDuO3lmjHYzL");
    izdelaj(nizi, 179, "B4zV2sZL8o0pV");
    izdelaj(nizi, 180, "UAb1MLFlLi6CQ4Kr2DYI5usMuN_QcGtbE63uyIAh8hKNUU5e5nMtMP3_ah");
    izdelaj(nizi, 181, "Bcs5SMsHsxKghIwZPSQTvmE36z7DAdgd6ONOrR8CXY7SIryGiGuFe");
    izdelaj(nizi, 182, "DMXoIGTU0Bksxz_l1rgOYRWG1Mcql69V56Bblaf0luXQ");
    izdelaj(nizi, 183, "6y");
    izdelaj(nizi, 184, "Fbo9ly4USNdfwQWLQmHEC039swgWKFDGQhcoyu73FJ2wk0TpBbrVZnNYjsUFJXEyRaxazGx1sR6LJ76aj");
    izdelaj(nizi, 185, "YzLLaokBBUsobc_VIbN9HL4TFcBdmGn");
    izdelaj(nizi, 186, "KEnv3bmZ9oJdQnzTeq5DNrrk93ikLa1t6");
    izdelaj(nizi, 187, "HDmUfB_RFdoWLuY013THATPhsm0vPcNLJQkGDiIBkI7Wr2JKWeK431up7avSOqxA3Y4");
    izdelaj(nizi, 188, "Bcs5SMsHsxKghIwZPSQTvmE36z7DAdgd6ONOrR8CXY7SIryGiGuFe");
    izdelaj(nizi, 189, "I91Ucoq7sCpy8bxqU1b1aBMCqzILp50ZEYFK");
    izdelaj(nizi, 190, "936PR");
    izdelaj(nizi, 191, "9c16qrOt93x8oT");
    izdelaj(nizi, 192, "DMXoIGTU0Bksxz_l1rgOYRWG1Mcql69V56Bblaf0luXQ");
    izdelaj(nizi, 193, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 194, "8NydCKYvOCqVKDVei8qLgw53NfTolnLfrRsyYB1JFZDMZmy08U5tBiCP7cwjmwYo0jsz3HtXNkAP");
    izdelaj(nizi, 195, "TFa3hQ5kvg4DOCxq1vlFFvF18BfAFTP3cMIwXYw_23OFvq_SW6Yy");
    izdelaj(nizi, 196, "TrW0gtZGrEBZzF8kwXSB6SvqYq5fvAWo7A2RDejnLl3v54HM5sy");
    izdelaj(nizi, 197, "b_tayW9tUtC5imBKPiAhieekK_YExrgfT55n2llAc3VDprbQb_oiKy9FMe");
    izdelaj(nizi, 198, "_8g967lGtvpT8GX1C2LWJ4bGHVewiClVNCO1hdSwPWJgbD_2pIxRBoIgIYFDruDQ516Mphpexll2uY4JycdCPCedT6VroPGFfd");
    izdelaj(nizi, 199, "TrW0gtZGrEBZzF8kwXSB6SvqYq5fvAWo7A2RDejnLl3v54HM5sy");
    izdelaj(nizi, 200, "vKU1HcmUIwVsK2EJQvGPKnObENgI5Go948PJYdIg9fTYkjf");
    izdelaj(nizi, 201, "TrW0gtZGrEBZzF8kwXSB6SvqYq5fvAWo7A2RDejnLl3v54HM5sy");
    izdelaj(nizi, 202, "YzLLaokBBUsobc_VIbN9HL4TFcBdmGn");
    izdelaj(nizi, 203, "I91Ucoq7sCpy8bxqU1b1aBMCqzILp50ZEYFK");
    izdelaj(nizi, 204, "6y");
    izdelaj(nizi, 205, "wMEI5o");
    izdelaj(nizi, 206, "4_TM8JlIUjLwcZK1lTIBVcvyaazuZZ2PeS6SmDybxOJtzVShiMQV43v");
    izdelaj(nizi, 207, "6JWU1fHDgaGY_uxW10GPDIA00J9T0Cs6GiCcYD_EtrLnZp9RCqkv2nFuQxYB1JKk9V3uFGBBq2");
    izdelaj(nizi, 208, "UFVnbowX7buvuQtCi_Ox6m8YwX6LDndse6P4IWdPblURRnoW2OA");
    izdelaj(nizi, 209, "KEnv3bmZ9oJdQnzTeq5DNrrk93ikLa1t6");
    izdelaj(nizi, 210, "UFfqHtHeAi79x7qqfpkt");
    izdelaj(nizi, 211, "ErRioiHeUt1RprSjQQpbEE3QwQS6qSGvhMP88KynVZuu");
    izdelaj(nizi, 212, "CW5aAYyeUHNzHUXZ20DZWglNk8hqtBIGHraFTp4u72V5xg6S10IAnEoMgz8mAkRPtdHSaQQ12xDlgco7F6LOCsPNEOO474L");
    izdelaj(nizi, 213, "lElh6RTSa_S7vUlHJLI4kmArcupVv_TyurzsaBby_j5r7JU97B");
    izdelaj(nizi, 214, "6y");
    izdelaj(nizi, 215, "OHNfLpANSQaBXzxdQPXrb9APT7qKXzT2x9tZrkZAKL0");

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
