
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "OXOG0EOeZHGwxO8n2_qAQv021GfKf2NivgBcN",
    "UXp",
    "6M67s0CL3lP2mhrTS7F5zTBELB",
    "ordg1LUjKFntOL7QmAmjXizU63134quYPVOjFc3Rr_rbX05QYJFKAGXDZJ_oWYvYFzp_",
    "3SDTw8U3_awnscdJ1KbwVCUFdVDMZYyJigexLME",
    "QDah0r6gubA8KlCXHigKqLXR7I76s77XgI4d8RpOgCxam9RWzHUiTdF2NBtz4wtOnZAyP9EHAIf",
    "Rm4CK5nBZ6mbcn6uP9VVG7a1Ycwj8Nc2WN9hV_14N",
    "RXL1IOt7XO5y",
    "HqJG5jKiKcEnT8dUyO5gFGKyiefzzRfB_IaENlLmmVzlQaPTOfwqBJTzlFgFabUfCUX_IyHA3mRCjBl17wTg",
    "6Ff_976GrOEF2EN4DVGZKm3UjfKrRGA73bB0qSrsCN8wMfvhBxHG06i9LmlxMtKzznry1",
    "Mu3P3HCWtyqt2w0EwqwbE",
    "h1qDKxOlg8b0acTypFfpqR30msdZaq_pVzqOnJIcyfu",
    "IDtu5REgx_lcb8tTeeMxWxjUa48VfAJ_2NptVFCVbpC0AzaHwKzKM3cYBmyTENCoGoAnkcbRCzARj7Ev7LHTRZb2GD",
    "n579vvXNGhd6VpR5yXWfIvrc7pkQ",
    "0Fp4oPId2SdcsIzfN16AgDDisMDf3HOY_IfkJ4VlyJrjVIyO0ijup2ppTU5e777AVrjF",
    "cvrjekwja1Xn5qEMqlPRFS95ULzV8PRuVvEYPWI85KL4NYx1hIGpLncnJKkLxfiEGQNWeenSazXPC4po757B1px7PaAK",
    "Hm7mblIGchRBZKnRxnSRkuYO1hOaWAmit",
    "3exWDVq6tL5YcmsEJ59GtcRbm6qCOHuE0NYREqeHXsBSqB8KdkZqjXbqASZsfy3CJnQDnl5DoaDOyKxgDD9Smsofr8GNRI8xC",
    "uOYfbAcpFfu3K8sYHXgNFvmvXXaTnS11VDCRZsbB0HKzE1YoINO",
    "dwV3trlH6yFwY2rkoqINKzeVedANena9ZcLHCDgoeCoh0GnlqbG_ojZ99HYw88gZKbPv26yfNfw0t1vPSXYEjBJzoj50eGcPvs79",
    "KkMBPI7T68_kiYr0N3wkH3HlP_YpjRm4KTF1OqXPQx0p6GaPpl2vDix1Tyh9nD5GSnuLdZ5J_SMCrn8Sl3Fj9x3YHJAb",
    "YyM58w44gmTuZHqICSUmLWi_J2ksOeneS2hPfhWtqWvd5R8FNf3gPwrOnThlSsknU6LsXKU8Hs3JLAfgnwdWMMX_9cLSRpM",
    "QFNpgC3kIfdD8X59u8QC3HT2opcXcJaKCVZanGcbQhLVAcPVfsN7n18Ck0sP0tboMUyOO0kWVit20eB3IolB3Vx7BXefL3HORZ",
    "iU55pmviTi66KgK_yzQvSI84uXpxs",
    "C6_BkbSwFbPvH9i2aXTIPGtTPKMLdibx68HyOs71YDJvo6fxaQkgFCCs9Dm5P8msh4E",
    "iTbPSFCyYZ6FpJjavh_6flO1u_i4qU0ntBFkYlMT_DU6MopgIBnbQ1pWamRahwntNI1",
    "PrxI11mL_ZfaSOfJrTnWDWh6aso9oSFwHZCtAJagijJZLaffp4bXnmf4M11zxsX7JaooWAnI4FkrPEtoMs",
    "gkMg7KeRyfeG2Gz7sLnKloLA71vocZYt4cXgZf1gubZU8NlOXMVv_2bdGWv8k5xHIpiydifxgNRGxYGH0JaRD91LPieugb",
    "yJUztEJwu9gnQwTva69Cs64fJdst7Ihyu0xLwSFa290mVIIIiErEJ9iuzTCZcZoUb_ySEbh0wapHzP",
    "0Ezfw8FBzB_F6nvGE1Nl_BxmU04NlRxMei85IbNdt5xjmI26BHAy5FYc9BhMWrXz5Ru8CJQGlxFhjbeyOLB9HR1R0xn1X",
    "6fw3oDuChdd2PClKY6KLVCyOHAARVCHfS2x6dsW21_XLTmemdZmd_Cj00M77R",
    "jz8VUlbTPL5hx03r9QEvjeknxeES2KDHmNNvgxbB_HFnZfEs1RgGHVn0ZVcj0Vw2f",
    "AKb_WGmMKaCcvWwA2BVX8mE501eI3kabAmNASJV9fbBTwLvAuH4QEhZHcw0SflZclQHQU",
    "lqiCwvzGnnmfmMBsfTE8byNO5fYetM",
    "fPL87vlJ0l_VSflGJusyi3QiGwjkVTeUJYaJQvHdlTtbMhbZyByMR7v7jeFWSCW4iYeIji8LcMm4P_YvAU6gl1MZJIuuvvAyqHhg",
    "F20aH7rxcJ69WQqtacxlnWgEhTfH46HgsrrCkLx3wrqHz5m5KB1hGC8GdP_3kAXYwU7MEsa7frLTRw1N8",
    "BYzBm7mhiI0CcSi_4iOOdEd53C7XqqdT_Cdk8a0C9gXv3FgygvPypgJm",
    "REflMjkoQqheCprTU_gy_V2MlJ_RuU73wtCUOGvZ3eclXCgbhb",
    "phVb3duSAS7okKMsuACYz",
    "EZQvyfIGJK45ITHGhqPPMt7Ay5",
    "dhW7exwSYe9XJtngddYPVTmo1vsy3tgdBEJZN1wvCy",
    "rzdtJQgfWc2g4hhx",
    "1vqp6nuuNZSBqCX5bIIyQ_U_VtjP7UaEOyJyQUSZhWQMTLOIoWEn",
    "OJ4",
    "wt8S49JRjdwaXz3eEFwquED",
    "HEre1Dia4rJ2DkHff86sudM7G5DicJWdf2DM2E8IdtQKoD7g6zmmElMY20A7gx5M0iZCp6DO1gdLHMgWhAKocOAJNis",
    "nYdgDMz6s0uo3tHqGtokb9YNzZcBWzDAeLB5ZTMZJQzG_wfJ8IE4apnHrIbtKaolhahrcOD",
    "CkLlYJWYTFIA",
    "MWX6QT4gOyMhp_NjGQO0iJyQPzNd",
    "GL8Ukw6Q4xOzes50JmowAKWPFdp_",
    "5aOIO7OQkL0UWEpJe8YYZY3ZWqhspF98wMho01_prKX_oSVuKhh5aNRY1LeBFwPMYa8Xh0KG5GHengoUWsWubu862Xb4127GA",
    "M19ibmxJqK9sBZX8G91Lj18oSBP",
    "eb98MrJmuUQc8",
    "0MB_GQQXxZp8mkpkFkvXozaFzK9ycvV0upmK7FfOFkejQcX7p",
    "Rx3bbbF6GP5eSkyfZSCO5UfTLB1ltlYOOBWvD8Es7rfTY6hs7SVNGRaH6yVbVxhOeFt7y4WWpLKGMzRjvDCyPwaxS63tFF42c76",
    "gsGjiWHd0f_VhGwr2n0CZthlTDR5FLJgwhPoOrS34PD9_0vXr18F8PzEbMCy3REL42pCv2CftgH1qSbc0INrZsF",
    "oQFiCFHsXypAL3PeAm4e1",
    "vg2WGIVPY1IfO4GPiH0vRKEi1waOHxApaAk6_WP",
    "9yN1m7m4auWSnGO86VRNzHRfwB2",
    "DALbAakndo",
    "Mf",
    "uTepSSOH9d274mm66J5EOgHY_pu5",
    "DjfR6xYf",
    "uuNhhwqJrtioMCzhLLeVJsnfmeFIgQrTiA5rVxA_ohhJUbpe3twYIK0ku62FBDppS2",
    "dK9pNntuXyAD1lLiIjTIdBFLxpA2NbvpS3",
    "bzRqi6Uv71mUofQN0q16ZeCxdbS36wkFPcl8Ia",
    "wN5MvDnOwdozow1iTMYxiFP",
    "NIwktek7hLJ8chlUpHGMQUHVO2c3aIg0zZmgUsIXVsVoD3XJ0Td6XVH6LGlEzKIOP5LMsJ_SD06bs2QVvP",
    "3MxU61giQQeBmR8pxsIYnEDw1Kqc",
    "L4npQxHz2HMoJwaCrsjkbUPmA0DZTzMB1eUM",
    "EENvoC65uepJo9w73TSUo4PULLSURu_P6ezg0mImlXuh7GlB6RCIJVCCH7kYjIuk87GcBkDEZFFou_vszQl7Tt_Z59lcJO8kQov",
    "KdjL2OxIinyHAgSVg6hMjvEKLnuLfXqShkvgbroHP6m7TVRjSmP9JKQ9H1O2z",
    "j2TNfop_FzCvZX3lAVi30o",
    "qwyILza1FocI1FaNQJAElJ9ugtr756UE9K05cxTpyxIMWahTvdTfUrHUHpXwi7lRPY9lZyhjXFWGKj7ElU6ybyXpVdgm1E",
    "fjxHALsoHJuhyOmrX8zrRbphKawGY9lES_LPh1HzSdQrdTijdXTPhBeC3HekgPnc3TczyS_vy4B1JFkd2KwBfO6jJzxvmFoJ3U",
    "RvRhxW2aNM5jPGrmPMgjbEsY8lSZocEThS2tmaUz7IBKvPXIjcdDxbRmJXxCCt0CdVv9JMBF0",
    "R090Cp_TU1Qs53MKPxORmWzs9XBoxOFm0P",
    "0Smwf_ZZZxq_pGW1Sx5MwKImWEyZO5UQZvRlVl4z9av8Al6XOlL1RV9HJONaUnr2RQet0Ma",
    "nquIDQ0z2IXW1W1XSjWD5dLED4cc9QLSQjwMLjm07iXS8MfNu3Iv4s",
    "aw2fxM43XwZH13mZw0urzWGHfQTRckNx0CrUmE18b_OgFOH",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 538);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
