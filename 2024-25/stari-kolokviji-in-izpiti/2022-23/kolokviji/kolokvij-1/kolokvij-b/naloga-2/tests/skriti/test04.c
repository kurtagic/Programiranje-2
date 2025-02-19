
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "Yukq7FJ20p02ENsTPa08vdSR3tg72eH5iZmv1fVZmz7E504sHWIvTFjqSzeIArSTztFuzFLHYfj6r",
    "mO4gkqPHh3OWVofXW7OYvx_KcnLkRHWIi8g0ZGzuMOJa3QL2O6u4EOFG8VOsqtGnkcICyG0nJHzBz",
    "FcmWe4eNB8mroV_baQ5JFz6VM5zULgeO1Bhk3BE3tv_3rsWCsJZvwzsl8lEr7oYUSG8pizQvg09pf",
    "HKyibtWw0Rp5P7TlKHeiQ6itxX1aeJ7TkkHBFbRvdSNrjujBeManEtP2CI4OaKbt4_Ex6Xgqlrv0I",
    "DlEMsNhRHTxuWIYO0x9eADb1bqZQ09t37pcSqIpJyraQXTFCanH_0HIGUutlJKxMquwc_Z3kpQnIb",
    "d1BLP5lwcOlShORI9Z9m2BJ3_gIw1BGV3DdYGORpfTsRQygO2IBiJY3iRmkD0QF7cvQQrzCkPg2DA",
    "706qV5vDMK1Vw9XfVKWcruAiXet2ODuA654mootnX5UqmoMpHdrj7zcW6dE0MTOFkWfpd4yTOUUIs",
    "MIpWLIv3I74FXXE0R6dUTE7VAdAsGfFiwT1GNsnXR5d5UFN1CHYiMSm3HZ5EtbCD5q6bAeYCx7H3z",
    "UVS2oK19OUVaCg0xLw0puok0Hmt7c4lJacntfJj3jDgLdTYE_ZZUmBtu2MZhRW8p1pghq49Ivl0iy",
    "Yhq6VLsQeJ1Io5A0MkKWyh9hR35L7whjYHAZ2T1Wt3ja3tBELHg1F3F3RwlICRpWQGQEB_oQWRUYr",
    "1KVGea1zy4wXqTMeSybs7Zs646ROt1vRLka0rmq5WGyxeQaMfRpasjXa8iPyTvzuGb5wA7WNfzyRu",
    "FTT8NNuj0SBLldJPyPrAJSck4dpnC7D1WbnvgPp9ViYhVk1GR2fI0LySeqAfPY4RhZpLIc8EW_2xU",
    "E7vjILgZ9k2e4XlcFSuIQ2B2fuLmuQH3LzRZ5c4b1JhNdlysc2X3pOjVS2GgpkuY8rqIJdyups5OW",
    "rRuE5hJ08FdwkhhCC_4JDsrhLvsyD7Ip0WthfOYnces4TiDlHMiRizBKUl0kWfo9JicTPNn7Mf6oJ",
    "5zaWnT9h6AJxK8gouaJxAh5_kuk0ZhZqITb93XIkqesnWvPYhmMxLWocE_PtgRSbFCqA38Bx7nnKs",
    "GQ9ihy3cLFaJvBZnKA6ZGmJQ44DEHmOuD18vq2sxM8svQCNvlLgXsJdjhSaxmkQFgGbKXz8VX7IyM",
    "Ge_Fzapja4Gitz5zFTflxB3ufZnpT1Ut4enn6hoZ_91IWAylTqgY45eqGIO7hV4RiIMMGMosFMFv7",
    "Cl3czhM1P7d57YyakZybZ3Ghqm1PCTbZbVK9DRdhX9yQ6Np0SoPwXmcZGLsghndLacfRkkcvXuZYJ",
    "uz8kGQF2znHVETsERq8KUpihUUHJC9hLAYA55OzbCNPBZ_JpzPkSgev8EI3j2dMbX7OKwG4vB706x",
    "s7oszM8EuK2qoeMnkmb19BmpLyyAAFOWfmVf1sl8XOyn0fNE92LxItW6T_Fh2DoQX9Xr3xy7Melvr",
    "cpqXIX29cz55CTv6I2j9_DRrZSxCRiyxzw4WxOYRL7UL4LxLa5MJCseVfgKEee2rxaqLq8gtlNRWk",
    "X1p3peZq7YiXfdZb5rLARowFO2bnyevvqko32UmxYanEsszNmECVJcwn78xgXkwpdMPrCsjoepx1J",
    "MbAhcJgljAlbgSLj69_8c8rp8CaPhSONM46gyHQf0ZMDVyr_IMvu5ST1w4jsIMV1JZDRwTNY54ULi",
    "Ll_tG3Mi4MEVFiL3OlG6Gq0UiUI9vKtn78CY6Z_vFeY7hqwMWO4kgTw0lpBN5trII0nBfseaBhCSF",
    "MwMDA7TfbQAjN8ueE8IvJg5BA9gUV9zDBqHbDxQr6JL5cajRXo6_p4CZdN_DFoWbEm3lqoCVKQO2O",
    "LHkZgqvYAJchHKX_L1hDamIl4ETUMj1cV3_XYq6OfsJN6jAlAJwYD1039EOyH5OYXSIkYRINPgGeL",
    "lFH_Cp8D1kMvXOK82CdNZDne0QclkFeAAG4k7Bi6gt2lowF5K4LjSLlBsKT_7BlxG0ko_w2gUXD6G",
    "XlIhLQyROHjgSTh7r36YiC16xqXtwtNHG0x_Y1RtvGR6RzQGyW2yPptnz4M9awPC2Vg8Q123_Fuwk",
    "lOrv9lcfL686MAXy_pbvcR6WO0Enxufyua1nUyGpV6OB5yJ9P_PenDk3mQESHv0jXxQsGgDAYmZIv",
    "gzTQMRSOXlHrhjjNc0RU0_ms_AEm9j8vwYmndjGKDAj6x6qzZPBg2Lf1_EqXGsAEn9mUo3ojMcZkF",
    "GUdKHXiBneEZ9YnTvJCNoZ2vnu3a07DtmjMOsrml7vNvGzTszlJ5zHM1N9_GedplKuNmMjxtyUO2G",
    "JkiyUAvx9MHB_qNUfOD8heR_pcpPZiLIJCCG6wMZWh5yFLVEhRPPPQ4cMP__R9pcYwREteNXoC7S9",
    "GmUhHD0rm733BEU7l8OrBNi0TasBld2kJMm0qpqA3taGcMqzRUFkjKgGtVTWgac1dLvbzqQiWlHEc",
    "rblhXBVDtnuOgUo0c9sL_RXOpyBQ4FFLd4pYO7iO_gUezQ50n2LleRON2mW4MexVNsOTj3wZuBntl",
    "sIqhZPyUcRvoaGQsZDEXFo9UTnS6gESSJIpIchg1IyfsIeyQINNAttPZMBgn4C5othgNzLh8zGsrx",
    "Mi9P8fW3jXD4cuNtL2TR7qramM7qCwaBsOfSQIe_trAjurTbnBzRoWgGc2cnbKnvQxvsldS37lisz",
    "q3qZ4083460T3bXkuKw2FHnrVS2XB2MilGLrneW5WQIYobUekjky1E_l4jMkz4KRp2qRevc0OxYN3",
    "AxolY2weUyEiwclUhpil571_le7bhaodOEBW_K6riOd5X_zefYOk6ZY3GpyXmzgCO8ZWHCgis8qgZ",
    "QUVXxa7SWfctIAPRUJHnJb7fPAUHLrXmP1IwC4dqO2HfXcTcumJbbK78esCFwZe_QF50ZrHZGxgx0",
    "or1Z0G1RnYu1SLq5yLM5yYk0v8opIgbPcu5G78Z6XwD7zwSYaV_FZ4mKWDtKQ0N_P4baiKoMFurwM",
    "ddyIAoWheHZcag7aYkXZC_dQSHR8dSIxvxdHThrme_iDFwjOd3xhWNAMwafkFLDeVrD_CXGFotPki",
    "w0YCv4Jt06mt73GXCmC49xM1EDSMSAWtCCG6youMb0C5Klvbh77uzK4YnwLSIAtpbhOl9sSvJLDeV",
    "_Fgul08K2SFg0OGh1cr60Njpxp737auY2IPljooXa2WEI6mRJd1wpmV1tkexWN52d3mhPZgKmJQaw",
    "C4sKj0R1Ps04bPtY32lNQsqlhSbazJ2E7EHT6TrauzUHJkvIL2AuBMp1CUpYjadzrjZeq6uiQnMT9",
    "uMgNOw8PpPCr_ZTccCMZeXUM5TfJB_VTSUxGZtOORfQaBOoYdXzaBxmh0vON55yD_R7vqBr8wHXxy",
    "kKxudSp45d7ttLbEWfrfYc8cKoJplzV0ll51MVWQnux8CX_tuct6la6XH7nUep2uo_jnbE4_3naGU",
    "PdQIC5dLoqmx0ba3vfZvc8YuPvQoFu6aQ_Qq6wGDkO7pfiKDkirDww1gpY0ioUYrm3vcuN_qIgLeH",
    "zW0jw_zVfNOARbrzsKR3zCEFQ92IuJKU8kZy95XD30D_bzG0G7SbH8LdI_Pt81fLN6ujykNSu5baM",
    "nCegaG8G95CbI_seBr5XQ_RxN6wRAZVgrCafpwfWoS6pHXdUlwpHAeYsJJt5CNk8ineVasgqyrBTt",
    "AiXhROzXnWoG1QNOSivxxWPuJ8JcxCYJwRTKrItaagDvvz_6bdxdRhadI6vUo88PHtSal1JRPGs3h",
    "gkIL04Mez2zYxfagW8dwV9rDbvTR3yqeCJc7J5RuO1cV_cbZpCjNqdGpMe9Ooby6tpecK9ybjaOvS",
    "u58n1qkoAHhFJMyfDzNzXeyO5KUbjs0t7zSaC3Q3rcjC_yhJgYjgEWtbg_8AgF_rgztlLtEqCsXfz",
    "oiVjV6ZKw41FL_Achrcb68DPhAgXJ1v94BZYMD7WelivDL7EhXdhrcy2b68pmR_dc5_8uKqjIDXpm",
    "hD_Rx1UAb2tzd8H7Bu8fu2WOUqtMUR8zPyMeCQNzOAT1gzxXBULwz6nr2q1zl7gT2ijgHjVJF4vBV",
    "iBqCrGZl_BE_lyPheWB4kp5I2HgvbGDWEUhwjWjNktxh_DzXzGjOvlnHDxH92wbQ_uPKEBzQVrkBe",
    "U66mvoiPebVPXdAJT4UbMKHpTBLi014oF_Pm2I2Cs6TIKIoBIVSWZgxxm7CTGRJa9h0L6CjjRMHrg",
    "jDHzyoB9TE3oBHiBnWnJ7veTdgq2K1sPir_9I7qytqSr1lvtAuPMIdyASOSf2UunSbXunXfm7QW8f",
    "TYDAylc0G9p0usX5tFGLY_PyZlNiz6qqkKRTmxub0jPjQfNDbfKsmpJIAU588ObkDZ2ADDZVGD6oT",
    "NYXRmAUi60KksYr3Oq5g163ISPi_IK_A0SMu3VWJMGdcjYbPbhuLnbu8iVmO_2umVBYx2DtW4BdMg",
    "Az6DYLuYYdn7gLGhrM_y3Jq57hnLWDQ1CNlaHCCG2fOLEADzDNT87fZofrInHtODq19b4jhi9dCFV",
    "WCDKkXoLfVyapA5NHrZrSWd8mpGtw_CtDalO3yUHSyK83sSXML_XpzHPTJY3hSuid3YYRx1wB3xk6",
    "9W0nsCrCseSynSAN3v4XzCAvLSvVJPt85xmPGFqYViqd4AADKERkv_7W3q5n2oPcsU8xGzdVxTGQ6",
    "Q69PJgjPti0I8hQ5BrHLzN8pjOIe5bUJv9nUGxBwuLQkHNwOvRMKwj7XwJBEfL1rFm64wSkQ03dPP",
    "aW0TclSzYE5A00qKARyODnzulNxog3XfQdgdt0jOdDIsqCtMZKKOz4GNCcHAEfiwNg577LdpCf3tE",
    "PUKF3UzlxIbvmLckuyUBPIMDFNN7tvGbzlOQk7HF8ZKBjw9i7pD6agHR5WMCrd8UzuPsGULABqAfp",
    "l_UClaRYLFEsZ8ghTfumM7DViCtf8n1djCNH7s1W5dafetLixQk03OJhTmTVJgq72GiYlP7rxVlY_",
    "r8Al65nPRNuaWh93XoSlyyd3AamcjTTXffrXjRK_sfta_Dg8DFlA3WQccpTxEZ_A7i1AvlE83BoqR",
    "Z9Z9YZdSCplLkPeF0ClFmbPR10sXCjZw0VJqpiUUmmpAHA9M92eH_asS4fBRcIxQbRwRf5UovGbZh",
    "blnuo6ScG0vqo066yMvNDclUP9YxsuZw_r8j3CA0Rrb65j4A8ech0D_WH1wXBEP5G3klJskRJovyU",
    "FsAwGZQ30_5Thefk3rB0ZcUDGdxm1gUCEp2YX0_SXWJiS1aPoPw3FjNSYcqNqOye5GKaaEzNoaYUY",
    "HAItksJTTwhZ2vzQWwTZSuBSE5Zl0tnk7DTfs4UMMh3BiIZajuRLZtJkhV7IUEvQeggUKoaL3e3B2",
    "7g4rA4uoKGZ3fK5Wm67mSsdrL3njSbspzC6FCOVYgSKv5Jdcc0EgMaEBCfD_wsMyXAfA_tFRsemlh",
    "79HTTSf2gbKu_JeecokAR2_kMojmyKya27l6GUwcNBxcuVLrwkFoibpdkpys0eHZBd5GefhxTYeBS",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 77);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
