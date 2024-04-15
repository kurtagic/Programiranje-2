
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "Snl69cdEdOYbEsoGVdLINYtMT5j2rBOrtLmns4ikzd8r5hzZVfyMc92myMUEZLvjT3EGOuBuxBLfjFyRMDD3EvTwpdtmb",
    "G6WBddVFQBtE40OBuH00SusZkRV5Mniobw4NBOWnk1bBYHJvT0H_yjr2rpAUCEuW2BQKHsuYseaO5_poN2haJ6SzAN7qO",
    "RWdHF3VNriOb_mc3VaKAw_kSJayHP4YLfrd5jjvaYbUpsoSx5xYRFgbiZ2bXQUwbzdlpMFeNaLWjCn4saYeitm_eXCgmN",
    "7jSeEqFxfVAPqaZMMzb86MxZYxQO_dlZn9VR3kbcH0j3WtiT2J2pXG6P_AMyUy7X4mQJJUDWLQKdkNQA_L1OxkaeiELVI",
    "G7sFOoL2OcIYcU2SubwOSIEpFefvg0eBBxyl1Rb5PKv60teVyra08_Tlj2_SleYfkjuXntKmM5EyMi6C3Hcmybwrs5MbT",
    "g6aB7Fwk5RtFs98qmZN2OSoWueJjBGtWqPjROmgicI2H5MBDNWPR4O_zgXAPOebSrc1qzE44viFdi79g94g5IWLIdFAY5",
    "FLUruXFHQWIodVuX6_QmKq17XVzrPv1aTaNXFjpOfJ9dNxEeMdCEG7gnrDWGApYRIRRQKCDbkThro2jE5pkUj9JeSe8FP",
    "KdQEwd8MQKpYC4veDwqmDbMmtRI2Ilr6NNqm57wVclkeX29sHsSDDlhLGMw2e889sgIvFs24XTa7de6t4DLzQe1cAOfVm",
    "Pi3xb5jdolvdw2W1AXSPSdLF04T7kh5OB5pSfqvRT_o4dcvTloImftQQpYtzRSyRLvBT0dTIfqoleSECZSYF0bcodQ4Gw",
    "8RPwROTm1UIWiS6fpNPkeuPS8142eXf8i0gdQ66T_qZE0MDU5zOfQCc2MKut46KFbRGr67JYKkNo4i1KXwbe4SYQ58Yib",
    "ZjZFckM5YHSDpLA6tmusW_MmC3gYGWklZHuofDhqRVrOx2UZaQUTZEesawaquGf4kaczUODnVaBbZKHR95Y3UCyDWLwg0",
    "PPGDiCrhkOG6ofRQgyyQrGrLzGrWPDegcj72hfMVJfr0IudJXeNtS4hzxiYUuyLjuWg032xAf4Y7V5ELDNK7AB3PWHsKb",
    "j9UAiSoNkYq4M2G4S4TMquakB4N0lRzxBvSO1GAXnE9IlJn72fUc9QQkk8ZjCK_qJr85iwX9HfGywKmiUyu8tAN5T33UC",
    "B_g_eX5u5k2mrhlALIVsrs4K_lqJ_n7ckk8PppfGsO_1ii2hOLB8d79oAg3NnPB2QjRI0QSDdookzPXEeKWUnwTEtDT7A",
    "d7N4yWNpQhnhg3hkPObAByZ4GjNM6fTYvRtJO9M8DgIyeCC5NP29al61WgHLe8G5gDDVO_43RrUiWrJhBagT3ycCkIuBA",
    "Kt8famatpCUWDV3k94ylfjRJtaGajRtzQmDbkMsorBldgFSUZ90Laj6uQ0Fe9yo676pFZ9DV2cCPR5u2s9qExXvdlfrl3",
    "FPdeb0T0kO89zmuf7U3JPZr0kVls60EB5HHfehIONhyp4MDb3Ly4uQz8RixNQqjUowQseODmDvLU27wRsKq16VDCk8bsq",
    "Nj6Jf4myGVFzsUv77Kc1wu2Cu0qJEshnvKEX1h3r8eYKjVdzRUIuemTUO_kQdV4qFiJN_hiLA9_309vBtYdtIpwqjv8T3",
    "ADQQ9waxSLdQ4ddSGw8eUGDwJSgbCCHTiAmFIjWu5LC8lNx1R0GcVJCnDLZl8sbsPXEmagt8xh1sRafEQcZ92yUOjlTlU",
    "xuhKY8vXD10wxjAstD3fFxQoO8Aeoh8MK8BKQuGVgQKLFOLS4PYa_pnmSTsYOpsjIt4zUOUTpZ4N7eJQ0W1u8kVP_I3Ro",
    "iExfOH7AKCIRrS3IKOZYcIobdQB60VX2z9PlPSEYIF1jXyIqPqtkpNB5fpPYT66MYhVmebeWoGty5Rq6WMCeHbicY8yMD",
    "1iFRBSuxB0bfBI4WHUOqGRWoPj4uFGiTbaydxfnhfAePnlLnSP5UaAKoZf6Jz8LIZzUK0bxTKT5kgSkYeuy7pex6gQ1WI",
    "FRSwN8d6Vum3Am9f0vDvXHkfEOVURAmW4L86xw45PT9wnsloPEEZSleKsqwCcAPSFQMdX9BJHvzxACZGmrrHnl7mlFLZa",
    "K9CzeAtW7jh9lnw_BZWoPxu8zULsijfi1teQG1K4VGqrhcO_OIBYsPkDVh_3cWZ4T6DLFoE0az1aMSP_ZvzzjEzwrbLiE",
    "N4yWJbRcmkpFesWNKZ1fb0_wATfsMNRqJv3JU3lvcmJ6MNJ5ps18Ysg5qYoPE4Jl0THanJwOhCwfiT0v6MIIJ4qoNtpfb",
    "x8KSj4uhpDSMLXUaTKchZ63iA3OmymGtR0WT_ooqQpeszfqFxNcW7mz7AvZ72syQNT3buuYvrOxU1YAAd6YIDoNLkV_ar",
    "XBJdCPOPX21cbMe7TBxwwSadBCZ2qdCiJNfiVh99XtkXeDsP4KSlwtUbmafkFI_I4VHRXzqiSEk4ygxLJVwKBu_HzRJog",
    "64S4WBlndSGJKsu65YTew_i893C9PACEmWHgAg5lJYiOH_IbQzZP8j8JMxg4PpA_bdA68mPbrG9C_Umkz3NGCIhHdrboJ",
    "4pWUi1LqNsmdPbcOw02zBxSRWyR3uCp_HKzfF96gZ9qW71rV13ikWbuuK6dFzLCmlKKDJafd8HajhGOAu1XcKaQa2fwun",
    "QnigEusCgu9YaRwDMbizld2C6nMOAVaCNxDHs9RQXuc4Cbcj8YLp7fkndTsMDY1L_XHBWUi8C2jr9MXqPBagkvXeHsdMK",
    "Tfo4Agz9vjz7mLy2MYfb9VOfrbsBbNv2d7hbK59vY43Vw11mjjAY1WxPCi2qtB6Y_i7w4AsSSiCJfCPzk0qkcBnnhrQp2",
    "bFEV_XJjokukVPYJU2tjN5MaY5oeTL1gkPRT1W6kQrkYIzPa6iR4p1MvaHpE7tbYkH7bNc6LNb0zw10NesvnstEsfxrvv",
    "gMRh_PQUfDvBg6ptvkGCjbtLGKyAcR2BqsrG2MIff8pqcdWt_GmwoGSmdZ81u56drALciKLi2769jSx_Ay9Ook2xgn1U4",
    "E1PDw4cSGNHtLf4NRaynLxPVC8I_NrPOgJ2jj2pqCnathiPmZEht1zq3y_ezOAZsvdkGq87CCf9yHSF1dhKqS3pvLrZvg",
    "1gxcSAQ3eDVWrBcVfYQkAbSOT0D66GT0f6jaZSj_89tWHKCRd4M6DgD2gJ8Ubft4FoblUjuox4Qa0jlMZI4jmqr0ATSuy",
    "FQfWwEzho2P7W8FW6PKzDoC4u0MRil3WW79LVLigiNemysDyHgfj9L3BTDDvrOsbY3SHvMJ5JSdi42hxZvUrXD3lftWAj",
    "Ah2gHBSanxTPo6_g4kjL7ToNReeJ2CcqChAteJXSHt6Bigxrec8uwVsvrpCyevchuvbqvDcQnTalQuniHM8SyNdKb7CZI",
    "A_15kXGZzJyVMJ8XK7k9wLg5KS_9dX25_bJ77jBo1iikbaY7Bjdbegh_SkhJi3PRXiRrXqmVcLE5netswkHY9oVBjmDVc",
    "dHXmcfblT7g1ix11uK8fXmLUkOCGxAr2qqe0zU7ady0w1u7V1DijZTutIrJOagTgVAMRefLnINKlK5m8Ira6APsn998ah",
    "kdDqNzsorCcVg2nX6uWuCELU1shXmnPhmiVPTHkKZEH6FafFCCqs9dcpuRcQo7qYk3amX4fUMzNRZTtnaDaPrzqT4Xukc",
    "bSmqxv8hecWvdzp2r24sAi2YEOtHOcwD3GhybZarMl8Isi5fRVT95vLS53QWgSuWBsON7Z7VH_GiiKrrYk9njBFQo8kn6",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 93);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
