
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "9ATnlGY0blyDxc6o_dMefnOVSt6TQr7eA2qHbHvZ4N5LG1D3qW9QDr3gN75Ia",
    "lEHTRaokvSIWwhqlgpwwKsbcJ6RVxUbyucpHwbz01THC6Vu06o",
    "b3iXXM9DdNN4YExZTEWU5ac6qWzdmf5EPxGHlZ",
    "siAM3wEJdlxhhWM7qPMlT",
    "owQII_yB07n7H6qM2LSGbQMCOf9cKaCqj1fmvFIqF4W",
    "ifLldwPAoiR_Si98D8_Y_V6xyDwCZnTFj",
    "D_VXW4BkZb",
    "m_mPi5hPJL6z9AnkPkjQVLlGoFR6ljwethiBDlCuPwqwmxNdw1F0Axqz0MTY44RrkZt7PGS1b8grKS",
    "cl0JH0F1PJaWlk1CMAcZnwbgZFMv8twwJ0SM7",
    "8yUVQiOvPogLeeCypuc18Yaynyh1b4UqYzdTbqMW6zqCVuvb7ztEUX_QrkQU13jjrD6KNx3nnldUvdMpJQ87R0KF9",
    "04YK2fvbqlxnENdn9uNui683",
    "FEr06wDifYYgi3fZFZME03w509BtsDJylSsoD63QHEMUpuuFxI4T_uN39mezElGt9dpdtFaZkZff5p",
    "8i2k9UD6DfEbiaZSlaskmWMr7qPkRc2746A6C82Bkxk4jqJLyvcB8ZffL_w6rsFG9IKQXziJnjpkbC2LTk2x2",
    "OfEbqRA0dlm51JfvSb50DhMcMgeY2vD",
    "IzM9uRD78SI",
    "pqAKxzHy4Bkhn0wiTp_Dsyk",
    "HVWmLPVrCE7FotI4_qhZNhgtakJtAzgv0i_dMq914zpMYms25AAXEUOa9nYMDfPU2Pf7",
    "rSPG8WRjmd4cAAkhVWtC2hTNl8PQowC",
    "8MYR61bn_HcaxO9BHQqyu7M3AehdKUVUSe_hyufgmki3Ur8c3_DeckU",
    "XgDoH6qqPwVHtMZribTOGfoYue3DkbwCCz_y41qI98lPvue20EciQaOfgAVVtqWFUHb8O",
    "ybnNao3uS1E56e5iA3OlLunG9xXeOlBXMWuXF8_BBPbpNb5j2ZWEtfGKZt5kqN09rs0IaIsp9MLoLXfVDU3VFX",
    "QjJ41BmKLqBRG_SvcFtr",
    "xSU976Fg",
    "hSgiUsI6S2Tr2PzqUbqepc8GZ5oDXPrFRp_OUFtUv3Qbkzbwa0NCjnub2vF4A40heS",
    "IGdZi4FqNXFIx4KhunAaGR_SLtnHEOTzqRvS2caBdGeH3L2Jhvyb36dxiIw5vxoGAGeCLsT0JwBPhPFMz8IRYHTweqFjjdocYc",
    "yInbNW4heKtmdW53QpTMFnm49EPXNQKcoIqnkmeW",
    "qFi70NeWoYImrAkuQH6wgxQRYFly0qwDH3yNtyJ5yTVaeH5FkoI2QzzTkK_",
    "WNMkpR1YuQoLFe8rSXjhB5RLkj1wXcKMZFHUQHs_2Z_qA1IR0S4FNkXijfSXti99r25FgF2nu",
    "Xa",
    "MHsRwS6D762lY7hRBjWTi1YbCZkpL4GRhYce0gaO73UjCJJ",
    "4eZyCUEuBynesdmjLgpSHPrxGnPfQzfm_Wf5dBeLML54S2U5RzyW6eebg4UfLR19Zt",
    "dMxoRVNWvq1hE2o3kSAIFJHsoaMzSsy61MpFsFA2RfEDGDoc1Ar_7yTf2xs0ZdpwccaS",
    "wqTnhr5dAs6zGBy0oSowM_aXRo7dF2X0YhxrvxPYb",
    "lrjpC",
    "20xqJ9eUjlTYl1kxUE6F8b3VGOeumHnyoFvSQAp6uTyzBSGk5IIfX18dHVvM3ZgwnT7JAdJuwDkCav21KJJllm_DryANm5IFhS",
    "negOUVdy2eK39q7M4fCfPnWAuD_a8sCzwS5_Rd",
    "hxqXLSm_W8pm0YlYgWoh9t81y3cXJg",
    "omAW9xNRK9GIlDfJcwolbdbHxMAB",
    "zRLaCWmir_AXtMTP_Hqbj5UGSxLbah5_EEgobwELU1Hx8TOIa92F9S4A",
    "oUVzodyhjNiQIuwzFWVUFOOQp4AyRCw01KDwdfkN4wVcr45ehjQnx6gPVIPxHNM5O1k8IE1gMBwo3oTQUP6t9ugq",
    "sxhLOyNeP_C2xA9M",
    "IlsjNWk6JZ7RzJtrIBc02KPOdG5nPdl9pGE6xVFaHMjZgjywnPLyYJQOnPxYvMjgDBrPLtn_1_",
    "Gf68nQN8PYvH_YPRt8uXd4M8cw7hRJAWx6Igg9VJlDj1eqQZZeKqKQSL485H",
    "IMNSgBf4I3oMol0hx91xe9TT9ap4",
    "xtseuyUGCy_EHZlMrAv_gYDXhBnHVpRa6h6T18um0BMKgbb849IQ9ueX",
    "iL7oVNFXa8d3AwHmveXQY_GWSRNA1Qv6gFybTjiQ3vxkBYWlYD2",
    "MCemMPaWwyl5YGLOKhpiFj7fYQAxKFe7v4Td2Tls0sem3NE5nA_JtR02kxcRPhdTVGGXY",
    "W55kOhPnq6K7FtZkGxSLS2VmlRTRr7il_Reyee0mEauvArxi4Bj85nC6BR0wflMHH7dGtSlUERfF3y3KyOf_fll",
    "lySa8RXxVTww4j",
    "zd2wU7k2vTVFIzI8tLHIH14L6pz_Z_ibiss",
    "8R",
    "cWVWJORkB6y1W_r5KI72UchF_4N7Lb4vdo5ByGUF0yO3SHw1",
    "7v4LV63IBvQCPqDwaQzymj1JFNuhJlMhNcpQTT90Q3FulNVXj1ytIi3YZLOyUfP13qRcksxDQeI_kmhn",
    "OkUpIjooufRVO2GsSvVWdofX60LLWkXXo7gm2ihdb2AL8p5BgGD_QJjNpv8_1rQ",
    "i9PUKEQw43pjVU7WXIY",
    "MFxnGw8tvzUBI2VSxxbV_L4VPi4YKTzQc3WnXnBGpbaGyDYfi6QK26ItvQE0cewTY",
    "1EUST4WdynBDalLF7OPcGgtGw1BghLyZZIe2vAA7",
    "E0",
    "gowJE70bzAPJjKH4N8KMFQwBcQuRKaVijlAxysA8w9MfDMUAHtvInUxjBZA_GVVrmiVkyDcD9",
    "bRArD2NSzga6UEjW4LgElZxzGVdsMFkOg96AjZOsOvTJcUn121r5qEl4BJosTi6Wf2t138dz1JWQGtYF8NY1v8UERTqbcS",
    "_iMpSGOOrG4oSQeszFUijupSM5M_s9GO0UY10T1gDUwbrYwMmswdaCyTo86V1Kwr8",
    "ivaiXiApRy",
    "Vmy0ziS6Zg46d9bu",
    "_ex15FR8oEH2z_lPVRwnwJ2brlExdvxrh1ulwRMmAnzhuVtbZykT2SpZgSW5FfT5ggwx6SfBdgWV8sIpuebQin",
    "W1R8W9_wlYU0Ok4LiMWbX3iPtSF_",
    "620Qvmf532n_G_vgQAV9yWE3AmX_9oSweHhuEh8sxCZfsL9zsFOX2bEb4r8_6",
    "jiu4DlAlEdH8IL4P_cdpzv5jpS0ZYEPXP59Gt",
    "97XZe6StCoGOEb42kDMuyi2oLZo1lHYDffkT6Vf6nm8_hAkVdBfiGkhPrh6l2y0qBQXPzoRx2bxHuWGNtbLDg_AT",
    "szRC3cPXn4vrxwxgJn_nimwSyXz08Lk",
    "M0Ey1ds2XTh9",
    "WKzqU3YoHaDjvbKR3xjajH52spHlg8yxjhFERu3cE0PlYrUVlCr",
    "I30bXwk3PQPESGLylgIWAPhwcx_t03EORJRRLBnCjCBh5LM3PA7YhPr4We30",
    "9CHk6YlyNLlxSrgUeEGxntUNRLO4zE5zquqT1Cq_VTrgjM6pOfvth0wN7UVdDAh0HC",
    "YhXFsrtO_JbnVdZX6m2BC7QDlUCXgh",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 859);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
