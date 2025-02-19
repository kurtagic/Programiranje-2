
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "EkiomWc8VijlsGGTJVNPCyAzJq4jQ9uwwfbMGkBzMr7oaT4czmURGJKQV0UwO2N",
    "KuaWCI0j5t_zsc9P7eh6HT2DqoIWnOq2X8q77fyYXsYGkNWHSdpqDHod",
    "sbhrC2K5WB20DqikqyQdMdsMXH5OIx",
    "CjPgx_NK8Pf8tMgd4AhKzRP2rjMc5YHT_H4HOxOpUi5d_ty7wzZOTEZ",
    "yi3LAO99jW",
    "SDawoo50oeBf0rPS1xdb8YFhJi3SMgZ_Z6znvHutPlFQVgolv8DlekW38d2WQJBtYURs5Lhjmml6YSVDP5",
    "S6i7vsGZaSLS9QeGpMWyaFuqzTQIcGYbs49jNn6gkPmY1jC4Ghhrm__EBi97CkDeOdp",
    "kndFlhog7ksfRUzv_POiIRo2XDMdYTvbP6deKCXumO8H",
    "o6JUp1dgYPomJOwES0zOtYCZhfaAypiM5iSIo1LNm841ocE_iVbfy5mjeFJGgrX",
    "KnDpTWeq9Xd2htB3ztL2cvCJOGeYXvUBHyAuk7WwBT",
    "47e2ZxOTz5rERTdc5uETeS14kVNSlYz9VPjK8_ncjJ",
    "nb0usdC0biTYOlsP2EMclsDatWMEqg5OLGh5jfyqvtGQCZhwIkLCb4k6e3m4F6",
    "dNjIdAQbFAlJs4FpITt0eGeMQjfHtGXJfgfFdjYhr7rbDg82eQaQTqz6p7zBiI9_BjWhKu",
    "pwUr0pWqb",
    "xvn2FmsJh1JR3MY6rVMetIB10B2Nn",
    "FxxSxN6kVJZI2zgStmbq5eYdZqfBMcePNHy8cra6foJ3uBaJMoh1QWrEP5UfzsR2zg",
    "7VKgTz7rKP7PUo4e99xWbWf",
    "TyDD6OJqXvlg3idTen1y8hjL8k6FPoVaAB0n2G",
    "th428XZ3GZmiOhsBNqODah3JHtOX5hGkB",
    "IixUcAljGUsBVTXnu4yQ7AoNIJdJ1wrMTLn7OVVDC9S7h_q5Yk53YuKVLkQJk9iHbu",
    "xjEw2qz9v0GVYR7uGMeNYGL10LTxdUaX8xjbHkXePGPzYzANyZ6fE2C1gpxmP6yRjxxFFIts2_URCRt",
    "czJWB7tfC8pX7bX3lUFkDCJM8FFdyMU20t",
    "Atej1I1N5WBcxnLNfmjYZ95hcY695QxmDLDZTTr1Apaf01I3aU",
    "Dz_6wNrQGNde3pJj6OG5BsPkFXHaRXcX7V88AIF5TQE3K3pO1shGKZm33PztPYHGYItPOIkrsHBka5s1klMZF",
    "oKJUeG4y",
    "RTVR_sh2Ruquqn5ODBnjCcIXd98AC65N2Yun3E5WYBY59DjcmVYJZurzChK9_eKu9tFO8EnHEyDrCPAcaJdHpELOy",
    "MKCNr_6yg_7VZM7sTr1PlSiEg_rGNLmJBg2BHjKD_mSJlM1S0uWfcdVx",
    "SkbV5h98fgj1XKnV4wkAWEZusbSoH6kFbDITQfzzHzI16HRAXlcCLrgKms90N_Nqy5xQPPrnea2KjY",
    "JQ3X95WoYfm40aalV_MglDbzP4XHtNjUhi6L4rMlO8NQQd3oU7uRUHHL8Jd68b3dOUwH5yboPdPfc8ns6Av1YotaLYMrcbDi",
    "n3USdavpXoPzzCjx0KeFYw3gRP2E07cCq2s14YvCU5kb3D69obTkZ368P0yUAtrCMF9yg",
    "bsCaSGFYSqL4Grw6t5BHuJvxA",
    "74Dr5YVtL80EYFOK5SlKDfMvpx6a7UWluIkvUEiUTn6",
    "2eZ7JPdH8KZTuIudmtR_MWfvdhEZ",
    "TXtfUt26RxtYZ5Z9VvJfrIErPwJfdIpyW6ks",
    "IsZBebI5h8dIfYVlVmhS3pm4snci4TTSrOj03bfR8Vjf5TfjzRVafHdmxOhZmfTFbjc6mU93Vws1EJ0R6ZqETZ",
    "Nu5Scjk8TdJGjtBWXizAhdm9lTnKUjB2Fi2y7mI9rgZN9AaK3_y5bq7M2KD4CvlhB",
    "UYVmTiLXVLsnwq9a4dSn4pzQvUrUf0Wwds0XTk8rrL71PXnmVWkHDUkUok3fppFWd9Fb5l5dKPinr7tIyRg8",
    "1MW2tXVo6FJZYlgZPKQHWbLTeeP2zK",
    "8Z03wdhNRTuIHsewCGAEHvSDrfteKIXchTjvdIj9wRtaFA1EVz_sUseWzoL6HcC2bz9cVq0LwPpR9x",
    "rpbp9l0pmHhXXMlRAFUXwZ0s_vBHeHVqkHZ5UzvRElcTKnxPvO9V6SWbfRgHyHGBUJP4PYfVRkYhgn3McWkqVCd",
    "AdRSMU9MJeDa7xHTpPu2rITRLsPGeNO7PVOzmXzXwib7bbOV1TQg65KXG_O3DyIeIS9xqra",
    "GJIzz6aiWZrqdzROzMV6n0nJioH26K5W2S6hpUytBsynoMm3gTjiSqvX1al7z",
    "lPHN8zQ353gn5I7ItdB98sBY6pPgYlvhdHoHEKcHMWyCaeo3Sgu5QUilQs2a_",
    "NDrH2ipu2BflUNw2nVkg",
    "pFdJStGMWSWXjIRPXcAAfydsPDgRRNwPiNg",
    "EkZVZl6zF4pyu5vBSxXXziPsoVSXRiEmqBYYd3JH5cjQJf_f2zYNxyZNkY",
    "gkkn6FANd2kpkE5TZLDGiiLNrN3yF2eujgHwgMc57ZFjA_Jn01BJcmD7Op43_Amut42jRQUpFRwQXNU",
    "BUO6GZBo_yD9raWjZxcviDg7INsdX9jKIcEng",
    "a_WMv",
    "yAPuGW2AkxZg6oQNX6NUlBpWja7YVF7r1HI0eo1eT8P2IMnkbbzmgGiSeai3sIaMCgIhQVp3sGiUBcLCR07JrVkZ3mUg",
    "EDsI1LoH2ps8vFhOcuVeatawkLQr2FGGFEuDrwq_hW0",
    "HqqUF8Ndbb4nFRguxju4M6uqUa1C7kJk5klD7",
    "zDzEIuSvBd8083uc2_WNyrfCaDq4AMkIGt1jHLDY_aC3FAf1zP8h8xZDtfq3oYsRys1W0p17y20Pc3m",
    "wPIzIh7k2MdUcG1RpZLOiAEn3Tbcg1PGphQUm2alDbomyXO7sSZPYH",
    "uEUXTOcUuCienoZCDiw84Vwf8FY9",
    "S_fX_eGmbqrMNv7DvsvBmO2FY3hXU4uzU_PH8fuHbFad",
    "GAuVAMJ2cpCZZ7RIM59CdIefpf",
    "slvw2r_AaBapbHcsg3NQF1LECl6m1IkN3F9oNL5kAKXdgIMEdpiFakIrn1BdD5RHmP7Wce4xU2KZZV",
    "KAWkEf3ydAsEwkGQU37x3zjJjHyLRNuhHCjIh_hborRu5tgHvi8fmywygFtut",
    "YF6d",
    "_Jf9JJwI6Ip7SuCzmhD9dq0lLDVt13AEz8vTEZCdjWNeuXt2u8gx6gW_1JHdVCzyiSwXyPs6Chfj",
    "WBjyhpVdALKfDBoOAbBMXk4CQ6e9aEKpP8LY8V81p5avo446uvbhqYlycmorrNQyoNlp4S08rR3x",
    "Q6TKm6",
    "3Axjq",
    "J6bY1ssazMDIwmL7m63k8VluvbbN4BUVsE8nj",
    "IN6vxLl8gDgFlR4rxy_kQpCBXWf7kEb0UPlUl5JsNrkURr7y3t3zwe02XDGKja9NMCwDWTxTOjUVatqxZOHek1lRLZZk1Hqyj",
    "910lo7X1qzAzYBJGRPUoleuinyNtDzOUJWwhS_QfPDrJwLD2OplpmgU6BsocFmsGeOtXbQSIbrWkEu_HpyG2A",
    "042NyWkvGhHbv3Ig4Jnuw8lzsABfEuVwmxJgqplnT05dZIZXsNP1ikt8mmrdqgiCTeDgBSiB",
    "0iYtYIxE9HjJtUiOFO9S0lfRPDEgyrX8z2N9tZHYS9HrThIR",
    "pNnF5YRAfvltnieGZ6rJwsNVaaDKIHa6UYeq_C16FLHl_y",
    "4iPBO3mTyjMTus5TKBzcZfN0JrMEWD",
    "Gdz6HhwK7hXVHSVLpudViVMO",
    "Q0fcp5aI7yurAC6",
    "q9ZTUlCD6zR4oD853Yl",
    "_dSQUTPKnrE8032rN6R63ul03ZVBwM6ChJLVBxf0bdg4kSyMP3wW2cylKNT2IRt990zGKQWAo5tr8lteRas",
    "Y7JG9HxIw6UbmAs59Y7qXWzraxJ71IN63rorMyWMhFaKCejLrVzz34_drAzu46fdSnd9RdaDqXFvZTH5cdAaijpzhWJ",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 348);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
